#include "pch-il2cpp.h"
#include "MapTeleport.h"

#include <cheat/events.h>
#include <cheat/game/EntityManager.h>
#include <cheat/game/util.h>
#include <helpers.h>

namespace cheat::feature
{
    bool isNeedAntiDragBack;

    MapTeleport::MapTeleport() :
        Feature(), NFP(f_Enabled, "MapTeleport", "Map Teleport", false), NF(f_DetectHeight, "MapTeleport", true),
        NF(f_UseTransPosition, "MapTeleport", false), NF(f_DefaultHeight, "MapTeleport", 300.0f),
        NF(f_Key, "MapTeleport", Hotkey('T'))
    {
        HookManager::install(app::MoleMole_BaseEntity_SetAbsolutePosition,
            MoleMole_BaseEntity_SetAbsolutePosition_Hook);

        events::GameUpdateEvent += MY_METHOD_HANDLER(MapTeleport::OnGameUpdate);
    }

    const FeatureGUIInfo &MapTeleport::GetGUIInfo() const
    {
        TRANSLATED_GROUP_INFO("Map Teleport", "Teleport");
        return info;
    }

    void MapTeleport::DrawMain()
    {
        ConfigWidget(_TR("Enabled"), f_Enabled,
            _TR("Enable teleport-to-mark functionality.\n"
                "Usage: \n"
                "\t1. Open map.\n"
                "\t2. Hold [Teleport Key] and click with the LMB anywhere in the map.\n"
                "\tDone. You have been teleported to selected location.\n"
                "Teleport might glitch if teleporting to an extremely high location. \n"
                "Adjust Override Height accordingly to help avoid."));

        ImGui::SameLine();
        ConfigWidget(_TR("Use transport position"), f_UseTransPosition,
            _TR("Use system default transport position instead of mark absolute position when teleport to "
                "building and transport mark."));

        if (!f_Enabled->enabled())
            ImGui::BeginDisabled();

        ConfigWidget(_TR("Override Height (m)"), f_DefaultHeight, 1.0F, 200.0F, 800.0F,
            _TR("If teleport cannot get ground height of target location,\nit will teleport you to the height "
                "specified here.\n"
                "It is recommended to have this value to be at least as high as a mountain.\nOtherwise, you "
                "may fall through the ground."));

        ConfigWidget(_TR("Teleport Key"), f_Key, true, _TR("Key to hold down before clicking on target location."));

        if (!f_Enabled->enabled())
            ImGui::EndDisabled();
    }

    MapTeleport &MapTeleport::GetInstance()
    {
        static MapTeleport instance;
        return instance;
    }

    // Hook for game manager needs for starting teleport in game update thread.
    // Because, when we use Teleport call in non game thread (imgui update thread for example)
    // the game just skip this call, and only with second call you start teleporting,
    // but to prev selected location.
    void MapTeleport::OnGameUpdate()
    {
        /*if (taskInfo.waitingThread)
        {
            taskInfo.waitingThread = false;
            auto someSingleton = GET_SINGLETON(MoleMole_LoadingManager);
        }*/
    }

    // Finding nearest waypoint to position, and request teleport to it.
    // After, in teleport events, change waypoint position to target position.
    void MapTeleport::TeleportTo(app::Vector3 position, bool needHeightCalc, uint32_t sceneId)
    {
        LOG_DEBUG("Stage 0. Target location at %s", il2cppi_to_string(position).c_str());

        auto avatarPosition = app::ActorUtils_GetAvatarPos(nullptr);
        auto nearestWaypoint = game::FindNearestWaypoint(position, sceneId);

        if (nearestWaypoint.data == nullptr)
        {
            LOG_ERROR("Stage 0. Failed to find the nearest unlocked waypoint. Maybe you haven't unlocked anyone or the "
                "scene has no waypoints.");
            return;
        }
        else
        {
            float dist = app::Vector3_Distance(position, nearestWaypoint.position, nullptr);
            LOG_DEBUG("Stage 0. Found nearest waypoint { sceneId: %d; waypointId: %d } with distance %fm.",
                nearestWaypoint.sceneId, nearestWaypoint.waypointId, dist);
        }
        taskInfo = {true, needHeightCalc, 3, position, nearestWaypoint.sceneId, nearestWaypoint.waypointId, false};
    }

    static bool ScreenToMapPosition(app::InLevelMapPageContext *context, app::Vector2 screenPos,
        app::Vector2 *outMapPos)
    {
        //auto mapBackground = app::MonoInLevelMapPage_get_mapBackground(context->fields._pageMono, nullptr);
        //if (!mapBackground)
        //    return false;

        //auto uimanager = GET_SINGLETON(MoleMole_UIManager);
        //if (uimanager == nullptr)
        //    return false;

        //auto screenCamera = uimanager->fields._uiCamera;
        //if (screenCamera == nullptr)
        //    return false;

        //bool result = app::RectTransformUtility_ScreenPointToLocalPointInRectangle(mapBackground, screenPos,
        //    screenCamera, outMapPos, nullptr);
        //if (!result)
        //    return false;

        //auto mapRect = app::MonoInLevelMapPage_get_mapRect(context->fields._pageMono, nullptr);
        //auto mapViewRect = context->fields._mapViewRect;

        //// Map rect pos to map view rect pos
        //outMapPos->x = (outMapPos->x - mapRect.m_XMin) / mapRect.m_Width;
        //outMapPos->x = (outMapPos->x * mapViewRect.m_Width) + mapViewRect.m_XMin;

        //outMapPos->y = (outMapPos->y - mapRect.m_YMin) / mapRect.m_Height;
        //outMapPos->y = (outMapPos->y * mapViewRect.m_Height) + mapViewRect.m_YMin;

        return true;
    }

    void MapTeleport::TeleportTo(app::Vector2 mapPosition)
    {
        /*auto worldPosition = app::Miscs_GenWorldPos(mapPosition, nullptr);

        auto relativePos = app::WorldShiftManager_GetRelativePosition(worldPosition, nullptr);
        auto groundHeight = app::Miscs_CalcCurrentGroundHeight(relativePos.x, relativePos.z, nullptr);
        auto mapManager = GET_SINGLETON(MoleMole_MapManager);

        TeleportTo({worldPosition.x, groundHeight > 0 ? groundHeight + 5 : f_DefaultHeight, worldPosition.z}, true,
            mapManager ? mapManager->fields.mapSceneID : game::GetCurrentMapSceneID());*/
    }

    // Calling teleport if map clicked.
    // This event invokes only when free space of map clicked,
    // if clicked mark, invokes InLevelMapPageContext_OnMarkClicked_Hook.
    void MapTeleport::InLevelMapPageContext_OnMapClicked_Hook(app::InLevelMapPageContext *__this,
        app::Vector2 screenPos, MethodInfo *method)
    {
        MapTeleport &mapTeleport = GetInstance();

        if (!mapTeleport.f_Enabled->enabled() || !mapTeleport.f_Key.value().IsPressed())
            return CALL_ORIGIN(InLevelMapPageContext_OnMapClicked_Hook, __this, screenPos, method);

        app::Vector2 mapPosition{};
        bool mapPosResult = ScreenToMapPosition(__this, screenPos, &mapPosition);
        if (!mapPosResult)
            return;

        mapTeleport.TeleportTo(mapPosition);
    }

    // Calling teleport if map marks clicked.
    void MapTeleport::InLevelMapPageContext_OnMarkClicked_Hook(app::InLevelMapPageContext *__this,
        app::MonoMapMark *mark, MethodInfo *method)
    {
        /*MapTeleport &mapTeleport = GetInstance();
        if (!mapTeleport.f_Enabled->enabled() || !mapTeleport.f_Key.value().IsPressed())
            return CALL_ORIGIN(InLevelMapPageContext_OnMarkClicked_Hook, __this, mark, method);
        if (mark->fields._markType == app::MoleMole_Config_MarkType__Enum::TransPoint ||
            mark->fields._markType == app::MoleMole_Config_MarkType__Enum::ScenePoint)
        {
            auto mapManager = GET_SINGLETON(MoleMole_MapManager);
            uint32_t scenceId = 0;

            if (mapManager != nullptr)
                scenceId = mapManager->fields.mapSceneID;
            auto waypoint = game::GetWaypointPosition(scenceId, mark->fields._identifier);
            auto worldPosition = app::Miscs_GenWorldPos(mark->fields._levelMapPos, nullptr);
            if (!mapTeleport.f_UseTransPosition)
            {
                waypoint.x = worldPosition.x;
                waypoint.z = worldPosition.z;
            }
            waypoint.y += 5;
            mapTeleport.TeleportTo(waypoint, false, scenceId);
        }
        else
        {
            mapTeleport.TeleportTo(mark->fields._levelMapPos);
        }*/
    }

    // Checking is teleport is far (>60m), if it isn't we clear stage.
    bool MapTeleport::IsNeedTransByServer(bool originResult, app::Vector3 &position)
    {
        if (taskInfo.currentStage != 3)
            return originResult;

        auto &entityManager = game::EntityManager::instance();
        taskInfo.needServerTrans = true;

        if (taskInfo.needServerTrans)
            LOG_DEBUG("Stage 1. Distance is more than 60m. Performing server tp.");
        else
            LOG_DEBUG("Stage 1. Distance is less than 60m. Performing fast tp.");

        taskInfo.currentStage--;
        return taskInfo.needServerTrans;
    }

    // After server responded, it will give us the waypoint target location to load.
    // Change it to teleport location.
    void MapTeleport::OnPerformPlayerTransmit(app::Vector3 &position)
    {
        if (taskInfo.currentStage == 2)
        {
            LOG_DEBUG("Stage 2. Changing loading location.");
            position = taskInfo.targetPosition;
            taskInfo.currentStage--;
        }
    }

    void MapTeleport::CalculateHeight(app::Vector3 originPos, app::Vector3 &position)
    {
        auto relativePos = app::WorldShiftManager_GetRelativePosition(position, nullptr);
        float groundHeight;
        switch (taskInfo.sceneId)
        {
            // Underground mines has tunnel structure, so we need to calculate height from waypoint height to prevent tp
            // above world.
        case 6: // Underground mines scene id, if it was changed, please create issue
            groundHeight =
                app::Miscs_CalcCurrentGroundHeight_1(relativePos.x, relativePos.z, originPos.y, 100,
                    app::Miscs_GetSceneGroundLayerMask(nullptr), nullptr);
            break;
        default:
            groundHeight = app::Miscs_CalcCurrentGroundWaterHeight(relativePos.x, relativePos.z, nullptr);
            break;
        }
        if (groundHeight > 0 && position.y != groundHeight)
        {
            position.y = groundHeight + 8;
            LOG_DEBUG("Changing height to %f", position.y);
        }
    }

    // Last event in teleportation is avatar teleport, we just change avatar position from
    // waypoint location to teleport location. And also recalculate ground position if it needed.
    void MapTeleport::OnSetAvatarPosition(app::Vector3 &position)
    {
        if (taskInfo.currentStage == 1)
        {
            app::Vector3 originPosition = position;
            position = taskInfo.targetPosition;
            LOG_DEBUG("Stage 3. Changing avatar entity position.");

            if (taskInfo.needHeightCalculation)
            {
                CalculateHeight(originPosition, position);
            }
            LOG_DEBUG("Finish.  Teleport to mark finished.");
            taskInfo.currentStage--;
        }
        else if (taskInfo.currentStage == 2 && !taskInfo.needServerTrans)
        {
            app::Vector3 originPosition = position;
            position = taskInfo.targetPosition;
            LOG_DEBUG("Stage 2. Changing avatar entity position.");

            if (taskInfo.needHeightCalculation)
            {
                CalculateHeight(originPosition, position);
            }
            LOG_DEBUG("Finish.  Teleport to mark finished.");
            taskInfo.currentStage = 0;
        }
    }

    bool MapTeleport::LoadingManager_NeedTransByServer_Hook(app::MoleMole_LoadingManager *__this, uint32_t sceneId,
        app::Vector3 position, MethodInfo *method)
    {
        auto result = CALL_ORIGIN(LoadingManager_NeedTransByServer_Hook, __this, sceneId, position, method);

        auto &mapTeleport = GetInstance();
        return mapTeleport.IsNeedTransByServer(result, position);
    }

    void MapTeleport::MoleMole_BaseEntity_SetAbsolutePosition_Hook(app::BaseEntity *__this, app::Vector3 position,
        bool someBool, MethodInfo *method)
    {
        auto &manager = game::EntityManager::instance();
        if (manager.avatar()->raw() == __this)
        {
            MapTeleport &mapTeleport = MapTeleport::GetInstance();
            mapTeleport.OnSetAvatarPosition(position);
        }
        CALL_ORIGIN(MoleMole_BaseEntity_SetAbsolutePosition_Hook, __this, position, someBool, method);
    }

    void MapTeleport::MoleMole_LoadingManager_OnPlayerEnterSceneNotify_Hook(app::MoleMole_LoadingManager *__this,
        app::Proto_PlayerEnterSceneNotify *notify,
        MethodInfo *method)
    {
        MapTeleport &mapTeleport = MapTeleport::GetInstance();

        auto &pos = notify->fields.pos_;
        app::Vector3 tmpPos{pos->fields.x_, pos->fields.y_, pos->fields.z_};
        mapTeleport.OnPerformPlayerTransmit(tmpPos);
        pos->fields.x_ = tmpPos.x;
        pos->fields.y_ = tmpPos.y;
        pos->fields.z_ = tmpPos.z;

        CALL_ORIGIN(MoleMole_LoadingManager_OnPlayerEnterSceneNotify_Hook, __this, notify, method);
    }

} // namespace cheat::feature

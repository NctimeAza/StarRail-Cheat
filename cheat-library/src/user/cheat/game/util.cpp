#include <pch-il2cpp.h>
#include "util.h"

#include <helpers.h>
#include "EntityManager.h"

namespace cheat::game
{
	std::vector<WaypointInfo> GetUnlockedWaypoints(uint32_t targetSceneId)
	{
		return {};
	}

	// Finding nearest unlocked waypoint to the position
	WaypointInfo FindNearestWaypoint(app::Vector3& position, uint32_t targetSceneId)
	{
		float minDistance = -1;
		WaypointInfo result{};
		for (const auto& info : GetUnlockedWaypoints(targetSceneId)) {
			float distance = app::Vector3_Distance(position, info.position, nullptr);
			if (minDistance < 0 || distance < minDistance)
			{
				minDistance = distance;
				result = info;
			}
		}
		return result;
	}

	app::Vector3 GetWaypointPosition(uint32_t targetSceneId, uint32_t targetWaypointId)
	{
		return {};
	}

	bool IsWaypointTeleportable(app::ConfigScenePoint* waypointConfig)
	{
		if (!waypointConfig)
			return false;
		auto get_pointType = (app::RealScenePointType__Enum(*)(app::ConfigScenePoint*, MethodInfo*))waypointConfig->klass->vtable.get_pointType.methodPtr;
		auto get_pointType_MethodInfo = (MethodInfo*)waypointConfig->klass->vtable.get_pointType.method;
		auto pointType = get_pointType(waypointConfig, get_pointType_MethodInfo);
		return pointType != app::RealScenePointType__Enum::VehicleSummonPoint && pointType != app::RealScenePointType__Enum::SceneBuildingPoint;
	}

	uint32_t GetCurrentPlayerSceneID()
	{
		return 0;
	}

	uint32_t GetCurrentMapSceneID()
	{
		return 0;
	}

	app::GadgetEntity* GetGadget(uint32_t runtimeID)
	{
		auto& manager = EntityManager::instance();
		return GetGadget(manager.entity(runtimeID));
	}

	app::GadgetEntity* GetGadget(app::BaseEntity* entity)
	{
		if (entity == nullptr)
			return nullptr;

		auto ent = Entity(entity);
		if (!ent.isGadget())
			return nullptr;

		return reinterpret_cast<app::GadgetEntity*>(entity);
	}

	app::GadgetEntity* GetGadget(Entity* entity)
	{
		if (entity == nullptr || !entity->isGadget())
			return nullptr;
		
		return reinterpret_cast<app::GadgetEntity*>(entity);
	}

	game::Entity* FindNearestEntity(const IEntityFilter& filter)
	{
		auto& manager = game::EntityManager::instance();
		auto entities = manager.entities(filter);
		return FindNearestEntity(entities);
	}

	game::Entity* FindNearestEntity(std::vector<game::Entity*>& entities)
	{
		if (entities.size() == 0)
			return nullptr;

		auto avatar = game::EntityManager::instance().avatar();
		return *std::min_element(entities.begin(), entities.end(),
			[avatar](game::Entity* a, game::Entity* b) { return avatar->distance(a) < avatar->distance(b); });
	}

	app::AccountDataItem* GetAccountData()
	{
		return nullptr;
	}

    bool IsInGame()
    {
		return true;
    }

    void ShowInGameNormalMessage(std::string content, app::Color bgColor, bool showBackground)
    {
		
    }

    void ShowInGameInfoMessage(std::string content, bool discardIfDuplicated, app::UIShowPriority__Enum priority)
    {

    }

    void ShowInGameGeneralDialog(std::string title, std::string content, app::GeneralDialogContext_GeneralDialogType__Enum dialogType, app::UIType__Enum uiType, app::UIShowPriority__Enum mode, bool showNormalCloseBtn, bool isToggleDialog)
    {
		//app::MoleMole_UIUtil_TryShowGeneralDialog(string_to_il2cppi(title), string_to_il2cppi(content), nullptr, uiType, nullptr, dialogType, mode, showNormalCloseBtn, isToggleDialog, false, nullptr);
    }

    void ShowInGameSimpleGeneralDialog(std::string title, std::string content)
    {

    }

    void ShowInGameNormalMessage(std::wstring content, app::Color bgColor, bool showBackground)
    {

    }

    void ShowInGameInfoMessage(std::wstring content, bool discardIfDuplicated, app::UIShowPriority__Enum priority)
    {

    }

    void ShowInGameGeneralDialog(std::wstring title, std::wstring content, app::GeneralDialogContext_GeneralDialogType__Enum dialogType, app::UIType__Enum uiType, app::UIShowPriority__Enum mode, bool showNormalCloseBtn, bool isToggleDialog)
    {
        //app::MoleMole_UIUtil_TryShowGeneralDialog(string_to_il2cppi(title), string_to_il2cppi(content), nullptr, uiType, nullptr, dialogType, mode, showNormalCloseBtn, isToggleDialog, false, nullptr);
    }

    void ShowInGameSimpleGeneralDialog(std::wstring title, std::wstring content)
    {

    }

}

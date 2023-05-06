#include "pch-il2cpp.h"
#include "Debug.h"

#include <misc/cpp/imgui_stdlib.h>
#include <filesystem>
#include <fstream>

#include <cheat/events.h>
#include <cheat-base/render/renderer.h>
#include <helpers.h>
#include <imgui_internal.h>

// This module is for debug purpose, and... well.. it's shit coded ^)
namespace cheat::feature
{

    static bool ActorAbilityPlugin_OnEvent_Hook(void* __this, app::BaseEvent* e, MethodInfo* method);
    void OnGameUpdate();
    static bool csvFriendly = true;
    static bool includeHeaders = true;
    static bool BattleInstance_IsStageForbidAutoBattle_Hook(void* __this, MethodInfo* method);
    static bool BattleInstance_IsAutoBattleAtStart_Hook(void* __this, int p0, MethodInfo* method);

    Debug::Debug() : Feature()
    {
        events::GameUpdateEvent += FUNCTION_HANDLER(OnGameUpdate);
        // HookManager::install(app::MoleMole_LuaShellManager_DoString, LuaShellManager_DoString_Hook);
        // HookManager::install(app::LuaEnv_DoString, LuaEnv_DoString_Hook);
        // HookManager::install(app::Lua_xlua_pushasciistring, Lua_xlua_pushasciistring_Hook);

        // HookManager::install(app::GameLogin_SendInfo_2, SendInfo_Hook);
        // LOG_DEBUG("Hooked GameLogin::SendGameInfo. Origin at 0x%p", HookManager::getOrigin(SendInfo_Hook));
    }

    const FeatureGUIInfo& Debug::GetGUIInfo() const
    {
        TRANSLATED_MODULE_INFO("Debug");
        return info;
    }

    Debug& Debug::GetInstance()
    {
        static Debug instance;
        return instance;
    }

    void DrawSRTest()
    {
        if (ImGui::Button("SetAutoBattle"))
        {

        }
    }

    // Raise when player start game log in (after press a door)
    // Contains information about player system and game integrity
    static void SendInfo_Hook(app::MoleMole_NetworkManager* __this, app::PlayerLoginReq* info, MethodInfo* method)
    {
        LOG_TRACE("Game sending game info to server.");
        LOG_TRACE("Content: ");

#define printString(i) if (info->fields.string_ ## i > (void *)1 && info->fields.string_ ## i ##->fields.length > 0)\
    LOG_TRACE("\tfield#%d: %s", i ,il2cppi_to_string(info->fields.string_ ## i).c_str());

        printString(1);
        printString(2);
        printString(3);
        printString(4);
        printString(5);
        printString(6);
        printString(7);
        printString(8);
        printString(9);
        printString(10);
        printString(11);
        printString(12);
        printString(13);
        printString(14);
        printString(15);
        printString(16);

#undef printString

        CALL_ORIGIN(SendInfo_Hook, __this, info, method);
    }

    static void Lua_xlua_pushasciistring_Hook(void* __this, void* L, app::String* str, MethodInfo* method)
    {
        LOG_DEBUG("Pushed string: %s", il2cppi_to_string(str).c_str());
        CALL_ORIGIN(Lua_xlua_pushasciistring_Hook, __this, L, str, method);
    }

    static int checkCount = 0;
    static void* LuaEnv_DoString_Hook(void* __this, app::Byte__Array* chunk, app::String* chunkName, void* env, MethodInfo* method)
    {
        if (checkCount > 0)
        {
            LOG_DEBUG("After size %d; name: %s", chunk->bounds == nullptr ? chunk->max_length : chunk->bounds->length, il2cppi_to_string(chunkName).c_str());
            checkCount--;
        }
        return CALL_ORIGIN(LuaEnv_DoString_Hook, __this, chunk, chunkName, env, method);
    }

    static void LuaShellManager_DoString_Hook(void* __this, app::Byte__Array* byteArray, MethodInfo* method)
    {
        LOG_DEBUG("Size %d", byteArray->bounds == nullptr ? byteArray->max_length : byteArray->bounds->length);
        checkCount = 10;
        CALL_ORIGIN(LuaShellManager_DoString_Hook, __this, byteArray, method);
    }

    static bool ActorAbilityPlugin_OnEvent_Hook(void* __this, app::BaseEvent* e, MethodInfo* method)
    {
        // LOG_DEBUG("Fire event: %s, targetID %u", magic_enum::enum_name(e->fields.eventID).data(), e->fields.targetID);
        return CALL_ORIGIN(ActorAbilityPlugin_OnEvent_Hook, __this, e, method);
    }

    static void DrawWaypoints(UniDict<uint32_t, UniDict<uint32_t, app::MapModule_ScenePointData>*>* waypointsGrops)
    {
        
    }

    void DrawManagerData()
    {
       
    }


    static void DrawInteractionManagerInfo()
    {
        
    }

#undef DRAW_UINT
#undef DRAW_FLOAT
#undef DRAW_BOOL

    void DrawPositionInfo()
    {
        

    }

    void DrawMapManager()
    {

    }

    void DrawImGuiFocusTest()
    {
        ImGui::Text(_TR("Is any item active: %s"), ImGui::IsAnyItemActive() ? "true" : "false");
        ImGui::Text(_TR("Is any item focused: %s"), ImGui::IsAnyItemFocused() ? "true" : "false");

        ImGui::Button("Test");
        auto hk = Hotkey();
        int temp = 0;
        InputHotkey("Test hotkey", &hk, false);
        ImGui::InputInt("Test input", &temp);
    }

    std::map<std::string, std::string> chestNames;
    std::unordered_set<std::string> notWrittenChests;
    bool showNotWritten = false;
    void OnGameUpdate()
    {

    }

    void DrawChestPlugin()
    {
       

    }

    void DrawScenePropManager()
    {
       
    }

    void DrawFPSGraph()
    {
        static float values[120] = { 0 };
        static int values_offset = 0;
        values[values_offset++] = ImGui::GetIO().Framerate;
        if (values_offset >= IM_ARRAYSIZE(values))
            values_offset = 0;
        ImGui::PlotLines("", values, IM_ARRAYSIZE(values), values_offset, "", 0.0f, 100.0f, ImVec2(0, 80));
        ImGui::Text(_TR("%.1f FPS"), ImGui::GetIO().Framerate);
        float avg_fps = 0.0f;
        for (int i = 0; i < IM_ARRAYSIZE(values); i++)
            avg_fps += values[i];
        avg_fps /= IM_ARRAYSIZE(values);
        ImGui::Text(_TR("%.1f FPS (avg)"), avg_fps);
    }

    void Debug::DrawMain()
    {

        if (ImGui::CollapsingHeader("Star Rail Test", ImGuiTreeNodeFlags_None))
            DrawSRTest();
        if (ImGui::Button("TEST"))
        {

        }
    }

    bool Debug::NeedInfoDraw() const
    {
        return showNotWritten && notWrittenChests.size() > 0;
    }

    void Debug::DrawInfo()
    {
        for (auto& name : notWrittenChests)
        {
            ImGui::Text(_TR("%s"), name.c_str());
        }
    }
}
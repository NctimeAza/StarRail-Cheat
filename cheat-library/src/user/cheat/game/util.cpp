#include <pch-il2cpp.h>
#include "util.h"

#include <helpers.h>

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

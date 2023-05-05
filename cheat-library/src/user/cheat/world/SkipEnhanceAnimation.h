#pragma once
#include <cheat-base/cheat/Feature.h>
#include <cheat-base/config/config.h>

namespace cheat::feature
{

	class SkipEnhanceAnimation : public Feature
	{
	public:
		config::Field<bool> f_Enabled;
		config::Field<bool> f_ShowLevelUp;

		static SkipEnhanceAnimation& GetInstance();

		const FeatureGUIInfo& GetGUIInfo() const override;
		void DrawMain() override;

		virtual bool NeedStatusDraw() const override;
		void DrawStatus() override;

		bool ShouldShowLevelUpDialog(app::MoleMole_EquipLevelUpDialogContext* dialog);
	private:
		SkipEnhanceAnimation();
	};
}

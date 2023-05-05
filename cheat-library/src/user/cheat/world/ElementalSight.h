#pragma once
#include <cheat-base/cheat/Feature.h>
#include <cheat-base/config/config.h>

namespace cheat::feature
{

	class ElementalSight : public Feature
	{
	public:
		config::Field<TranslatedHotkey> f_Enabled;

		static ElementalSight& GetInstance();

		const FeatureGUIInfo& GetGUIInfo() const override;
		void DrawMain() override;

		virtual bool NeedStatusDraw() const override;
		void DrawStatus() override;

	private:
		ElementalSight();
	};
}


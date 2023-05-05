#pragma once
#include <cheat-base/cheat/Feature.h>
#include <cheat-base/config/config.h>
#include <cheat-base/thread-safe.h>

namespace cheat::feature
{
	class Browser : public Feature
	{
	public:
		config::Field<TranslatedHotkey> f_Enabled;
		config::Field<float> f_planeWidth;
		config::Field<float> f_planeHeight;

		static Browser& GetInstance();
		const FeatureGUIInfo& GetGUIInfo() const override;
		void DrawMain() override;
		bool NeedStatusDraw() const override;
		void DrawStatus() override;

	private:
		SafeQueue<uint32_t> toBeUpdate;
		SafeValue<int64_t> nextUpdate;
		int f_DelayUpdate = 20;
		void OnGameUpdate();
		Browser();
	};
}
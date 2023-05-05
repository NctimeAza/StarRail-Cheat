using namespace app;

// CC B9 05 00 00 00 E9 ?? ?? ?? ??
DO_APP_FUNC(0x00BDDAD0, 0x00BDDAD0, Il2CppClass **, GetIl2Classes, ());

// !!! WARNING: PLEASE DO NOT HOOK UNITY PLAYER IT WILL MAKES CRC CHECK BROKEN!!!

// DO_APP_FUNC(0x00C37DF0, 0x00C37DF0, app::Byte__Array*, Unity_RecordUserData, (int32_t nType));
// DO_APP_FUNC(0x0116A6E0, 0x0116A6E0, int, CrashReporter, (__int64 a1, __int64 a2, const char* a3));
// DO_APP_FUNC(0x00E40D90, 0x00E40D90, void, Animator_set_avatar, (Animator* __this, Avatar* value, MethodInfo*
// method));

// DO_APP_FUNC(0x098EC140, Avatar*, Animator_get_avatar, (Animator* __this, MethodInfo* method));
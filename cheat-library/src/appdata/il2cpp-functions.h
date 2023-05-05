// clang-format off
// Generated C++ file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
// Target Unity version: 2017.4.15 - 2017.4.40

// ******************************************************************************
// * IL2CPP application-specific method definition addresses and signatures
// ******************************************************************************
using namespace app;


// Networking
DO_APP_FUNC(0x0, 0x0, void, Kcp_KcpNative_kcp_packet_destroy, (KcpPacket_1 *packet, MethodInfo *method));
DO_APP_FUNC(0x0, 0x0, KcpPacket_1*, Kcp_KcpNative_kcp_packet_create, (Byte__Array* data, int32_t len, MethodInfo* method));
DO_APP_FUNC(0x0, 0x0, int32_t, Kcp_KcpNative_kcp_client_send_packet, (void *kcp_client, KcpPacket_1 *packet, MethodInfo *method));
DO_APP_FUNC(0x0, 0x0, bool, MoleMole_KcpClient_TryDequeueEvent, (void *__this, ClientKcpEvent *evt, MethodInfo *method));
DO_APP_FUNC(0x0, 0x0, void, MoleMole_Packet_XorEncrypt, (Byte__Array **bytes, int32_t length, MethodInfo *method));

// should be 'op_Implicit' not 'get_value'
DO_APP_FUNC(0x04320810, 0x04284610, uint16_t, MoleMole_SimpleSafeUInt16_get_Value, (SimpleSafeUInt16 v, MethodInfo *method));
DO_APP_FUNC(0x0306C630, 0x02FFF730, uint32_t, MoleMole_SimpleSafeUInt32_get_Value, (SimpleSafeUInt32 v, MethodInfo *method));
DO_APP_FUNC(0x01662F10, 0x01644A90, int32_t, MoleMole_SimpleSafeInt32_get_Value, (SimpleSafeInt32 v, MethodInfo *method));
DO_APP_FUNC(0x01662FA0, 0x01644B20, SimpleSafeInt32, MoleMole_SimpleSafeInt32_set_Value, (int32_t value, MethodInfo *method));
DO_APP_FUNC(0x0306C5A0, 0x02FFF6A0, SimpleSafeUInt32, MoleMole_SimpleSafeUInt32_op_Implicit, (uint32_t v, MethodInfo* method));
DO_APP_FUNC(0x02ef4b10, 0x02ef4b10, String *, Marshal_PtrToStringAnsi, (void *ptr, MethodInfo *method));
DO_APP_FUNC(0x02ef4b20, 0x02ef4b20, String *, Marshal_PtrToStringUni, (void *ptr, MethodInfo *method));

// Map utility
DO_APP_FUNC(0x010F71E0, 0x010E9A60, Rect, MonoInLevelMapPage_get_mapRect, (MonoInLevelMapPage *__this, MethodInfo *method));
DO_APP_FUNC(0x010F71C0, 0x010E9A40, Transform *, MonoInLevelMapPage_get_mapBackground, (MonoInLevelMapPage *__this, MethodInfo *method));

// Teleport hooks
DO_APP_FUNC(0x05324d70, 0x05324d70, void, Main_Update, (void *__this, MethodInfo *method));

DO_APP_FUNC(0x0, 0x0, bool, Miscs_CheckTargetAttackable, (BaseEntity *attackerEntity, BaseEntity *targetEntity, MethodInfo *method));


// Dialog skipping
DO_APP_FUNC(0x0, 0x0, bool, MoleMole_TalkDialogContext_get_canAutoClick, (TalkDialogContext *__this, MethodInfo *method));
DO_APP_FUNC(0x0, 0x0, void, MoleMole_TalkDialogContext_OnDialogSelectItem, (TalkDialogContext *__this, Notify *notify, MethodInfo *method));
DO_APP_FUNC(0x00, 0x0, void, MoleMole_InLevelCutScenePageContext_OnFreeClick, (InLevelCutScenePageContext *__this, MethodInfo *method));
DO_APP_FUNC(0x0, 0x0, void, MoleMole_InLevelCutScenePageContext_UpdateView, (InLevelCutScenePageContext *__this, MethodInfo *method));
DO_APP_FUNC(0x0, 0x0, void, MoleMole_InLevelCutScenePageContext_ClearView, (InLevelCutScenePageContext *__this, MethodInfo *method));

// Protection bypass
DO_APP_FUNC(0x070F3890, 0x07040220, Byte__Array *, Application_RecordUserData, (int32_t nType, MethodInfo *method));

// Lua functions
DO_APP_FUNC(0x037DACC0, 0x03755D60, Byte__Array *, LuaManager_LoadCustomLuaFile, (LuaManager *__this, String **filePath, bool *recycleBytes, MethodInfo *method));
DO_APP_FUNC(0x040D8F20, 0x0403F6D0, void, Lua_xlua_pushasciistring, (void *L, String *str, MethodInfo *method));
DO_APP_FUNC(0x057332F0, 0x05689990, void *, LuaEnv_DoString, (void *__this, Byte__Array *chunk, String *chunkName, void *env, MethodInfo *method));
DO_APP_FUNC(0x00D17310, 0x00D13F40, void, MoleMole_LuaShellManager_DoString, (void *__this, Byte__Array *byteArray, MethodInfo *method));
DO_APP_FUNC(0x00D18530, 0x00D150F0, void, MoleMole_LuaShellManager_ReportLuaShellResult, (void *__this, String *type, String *value, MethodInfo *method)); // Anticheat info

//Backdoored lua packets
DO_APP_FUNC(0x0, 0x0, void, MoleMole_PlayerModule_OnWindSeedClientNotify, (MoleMole_PlayerModule *__this, Proto_WindSeedClientNotify *notify, MethodInfo *method));
DO_APP_FUNC(0x0, 0x0, void, MoleMole_PlayerModule_OnReciveLuaShell, (MoleMole_PlayerModule *__this, Proto_PlayerLuaShellNotify *playerLuaShellNotify, MethodInfo *method));

// Visuals
DO_APP_FUNC(0x0, 0x0, void, MoleMole_SCameraModuleInitialize_SetWarningLocateRatio, (SCameraModuleInitialize *__this, double deltaTime, CameraShareData *data, MethodInfo *method));
//DO_APP_FUNC(0x01E78510, 0x01E421A0, void, MoleMole_VCBaseSetDitherValue_set_ManagerDitherAlphaValue, (MoleMole_VCBaseSetDitherValue *__this, float value, MethodInfo *method));
DO_APP_FUNC(0x0, 0x0, void, MoleMole_PlayerModule_EntityAppear, (MoleMole_PlayerModule *__this, Proto_SceneEntityInfo *entity, VisionType__Enum type, uint32_t infoParam, MethodInfo *method));
DO_APP_FUNC(0x051292c0, 0x051292c0, void, BaseShaderPropertyTransition_SetDitherAlphaValue, (/*BaseShaderPropertyTransition*/ void *__this, float value, MethodInfo *method));

// Show Skill CDs
DO_APP_FUNC(0x0352AC10, 0x034AE090, void, MoleMole_LCAvatarCombat_SetSkillIndex, (LCAvatarCombat *__this, LCAvatarCombat_LCAvatarCombat_SkillInfo *skillInfo, int32_t index, int32_t priority, MethodInfo *method));
DO_APP_FUNC(0x035299B0, 0x034ACE50, void, MoleMole_LCAvatarCombat_CheckCDTimer, (LCAvatarCombat *__this, LCAvatarCombat_LCAvatarCombat_SkillInfo *info, MethodInfo *method));
DO_APP_FUNC(0x0352E420, 0x034B1820, int32_t, MoleMole_LCAvatarCombat_GetSkillMaxChargesCount, (LCAvatarCombat *__this, uint32_t skillID, MethodInfo *method));
DO_APP_FUNC(0x0352E910, 0x034B1D00, int32_t, MoleMole_LCAvatarCombat_GetSkillCurrentChargesCount, (LCAvatarCombat *__this, uint32_t skillID, MethodInfo *method));

DO_APP_FUNC(0x01D026A0, 0x01CD12A0, void, MonoTeamBtn_SetupView, (MonoTeamBtn *__this, uint64_t guid, MethodInfo *method));
DO_APP_FUNC(0x01D03540, 0x01CD2110, void, MonoTeamBtn_set_PCKey, (MonoTeamBtn *__this, String *value, MethodInfo *method));
DO_APP_FUNC(0x01D03470, 0x01CD2040, /*MonoControlElement*/ void *, MonoTeamBtn_get_PS4KeyIcon, (MonoTeamBtn *__this, MethodInfo *method));
DO_APP_FUNC(0x01875530, 0x01850FB0, bool, MoleMole_UIManager_IsPS4Layout, (MethodInfo *method));


// Profile Changer | RyujinZX#6666
DO_APP_FUNC(0x0234B6A0, 0x023052B0, Button_1 *, ProfilePage, (MonoInLevelPlayerProfilePage *__this, MethodInfo *method)); // MonoInLevelPlayerProfilePage_get_logoutButton
DO_APP_FUNC(0x01A43DC0, 0x01A1A980, void, ProfileEditPage, (MonoFriendInformationDialog *__this, Sprite *value, MethodInfo *method)); // MonoFriendInformationDialog_set_icon

// Custom Weather | RyujinZX#6666
DO_APP_FUNC(0x03AB94E0, 0x03A2CAB0, bool, EnviroSky_ChangeWeather, (void * /*app::EnviroSky*/ __this, String *weatherPath, float transTime, float ratio, MethodInfo *method));
DO_APP_FUNC(0x00BD2B00, 0x00BD2A80, void * /*app::EnviroSky*/, EnviroSky_get_Instance, (MethodInfo *method));

// Free Camera
DO_APP_FUNC(0x039294e0, 0x039294e0, float, Camera_get_fieldOfView, (Camera *__this, MethodInfo *method));
DO_APP_FUNC(0x0392a7f0, 0x0392a7f0, void, Camera_set_fieldOfView, (Camera *__this, float value, MethodInfo *method));
DO_APP_FUNC(0x07045640, 0x06F92990, void, Camera_CopyFrom, (Camera *__this, Camera *other, MethodInfo *method));

// Game Object, Component, Transform Utility
DO_APP_FUNC(0x03345b30, 0x03345b30, GameObject *, GameObject_Find, (String *name, MethodInfo *method));
DO_APP_FUNC(0x03345b70, 0x03345b70, Component_1 *, GameObject_GetComponentByName, (GameObject *__this, String *type, MethodInfo *method));
DO_APP_FUNC(0x03346a50, 0x03346a50, bool, GameObject_get_active, (GameObject *__this, MethodInfo *method));
DO_APP_FUNC(0x03346d30, 0x03346d30, void, GameObject_set_active, (GameObject *__this, bool value, MethodInfo *method));
DO_APP_FUNC(0x033465e0, 0x033465e0, void, GameObject_SetActive, (GameObject *__this, bool value, MethodInfo *method));
DO_APP_FUNC(0x07027BC0, 0x06F75450, Transform *, Transform_FindChild, (Transform *__this, String *name, MethodInfo *method));
DO_APP_FUNC(0x07027BF0, 0x06F75480, Transform *, Transform_GetChild, (Transform *__this, int32_t index, MethodInfo *method));
DO_APP_FUNC(0x0700E240, 0x06F5BF90, Component_1 *, Component_1_GetComponent_1, (Component_1 *__this, String *type, MethodInfo *method));
DO_APP_FUNC(0x07110920, 0x0705CB10, GameObject *, GameObject_CreatePrimitive, (PrimitiveType__Enum type, MethodInfo *method));
DO_APP_FUNC(0x07110EE0, 0x0705D0C0, Transform *, GameObject_get_transform, (GameObject *__this, MethodInfo *method));
DO_APP_FUNC(0x07028EF0, 0x06F76750, Quaternion, Transform_get_localRotation, (Transform *__this, MethodInfo *method));
DO_APP_FUNC(0x07027DC0, 0x06F76BF0, void, Transform_set_localRotation, (Transform *__this, Quaternion value, MethodInfo *method));
DO_APP_FUNC(0x07028F30, 0x06F76790, Vector3, Transform_get_localScale, (Transform *__this, MethodInfo *method));
DO_APP_FUNC(0x07027DD0, 0x06F75660, void, Transform_set_localScale, (Transform *__this, Vector3 value, MethodInfo *method));
DO_APP_FUNC(0x07028EB0, 0x06F76710, Vector3, Transform_get_localPosition, (Transform *__this, MethodInfo *method));
DO_APP_FUNC(0x07029380, 0x06F76BE0, void, Transform_set_localPosition, (Transform *__this, Vector3 value, MethodInfo *method));
DO_APP_FUNC(0x071108B0, 0x0705CA90, Component_1 *, GameObject_AddComponentInternal, (GameObject *__this, String *className, MethodInfo *method));
DO_APP_FUNC(0x07110C10, 0x0705CAA0, Component_1 *, GameObject_AddComponent, (GameObject *__this, Type *componentType, MethodInfo *method));
DO_APP_FUNC(0x070240D0, 0x06F71AE0, Object_1 *, Object_1_Instantiate_2, (Object_1 *original, MethodInfo *method));
DO_APP_FUNC(0x07028D10, 0x06F76570, int32_t, Transform_get_childCount, (Transform *__this, MethodInfo *method));
DO_APP_FUNC(0x0700E3F0, 0x06F5C140, GameObject *, Component_1_get_gameObject, (Component_1 *__this, MethodInfo *method));
DO_APP_FUNC(0x070244F0, 0x06F71EF0, String *, Object_1_get_name, (Object_1 *__this, MethodInfo *method));
DO_APP_FUNC(0x0712F160, 0x0707B1E0, Material__Array *, Renderer_GetMaterialArray, (Renderer *__this, MethodInfo *method));
DO_APP_FUNC(0x0700F380, 0x06F5D0D0, void, Material_set_mainTexture, (Material *__this, Texture *value, MethodInfo *method));
DO_APP_FUNC(0x07120870, 0x0706C920, Vector3, Vector3_Lerp, (Vector3 a, Vector3 b, float t, MethodInfo *method));
DO_APP_FUNC(0x07028D40, 0x06F765A0, Vector3, Transform_get_eulerAngles, (Transform *__this, MethodInfo *method));
DO_APP_FUNC(0x07029270, 0x06F76AD0, void, Transform_set_eulerAngles, (Transform *__this, Vector3 value, MethodInfo *method));
DO_APP_FUNC(0x07029070, 0x06F768D0, Vector3, Transform_get_right, (Transform *__this, MethodInfo *method));
DO_APP_FUNC(0x07029400, 0x06F76C70, void, Transform_set_right, (Transform *__this, Vector3 value, MethodInfo *method));
DO_APP_FUNC(0x07029150, 0x06F769B0, Vector3, Transform_get_up, (Transform *__this, MethodInfo *method));
DO_APP_FUNC(0x07029470, 0x06F76CF0, void, Transform_set_up, (Transform *__this, Vector3 value, MethodInfo *method));
DO_APP_FUNC(0x07028DA0, 0x06F76600, Vector3, Transform_get_forward, (Transform *__this, MethodInfo *method));
DO_APP_FUNC(0x070292C0, 0x06F76B20, void, Transform_set_forward, (Transform *__this, Vector3 value, MethodInfo *method));
DO_APP_FUNC(0x07029100, 0x06F76960, Quaternion, Transform_get_rotation, (Transform *__this, MethodInfo *method));
DO_APP_FUNC(0x07027DF0, 0x06F76CE0, void, Transform_set_rotation, (Transform *__this, Quaternion value, MethodInfo *method));
DO_APP_FUNC(0x07023DE0, 0x06F717F0, void, Object_1_Destroy_1, (Object_1 *obj, MethodInfo *method));
DO_APP_FUNC(0x07023D90, 0x06F717A0, void, Object_1_DestroyImmediate_1, (Object_1 *obj, MethodInfo *method));
DO_APP_FUNC(0x070B59F0, 0x07002840, float, Mathf_Lerp, (float a, float b, float t, MethodInfo *method));
DO_APP_FUNC(0x070C6B90, 0x07013BE0, float, Input_GetAxis, (String *axisName, MethodInfo *method));
DO_APP_FUNC(0x03BE2600, 0x03B53350, BaseComponent*, ComponentManager_GetComponent_3, (/*ComponentManager*/void* __this, String* typeName, MethodInfo* method));

// Utility
DO_APP_FUNC(0x02695CD0, 0x07074A90, String *, Text_get_text, (Text *__this, MethodInfo *method));
DO_APP_FUNC(0x03b1a700, 0x03b1a700, void, Text_set_text, (Text *__this, String *value, MethodInfo *method));
DO_APP_FUNC(0x0704EC40, 0x06F9BD80, void, Slider_1_set_minValue, (Slider_1 *__this, float value, MethodInfo *method));
DO_APP_FUNC(0x0704EBC0, 0x06F9BD00, void, Slider_1_set_maxValue, (Slider_1 *__this, float value, MethodInfo *method));
DO_APP_FUNC(0x0704E0D0, 0x06F9B230, void, Slider_1_set_value, (Slider_1 *__this, float value, MethodInfo *method));
DO_APP_FUNC(0x070C74B0, 0x07014490, Sprite *, Sprite_Create, (Texture2D *texture, Rect rect, Vector2 pivot, float pixelsPerUnit, MethodInfo *method));
DO_APP_FUNC(0x070C75E0, 0x070145B0, Rect, Sprite_get_rect, (Sprite *__this, MethodInfo *method));
DO_APP_FUNC(0x0, 0x0, Texture2D *, NativeGallery_LoadImageAtPath, (String *imagePath, int32_t maxSize, bool markTextureNonReadable, bool generateMipmaps, bool linearColorSpace, MethodInfo *method));
DO_APP_FUNC(0x071028E0, 0x0704EDF0, void, Text_set_alignment, (Text *__this, TextAnchor__Enum value, MethodInfo *method));
DO_APP_FUNC(0x07102B60, 0x0704F070, void, Text_set_horizontalOverflow, (Text *__this, HorizontalWrapMode__Enum value, MethodInfo *method));
DO_APP_FUNC(0x07102EB0, 0x0704F3C0, void, Text_set_verticalOverflow, (Text *__this, VerticalWrapMode__Enum value, MethodInfo *method));
DO_APP_FUNC(0x071027D0, 0x0704ECE0, bool, Text_get_resizeTextForBestFit, (Text *__this, MethodInfo *method));
DO_APP_FUNC(0x07102C30, 0x0704F140, void, Text_set_resizeTextForBestFit, (Text *__this, bool value, MethodInfo *method));
DO_APP_FUNC(0x07102200, 0x0704E720, int32_t, Text_get_fontSize, (Text *__this, MethodInfo *method));
DO_APP_FUNC(0x07102A10, 0x0704EF20, void, Text_set_fontSize, (Text *__this, int32_t value, MethodInfo *method));

DO_APP_FUNC(0x03AEE580, 0x03A61400, float, Miscs_CalcCurrentGroundWaterHeight, (float x, float z, MethodInfo *method));
DO_APP_FUNC(0x03AEDE20, 0x03A60CC0, float, Miscs_CalcCurrentGroundHeight, (float x, float z, MethodInfo *method));
DO_APP_FUNC(0x03AEDED0, 0x03A60D70, float, Miscs_CalcCurrentGroundHeight_1, (float x, float z, float rayStartHeight, float rayDetectLength, int32_t layer, MethodInfo *method));
DO_APP_FUNC(0x03AEE1A0, 0x03A61030, Vector3, Miscs_CalcCurrentGroundNorm, (Vector3 pos, MethodInfo *method));
DO_APP_FUNC(0x034C2C20, 0x03447770, Vector3, Miscs_GenWorldPos, (Vector2 levelMapPos, MethodInfo *method));
DO_APP_FUNC(0x034C28C0, 0x03447420, Vector2, Miscs_GenLevelPos_1, (Vector3 worldPos, MethodInfo *method));
DO_APP_FUNC(0x03AFFC50, 0x03A72800, int32_t, Miscs_GetSceneGroundLayerMask, (MethodInfo *method));

DO_APP_FUNC(0x048333C0, 0x0478D130, Vector3, WorldShiftManager_GetAbsolutePosition, (Vector3 pos, MethodInfo *method));
DO_APP_FUNC(0x04833550, 0x0478D2B0, Vector3, WorldShiftManager_GetRelativePosition, (Vector3 pos, MethodInfo *method));

DO_APP_FUNC(0x036FE0C0, 0x0367C160, Vector3, ActorUtils_GetAvatarPos, (MethodInfo *method));
DO_APP_FUNC(0x037059D0, 0x03683860, void, ActorUtils_SetAvatarPos, (Vector3 pos, MethodInfo *method));
DO_APP_FUNC(0x0370B800, 0x036894F0, void, ActorUtils_SyncAvatarMotion, (int32_t state, MethodInfo *method));

//DO_APP_FUNC(0x0, 0x0, Notify, Notify_CreateNotify_1, (MoleMole_NotifyTypes__Enum type, Object* body, MethodInfo* method));

// should be 'op_Implicit' not 'get_value'
DO_APP_FUNC(0x01776590, 0x01754B20, float, MoleMole_SafeFloat_get_Value, (SafeFloat safeFloat, MethodInfo *method));
// should be 'op_Implicit' not 'set_value'
DO_APP_FUNC(0x017764D0, 0x01754A60, SafeFloat, MoleMole_SafeFloat_set_Value, (float value, MethodInfo *method));

// should be 'op_Implicit' not 'set_value'
DO_APP_FUNC(0x018A1FD0, 0x0187CE10, SafeUInt32, MoleMole_SafeUInt32_set_Value, (uint32_t v, MethodInfo * method));
// should be 'op_Implicit_1' not 'get_value'
DO_APP_FUNC(0x018A2090, 0x0187CED0, uint32_t, MoleMole_SafeUInt32_get_Value, (SafeUInt32 v, MethodInfo * method));

DO_APP_FUNC(0x0, 0x0, LCBaseCombat *, MoleMole_BaseEntity_GetLogicCombatComponent_1, (BaseEntity *__this, MethodInfo *method));

DO_APP_FUNC_METHODINFO(0x0, 0x0, MoleMole_BaseEntity_GetLogicCombatComponent_1__MethodInfo);
DO_APP_FUNC(0x0, 0x0, String *, MoleMole_BaseEntity_ToStringRelease, (BaseEntity *__this, MethodInfo *method));

DO_APP_FUNC(0x0, 0x0, void, MoleMole_BaseEntity_SetRelativePosition, (BaseEntity *__this, Vector3 position, bool forceSyncToRigidbody, MethodInfo *method));
DO_APP_FUNC(0, 0, void, MoleMole_BaseEntity_SetAbsolutePosition, (BaseEntity *__this, Vector3 abpos, bool forceSyncToRigidbody, MethodInfo *method));
DO_APP_FUNC(0, 0, void, MoleMole_BaseEntity_SetTransformForward, (BaseEntity *__this, Vector3 forward, bool keepHorizontal, bool immediately, MethodInfo *method));
DO_APP_FUNC(0, 0, Rigidbody *, MoleMole_BaseEntity_GetRigidbody, (BaseEntity *__this, MethodInfo *method));
DO_APP_FUNC(0x03871E30, 0x037EB080, Vector3, MoleMole_BaseEntity_GetAbsolutePosition, (BaseEntity *__this, MethodInfo *method));
DO_APP_FUNC(0x0387F360, 0x037F8360, Vector3, MoleMole_BaseEntity_GetRelativePosition, (BaseEntity *__this, MethodInfo *method));
DO_APP_FUNC(0x03887F00, 0x03800DA0, Vector3, MoleMole_BaseEntity_GetForward, (BaseEntity *__this, MethodInfo *method));
DO_APP_FUNC(0x03863090, 0x037DC570, Vector3, MoleMole_BaseEntity_GetForwardFast, (BaseEntity *__this, MethodInfo *method));
DO_APP_FUNC(0x03885D80, 0x037FEC70, Vector3, MoleMole_BaseEntity_GetRight, (BaseEntity *__this, MethodInfo *method));
DO_APP_FUNC(0x0386F280, 0x037E8590, Vector3, MoleMole_BaseEntity_GetUp, (BaseEntity *__this, MethodInfo *method));
DO_APP_FUNC(0x03870780, 0x037E9A10, bool, MoleMole_BaseEntity_IsActive, (BaseEntity *__this, MethodInfo *method));
DO_APP_FUNC(0x0386C810, 0x037E5BC0, Animator *, MoleMole_BaseEntity_get_animator, (BaseEntity *__this, MethodInfo *method));

// type should be 'MoleMole_VCCharacterCombat' not 'MoleMole_VCBaseMove'
// function name should be 'GetVisualCombatComponent_3' not 'GetMoveComponent_1'
// 3.3 ResolveCall("e8 ?? ?? ?? ?? 48 85 c0 74 ?? 4c 8b 00 48 8b c8 f3 0f 10 56");//MoleMole_BaseEntity_GetVisualCombatComponent
DO_APP_FUNC(0x00C09A60, 0x00C099A0, VCBaseMove *, MoleMole_BaseEntity_GetMoveComponent_1, (BaseEntity *__this, MethodInfo *method));
// 3.3 ResolveMov("48 8B 15 ?? ?? ?? ?? 48 8B CB E8 ?? ?? ?? ?? 48 85 C0 74 BF 48 85 FF 74 24 48 8B 57 ?? 48 8B C8 E8 ?? ?? ?? ?? EB AC E8 ?? ?? ?? ?? 48 8B C8 33 D2 E8 ?? ?? ?? ?? ");//MoleMole_BaseEntity_GetVisualCombatComponent__MethodInfo
DO_APP_FUNC_METHODINFO(0x0A73B840, 0x0A6878C0, MoleMole_BaseEntity_GetMoveComponent_1__MethodInfo);

DO_APP_FUNC(0x0386CDC0, 0x037E6160, List_1_MoleMole_BaseComponent_ *, MoleMole_BaseEntity_GetAllLogicComponents, (BaseEntity *__this, MethodInfo *method));
DO_APP_FUNC(0x0387CBD0, 0x037F5C30, List_1_MoleMole_BaseComponent_ *, MoleMole_BaseEntity_GetAllVisualComponents, (BaseEntity *__this, MethodInfo *method));
DO_APP_FUNC(0x0387A320, 0x0322D390, GameObject *, MoleMole_BaseEntity_get_rootGameObject, (BaseEntity *__this, MethodInfo *method));
DO_APP_FUNC(0x025726F0, 0x022F63B0, GameObject *, MoleMole_BaseEntity_get_gameObject, (BaseEntity *__this, MethodInfo *method));

// type should be 'MoleMole_AvatarEntity' not 'MoleMole_BaseEntity'
DO_APP_FUNC(0x0, 0x0, uint32_t, MoleMole_EntityManager_GetLocalAvatarEntityID, (MoleMole_EntityManager *__this, MethodInfo *method));
DO_APP_FUNC(0x0, 0x0, BaseEntity *, MoleMole_EntityManager_GetLocalAvatarEntity, (MoleMole_EntityManager *__this, MethodInfo *method));
DO_APP_FUNC(0x0, 0x0, CameraEntity *, MoleMole_EntityManager_GetMainCameraEntity, (MoleMole_EntityManager *__this, MethodInfo *method));
DO_APP_FUNC(0x0, 0x00, BaseEntity *, MoleMole_EntityManager_GetValidEntity, (MoleMole_EntityManager *__this, uint32_t runtimeID, MethodInfo *method));
DO_APP_FUNC(0x0, 0x0, BaseEntity *, MoleMole_EntityManager_GetEntityFromJobThread, (MoleMole_EntityManager *__this, uint32_t runtimeID, MethodInfo *method));
DO_APP_FUNC(0x0, 0x0, bool, MoleMole_EntityManager_RemoveEntity, (MoleMole_EntityManager *__this, BaseEntity *entity, uint32_t specifiedRuntimeID, MethodInfo *method));
DO_APP_FUNC(0x0, 0x0, bool, MoleMole_EntityManager_IsCachedEntity, (MoleMole_EntityManager *__this, BaseEntity *entity, MethodInfo *method));
DO_APP_FUNC(0x0, 0x0, List_1_MoleMole_BaseEntity_ *, MoleMole_EntityManager_GetEntities, (MoleMole_EntityManager *__this, MethodInfo *method));
DO_APP_FUNC(0x0, 0x0, Bounds, Utils_4_GetBounds, (GameObject *go, MethodInfo *method));

DO_APP_FUNC(0x03072D50, 0x03005B10, uint64_t, MoleMole_TimeUtil_get_LocalNowMsTimeStamp, (MethodInfo *method));

DO_APP_FUNC(0x0, 0x0, bool, MoleMole_LoadingManager_IsLoaded, (MoleMole_LoadingManager *__this, MethodInfo *method));

DO_APP_FUNC(0x01872CE0, 0x0184E830, bool, MoleMole_UIManager_HasEnableMapCamera, (MoleMole_UIManager *__this, MethodInfo *method));
DO_APP_FUNC(0x0185F9B0, 0x0183B8D0, void, MoleMole_UIManager_EnableInput, (MoleMole_UIManager *__this, bool playerInput, bool clearCurInputState, bool ignoreTouch, MethodInfo *method));
DO_APP_FUNC(0x01871230, 0x0184CDC0, void, MoleMole_UIManager_TryShowNormalMessage, (MoleMole_UIManager *__this, String *content, Color bgColor, bool showBackground, MethodInfo *method));
DO_APP_FUNC(0x0185F310, 0x0183B230, void, MoleMole_UIManager_TryShowInfoMessageWithoutBlockInput, (MoleMole_UIManager *__this, String *content, bool discardIfDuplicated, UIShowPriority__Enum priority, MethodInfo *method));
DO_APP_FUNC(0x0153C7F0, 0x01521D80, /*MoleMole_GeneralDialogContext*/void *, MoleMole_UIUtil_TryShowGeneralDialog, (String *title, String *desc, /*Action_1_Boolean_*/void *callback, UIType__Enum uiType, /*MoleMole_WaitForGeneralDialog*/void *yieldIns, GeneralDialogContext_GeneralDialogType__Enum dialogType, UIShowPriority__Enum mode, bool showNormalCloseBtn, bool isToggleDialog, bool MCJCBLMKDKC, String *unknown, MethodInfo *method));
DO_APP_FUNC(0x01540940, 0x01525E30, /*MoleMole_GeneralDialogContext*/void *, MoleMole_UIUtil_TryShowSimpleGeneralDialog_1, (String *title, String *content, /*Action*/void *buttonCallback, MethodInfo *method));
DO_APP_FUNC(0x0152CA20, 0x015123A0, void, MoleMole_UIUtil_TryShowMessage_1, (String *content, Color bgColor, bool showBackground, MethodInfo *method));
DO_APP_FUNC(0x039221a0, 0x039221a0, SystemLanguage__Enum, Application_get_systemLanguage, (MethodInfo *method));

DO_APP_FUNC(0x010FE1F0, 0x010F08A0, void, MonoMiniMap_Update, (MonoMiniMap *__this, MethodInfo *method));
DO_APP_FUNC(0x01CCDD80, 0x01C9D490, MonoMiniMap *, MonoInLevelMainPage_get_miniMap, (void *__this, MethodInfo *method));
DO_APP_FUNC(0x0283CE60, 0x027E8330, void, MoleMole_GadgetModule_OnGadgetInteractRsp, (void *__this, GadgetInteractRsp *notify, MethodInfo *method));
DO_APP_FUNC(0x01C719D0, 0x01C42270, float, MoleMole_InLevelMainPageContext_get_miniMapScale, (InLevelMainPageContext *__this, MethodInfo *method));

// UnityEngine
DO_APP_FUNC(0x070C47C0, 0x07011580, void, RenderSettings_set_fog, (bool value, MethodInfo *method));
DO_APP_FUNC(0x039221d0, 0x039221d0, int32_t, Application_get_targetFrameRate, (MethodInfo *method));
DO_APP_FUNC(0x03922820, 0x03922820, void, Application_set_targetFrameRate, (int32_t value, MethodInfo *method));
DO_APP_FUNC(0x03921da0, 0x03921da0, bool, Application_get_IsFocused, (MethodInfo *method));

DO_APP_FUNC(0x071506C0, 0x0709C260, bool, RectTransformUtility_ScreenPointToLocalPointInRectangle, (void *rect, Vector2 screenPoint, void *cam, Vector2 *localPoint, MethodInfo *method));

DO_APP_FUNC(0x07029030, 0x06F76890, Vector3, Transform_get_position, (Transform *__this, MethodInfo *method));
DO_APP_FUNC(0x07027DE0, 0x06F75670, void, Transform_set_position, (Transform *__this, Vector3 value, MethodInfo *method));
DO_APP_FUNC(0x07120420, 0x0706C4E0, float, Vector3_Distance, (Vector3 a, Vector3 b, MethodInfo *method));
DO_APP_FUNC(0x070143C0, 0x06F61FD0, float, Vector2_Distance, (Vector2 a, Vector2 b, MethodInfo *method));

DO_APP_FUNC(0x03930b00, 0x03930b00, bool, Cursor_get_visible, (MethodInfo *method));
DO_APP_FUNC(0x03930b70, 0x03930b70, void, Cursor_set_visible, (bool value, MethodInfo *method));
DO_APP_FUNC(0x03930b30, 0x03930b30, void, Cursor_set_lockState, (CursorLockMode__Enum value, MethodInfo *method));

DO_APP_FUNC(0x06FC4450, 0x06F13170, RigidbodyConstraints__Enum, Rigidbody_get_constraints, (Rigidbody *__this, MethodInfo *method));
DO_APP_FUNC(0x06FC45F0, 0x06F13300, void, Rigidbody_set_constraints, (Rigidbody *__this, RigidbodyConstraints__Enum value, MethodInfo *method));
DO_APP_FUNC(0x06FC45E0, 0x06F132F0, void, Rigidbody_set_collisionDetectionMode, (Rigidbody *__this, CollisionDetectionMode__Enum value, MethodInfo *method));
DO_APP_FUNC(0x06FC4600, 0x06F13310, void, Rigidbody_set_detectCollisions, (Rigidbody *__this, bool value, MethodInfo *method));
DO_APP_FUNC(0x06FC4640, 0x06F13360, void, Rigidbody_set_isKinematic, (Rigidbody *__this, bool value, MethodInfo *method));
DO_APP_FUNC(0x06FC4540, 0x06F13260, Vector3, Rigidbody_get_velocity, (Rigidbody *__this, MethodInfo *method));
DO_APP_FUNC(0x06FC43C0, 0x06F130C0, void, Rigidbody_set_velocity, (Rigidbody *__this, Vector3 value, MethodInfo *method));

DO_APP_FUNC(0x03aaacd0, 0x03aaacd0, float, Time_get_timeScale, (MethodInfo *method));
DO_APP_FUNC(0x03aaaf20, 0x03aaaf20, void, Time_set_timeScale, (float value, MethodInfo *method));
DO_APP_FUNC(0x03aaaa90, 0x03aaaa90, float, Time_get_deltaTime, (MethodInfo *method));

DO_APP_FUNC(0x07045C40, 0x06F92E50, Vector3, Camera_WorldToScreenPoint, (Camera *__this, Vector3 position, MethodInfo *method));
DO_APP_FUNC(0x07045F80, 0x06F93190, Camera *, Camera_get_main, (MethodInfo *method));
DO_APP_FUNC(0x070460C0, 0x06F932D0, int32_t, Camera_get_pixelWidth, (Camera *__this, MethodInfo *method));
DO_APP_FUNC(0x07046070, 0x06F93280, int32_t, Camera_get_pixelHeight, (Camera *__this, MethodInfo *method));

DO_APP_FUNC(0x033e5350, 0x033e5350, int32_t, Screen_get_width, (MethodInfo *method));
DO_APP_FUNC(0x033e5220, 0x033e5220, int32_t, Screen_get_height, (MethodInfo *method));


DO_APP_FUNC(0x0709F510, 0x06FEC750, void, Animator_Play, (Animator *__this, String *stateName, int32_t layer, float normalizedTime, MethodInfo *method));
DO_APP_FUNC(0x0709F690, 0x06FEC8D0, void, Animator_Rebind, (Animator *__this, MethodInfo *method));
DO_APP_FUNC(0x0709FBD0, 0x06FECE30, float, Animator_get_speed, (Animator *__this, MethodInfo *method));
DO_APP_FUNC(0x0709FD00, 0x06FECF60, void, Animator_set_speed, (Animator *__this, float value, MethodInfo *method));
DO_APP_FUNC(0x0709FA00, 0x06FECC60, Avatar *, Animator_get_avatar, (Animator *__this, MethodInfo *method));
DO_APP_FUNC(0x0, 0x0, String *, Extension_GetCurrentStateName, (Animator *animator, int32_t layer, AnimatorController *animCont, MethodInfo *method));

DO_APP_FUNC(0x0711F000, 0x0706B100, bool, Behaviour_get_isActiveAndEnabled, (Behaviour *__this, MethodInfo *method));

DO_APP_FUNC(0x07111DA0, 0x0705DFF0, Vector3, Quaternion_ToEulerAngles, (Quaternion rotation, MethodInfo *method));
DO_APP_FUNC(0x00832F30, 0x00835E80, Vector3, Quaternion_get_eulerAngles, (Quaternion__Boxed *__this, MethodInfo *method));
DO_APP_FUNC(0x070265E0, 0x06F73E70, Rect, RectTransform_get_rect, (RectTransform *__this, MethodInfo *method));
DO_APP_FUNC(0x0714FB60, 0x0709B720, float, Canvas_get_scaleFactor, (/*Canvas**/void *__this, MethodInfo *method));

DO_APP_FUNC(0x0710D7B0, 0x06980840, void, Action_Invoke, (/*Action*/ void *__this, MethodInfo *method));

DO_APP_FUNC(0x034CE210, 0x03452B20, void, Miscs_SetUILocalAvatarVisible, (bool visible, MethodInfo *method));

//RSA Patch
DO_APP_FUNC(0x06A90750, 0x069E3AB0, void, RSA_FromXmlString, (RSA *__this, String *xmlString, MethodInfo *method));




// Singletons
//DO_APP_FUNC(0x00159520, 0x0019DA20, void *, Singleton_GetInstance, (MethodInfo *method));
//DO_APP_FUNC_METHODINFO(0x0A7318A8, 0x0A67D928, Singleton_1_MoleMole_UIManager__get_Instance__MethodInfo);
//DO_APP_FUNC_METHODINFO(0x0A732B18, 0x0A67EB98, Singleton_1_MoleMole_PlayerModule__get_Instance__MethodInfo);
//DO_APP_FUNC_METHODINFO(0x0A731BA0, 0x0A67DC20, Singleton_1_MoleMole_EntityManager__get_Instance__MethodInfo);
//DO_APP_FUNC_METHODINFO(0x0A731BF8, 0x0A67DC78, Singleton_1_MoleMole_ItemModule__get_Instance__MethodInfo);
//DO_APP_FUNC_METHODINFO(0x0A7322D8, 0x0A67E358, Singleton_1_MoleMole_NetworkManager__get_Instance__MethodInfo);
//DO_APP_FUNC_METHODINFO(0x0A7319A0, 0x0A67DA20, Singleton_1_MoleMole_EventManager__get_Instance__MethodInfo);
//DO_APP_FUNC_METHODINFO(0x0A7317D8, 0x0A67D858, Singleton_1_MoleMole_InteractionManager__get_Instance__MethodInfo);
//DO_APP_FUNC_METHODINFO(0x0A735810, 0x0A681890, Singleton_1_MoleMole_ScenePropManager__get_Instance__MethodInfo);
//DO_APP_FUNC_METHODINFO(0x0A737B18, 0x0A683B98, Singleton_1_MoleMole_LoadingManager__get_Instance__MethodInfo);
//DO_APP_FUNC_METHODINFO(0x0A733950, 0x0A67F9D0, Singleton_1_MoleMole_MapModule__get_Instance__MethodInfo);
//DO_APP_FUNC_METHODINFO(0x0A737B20, 0x0A683BA0, Singleton_1_MoleMole_MapManager__get_Instance__MethodInfo);
//DO_APP_FUNC_METHODINFO(0x0A734CD8, 0x0A680D58, Singleton_1_GadgetModule__get_Instance__MethodInfo);
//DO_APP_FUNC_METHODINFO(0x0A7320C0, 0x0A67E140, Singleton_1_MoleMole_RuntimeIDManager__get_Instance__MethodInfo);
//DO_APP_FUNC_METHODINFO(0x0A732500, 0x0A67E580, Singleton_1_MoleMole_ShopModule__get_Instance__MethodInfo);
//DO_APP_FUNC_METHODINFO(0x0A7338B0, 0x0A67F930, Singleton_1_MoleMole_DataItemManager__get_Instance__MethodInfo);
//DO_APP_FUNC_METHODINFO(0x0A7318D0, 0x0A67D950, Singleton_1_MoleMole_QuestModule__get_Instance__MethodInfo);

// MapManager -> "ART/UI/UIScene/LevelMapUIManager";

// Lua Executor
// DO_APP_FUNC(0x0, 0x07573FB0, int, xluaL_loadbuffer, (lua_State *L, const char *buff, size_t size, const char *name));

//Model Changer
//Regex of AvatarExcelConfig for !RELOADED Dump
//\DO_APP_FUNC\(0x\w + , void, \w + __ctor, \(\w + \ * __this, MethodInfo \* method\)\);
//DO_APP_FUNC\(0x\w + , Dictionary_2_System_UInt32_\w + \*, \w + , \(MethodInfo \* method\)\);
//DO_APP_FUNC\(0x\w + , \w + \*, \w + , \(uint32_t \w + , MethodInfo \* method\)\);
//DO_APP_FUNC\(0x\w + , String \*, \w + , \(MethodInfo \* method\)\);
//Then choose the first match
//DO_APP_FUNC(0x0, 0x00000000, void, MiHoYoLodLoader_ResumeLodLoader, (MiHoYoLodLoader* __this, MethodInfo* method));
//DO_APP_FUNC(0x0, 0x00000000, bool, MiHoYoLodLoader_TryApplySpecificLodLevelImmdiate, (MiHoYoLodLoader* __this, bool gcmesh, MethodInfo* method));
//DO_APP_FUNC(0x0, 0x00000000, void, MiHoYoLodLoader_PauseLODManager, (MethodInfo* method));
//DO_APP_FUNC(0x0, 0x00000000, int32_t, MiHoYoLodLoader_get_currentLodLevel, (MiHoYoLodLoader* __this, MethodInfo* method));
//DO_APP_FUNC(0x0, 0x00000000, void, MiHoYoLodLoader_PauseLodLoaderWithSpecificLodLevel, (MiHoYoLodLoader* __this, int32_t pausedLodLevel, MethodInfo* method));
//DO_APP_FUNC(0x0, 0x00000000, void, MiHoYoLodLoader_PauseLodLoaderWithHighestLodLevel, (MiHoYoLodLoader* __this, MethodInfo* method));
//DO_APP_FUNC(0x0, 0x00000000, void, Animator_set_cullingMode, (Animator* __this, AnimatorCullingMode__Enum value, MethodInfo* method));
//DO_APP_FUNC(0x0, 0x00000000, bool, Behaviour_get_enabled, (Behaviour* __this, MethodInfo* method));
//DO_APP_FUNC(0x0, 0x00000000, void, Behaviour_set_enabled, (Behaviour* __this, bool value, MethodInfo* method));
//DO_APP_FUNC(0x0, 0x00000000, RuntimeAnimatorController*, Animator_get_runtimeAnimatorController, (Animator* __this, MethodInfo* method));
//DO_APP_FUNC(0x0, 0x00000000, void, Animator_set_runtimeAnimatorController, (Animator* __this, RuntimeAnimatorController* value, MethodInfo* method));
//DO_APP_FUNC(0x0, 0x00000000, Transform*, Transform_get_parent, (Transform* __this, MethodInfo* method));
//DO_APP_FUNC(0x0, 0x00000000, void, Transform_set_parent, (Transform* __this, Transform* value, MethodInfo* method));
//DO_APP_FUNC(0x0, 0x00000000, Transform*, Transform_get_parentInternal, (Transform* __this, MethodInfo* method));
//DO_APP_FUNC(0x0, 0x00000000, void, Transform_set_parentInternal, (Transform* __this, Transform* value, MethodInfo* method));
//DO_APP_FUNC(0x0, 0x00000000, void, Transform_SetSiblingIndex, (Transform* __this, int32_t index, MethodInfo* method));
//DO_APP_FUNC(0x0, 0x00000000, float, CapsuleCollider_get_height, (CapsuleCollider* __this, MethodInfo* method));
//DO_APP_FUNC(0x0, 0x00000000, bool, Animator_get_isAnimationPaused, (Animator* __this, MethodInfo* method));
//DO_APP_FUNC(0x0, 0x00000000, void, Animator_set_isAnimationPaused, (Animator* __this, bool value, MethodInfo* method));
//DO_APP_FUNC(0x0, 0x00000000, Component_1__Array*, GameObject_GetComponentsInChildren, (GameObject* __this, Type* type, MethodInfo* method));
//DO_APP_FUNC(0x0, 0x00000000, Type*, Object_GetType, (Object* __this, MethodInfo* method));
//DO_APP_FUNC(0x0, 0x00000000, Type*, Type_GetType_2, (String* typeName, MethodInfo* method));
//DO_APP_FUNC(0x0, 0x00000000, Type*, Type_internal_from_name, (String* name, bool throwOnError, bool ignoreCase, MethodInfo* method));
//DO_APP_FUNC(0x0, 0x00000000, Assembly*, Assembly_LoadWithPartialName, (String* partialName, Evidence* securityEvidence, MethodInfo* method));
//DO_APP_FUNC(0x0, 0x00000000, Type*, Assembly_GetType, (Assembly* __this, String* name, bool throwOnError, MethodInfo* method));
//DO_APP_FUNC(0x0, 0x00000000, Quaternion, Quaternion_Euler, (float x, float y, float z, MethodInfo* method));

// clang-format off
// Generated C++ file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
// Target Unity version: 2019.4.21 - 2019.4.24

#if defined(_GHIDRA_) || defined(_IDA_)
typedef unsigned __int8 uint8_t;
typedef unsigned __int16 uint16_t;
typedef unsigned __int32 uint32_t;
typedef unsigned __int64 uint64_t;
typedef __int8 int8_t;
typedef __int16 int16_t;
typedef __int32 int32_t;
typedef __int64 int64_t;
#endif

#if defined(_GHIDRA_)
typedef __int64 size_t;
typedef size_t intptr_t;
typedef size_t uintptr_t;
#endif

#if !defined(_GHIDRA_) && !defined(_IDA_)
#define _CPLUSPLUS_
#endif

// ******************************************************************************
// * IL2CPP internal types
// ******************************************************************************

typedef struct Il2CppClass Il2CppClass;
typedef struct Il2CppType Il2CppType;
typedef struct EventInfo EventInfo;
typedef struct MethodInfo MethodInfo;
typedef struct FieldInfo FieldInfo;
typedef struct PropertyInfo PropertyInfo;
typedef struct Il2CppAssembly Il2CppAssembly;
typedef struct Il2CppArray Il2CppArray;
typedef struct Il2CppDelegate Il2CppDelegate;
typedef struct Il2CppDomain Il2CppDomain;
typedef struct Il2CppImage Il2CppImage;
typedef struct Il2CppException Il2CppException;
typedef struct Il2CppProfiler Il2CppProfiler;
typedef struct Il2CppObject Il2CppObject;
typedef struct Il2CppReflectionMethod Il2CppReflectionMethod;
typedef struct Il2CppReflectionType Il2CppReflectionType;
typedef struct Il2CppString Il2CppString;
typedef struct Il2CppThread Il2CppThread;
typedef struct Il2CppAsyncResult Il2CppAsyncResult;
typedef struct Il2CppManagedMemorySnapshot Il2CppManagedMemorySnapshot;
typedef struct Il2CppCustomAttrInfo Il2CppCustomAttrInfo;
typedef enum
{
	IL2CPP_PROFILE_NONE = 0,
	IL2CPP_PROFILE_APPDOMAIN_EVENTS = 1 << 0,
	IL2CPP_PROFILE_ASSEMBLY_EVENTS = 1 << 1,
	IL2CPP_PROFILE_MODULE_EVENTS = 1 << 2,
	IL2CPP_PROFILE_CLASS_EVENTS = 1 << 3,
	IL2CPP_PROFILE_JIT_COMPILATION = 1 << 4,
	IL2CPP_PROFILE_INLINING = 1 << 5,
	IL2CPP_PROFILE_EXCEPTIONS = 1 << 6,
	IL2CPP_PROFILE_ALLOCATIONS = 1 << 7,
	IL2CPP_PROFILE_GC = 1 << 8,
	IL2CPP_PROFILE_THREADS = 1 << 9,
	IL2CPP_PROFILE_REMOTING = 1 << 10,
	IL2CPP_PROFILE_TRANSITIONS = 1 << 11,
	IL2CPP_PROFILE_ENTER_LEAVE = 1 << 12,
	IL2CPP_PROFILE_COVERAGE = 1 << 13,
	IL2CPP_PROFILE_INS_COVERAGE = 1 << 14,
	IL2CPP_PROFILE_STATISTICAL = 1 << 15,
	IL2CPP_PROFILE_METHOD_EVENTS = 1 << 16,
	IL2CPP_PROFILE_MONITOR_EVENTS = 1 << 17,
	IL2CPP_PROFILE_IOMAP_EVENTS = 1 << 18,
	IL2CPP_PROFILE_GC_MOVES = 1 << 19,
	IL2CPP_PROFILE_FILEIO = 1 << 20
} Il2CppProfileFlags;
typedef enum
{
	IL2CPP_PROFILE_FILEIO_WRITE = 0,
	IL2CPP_PROFILE_FILEIO_READ
} Il2CppProfileFileIOKind;
typedef enum
{
	IL2CPP_GC_EVENT_START,
	IL2CPP_GC_EVENT_MARK_START,
	IL2CPP_GC_EVENT_MARK_END,
	IL2CPP_GC_EVENT_RECLAIM_START,
	IL2CPP_GC_EVENT_RECLAIM_END,
	IL2CPP_GC_EVENT_END,
	IL2CPP_GC_EVENT_PRE_STOP_WORLD,
	IL2CPP_GC_EVENT_POST_STOP_WORLD,
	IL2CPP_GC_EVENT_PRE_START_WORLD,
	IL2CPP_GC_EVENT_POST_START_WORLD
} Il2CppGCEvent;
typedef enum
{
	IL2CPP_STAT_NEW_OBJECT_COUNT,
	IL2CPP_STAT_INITIALIZED_CLASS_COUNT,
	IL2CPP_STAT_METHOD_COUNT,
	IL2CPP_STAT_CLASS_STATIC_DATA_SIZE,
	IL2CPP_STAT_GENERIC_INSTANCE_COUNT,
	IL2CPP_STAT_GENERIC_CLASS_COUNT,
	IL2CPP_STAT_INFLATED_METHOD_COUNT,
	IL2CPP_STAT_INFLATED_TYPE_COUNT,
} Il2CppStat;
typedef enum
{
	IL2CPP_UNHANDLED_POLICY_LEGACY,
	IL2CPP_UNHANDLED_POLICY_CURRENT
} Il2CppRuntimeUnhandledExceptionPolicy;
typedef struct Il2CppStackFrameInfo
{
	const MethodInfo *method;
} Il2CppStackFrameInfo;
typedef void(*Il2CppMethodPointer)();
typedef struct Il2CppMethodDebugInfo
{
	Il2CppMethodPointer methodPointer;
	int32_t code_size;
	const char *file;
} Il2CppMethodDebugInfo;
typedef struct
{
	void *(*malloc_func)(size_t size);
	void *(*aligned_malloc_func)(size_t size, size_t alignment);
	void (*free_func)(void *ptr);
	void (*aligned_free_func)(void *ptr);
	void *(*calloc_func)(size_t nmemb, size_t size);
	void *(*realloc_func)(void *ptr, size_t size);
	void *(*aligned_realloc_func)(void *ptr, size_t size, size_t alignment);
} Il2CppMemoryCallbacks;
typedef struct
{
	const char *name;
	void(*connect)(const char *address);
	int(*wait_for_attach)(void);
	void(*close1)(void);
	void(*close2)(void);
	int(*send)(void *buf, int len);
	int(*recv)(void *buf, int len);
} Il2CppDebuggerTransport;
typedef uint16_t Il2CppChar;
typedef char Il2CppNativeChar;
typedef void (*il2cpp_register_object_callback)(Il2CppObject **arr, int size, void *userdata);
typedef void (*il2cpp_WorldChangedCallback)();
typedef void (*Il2CppFrameWalkFunc) (const Il2CppStackFrameInfo *info, void *user_data);
typedef void (*Il2CppProfileFunc) (Il2CppProfiler *prof);
typedef void (*Il2CppProfileMethodFunc) (Il2CppProfiler *prof, const MethodInfo *method);
typedef void (*Il2CppProfileAllocFunc) (Il2CppProfiler *prof, Il2CppObject *obj, Il2CppClass *klass);
typedef void (*Il2CppProfileGCFunc) (Il2CppProfiler *prof, Il2CppGCEvent event, int generation);
typedef void (*Il2CppProfileGCResizeFunc) (Il2CppProfiler *prof, int64_t new_size);
typedef void (*Il2CppProfileFileIOFunc) (Il2CppProfiler *prof, Il2CppProfileFileIOKind kind, int count);
typedef void (*Il2CppProfileThreadFunc) (Il2CppProfiler *prof, unsigned long tid);
typedef const Il2CppNativeChar *(*Il2CppSetFindPlugInCallback)(const Il2CppNativeChar *);
typedef void (*Il2CppLogCallback)(const char *);
typedef size_t(*Il2CppBacktraceFunc) (Il2CppMethodPointer *buffer, size_t maxSize);
typedef struct Il2CppManagedMemorySnapshot Il2CppManagedMemorySnapshot;
typedef uintptr_t il2cpp_array_size_t;
typedef void (*SynchronizationContextCallback)(intptr_t arg);
typedef uint32_t Il2CppMethodSlot;
static const uint32_t kInvalidIl2CppMethodSlot = 65535;
static const int ipv6AddressSize = 16;
typedef int32_t il2cpp_hresult_t;
typedef struct Il2CppMetadataField
{
	uint32_t offset;
	uint32_t typeIndex;
	const char *name;
	uint8_t isStatic;
} Il2CppMetadataField;
typedef enum Il2CppMetadataTypeFlags
{
	kNone = 0,
	kValueType = 1 << 0,
	kArray = 1 << 1,
	kArrayRankMask = 0xFFFF0000
} Il2CppMetadataTypeFlags;
typedef struct Il2CppMetadataType
{
	Il2CppMetadataTypeFlags flags;
	Il2CppMetadataField *fields;
	uint32_t fieldCount;
	uint32_t staticsSize;
	uint8_t *statics;
	uint32_t baseOrElementTypeIndex;
	char *name;
	const char *assemblyName;
	uint64_t typeInfoAddress;
	uint32_t size;
} Il2CppMetadataType;
typedef struct Il2CppMetadataSnapshot
{
	uint32_t typeCount;
	Il2CppMetadataType *types;
} Il2CppMetadataSnapshot;
typedef struct Il2CppManagedMemorySection
{
	uint64_t sectionStartAddress;
	uint32_t sectionSize;
	uint8_t *sectionBytes;
} Il2CppManagedMemorySection;
typedef struct Il2CppManagedHeap
{
	uint32_t sectionCount;
	Il2CppManagedMemorySection *sections;
} Il2CppManagedHeap;
typedef struct Il2CppStacks
{
	uint32_t stackCount;
	Il2CppManagedMemorySection *stacks;
} Il2CppStacks;
typedef struct NativeObject
{
	uint32_t gcHandleIndex;
	uint32_t size;
	uint32_t instanceId;
	uint32_t classId;
	uint32_t referencedNativeObjectIndicesCount;
	uint32_t *referencedNativeObjectIndices;
} NativeObject;
typedef struct Il2CppGCHandles
{
	uint32_t trackedObjectCount;
	uint64_t *pointersToObjects;
} Il2CppGCHandles;
typedef struct Il2CppRuntimeInformation
{
	uint32_t pointerSize;
	uint32_t objectHeaderSize;
	uint32_t arrayHeaderSize;
	uint32_t arrayBoundsOffsetInHeader;
	uint32_t arraySizeOffsetInHeader;
	uint32_t allocationGranularity;
} Il2CppRuntimeInformation;
typedef struct Il2CppManagedMemorySnapshot
{
	Il2CppManagedHeap heap;
	Il2CppStacks stacks;
	Il2CppMetadataSnapshot metadata;
	Il2CppGCHandles gcHandles;
	Il2CppRuntimeInformation runtimeInformation;
	void *additionalUserInformation;
} Il2CppManagedMemorySnapshot;
typedef enum Il2CppTypeEnum
{
	IL2CPP_TYPE_END = 0x00,
	IL2CPP_TYPE_VOID = 0x01,
	IL2CPP_TYPE_BOOLEAN = 0x02,
	IL2CPP_TYPE_CHAR = 0x03,
	IL2CPP_TYPE_I1 = 0x04,
	IL2CPP_TYPE_U1 = 0x05,
	IL2CPP_TYPE_I2 = 0x06,
	IL2CPP_TYPE_U2 = 0x07,
	IL2CPP_TYPE_I4 = 0x08,
	IL2CPP_TYPE_U4 = 0x09,
	IL2CPP_TYPE_I8 = 0x0a,
	IL2CPP_TYPE_U8 = 0x0b,
	IL2CPP_TYPE_R4 = 0x0c,
	IL2CPP_TYPE_R8 = 0x0d,
	IL2CPP_TYPE_STRING = 0x0e,
	IL2CPP_TYPE_PTR = 0x0f,
	IL2CPP_TYPE_BYREF = 0x10,
	IL2CPP_TYPE_VALUETYPE = 0x11,
	IL2CPP_TYPE_CLASS = 0x12,
	IL2CPP_TYPE_VAR = 0x13,
	IL2CPP_TYPE_ARRAY = 0x14,
	IL2CPP_TYPE_GENERICINST = 0x15,
	IL2CPP_TYPE_TYPEDBYREF = 0x16,
	IL2CPP_TYPE_I = 0x18,
	IL2CPP_TYPE_U = 0x19,
	IL2CPP_TYPE_FNPTR = 0x1b,
	IL2CPP_TYPE_OBJECT = 0x1c,
	IL2CPP_TYPE_SZARRAY = 0x1d,
	IL2CPP_TYPE_MVAR = 0x1e,
	IL2CPP_TYPE_CMOD_REQD = 0x1f,
	IL2CPP_TYPE_CMOD_OPT = 0x20,
	IL2CPP_TYPE_INTERNAL = 0x21,
	IL2CPP_TYPE_MODIFIER = 0x40,
	IL2CPP_TYPE_SENTINEL = 0x41,
	IL2CPP_TYPE_PINNED = 0x45,
	IL2CPP_TYPE_ENUM = 0x55
} Il2CppTypeEnum;
typedef enum
{
	IL2CPP_TOKEN_MODULE = 0x00000000,
	IL2CPP_TOKEN_TYPE_REF = 0x01000000,
	IL2CPP_TOKEN_TYPE_DEF = 0x02000000,
	IL2CPP_TOKEN_FIELD_DEF = 0x04000000,
	IL2CPP_TOKEN_METHOD_DEF = 0x06000000,
	IL2CPP_TOKEN_PARAM_DEF = 0x08000000,
	IL2CPP_TOKEN_INTERFACE_IMPL = 0x09000000,
	IL2CPP_TOKEN_MEMBER_REF = 0x0a000000,
	IL2CPP_TOKEN_CUSTOM_ATTRIBUTE = 0x0c000000,
	IL2CPP_TOKEN_PERMISSION = 0x0e000000,
	IL2CPP_TOKEN_SIGNATURE = 0x11000000,
	IL2CPP_TOKEN_EVENT = 0x14000000,
	IL2CPP_TOKEN_PROPERTY = 0x17000000,
	IL2CPP_TOKEN_MODULE_REF = 0x1a000000,
	IL2CPP_TOKEN_TYPE_SPEC = 0x1b000000,
	IL2CPP_TOKEN_ASSEMBLY = 0x20000000,
	IL2CPP_TOKEN_ASSEMBLY_REF = 0x23000000,
	IL2CPP_TOKEN_FILE = 0x26000000,
	IL2CPP_TOKEN_EXPORTED_TYPE = 0x27000000,
	IL2CPP_TOKEN_MANIFEST_RESOURCE = 0x28000000,
	IL2CPP_TOKEN_GENERIC_PARAM = 0x2a000000,
	IL2CPP_TOKEN_METHOD_SPEC = 0x2b000000,
} Il2CppTokenType;
typedef int32_t TypeIndex;
typedef int32_t TypeDefinitionIndex;
typedef int32_t FieldIndex;
typedef int32_t DefaultValueIndex;
typedef int32_t DefaultValueDataIndex;
typedef int32_t CustomAttributeIndex;
typedef int32_t ParameterIndex;
typedef int32_t MethodIndex;
typedef int32_t GenericMethodIndex;
typedef int32_t PropertyIndex;
typedef int32_t EventIndex;
typedef int32_t GenericContainerIndex;
typedef int32_t GenericParameterIndex;
typedef int16_t GenericParameterConstraintIndex;
typedef int32_t NestedTypeIndex;
typedef int32_t InterfacesIndex;
typedef int32_t VTableIndex;
typedef int32_t InterfaceOffsetIndex;
typedef int32_t RGCTXIndex;
typedef int32_t StringIndex;
typedef int32_t StringLiteralIndex;
typedef int32_t GenericInstIndex;
typedef int32_t ImageIndex;
typedef int32_t AssemblyIndex;
typedef int32_t InteropDataIndex;
static const TypeIndex kTypeIndexInvalid = -1;
static const TypeDefinitionIndex kTypeDefinitionIndexInvalid = -1;
static const DefaultValueDataIndex kDefaultValueIndexNull = -1;
static const CustomAttributeIndex kCustomAttributeIndexInvalid = -1;
static const EventIndex kEventIndexInvalid = -1;
static const FieldIndex kFieldIndexInvalid = -1;
static const MethodIndex kMethodIndexInvalid = -1;
static const PropertyIndex kPropertyIndexInvalid = -1;
static const GenericContainerIndex kGenericContainerIndexInvalid = -1;
static const GenericParameterIndex kGenericParameterIndexInvalid = -1;
static const RGCTXIndex kRGCTXIndexInvalid = -1;
static const StringLiteralIndex kStringLiteralIndexInvalid = -1;
static const InteropDataIndex kInteropDataIndexInvalid = -1;
typedef uint32_t EncodedMethodIndex;
typedef enum Il2CppMetadataUsage
{
	kIl2CppMetadataUsageInvalid,
	kIl2CppMetadataUsageTypeInfo,
	kIl2CppMetadataUsageIl2CppType,
	kIl2CppMetadataUsageMethodDef,
	kIl2CppMetadataUsageFieldInfo,
	kIl2CppMetadataUsageStringLiteral,
	kIl2CppMetadataUsageMethodRef,
} Il2CppMetadataUsage;
typedef struct Il2CppImage Il2CppImage;
typedef struct Il2CppType Il2CppType;
typedef struct Il2CppTypeDefinitionMetadata Il2CppTypeDefinitionMetadata;
typedef union Il2CppRGCTXDefinitionData
{
	int32_t rgctxDataDummy;
	MethodIndex methodIndex;
	TypeIndex typeIndex;
} Il2CppRGCTXDefinitionData;
typedef enum Il2CppRGCTXDataType
{
	IL2CPP_RGCTX_DATA_INVALID,
	IL2CPP_RGCTX_DATA_TYPE,
	IL2CPP_RGCTX_DATA_CLASS,
	IL2CPP_RGCTX_DATA_METHOD,
	IL2CPP_RGCTX_DATA_ARRAY,
} Il2CppRGCTXDataType;
typedef struct Il2CppRGCTXDefinition
{
	Il2CppRGCTXDataType type;
	Il2CppRGCTXDefinitionData data;
} Il2CppRGCTXDefinition;
typedef struct Il2CppInterfaceOffsetPair
{
	TypeIndex interfaceTypeIndex;
	int32_t offset;
} Il2CppInterfaceOffsetPair;
typedef struct Il2CppTypeDefinition
{
	StringIndex nameIndex;
	StringIndex namespaceIndex;
	TypeIndex byvalTypeIndex;
	TypeIndex byrefTypeIndex;
	TypeIndex declaringTypeIndex;
	TypeIndex parentIndex;
	TypeIndex elementTypeIndex;
	GenericContainerIndex genericContainerIndex;
	uint32_t flags;
	FieldIndex fieldStart;
	MethodIndex methodStart;
	EventIndex eventStart;
	PropertyIndex propertyStart;
	NestedTypeIndex nestedTypesStart;
	InterfacesIndex interfacesStart;
	VTableIndex vtableStart;
	InterfacesIndex interfaceOffsetsStart;
	uint16_t method_count;
	uint16_t property_count;
	uint16_t field_count;
	uint16_t event_count;
	uint16_t nested_type_count;
	uint16_t vtable_count;
	uint16_t interfaces_count;
	uint16_t interface_offsets_count;
	uint32_t bitfield;
	uint32_t token;
} Il2CppTypeDefinition;
typedef struct Il2CppFieldDefinition
{
	StringIndex nameIndex;
	TypeIndex typeIndex;
	uint32_t token;
} Il2CppFieldDefinition;
typedef struct Il2CppFieldDefaultValue
{
	FieldIndex fieldIndex;
	TypeIndex typeIndex;
	DefaultValueDataIndex dataIndex;
} Il2CppFieldDefaultValue;
typedef struct Il2CppFieldMarshaledSize
{
	FieldIndex fieldIndex;
	TypeIndex typeIndex;
	int32_t size;
} Il2CppFieldMarshaledSize;
typedef struct Il2CppFieldRef
{
	TypeIndex typeIndex;
	FieldIndex fieldIndex;
} Il2CppFieldRef;
typedef struct Il2CppParameterDefinition
{
	StringIndex nameIndex;
	uint32_t token;
	TypeIndex typeIndex;
} Il2CppParameterDefinition;
typedef struct Il2CppParameterDefaultValue
{
	ParameterIndex parameterIndex;
	TypeIndex typeIndex;
	DefaultValueDataIndex dataIndex;
} Il2CppParameterDefaultValue;
typedef struct Il2CppMethodDefinition
{
	StringIndex nameIndex;
	TypeDefinitionIndex declaringType;
	TypeIndex returnType;
	ParameterIndex parameterStart;
	GenericContainerIndex genericContainerIndex;
	uint32_t token;
	uint16_t flags;
	uint16_t iflags;
	uint16_t slot;
	uint16_t parameterCount;
} Il2CppMethodDefinition;
typedef struct Il2CppEventDefinition
{
	StringIndex nameIndex;
	TypeIndex typeIndex;
	MethodIndex add;
	MethodIndex remove;
	MethodIndex raise;
	uint32_t token;
} Il2CppEventDefinition;
typedef struct Il2CppPropertyDefinition
{
	StringIndex nameIndex;
	MethodIndex get;
	MethodIndex set;
	uint32_t attrs;
	uint32_t token;
} Il2CppPropertyDefinition;
typedef struct Il2CppMethodSpec
{
	MethodIndex methodDefinitionIndex;
	GenericInstIndex classIndexIndex;
	GenericInstIndex methodIndexIndex;
} Il2CppMethodSpec;
typedef struct Il2CppStringLiteral
{
	uint32_t length;
	StringLiteralIndex dataIndex;
} Il2CppStringLiteral;
typedef struct
{
	MethodIndex methodIndex;
	MethodIndex invokerIndex;
	MethodIndex adjustorThunkIndex;
} Il2CppGenericMethodIndices;
typedef struct Il2CppGenericMethodFunctionsDefinitions
{
	GenericMethodIndex genericMethodIndex;
	Il2CppGenericMethodIndices indices;
} Il2CppGenericMethodFunctionsDefinitions;
static const int kPublicKeyByteLength = 8;
typedef struct Il2CppAssemblyNameDefinition
{
	StringIndex nameIndex;
	StringIndex cultureIndex;
	StringIndex publicKeyIndex;
	uint32_t hash_alg;
	int32_t hash_len;
	uint32_t flags;
	int32_t major;
	int32_t minor;
	int32_t build;
	int32_t revision;
	uint8_t public_key_token[8];
} Il2CppAssemblyNameDefinition;
typedef struct Il2CppImageDefinition
{
	StringIndex nameIndex;
	AssemblyIndex assemblyIndex;
	TypeDefinitionIndex typeStart;
	uint32_t typeCount;
	TypeDefinitionIndex exportedTypeStart;
	uint32_t exportedTypeCount;
	MethodIndex entryPointIndex;
	uint32_t token;
	CustomAttributeIndex customAttributeStart;
	uint32_t customAttributeCount;
} Il2CppImageDefinition;
typedef struct Il2CppAssemblyDefinition
{
	ImageIndex imageIndex;
	uint32_t token;
	int32_t referencedAssemblyStart;
	int32_t referencedAssemblyCount;
	Il2CppAssemblyNameDefinition aname;
} Il2CppAssemblyDefinition;
typedef struct Il2CppMetadataUsageList
{
	uint32_t start;
	uint32_t count;
} Il2CppMetadataUsageList;
typedef struct Il2CppMetadataUsagePair
{
	uint32_t destinationIndex;
	uint32_t encodedSourceIndex;
} Il2CppMetadataUsagePair;
typedef struct Il2CppCustomAttributeTypeRange
{
	uint32_t token;
	int32_t start;
	int32_t count;
} Il2CppCustomAttributeTypeRange;
typedef struct Il2CppRange
{
	int32_t start;
	int32_t length;
} Il2CppRange;
typedef struct Il2CppWindowsRuntimeTypeNamePair
{
	StringIndex nameIndex;
	TypeIndex typeIndex;
} Il2CppWindowsRuntimeTypeNamePair;
#pragma pack(push, p1,4)
typedef struct Il2CppGlobalMetadataHeader
{
	int32_t sanity;
	int32_t version;
	int32_t stringLiteralOffset;
	int32_t stringLiteralCount;
	int32_t stringLiteralDataOffset;
	int32_t stringLiteralDataCount;
	int32_t stringOffset;
	int32_t stringCount;
	int32_t eventsOffset;
	int32_t eventsCount;
	int32_t propertiesOffset;
	int32_t propertiesCount;
	int32_t methodsOffset;
	int32_t methodsCount;
	int32_t parameterDefaultValuesOffset;
	int32_t parameterDefaultValuesCount;
	int32_t fieldDefaultValuesOffset;
	int32_t fieldDefaultValuesCount;
	int32_t fieldAndParameterDefaultValueDataOffset;
	int32_t fieldAndParameterDefaultValueDataCount;
	int32_t fieldMarshaledSizesOffset;
	int32_t fieldMarshaledSizesCount;
	int32_t parametersOffset;
	int32_t parametersCount;
	int32_t fieldsOffset;
	int32_t fieldsCount;
	int32_t genericParametersOffset;
	int32_t genericParametersCount;
	int32_t genericParameterConstraintsOffset;
	int32_t genericParameterConstraintsCount;
	int32_t genericContainersOffset;
	int32_t genericContainersCount;
	int32_t nestedTypesOffset;
	int32_t nestedTypesCount;
	int32_t interfacesOffset;
	int32_t interfacesCount;
	int32_t vtableMethodsOffset;
	int32_t vtableMethodsCount;
	int32_t interfaceOffsetsOffset;
	int32_t interfaceOffsetsCount;
	int32_t typeDefinitionsOffset;
	int32_t typeDefinitionsCount;
	int32_t imagesOffset;
	int32_t imagesCount;
	int32_t assembliesOffset;
	int32_t assembliesCount;
	int32_t metadataUsageListsOffset;
	int32_t metadataUsageListsCount;
	int32_t metadataUsagePairsOffset;
	int32_t metadataUsagePairsCount;
	int32_t fieldRefsOffset;
	int32_t fieldRefsCount;
	int32_t referencedAssembliesOffset;
	int32_t referencedAssembliesCount;
	int32_t attributesInfoOffset;
	int32_t attributesInfoCount;
	int32_t attributeTypesOffset;
	int32_t attributeTypesCount;
	int32_t unresolvedVirtualCallParameterTypesOffset;
	int32_t unresolvedVirtualCallParameterTypesCount;
	int32_t unresolvedVirtualCallParameterRangesOffset;
	int32_t unresolvedVirtualCallParameterRangesCount;
	int32_t windowsRuntimeTypeNamesOffset;
	int32_t windowsRuntimeTypeNamesSize;
	int32_t exportedTypeDefinitionsOffset;
	int32_t exportedTypeDefinitionsCount;
} Il2CppGlobalMetadataHeader;
#pragma pack(pop, p1)
typedef struct Il2CppClass Il2CppClass;
typedef struct MethodInfo MethodInfo;
typedef struct Il2CppType Il2CppType;
typedef struct Il2CppArrayType
{
	const Il2CppType *etype;
	uint8_t rank;
	uint8_t numsizes;
	uint8_t numlobounds;
	int *sizes;
	int *lobounds;
} Il2CppArrayType;
typedef struct Il2CppGenericInst
{
	uint32_t type_argc;
	const Il2CppType **type_argv;
} Il2CppGenericInst;
typedef struct Il2CppGenericContext
{
	const Il2CppGenericInst *class_inst;
	const Il2CppGenericInst *method_inst;
} Il2CppGenericContext;
typedef struct Il2CppGenericParameter
{
	GenericContainerIndex ownerIndex;
	StringIndex nameIndex;
	GenericParameterConstraintIndex constraintsStart;
	int16_t constraintsCount;
	uint16_t num;
	uint16_t flags;
} Il2CppGenericParameter;
typedef struct Il2CppGenericContainer
{
	int32_t ownerIndex;
	int32_t type_argc;
	int32_t is_method;
	GenericParameterIndex genericParameterStart;
} Il2CppGenericContainer;
typedef struct Il2CppGenericClass
{
	TypeDefinitionIndex typeDefinitionIndex;
	Il2CppGenericContext context;
	Il2CppClass *cached_class;
} Il2CppGenericClass;
typedef struct Il2CppGenericMethod
{
	const MethodInfo *methodDefinition;
	Il2CppGenericContext context;
} Il2CppGenericMethod;
typedef struct Il2CppType
{
	union
	{
		void *dummy;
		TypeDefinitionIndex klassIndex;
		const Il2CppType *type;
		Il2CppArrayType *array;
		GenericParameterIndex genericParameterIndex;
		Il2CppGenericClass *generic_class;
	} data;
	unsigned int attrs : 16;
	Il2CppTypeEnum type : 8;
	unsigned int num_mods : 6;
	unsigned int byref : 1;
	unsigned int pinned : 1;
} Il2CppType;
typedef enum Il2CppCallConvention
{
	IL2CPP_CALL_DEFAULT,
	IL2CPP_CALL_C,
	IL2CPP_CALL_STDCALL,
	IL2CPP_CALL_THISCALL,
	IL2CPP_CALL_FASTCALL,
	IL2CPP_CALL_VARARG
} Il2CppCallConvention;
typedef enum Il2CppCharSet
{
	CHARSET_ANSI,
	CHARSET_UNICODE,
	CHARSET_NOT_SPECIFIED
} Il2CppCharSet;
typedef struct Il2CppHString__
{
	int unused;
} Il2CppHString__;
typedef Il2CppHString__ *Il2CppHString;
typedef struct Il2CppHStringHeader
{
	union
	{
		void *Reserved1;
		char Reserved2[24];
	} Reserved;
} Il2CppHStringHeader;
typedef struct Il2CppGuid
{
	uint32_t data1;
	uint16_t data2;
	uint16_t data3;
	uint8_t data4[8];
} Il2CppGuid;
typedef struct Il2CppSafeArrayBound
{
	uint32_t element_count;
	int32_t lower_bound;
} Il2CppSafeArrayBound;
typedef struct Il2CppSafeArray
{
	uint16_t dimension_count;
	uint16_t features;
	uint32_t element_size;
	uint32_t lock_count;
	void *data;
	Il2CppSafeArrayBound bounds[1];
} Il2CppSafeArray;
typedef struct Il2CppWin32Decimal
{
	uint16_t reserved;
	union
	{
		struct
		{
			uint8_t scale;
			uint8_t sign;
		} s;
		uint16_t signscale;
	} u;
	uint32_t hi32;
	union
	{
		struct
		{
			uint32_t lo32;
			uint32_t mid32;
		} s2;
		uint64_t lo64;
	} u2;
} Il2CppWin32Decimal;
typedef int16_t IL2CPP_VARIANT_BOOL;
typedef enum Il2CppVarType
{
	IL2CPP_VT_EMPTY = 0,
	IL2CPP_VT_NULL = 1,
	IL2CPP_VT_I2 = 2,
	IL2CPP_VT_I4 = 3,
	IL2CPP_VT_R4 = 4,
	IL2CPP_VT_R8 = 5,
	IL2CPP_VT_CY = 6,
	IL2CPP_VT_DATE = 7,
	IL2CPP_VT_BSTR = 8,
	IL2CPP_VT_DISPATCH = 9,
	IL2CPP_VT_ERROR = 10,
	IL2CPP_VT_BOOL = 11,
	IL2CPP_VT_VARIANT = 12,
	IL2CPP_VT_UNKNOWN = 13,
	IL2CPP_VT_DECIMAL = 14,
	IL2CPP_VT_I1 = 16,
	IL2CPP_VT_UI1 = 17,
	IL2CPP_VT_UI2 = 18,
	IL2CPP_VT_UI4 = 19,
	IL2CPP_VT_I8 = 20,
	IL2CPP_VT_UI8 = 21,
	IL2CPP_VT_INT = 22,
	IL2CPP_VT_UINT = 23,
	IL2CPP_VT_VOID = 24,
	IL2CPP_VT_HRESULT = 25,
	IL2CPP_VT_PTR = 26,
	IL2CPP_VT_SAFEARRAY = 27,
	IL2CPP_VT_CARRAY = 28,
	IL2CPP_VT_USERDEFINED = 29,
	IL2CPP_VT_LPSTR = 30,
	IL2CPP_VT_LPWSTR = 31,
	IL2CPP_VT_RECORD = 36,
	IL2CPP_VT_INT_PTR = 37,
	IL2CPP_VT_UINT_PTR = 38,
	IL2CPP_VT_FILETIME = 64,
	IL2CPP_VT_BLOB = 65,
	IL2CPP_VT_STREAM = 66,
	IL2CPP_VT_STORAGE = 67,
	IL2CPP_VT_STREAMED_OBJECT = 68,
	IL2CPP_VT_STORED_OBJECT = 69,
	IL2CPP_VT_BLOB_OBJECT = 70,
	IL2CPP_VT_CF = 71,
	IL2CPP_VT_CLSID = 72,
	IL2CPP_VT_VERSIONED_STREAM = 73,
	IL2CPP_VT_BSTR_BLOB = 0xfff,
	IL2CPP_VT_VECTOR = 0x1000,
	IL2CPP_VT_ARRAY = 0x2000,
	IL2CPP_VT_BYREF = 0x4000,
	IL2CPP_VT_RESERVED = 0x8000,
	IL2CPP_VT_ILLEGAL = 0xffff,
	IL2CPP_VT_ILLEGALMASKED = 0xfff,
	IL2CPP_VT_TYPEMASK = 0xfff,
} Il2CppVarType;
typedef struct Il2CppVariant Il2CppVariant;
typedef struct Il2CppIUnknown Il2CppIUnknown;
typedef struct Il2CppVariant
{
	union
	{
		struct __tagVARIANT
		{
			uint16_t type;
			uint16_t reserved1;
			uint16_t reserved2;
			uint16_t reserved3;
			union
			{
				int64_t llVal;
				int32_t lVal;
				uint8_t bVal;
				int16_t iVal;
				float fltVal;
				double dblVal;
				IL2CPP_VARIANT_BOOL boolVal;
				int32_t scode;
				int64_t cyVal;
				double date;
				Il2CppChar *bstrVal;
				Il2CppIUnknown *punkVal;
				void *pdispVal;
				Il2CppSafeArray *parray;
				uint8_t *pbVal;
				int16_t *piVal;
				int32_t *plVal;
				int64_t *pllVal;
				float *pfltVal;
				double *pdblVal;
				IL2CPP_VARIANT_BOOL *pboolVal;
				int32_t *pscode;
				int64_t *pcyVal;
				double *pdate;
				Il2CppChar *pbstrVal;
				Il2CppIUnknown **ppunkVal;
				void **ppdispVal;
				Il2CppSafeArray **pparray;
				struct Il2CppVariant *pvarVal;
				void *byref;
				char cVal;
				uint16_t uiVal;
				uint32_t ulVal;
				uint64_t ullVal;
				int intVal;
				unsigned int uintVal;
				Il2CppWin32Decimal *pdecVal;
				char *pcVal;
				uint16_t *puiVal;
				uint32_t *pulVal;
				uint64_t *pullVal;
				int *pintVal;
				unsigned int *puintVal;
				struct __tagBRECORD
				{
					void *pvRecord;
					void *pRecInfo;
				} n4;
			} n3;
		} n2;
		Il2CppWin32Decimal decVal;
	} n1;
} Il2CppVariant;
typedef struct Il2CppFileTime
{
	uint32_t low;
	uint32_t high;
} Il2CppFileTime;
typedef struct Il2CppStatStg
{
	Il2CppChar *name;
	uint32_t type;
	uint64_t size;
	Il2CppFileTime mtime;
	Il2CppFileTime ctime;
	Il2CppFileTime atime;
	uint32_t mode;
	uint32_t locks;
	Il2CppGuid clsid;
	uint32_t state;
	uint32_t reserved;
} Il2CppStatStg;
typedef enum Il2CppWindowsRuntimeTypeKind
{
	kTypeKindPrimitive = 0,
	kTypeKindMetadata,
	kTypeKindCustom
} Il2CppWindowsRuntimeTypeKind;
typedef struct Il2CppWindowsRuntimeTypeName
{
	Il2CppHString typeName;
	enum Il2CppWindowsRuntimeTypeKind typeKind;
} Il2CppWindowsRuntimeTypeName;
typedef void (*PInvokeMarshalToNativeFunc)(void *managedStructure, void *marshaledStructure);
typedef void (*PInvokeMarshalFromNativeFunc)(void *marshaledStructure, void *managedStructure);
typedef void (*PInvokeMarshalCleanupFunc)(void *marshaledStructure);
typedef struct Il2CppIUnknown *(*CreateCCWFunc)(Il2CppObject *obj);
typedef struct Il2CppInteropData
{
	Il2CppMethodPointer delegatePInvokeWrapperFunction;
	PInvokeMarshalToNativeFunc pinvokeMarshalToNativeFunction;
	PInvokeMarshalFromNativeFunc pinvokeMarshalFromNativeFunction;
	PInvokeMarshalCleanupFunc pinvokeMarshalCleanupFunction;
	CreateCCWFunc createCCWFunction;
	const Il2CppGuid *guid;
	const Il2CppType *type;
} Il2CppInteropData;
typedef struct Il2CppClass Il2CppClass;
typedef struct Il2CppGuid Il2CppGuid;
typedef struct Il2CppImage Il2CppImage;
typedef struct Il2CppAppDomain Il2CppAppDomain;
typedef struct Il2CppAppDomainSetup Il2CppAppDomainSetup;
typedef struct Il2CppDelegate Il2CppDelegate;
typedef struct Il2CppAppContext Il2CppAppContext;
typedef struct Il2CppNameToTypeDefinitionIndexHashTable Il2CppNameToTypeDefinitionIndexHashTable;
typedef struct Il2CppCodeGenModule Il2CppCodeGenModule;
typedef struct VirtualInvokeData
{
	Il2CppMethodPointer methodPtr;
	const MethodInfo *method;
} VirtualInvokeData;
typedef enum Il2CppTypeNameFormat
{
	IL2CPP_TYPE_NAME_FORMAT_IL,
	IL2CPP_TYPE_NAME_FORMAT_REFLECTION,
	IL2CPP_TYPE_NAME_FORMAT_FULL_NAME,
	IL2CPP_TYPE_NAME_FORMAT_ASSEMBLY_QUALIFIED
} Il2CppTypeNameFormat;
typedef struct Il2CppDefaults
{
	Il2CppImage *corlib;
	Il2CppClass *object_class;
	Il2CppClass *byte_class;
	Il2CppClass *void_class;
	Il2CppClass *boolean_class;
	Il2CppClass *sbyte_class;
	Il2CppClass *int16_class;
	Il2CppClass *uint16_class;
	Il2CppClass *int32_class;
	Il2CppClass *uint32_class;
	Il2CppClass *int_class;
	Il2CppClass *uint_class;
	Il2CppClass *int64_class;
	Il2CppClass *uint64_class;
	Il2CppClass *single_class;
	Il2CppClass *double_class;
	Il2CppClass *char_class;
	Il2CppClass *string_class;
	Il2CppClass *enum_class;
	Il2CppClass *array_class;
	Il2CppClass *delegate_class;
	Il2CppClass *multicastdelegate_class;
	Il2CppClass *asyncresult_class;
	Il2CppClass *manualresetevent_class;
	Il2CppClass *typehandle_class;
	Il2CppClass *fieldhandle_class;
	Il2CppClass *methodhandle_class;
	Il2CppClass *systemtype_class;
	Il2CppClass *monotype_class;
	Il2CppClass *exception_class;
	Il2CppClass *threadabortexception_class;
	Il2CppClass *thread_class;
	Il2CppClass *internal_thread_class;
	Il2CppClass *appdomain_class;
	Il2CppClass *appdomain_setup_class;
	Il2CppClass *field_info_class;
	Il2CppClass *method_info_class;
	Il2CppClass *property_info_class;
	Il2CppClass *event_info_class;
	Il2CppClass *mono_event_info_class;
	Il2CppClass *stringbuilder_class;
	Il2CppClass *stack_frame_class;
	Il2CppClass *stack_trace_class;
	Il2CppClass *marshal_class;
	Il2CppClass *typed_reference_class;
	Il2CppClass *marshalbyrefobject_class;
	Il2CppClass *generic_ilist_class;
	Il2CppClass *generic_icollection_class;
	Il2CppClass *generic_ienumerable_class;
	Il2CppClass *generic_ireadonlylist_class;
	Il2CppClass *generic_ireadonlycollection_class;
	Il2CppClass *runtimetype_class;
	Il2CppClass *generic_nullable_class;
	Il2CppClass *il2cpp_com_object_class;
	Il2CppClass *attribute_class;
	Il2CppClass *customattribute_data_class;
	Il2CppClass *version;
	Il2CppClass *culture_info;
	Il2CppClass *async_call_class;
	Il2CppClass *assembly_class;
	Il2CppClass *mono_assembly_class;
	Il2CppClass *assembly_name_class;
	Il2CppClass *mono_field_class;
	Il2CppClass *mono_method_class;
	Il2CppClass *mono_method_info_class;
	Il2CppClass *mono_property_info_class;
	Il2CppClass *parameter_info_class;
	Il2CppClass *mono_parameter_info_class;
	Il2CppClass *module_class;
	Il2CppClass *pointer_class;
	Il2CppClass *system_exception_class;
	Il2CppClass *argument_exception_class;
	Il2CppClass *wait_handle_class;
	Il2CppClass *safe_handle_class;
	Il2CppClass *sort_key_class;
	Il2CppClass *dbnull_class;
	Il2CppClass *error_wrapper_class;
	Il2CppClass *missing_class;
	Il2CppClass *value_type_class;
	Il2CppClass *threadpool_wait_callback_class;
	MethodInfo *threadpool_perform_wait_callback_method;
	Il2CppClass *mono_method_message_class;
	Il2CppClass *ireference_class;
	Il2CppClass *ireferencearray_class;
	Il2CppClass *ikey_value_pair_class;
	Il2CppClass *key_value_pair_class;
	Il2CppClass *windows_foundation_uri_class;
	Il2CppClass *windows_foundation_iuri_runtime_class_class;
	Il2CppClass *system_uri_class;
	Il2CppClass *system_guid_class;
	Il2CppClass *sbyte_shared_enum;
	Il2CppClass *int16_shared_enum;
	Il2CppClass *int32_shared_enum;
	Il2CppClass *int64_shared_enum;
	Il2CppClass *byte_shared_enum;
	Il2CppClass *uint16_shared_enum;
	Il2CppClass *uint32_shared_enum;
	Il2CppClass *uint64_shared_enum;
} Il2CppDefaults;
extern Il2CppDefaults il2cpp_defaults;
typedef struct Il2CppClass Il2CppClass;
typedef struct MethodInfo MethodInfo;
typedef struct FieldInfo FieldInfo;
typedef struct Il2CppObject Il2CppObject;
typedef struct MemberInfo MemberInfo;
typedef struct CustomAttributesCache
{
	int count;
	Il2CppObject **attributes;
} CustomAttributesCache;
typedef void (*CustomAttributesCacheGenerator)(CustomAttributesCache *);
typedef struct FieldInfo
{
	const char *name;
	const Il2CppType *type;
	Il2CppClass *parent;
	int32_t offset;
	uint32_t token;
} FieldInfo;
typedef struct PropertyInfo
{
	Il2CppClass *parent;
	const char *name;
	const MethodInfo *get;
	const MethodInfo *set;
	uint32_t attrs;
	uint32_t token;
} PropertyInfo;
typedef struct EventInfo
{
	const char *name;
	const Il2CppType *eventType;
	Il2CppClass *parent;
	const MethodInfo *add;
	const MethodInfo *remove;
	const MethodInfo *raise;
	uint32_t token;
} EventInfo;
typedef struct ParameterInfo
{
	const char *name;
	int32_t position;
	uint32_t token;
	const Il2CppType *parameter_type;
} ParameterInfo;
typedef void *(*InvokerMethod)(Il2CppMethodPointer, const MethodInfo *, void *, void **);
typedef enum MethodVariableKind
{
	kMethodVariableKind_This,
	kMethodVariableKind_Parameter,
	kMethodVariableKind_LocalVariable
} MethodVariableKind;
typedef enum SequencePointKind
{
	kSequencePointKind_Normal,
	kSequencePointKind_StepOut
} SequencePointKind;
typedef struct Il2CppMethodExecutionContextInfo
{
	TypeIndex typeIndex;
	int32_t nameIndex;
	int32_t scopeIndex;
} Il2CppMethodExecutionContextInfo;
typedef struct Il2CppMethodExecutionContextInfoIndex
{
	int32_t startIndex;
	int32_t count;
} Il2CppMethodExecutionContextInfoIndex;
typedef struct Il2CppMethodScope
{
	int32_t startOffset;
	int32_t endOffset;
} Il2CppMethodScope;
typedef struct Il2CppMethodHeaderInfo
{
	int32_t code_size;
	int32_t startScope;
	int32_t numScopes;
} Il2CppMethodHeaderInfo;
typedef struct Il2CppSequencePointSourceFile
{
	const char *file;
	uint8_t hash[16];
} Il2CppSequencePointSourceFile;
typedef struct Il2CppTypeSourceFilePair
{
	TypeDefinitionIndex klassIndex;
	int32_t sourceFileIndex;
} Il2CppTypeSourceFilePair;
typedef struct Il2CppSequencePoint
{
	MethodIndex methodDefinitionIndex;
	int32_t sourceFileIndex;
	int32_t lineStart, lineEnd;
	int32_t columnStart, columnEnd;
	int32_t ilOffset;
	SequencePointKind kind;
	int32_t isActive;
	int32_t id;
} Il2CppSequencePoint;
typedef struct Il2CppCatchPoint
{
	MethodIndex methodDefinitionIndex;
	TypeIndex catchTypeIndex;
	int32_t ilOffset;
	int32_t tryId;
	int32_t parentTryId;
} Il2CppCatchPoint;
typedef struct Il2CppDebuggerMetadataRegistration
{
	Il2CppMethodExecutionContextInfo *methodExecutionContextInfos;
	Il2CppMethodExecutionContextInfoIndex *methodExecutionContextInfoIndexes;
	Il2CppMethodScope *methodScopes;
	Il2CppMethodHeaderInfo *methodHeaderInfos;
	Il2CppSequencePointSourceFile *sequencePointSourceFiles;
	int32_t numSequencePoints;
	Il2CppSequencePoint *sequencePoints;
	int32_t numCatchPoints;
	Il2CppCatchPoint *catchPoints;
	int32_t numTypeSourceFileEntries;
	Il2CppTypeSourceFilePair *typeSourceFiles;
	const char **methodExecutionContextInfoStrings;
} Il2CppDebuggerMetadataRegistration;
typedef union Il2CppRGCTXData
{
	void *rgctxDataDummy;
	const MethodInfo *method;
	const Il2CppType *type;
	Il2CppClass *klass;
} Il2CppRGCTXData;
typedef struct MethodInfo
{
	Il2CppMethodPointer methodPointer;
	InvokerMethod invoker_method;
	const char *name;
	Il2CppClass *klass;
	const Il2CppType *return_type;
	const ParameterInfo *parameters;
	union
	{
		const Il2CppRGCTXData *rgctx_data;
		const Il2CppMethodDefinition *methodDefinition;
	} Il2CppVariant;
	union
	{
		const Il2CppGenericMethod *genericMethod;
		const Il2CppGenericContainer *genericContainer;
	};
	uint32_t token;
	uint16_t flags;
	uint16_t iflags;
	uint16_t slot;
	uint8_t parameters_count;
	uint8_t is_generic : 1;
	uint8_t is_inflated : 1;
	uint8_t wrapper_type : 1;
	uint8_t is_marshaled_from_native : 1;
	uint8_t is_constructor : 1;
} MethodInfo;
typedef struct Il2CppRuntimeInterfaceOffsetPair
{
	Il2CppClass *interfaceType;
	int32_t offset;
} Il2CppRuntimeInterfaceOffsetPair;
typedef struct Il2CppClass
{
	const Il2CppImage *image;
	void *gc_desc;
	const char *name;
	const char *namespaze;
	Il2CppType byval_arg;
	Il2CppType this_arg;
	Il2CppClass *element_class;
	Il2CppClass *castClass;
	Il2CppClass *declaringType;
	Il2CppClass *parent;
	Il2CppGenericClass *generic_class;
	const Il2CppTypeDefinition *typeDefinition;
	const Il2CppInteropData *interopData;
	Il2CppClass *klass;
	FieldInfo *fields;
	const EventInfo *events;
	const PropertyInfo *properties;
	const MethodInfo **methods;
	Il2CppClass **nestedTypes;
	Il2CppClass **implementedInterfaces;
	Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
	void *static_fields;
	const Il2CppRGCTXData *rgctx_data;
	struct Il2CppClass **typeHierarchy;
	void *unity_user_data;
	uint32_t initializationExceptionGCHandle;
	uint32_t cctor_started;
	uint32_t cctor_finished;
	__declspec(align(8)) size_t cctor_thread;
	GenericContainerIndex genericContainerIndex;
	uint32_t instance_size;
	uint32_t actualSize;
	uint32_t element_size;
	int32_t native_size;
	uint32_t static_fields_size;
	uint32_t thread_static_fields_size;
	int32_t thread_static_fields_offset;
	uint32_t flags;
	uint32_t token;
	uint16_t method_count;
	uint16_t property_count;
	uint16_t field_count;
	uint16_t event_count;
	uint16_t nested_type_count;
	uint16_t vtable_count;
	uint16_t interfaces_count;
	uint16_t interface_offsets_count;
	uint8_t typeHierarchyDepth;
	uint8_t genericRecursionDepth;
	uint8_t rank;
	uint8_t minimumAlignment;
	uint8_t naturalAligment;
	uint8_t packingSize;
	uint8_t initialized_and_no_error : 1;
	uint8_t valuetype : 1;
	uint8_t initialized : 1;
	uint8_t enumtype : 1;
	uint8_t is_generic : 1;
	uint8_t has_references : 1;
	uint8_t init_pending : 1;
	uint8_t size_inited : 1;
	uint8_t has_finalize : 1;
	uint8_t has_cctor : 1;
	uint8_t is_blittable : 1;
	uint8_t is_import_or_windows_runtime : 1;
	uint8_t is_vtable_initialized : 1;
	uint8_t has_initialization_error : 1;
	VirtualInvokeData vtable[32];
} Il2CppClass;

typedef struct Il2CppClass_0
{
	const Il2CppImage *image;
	void *gc_desc;
	const char *name;
	const char *namespaze;
	Il2CppType byval_arg;
	Il2CppType this_arg;
	Il2CppClass *element_class;
	Il2CppClass *castClass;
	Il2CppClass *declaringType;
	Il2CppClass *parent;
	Il2CppGenericClass *generic_class;
	const Il2CppTypeDefinition *typeDefinition;
	const Il2CppInteropData *interopData;
	Il2CppClass *klass;
	FieldInfo *fields;
	const EventInfo *events;
	const PropertyInfo *properties;
	const MethodInfo **methods;
	Il2CppClass **nestedTypes;
	Il2CppClass **implementedInterfaces;
} Il2CppClass_0;

typedef struct Il2CppClass_1
{
	struct Il2CppClass **typeHierarchy;
	void *unity_user_data;
	uint32_t initializationExceptionGCHandle;
	uint32_t cctor_started;
	uint32_t cctor_finished;
#ifdef IS_32BIT
	uint32_t cctor_thread;
#else
	__declspec(align(8)) size_t cctor_thread;
#endif
	GenericContainerIndex genericContainerIndex;
	uint32_t instance_size;
	uint32_t actualSize;
	uint32_t element_size;
	int32_t native_size;
	uint32_t static_fields_size;
	uint32_t thread_static_fields_size;
	int32_t thread_static_fields_offset;
	uint32_t flags;
	uint32_t token;
	uint16_t method_count;
	uint16_t property_count;
	uint16_t field_count;
	uint16_t event_count;
	uint16_t nested_type_count;
	uint16_t vtable_count;
	uint16_t interfaces_count;
	uint16_t interface_offsets_count;
	uint8_t typeHierarchyDepth;
	uint8_t genericRecursionDepth;
	uint8_t rank;
	uint8_t minimumAlignment;
	uint8_t naturalAligment;
	uint8_t packingSize;
	uint8_t initialized_and_no_error : 1;
	uint8_t valuetype : 1;
	uint8_t initialized : 1;
	uint8_t enumtype : 1;
	uint8_t is_generic : 1;
	uint8_t has_references : 1;
	uint8_t init_pending : 1;
	uint8_t size_inited : 1;
	uint8_t has_finalize : 1;
	uint8_t has_cctor : 1;
	uint8_t is_blittable : 1;
	uint8_t is_import_or_windows_runtime : 1;
	uint8_t is_vtable_initialized : 1;
	uint8_t has_initialization_error : 1;
} Il2CppClass_1;

typedef struct __declspec(align(8)) Il2CppClass_Merged
{
	struct Il2CppClass_0 _0;
	Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
	void *static_fields;
	const Il2CppRGCTXData *rgctx_data;
	struct Il2CppClass_1 _1;
	VirtualInvokeData vtable[32];
} Il2CppClass_Merged;

typedef struct Il2CppTypeDefinitionSizes
{
	uint32_t instance_size;
	int32_t native_size;
	uint32_t static_fields_size;
	uint32_t thread_static_fields_size;
} Il2CppTypeDefinitionSizes;
typedef struct Il2CppDomain
{
	Il2CppAppDomain *domain;
	Il2CppAppDomainSetup *setup;
	Il2CppAppContext *default_context;
	const char *friendly_name;
	uint32_t domain_id;
	volatile int threadpool_jobs;
	void *agent_info;
} Il2CppDomain;
typedef struct Il2CppAssemblyName
{
	const char *name;
	const char *culture;
	const uint8_t *public_key;
	uint32_t hash_alg;
	int32_t hash_len;
	uint32_t flags;
	int32_t major;
	int32_t minor;
	int32_t build;
	int32_t revision;
	uint8_t public_key_token[8];
} Il2CppAssemblyName;
typedef struct Il2CppImage
{
	const char *name;
	const char *nameNoExt;
	Il2CppAssembly *assembly;
	TypeDefinitionIndex typeStart;
	uint32_t typeCount;
	TypeDefinitionIndex exportedTypeStart;
	uint32_t exportedTypeCount;
	CustomAttributeIndex customAttributeStart;
	uint32_t customAttributeCount;
	MethodIndex entryPointIndex;
	Il2CppNameToTypeDefinitionIndexHashTable *nameToClassHashTable;
	const Il2CppCodeGenModule *codeGenModule;
	uint32_t token;
	uint8_t dynamic;
} Il2CppImage;
typedef struct Il2CppAssembly
{
	Il2CppImage *image;
	uint32_t token;
	int32_t referencedAssemblyStart;
	int32_t referencedAssemblyCount;
	Il2CppAssemblyName aname;
} Il2CppAssembly;
typedef struct Il2CppCodeGenOptions
{
	uint8_t enablePrimitiveValueTypeGenericSharing;
	int maximumRuntimeGenericDepth;
} Il2CppCodeGenOptions;
typedef struct Il2CppTokenIndexPair
{
	uint32_t token;
	int32_t index;
} Il2CppTokenIndexPair;
typedef struct Il2CppTokenRangePair
{
	uint32_t token;
	Il2CppRange range;
} Il2CppTokenRangePair;
typedef struct Il2CppTokenIndexMethodTuple
{
	uint32_t token;
	int32_t index;
	void **method;
	uint32_t genericMethodIndex;
} Il2CppTokenIndexMethodTuple;
typedef struct Il2CppTokenAdjustorThunkPair
{
	uint32_t token;
	Il2CppMethodPointer adjustorThunk;
} Il2CppTokenAdjustorThunkPair;
typedef struct Il2CppWindowsRuntimeFactoryTableEntry
{
	const Il2CppType *type;
	Il2CppMethodPointer createFactoryFunction;
} Il2CppWindowsRuntimeFactoryTableEntry;
typedef struct Il2CppCodeGenModule
{
	const char *moduleName;
	const uint32_t methodPointerCount;
	const Il2CppMethodPointer *methodPointers;
	const uint32_t adjustorThunkCount;
	const Il2CppTokenAdjustorThunkPair *adjustorThunks;
	const int32_t *invokerIndices;
	const uint32_t reversePInvokeWrapperCount;
	const Il2CppTokenIndexMethodTuple *reversePInvokeWrapperIndices;
	const uint32_t rgctxRangesCount;
	const Il2CppTokenRangePair *rgctxRanges;
	const uint32_t rgctxsCount;
	const Il2CppRGCTXDefinition *rgctxs;
	const Il2CppDebuggerMetadataRegistration *debuggerMetadata;
} Il2CppCodeGenModule;
typedef struct Il2CppCodeRegistration
{
	uint32_t reversePInvokeWrapperCount;
	const Il2CppMethodPointer *reversePInvokeWrappers;
	uint32_t genericMethodPointersCount;
	const Il2CppMethodPointer *genericMethodPointers;
	const Il2CppMethodPointer *genericAdjustorThunks;
	uint32_t invokerPointersCount;
	const InvokerMethod *invokerPointers;
	CustomAttributeIndex customAttributeCount;
	const CustomAttributesCacheGenerator *customAttributeGenerators;
	uint32_t unresolvedVirtualCallCount;
	const Il2CppMethodPointer *unresolvedVirtualCallPointers;
	uint32_t interopDataCount;
	Il2CppInteropData *interopData;
	uint32_t windowsRuntimeFactoryCount;
	Il2CppWindowsRuntimeFactoryTableEntry *windowsRuntimeFactoryTable;
	uint32_t codeGenModulesCount;
	const Il2CppCodeGenModule **codeGenModules;
} Il2CppCodeRegistration;
typedef struct Il2CppMetadataRegistration
{
	int32_t genericClassesCount;
	Il2CppGenericClass *const *genericClasses;
	int32_t genericInstsCount;
	const Il2CppGenericInst *const *genericInsts;
	int32_t genericMethodTableCount;
	const Il2CppGenericMethodFunctionsDefinitions *genericMethodTable;
	int32_t typesCount;
	const Il2CppType *const *types;
	int32_t methodSpecsCount;
	const Il2CppMethodSpec *methodSpecs;
	FieldIndex fieldOffsetsCount;
	const int32_t **fieldOffsets;
	TypeDefinitionIndex typeDefinitionsSizesCount;
	const Il2CppTypeDefinitionSizes **typeDefinitionsSizes;
	const size_t metadataUsagesCount;
	void **const *metadataUsages;
} Il2CppMetadataRegistration;
typedef struct Il2CppPerfCounters
{
	uint32_t jit_methods;
	uint32_t jit_bytes;
	uint32_t jit_time;
	uint32_t jit_failures;
	uint32_t exceptions_thrown;
	uint32_t exceptions_filters;
	uint32_t exceptions_finallys;
	uint32_t exceptions_depth;
	uint32_t aspnet_requests_queued;
	uint32_t aspnet_requests;
	uint32_t gc_collections0;
	uint32_t gc_collections1;
	uint32_t gc_collections2;
	uint32_t gc_promotions0;
	uint32_t gc_promotions1;
	uint32_t gc_promotion_finalizers;
	uint32_t gc_gen0size;
	uint32_t gc_gen1size;
	uint32_t gc_gen2size;
	uint32_t gc_lossize;
	uint32_t gc_fin_survivors;
	uint32_t gc_num_handles;
	uint32_t gc_allocated;
	uint32_t gc_induced;
	uint32_t gc_time;
	uint32_t gc_total_bytes;
	uint32_t gc_committed_bytes;
	uint32_t gc_reserved_bytes;
	uint32_t gc_num_pinned;
	uint32_t gc_sync_blocks;
	uint32_t remoting_calls;
	uint32_t remoting_channels;
	uint32_t remoting_proxies;
	uint32_t remoting_classes;
	uint32_t remoting_objects;
	uint32_t remoting_contexts;
	uint32_t loader_classes;
	uint32_t loader_total_classes;
	uint32_t loader_appdomains;
	uint32_t loader_total_appdomains;
	uint32_t loader_assemblies;
	uint32_t loader_total_assemblies;
	uint32_t loader_failures;
	uint32_t loader_bytes;
	uint32_t loader_appdomains_uloaded;
	uint32_t thread_contentions;
	uint32_t thread_queue_len;
	uint32_t thread_queue_max;
	uint32_t thread_num_logical;
	uint32_t thread_num_physical;
	uint32_t thread_cur_recognized;
	uint32_t thread_num_recognized;
	uint32_t interop_num_ccw;
	uint32_t interop_num_stubs;
	uint32_t interop_num_marshals;
	uint32_t security_num_checks;
	uint32_t security_num_link_checks;
	uint32_t security_time;
	uint32_t security_depth;
	uint32_t unused;
	uint64_t threadpool_workitems;
	uint64_t threadpool_ioworkitems;
	unsigned int threadpool_threads;
	unsigned int threadpool_iothreads;
} Il2CppPerfCounters;
typedef struct Il2CppClass Il2CppClass;
typedef struct MethodInfo MethodInfo;
typedef struct PropertyInfo PropertyInfo;
typedef struct FieldInfo FieldInfo;
typedef struct EventInfo EventInfo;
typedef struct Il2CppType Il2CppType;
typedef struct Il2CppAssembly Il2CppAssembly;
typedef struct Il2CppException Il2CppException;
typedef struct Il2CppImage Il2CppImage;
typedef struct Il2CppDomain Il2CppDomain;
typedef struct Il2CppString Il2CppString;
typedef struct Il2CppReflectionMethod Il2CppReflectionMethod;
typedef struct Il2CppAsyncCall Il2CppAsyncCall;
typedef struct Il2CppIUnknown Il2CppIUnknown;
typedef struct Il2CppWaitHandle Il2CppWaitHandle;
typedef struct MonitorData MonitorData;
typedef struct Il2CppReflectionAssembly Il2CppReflectionAssembly;
typedef Il2CppClass Il2CppVTable;
typedef struct Il2CppObject
{
	union
	{
		Il2CppClass *klass;
		Il2CppVTable *vtable;
	} Il2CppClass;
	MonitorData *monitor;
} Il2CppObject;
typedef int32_t il2cpp_array_lower_bound_t;
typedef struct Il2CppArrayBounds
{
	il2cpp_array_size_t length;
	il2cpp_array_lower_bound_t lower_bound;
} Il2CppArrayBounds;
typedef struct Il2CppArray
{
	Il2CppObject obj;
	Il2CppArrayBounds *bounds;
	il2cpp_array_size_t max_length;
} Il2CppArray;
typedef struct Il2CppArraySize
{
	Il2CppObject obj;
	Il2CppArrayBounds *bounds;
	il2cpp_array_size_t max_length;
	__declspec(align(8)) void *vector[32];
} Il2CppArraySize;
typedef struct Il2CppString
{
	Il2CppObject object;
	int32_t length;
	Il2CppChar chars[32];
} Il2CppString;
typedef struct Il2CppReflectionType
{
	Il2CppObject object;
	const Il2CppType *type;
} Il2CppReflectionType;
typedef struct Il2CppReflectionRuntimeType
{
	Il2CppReflectionType type;
	Il2CppObject *type_info;
	Il2CppObject *genericCache;
	Il2CppObject *serializationCtor;
} Il2CppReflectionRuntimeType;
typedef struct Il2CppReflectionMonoType
{
	Il2CppReflectionRuntimeType type;
} Il2CppReflectionMonoType;
typedef struct Il2CppReflectionEvent
{
	Il2CppObject object;
	Il2CppObject *cached_add_event;
} Il2CppReflectionEvent;
typedef struct Il2CppReflectionMonoEvent
{
	Il2CppReflectionEvent event;
	Il2CppReflectionType *reflectedType;
	const EventInfo *eventInfo;
} Il2CppReflectionMonoEvent;
typedef struct Il2CppReflectionMonoEventInfo
{
	Il2CppReflectionType *declaringType;
	Il2CppReflectionType *reflectedType;
	Il2CppString *name;
	Il2CppReflectionMethod *addMethod;
	Il2CppReflectionMethod *removeMethod;
	Il2CppReflectionMethod *raiseMethod;
	uint32_t eventAttributes;
	Il2CppArray *otherMethods;
} Il2CppReflectionMonoEventInfo;
typedef struct Il2CppReflectionField
{
	Il2CppObject object;
	Il2CppClass *klass;
	FieldInfo *field;
	Il2CppString *name;
	Il2CppReflectionType *type;
	uint32_t attrs;
} Il2CppReflectionField;
typedef struct Il2CppReflectionProperty
{
	Il2CppObject object;
	Il2CppClass *klass;
	const PropertyInfo *property;
} Il2CppReflectionProperty;
typedef struct Il2CppReflectionMethod
{
	Il2CppObject object;
	const MethodInfo *method;
	Il2CppString *name;
	Il2CppReflectionType *reftype;
} Il2CppReflectionMethod;
typedef struct Il2CppReflectionGenericMethod
{
	Il2CppReflectionMethod base;
} Il2CppReflectionGenericMethod;
typedef struct Il2CppMethodInfo
{
	Il2CppReflectionType *parent;
	Il2CppReflectionType *ret;
	uint32_t attrs;
	uint32_t implattrs;
	uint32_t callconv;
} Il2CppMethodInfo;
typedef struct Il2CppPropertyInfo
{
	Il2CppReflectionType *parent;
	Il2CppReflectionType *declaringType;
	Il2CppString *name;
	Il2CppReflectionMethod *get;
	Il2CppReflectionMethod *set;
	uint32_t attrs;
} Il2CppPropertyInfo;
typedef struct Il2CppReflectionParameter
{
	Il2CppObject object;
	Il2CppReflectionType *ClassImpl;
	Il2CppObject *DefaultValueImpl;
	Il2CppObject *MemberImpl;
	Il2CppString *NameImpl;
	int32_t PositionImpl;
	uint32_t AttrsImpl;
	Il2CppObject *MarshalAsImpl;
} Il2CppReflectionParameter;
typedef struct Il2CppReflectionModule
{
	Il2CppObject obj;
	const Il2CppImage *image;
	Il2CppReflectionAssembly *assembly;
	Il2CppString *fqname;
	Il2CppString *name;
	Il2CppString *scopename;
	uint8_t is_resource;
	uint32_t token;
} Il2CppReflectionModule;
typedef struct Il2CppReflectionAssemblyName
{
	Il2CppObject obj;
	Il2CppString *name;
	Il2CppString *codebase;
	int32_t major, minor, build, revision;
	Il2CppObject *cultureInfo;
	uint32_t flags;
	uint32_t hashalg;
	Il2CppObject *keypair;
	Il2CppArray *publicKey;
	Il2CppArray *keyToken;
	uint32_t versioncompat;
	Il2CppObject *version;
	uint32_t processor_architecture;
	uint32_t contentType;
} Il2CppReflectionAssemblyName;
typedef struct Il2CppReflectionAssembly
{
	Il2CppObject object;
	const Il2CppAssembly *assembly;
	Il2CppObject *resolve_event_holder;
	Il2CppObject *evidence;
	Il2CppObject *minimum;
	Il2CppObject *optional;
	Il2CppObject *refuse;
	Il2CppObject *granted;
	Il2CppObject *denied;
	uint8_t from_byte_array;
	Il2CppString *name;
} Il2CppReflectionAssembly;
typedef struct Il2CppReflectionMarshal
{
	Il2CppObject object;
	int32_t count;
	int32_t type;
	int32_t eltype;
	Il2CppString *guid;
	Il2CppString *mcookie;
	Il2CppString *marshaltype;
	Il2CppObject *marshaltyperef;
	int32_t param_num;
	uint8_t has_size;
} Il2CppReflectionMarshal;
typedef struct Il2CppReflectionPointer
{
	Il2CppObject object;
	void *data;
	Il2CppReflectionType *type;
} Il2CppReflectionPointer;
typedef struct Il2CppInternalThread
{
	Il2CppObject obj;
	int lock_thread_id;
	void *handle;
	void *native_handle;
	Il2CppArray *cached_culture_info;
	Il2CppChar *name;
	int name_len;
	uint32_t state;
	Il2CppObject *abort_exc;
	int abort_state_handle;
	uint64_t tid;
	intptr_t debugger_thread;
	void **static_data;
	void *runtime_thread_info;
	Il2CppObject *current_appcontext;
	Il2CppObject *root_domain_thread;
	Il2CppArray *_serialized_principal;
	int _serialized_principal_version;
	void *appdomain_refs;
	int32_t interruption_requested;
	void *synch_cs;
	uint8_t threadpool_thread;
	uint8_t thread_interrupt_requested;
	int stack_size;
	uint8_t apartment_state;
	int critical_region_level;
	int managed_id;
	uint32_t small_id;
	void *manage_callback;
	void *interrupt_on_stop;
	intptr_t flags;
	void *thread_pinning_ref;
	void *abort_protected_block_count;
	int32_t priority;
	void *owned_mutexes;
	void *suspended;
	int32_t self_suspended;
	size_t thread_state;
	size_t unused2;
	void *last;
} Il2CppInternalThread;
typedef struct Il2CppIOSelectorJob
{
	Il2CppObject object;
	int32_t operation;
	Il2CppObject *callback;
	Il2CppObject *state;
} Il2CppIOSelectorJob;
typedef enum
{
	Il2Cpp_CallType_Sync = 0,
	Il2Cpp_CallType_BeginInvoke = 1,
	Il2Cpp_CallType_EndInvoke = 2,
	Il2Cpp_CallType_OneWay = 3
} Il2CppCallType;
typedef struct Il2CppMethodMessage
{
	Il2CppObject obj;
	Il2CppReflectionMethod *method;
	Il2CppArray *args;
	Il2CppArray *names;
	Il2CppArray *arg_types;
	Il2CppObject *ctx;
	Il2CppObject *rval;
	Il2CppObject *exc;
	Il2CppAsyncResult *async_result;
	uint32_t call_type;
} Il2CppMethodMessage;
typedef struct Il2CppAppDomainSetup
{
	Il2CppObject object;
	Il2CppString *application_base;
	Il2CppString *application_name;
	Il2CppString *cache_path;
	Il2CppString *configuration_file;
	Il2CppString *dynamic_base;
	Il2CppString *license_file;
	Il2CppString *private_bin_path;
	Il2CppString *private_bin_path_probe;
	Il2CppString *shadow_copy_directories;
	Il2CppString *shadow_copy_files;
	uint8_t publisher_policy;
	uint8_t path_changed;
	int loader_optimization;
	uint8_t disallow_binding_redirects;
	uint8_t disallow_code_downloads;
	Il2CppObject *activation_arguments;
	Il2CppObject *domain_initializer;
	Il2CppObject *application_trust;
	Il2CppArray *domain_initializer_args;
	uint8_t disallow_appbase_probe;
	Il2CppArray *configuration_bytes;
	Il2CppArray *serialized_non_primitives;
} Il2CppAppDomainSetup;
typedef struct Il2CppThread
{
	Il2CppObject obj;
	Il2CppInternalThread *internal_thread;
	Il2CppObject *start_obj;
	Il2CppException *pending_exception;
	Il2CppObject *principal;
	int32_t principal_version;
	Il2CppDelegate *delegate;
	Il2CppObject *executionContext;
	uint8_t executionContextBelongsToOuterScope;
} Il2CppThread;
typedef struct Il2CppException
{
	Il2CppObject object;
	Il2CppString *className;
	Il2CppString *message;
	Il2CppObject *_data;
	Il2CppException *inner_ex;
	Il2CppString *_helpURL;
	Il2CppArray *trace_ips;
	Il2CppString *stack_trace;
	Il2CppString *remote_stack_trace;
	int remote_stack_index;
	Il2CppObject *_dynamicMethods;
	il2cpp_hresult_t hresult;
	Il2CppString *source;
	Il2CppObject *safeSerializationManager;
	Il2CppArray *captured_traces;
	Il2CppArray *native_trace_ips;
} Il2CppException;
typedef struct Il2CppSystemException
{
	Il2CppException base;
} Il2CppSystemException;
typedef struct Il2CppArgumentException
{
	Il2CppException base;
	Il2CppString *argName;
} Il2CppArgumentException;
typedef struct Il2CppTypedRef
{
	const Il2CppType *type;
	void *value;
	Il2CppClass *klass;
} Il2CppTypedRef;
typedef struct Il2CppDelegate
{
	Il2CppObject object;
	Il2CppMethodPointer method_ptr;
	InvokerMethod invoke_impl;
	Il2CppObject *target;
	const MethodInfo *method;
	void *delegate_trampoline;
	intptr_t extraArg;
	uint8_t **method_code;
	Il2CppReflectionMethod *method_info;
	Il2CppReflectionMethod *original_method_info;
	Il2CppObject *data;
	uint8_t method_is_virtual;
} Il2CppDelegate;
typedef struct Il2CppMulticastDelegate
{
	Il2CppDelegate delegate;
	Il2CppArray *delegates;
} Il2CppMulticastDelegate;
typedef struct Il2CppMarshalByRefObject
{
	Il2CppObject obj;
	Il2CppObject *identity;
} Il2CppMarshalByRefObject;
typedef struct Il2CppAppDomain
{
	Il2CppMarshalByRefObject mbr;
	Il2CppDomain *data;
} Il2CppAppDomain;
typedef struct Il2CppStackFrame
{
	Il2CppObject obj;
	int32_t il_offset;
	int32_t native_offset;
	uint64_t methodAddress;
	uint32_t methodIndex;
	Il2CppReflectionMethod *method;
	Il2CppString *filename;
	int32_t line;
	int32_t column;
	Il2CppString *internal_method_name;
} Il2CppStackFrame;
typedef struct Il2CppDateTimeFormatInfo
{
	Il2CppObject obj;
	Il2CppObject *CultureData;
	Il2CppString *Name;
	Il2CppString *LangName;
	Il2CppObject *CompareInfo;
	Il2CppObject *CultureInfo;
	Il2CppString *AMDesignator;
	Il2CppString *PMDesignator;
	Il2CppString *DateSeparator;
	Il2CppString *GeneralShortTimePattern;
	Il2CppString *GeneralLongTimePattern;
	Il2CppString *TimeSeparator;
	Il2CppString *MonthDayPattern;
	Il2CppString *DateTimeOffsetPattern;
	Il2CppObject *Calendar;
	uint32_t FirstDayOfWeek;
	uint32_t CalendarWeekRule;
	Il2CppString *FullDateTimePattern;
	Il2CppArray *AbbreviatedDayNames;
	Il2CppArray *ShortDayNames;
	Il2CppArray *DayNames;
	Il2CppArray *AbbreviatedMonthNames;
	Il2CppArray *MonthNames;
	Il2CppArray *GenitiveMonthNames;
	Il2CppArray *GenitiveAbbreviatedMonthNames;
	Il2CppArray *LeapYearMonthNames;
	Il2CppString *LongDatePattern;
	Il2CppString *ShortDatePattern;
	Il2CppString *YearMonthPattern;
	Il2CppString *LongTimePattern;
	Il2CppString *ShortTimePattern;
	Il2CppArray *YearMonthPatterns;
	Il2CppArray *ShortDatePatterns;
	Il2CppArray *LongDatePatterns;
	Il2CppArray *ShortTimePatterns;
	Il2CppArray *LongTimePatterns;
	Il2CppArray *EraNames;
	Il2CppArray *AbbrevEraNames;
	Il2CppArray *AbbrevEnglishEraNames;
	Il2CppArray *OptionalCalendars;
	uint8_t readOnly;
	int32_t FormatFlags;
	int32_t CultureID;
	uint8_t UseUserOverride;
	uint8_t UseCalendarInfo;
	int32_t DataItem;
	uint8_t IsDefaultCalendar;
	Il2CppArray *DateWords;
	Il2CppString *FullTimeSpanPositivePattern;
	Il2CppString *FullTimeSpanNegativePattern;
	Il2CppArray *dtfiTokenHash;
} Il2CppDateTimeFormatInfo;
typedef struct Il2CppNumberFormatInfo
{
	Il2CppObject obj;
	Il2CppArray *numberGroupSizes;
	Il2CppArray *currencyGroupSizes;
	Il2CppArray *percentGroupSizes;
	Il2CppString *positiveSign;
	Il2CppString *negativeSign;
	Il2CppString *numberDecimalSeparator;
	Il2CppString *numberGroupSeparator;
	Il2CppString *currencyGroupSeparator;
	Il2CppString *currencyDecimalSeparator;
	Il2CppString *currencySymbol;
	Il2CppString *ansiCurrencySymbol;
	Il2CppString *naNSymbol;
	Il2CppString *positiveInfinitySymbol;
	Il2CppString *negativeInfinitySymbol;
	Il2CppString *percentDecimalSeparator;
	Il2CppString *percentGroupSeparator;
	Il2CppString *percentSymbol;
	Il2CppString *perMilleSymbol;
	Il2CppArray *nativeDigits;
	int dataItem;
	int numberDecimalDigits;
	int currencyDecimalDigits;
	int currencyPositivePattern;
	int currencyNegativePattern;
	int numberNegativePattern;
	int percentPositivePattern;
	int percentNegativePattern;
	int percentDecimalDigits;
	int digitSubstitution;
	uint8_t readOnly;
	uint8_t useUserOverride;
	uint8_t isInvariant;
	uint8_t validForParseAsNumber;
	uint8_t validForParseAsCurrency;
} Il2CppNumberFormatInfo;
typedef struct Il2CppCultureData
{
	Il2CppObject obj;
	Il2CppString *AMDesignator;
	Il2CppString *PMDesignator;
	Il2CppString *TimeSeparator;
	Il2CppArray *LongTimePatterns;
	Il2CppArray *ShortTimePatterns;
	uint32_t FirstDayOfWeek;
	uint32_t CalendarWeekRule;
} Il2CppCultureData;
typedef struct Il2CppCalendarData
{
	Il2CppObject obj;
	Il2CppString *NativeName;
	Il2CppArray *ShortDatePatterns;
	Il2CppArray *YearMonthPatterns;
	Il2CppArray *LongDatePatterns;
	Il2CppString *MonthDayPattern;
	Il2CppArray *EraNames;
	Il2CppArray *AbbreviatedEraNames;
	Il2CppArray *AbbreviatedEnglishEraNames;
	Il2CppArray *DayNames;
	Il2CppArray *AbbreviatedDayNames;
	Il2CppArray *SuperShortDayNames;
	Il2CppArray *MonthNames;
	Il2CppArray *AbbreviatedMonthNames;
	Il2CppArray *GenitiveMonthNames;
	Il2CppArray *GenitiveAbbreviatedMonthNames;
} Il2CppCalendarData;
typedef struct Il2CppCultureInfo
{
	Il2CppObject obj;
	uint8_t is_read_only;
	int32_t lcid;
	int32_t parent_lcid;
	int32_t datetime_index;
	int32_t number_index;
	int32_t default_calendar_type;
	uint8_t use_user_override;
	Il2CppNumberFormatInfo *number_format;
	Il2CppDateTimeFormatInfo *datetime_format;
	Il2CppObject *textinfo;
	Il2CppString *name;
	Il2CppString *englishname;
	Il2CppString *nativename;
	Il2CppString *iso3lang;
	Il2CppString *iso2lang;
	Il2CppString *win3lang;
	Il2CppString *territory;
	Il2CppArray *native_calendar_names;
	Il2CppString *compareinfo;
	const void *text_info_data;
	int dataItem;
	Il2CppObject *calendar;
	Il2CppObject *parent_culture;
	uint8_t constructed;
	Il2CppArray *cached_serialized_form;
	Il2CppObject *cultureData;
	uint8_t isInherited;
} Il2CppCultureInfo;
typedef struct Il2CppRegionInfo
{
	Il2CppObject obj;
	int32_t geo_id;
	Il2CppString *iso2name;
	Il2CppString *iso3name;
	Il2CppString *win3name;
	Il2CppString *english_name;
	Il2CppString *native_name;
	Il2CppString *currency_symbol;
	Il2CppString *iso_currency_symbol;
	Il2CppString *currency_english_name;
	Il2CppString *currency_native_name;
} Il2CppRegionInfo;
typedef struct Il2CppSafeHandle
{
	Il2CppObject base;
	void *handle;
	int state;
	uint8_t owns_handle;
	uint8_t fullyInitialized;
} Il2CppSafeHandle;
typedef struct Il2CppStringBuilder Il2CppStringBuilder;
typedef struct Il2CppStringBuilder
{
	Il2CppObject object;
	Il2CppArray *chunkChars;
	Il2CppStringBuilder *chunkPrevious;
	int chunkLength;
	int chunkOffset;
	int maxCapacity;
} Il2CppStringBuilder;
typedef struct Il2CppSocketAddress
{
	Il2CppObject base;
	int m_Size;
	Il2CppArray *data;
	uint8_t m_changed;
	int m_hash;
} Il2CppSocketAddress;
typedef struct Il2CppSortKey
{
	Il2CppObject base;
	Il2CppString *str;
	Il2CppArray *key;
	int32_t options;
	int32_t lcid;
} Il2CppSortKey;
typedef struct Il2CppErrorWrapper
{
	Il2CppObject base;
	int32_t errorCode;
} Il2CppErrorWrapper;
typedef struct Il2CppAsyncResult
{
	Il2CppObject base;
	Il2CppObject *async_state;
	Il2CppWaitHandle *handle;
	Il2CppDelegate *async_delegate;
	void *data;
	Il2CppAsyncCall *object_data;
	uint8_t sync_completed;
	uint8_t completed;
	uint8_t endinvoke_called;
	Il2CppObject *async_callback;
	Il2CppObject *execution_context;
	Il2CppObject *original_context;
} Il2CppAsyncResult;
typedef struct Il2CppAsyncCall
{
	Il2CppObject base;
	Il2CppMethodMessage *msg;
	MethodInfo *cb_method;
	Il2CppDelegate *cb_target;
	Il2CppObject *state;
	Il2CppObject *res;
	Il2CppArray *out_args;
} Il2CppAsyncCall;
typedef struct Il2CppExceptionWrapper Il2CppExceptionWrapper;
typedef struct Il2CppExceptionWrapper
{
	Il2CppException *ex;
} Il2CppExceptionWrapper;
typedef struct Il2CppIOAsyncResult
{
	Il2CppObject base;
	Il2CppDelegate *callback;
	Il2CppObject *state;
	Il2CppWaitHandle *wait_handle;
	uint8_t completed_synchronously;
	uint8_t completed;
} Il2CppIOAsyncResult;
typedef struct Il2CppSocketAsyncResult
{
	Il2CppIOAsyncResult base;
	Il2CppObject *socket;
	int32_t operation;
	Il2CppException *delayedException;
	Il2CppObject *endPoint;
	Il2CppArray *buffer;
	int32_t offset;
	int32_t size;
	int32_t socket_flags;
	Il2CppObject *acceptSocket;
	Il2CppArray *addresses;
	int32_t port;
	Il2CppObject *buffers;
	uint8_t reuseSocket;
	int32_t currentAddress;
	Il2CppObject *acceptedSocket;
	int32_t total;
	int32_t error;
	int32_t endCalled;
} Il2CppSocketAsyncResult;
typedef enum Il2CppResourceLocation
{
	IL2CPP_RESOURCE_LOCATION_EMBEDDED = 1,
	IL2CPP_RESOURCE_LOCATION_ANOTHER_ASSEMBLY = 2,
	IL2CPP_RESOURCE_LOCATION_IN_MANIFEST = 4
} Il2CppResourceLocation;
typedef struct Il2CppManifestResourceInfo
{
	Il2CppObject object;
	Il2CppReflectionAssembly *assembly;
	Il2CppString *filename;
	uint32_t location;
} Il2CppManifestResourceInfo;
typedef struct Il2CppAppContext
{
	Il2CppObject obj;
	int32_t domain_id;
	int32_t context_id;
	void *static_data;
} Il2CppAppContext;
typedef struct Il2CppDecimal
{
	uint16_t reserved;
	union
	{
		struct
		{
			uint8_t scale;
			uint8_t sign;
		} u;
		uint16_t signscale;
	} u;
	uint32_t Hi32;
	union
	{
		struct
		{
			uint32_t Lo32;
			uint32_t Mid32;
		} v;
		uint64_t Lo64;
	} v;
} Il2CppDecimal;
typedef struct Il2CppDouble
{
	uint32_t mantLo : 32;
	uint32_t mantHi : 20;
	uint32_t exp : 11;
	uint32_t sign : 1;
} Il2CppDouble;
typedef union Il2CppDouble_double
{
	Il2CppDouble s;
	double d;
} Il2CppDouble_double;
typedef enum Il2CppDecimalCompareResult
{
	IL2CPP_DECIMAL_CMP_LT = -1,
	IL2CPP_DECIMAL_CMP_EQ,
	IL2CPP_DECIMAL_CMP_GT
} Il2CppDecimalCompareResult;
typedef struct Il2CppSingle
{
	uint32_t mant : 23;
	uint32_t exp : 8;
	uint32_t sign : 1;
} Il2CppSingle;
typedef union Il2CppSingle_float
{
	Il2CppSingle s;
	float f;
} Il2CppSingle_float;

#pragma warning(disable : 4369)
#pragma warning(disable : 4309)
#pragma warning(disable : 4359)
#if !defined(_GHIDRA_) && !defined(_IDA_)
namespace app
{
#endif

	// ******************************************************************************
	// * Application types from method calls
	// ******************************************************************************

	struct Object__VTable
	{
		VirtualInvokeData Equals;
		VirtualInvokeData Finalize;
		VirtualInvokeData GetHashCode;
		VirtualInvokeData ToString;
	};

	struct Object__StaticFields
	{
	};

	struct Object__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		struct Object__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
		struct Object__VTable vtable;
	};

	struct Type__VTable
	{
		VirtualInvokeData Equals;
		VirtualInvokeData Finalize;
		VirtualInvokeData GetHashCode;
		VirtualInvokeData ToString;
		VirtualInvokeData GetCustomAttributes;
		VirtualInvokeData GetCustomAttributes_1;
		VirtualInvokeData IsDefined;
		VirtualInvokeData get_DeclaringType;
		VirtualInvokeData get_MemberType;
		VirtualInvokeData __unknown;
		VirtualInvokeData get_ReflectedType;
		VirtualInvokeData __unknown_1;
		VirtualInvokeData __unknown_2;
		VirtualInvokeData __unknown_3;
		VirtualInvokeData __unknown_4;
		VirtualInvokeData get_MetadataToken;
		VirtualInvokeData __unknown_5;
		VirtualInvokeData __unknown_6;
		VirtualInvokeData get_Attributes;
		VirtualInvokeData __unknown_7;
		VirtualInvokeData __unknown_8;
		VirtualInvokeData __unknown_9;
		VirtualInvokeData get_HasElementType;
		VirtualInvokeData get_IsAbstract;
		VirtualInvokeData get_IsArray;
		VirtualInvokeData get_IsByRef;
		VirtualInvokeData get_IsClass;
		VirtualInvokeData get_IsContextful;
		VirtualInvokeData get_IsEnum;
		VirtualInvokeData get_IsExplicitLayout;
		VirtualInvokeData get_IsInterface;
		VirtualInvokeData get_IsMarshalByRef;
		VirtualInvokeData get_IsNestedPublic;
		VirtualInvokeData get_IsPointer;
		VirtualInvokeData get_IsPrimitive;
		VirtualInvokeData get_IsPublic;
		VirtualInvokeData get_IsSealed;
		VirtualInvokeData get_IsSerializable;
		VirtualInvokeData get_IsValueType;
		VirtualInvokeData __unknown_10;
		VirtualInvokeData get_TypeHandle;
		VirtualInvokeData __unknown_11;
		VirtualInvokeData Equals_1;
		VirtualInvokeData GetType;
		VirtualInvokeData IsSubclassOf;
		VirtualInvokeData GetInterfaceMap;
		VirtualInvokeData __unknown_12;
		VirtualInvokeData IsAssignableFrom;
		VirtualInvokeData IsInstanceOfType;
		VirtualInvokeData GetArrayRank;
		VirtualInvokeData __unknown_13;
		VirtualInvokeData GetEvent;
		VirtualInvokeData __unknown_14;
		VirtualInvokeData __unknown_15;
		VirtualInvokeData GetField;
		VirtualInvokeData __unknown_16;
		VirtualInvokeData GetFields;
		VirtualInvokeData __unknown_17;
		VirtualInvokeData GetMember;
		VirtualInvokeData GetMember_1;
		VirtualInvokeData GetMember_2;
		VirtualInvokeData __unknown_18;
		VirtualInvokeData GetMethod;
		VirtualInvokeData GetMethod_1;
		VirtualInvokeData GetMethod_2;
		VirtualInvokeData GetMethod_3;
		VirtualInvokeData GetMethod_4;
		VirtualInvokeData __unknown_19;
		VirtualInvokeData GetMethods;
		VirtualInvokeData __unknown_20;
		VirtualInvokeData __unknown_21;
		VirtualInvokeData GetProperties;
		VirtualInvokeData __unknown_22;
		VirtualInvokeData GetProperty;
		VirtualInvokeData GetProperty_1;
		VirtualInvokeData GetProperty_2;
		VirtualInvokeData GetProperty_3;
		VirtualInvokeData GetProperty_4;
		VirtualInvokeData __unknown_23;
		VirtualInvokeData __unknown_24;
		VirtualInvokeData __unknown_25;
		VirtualInvokeData __unknown_26;
		VirtualInvokeData __unknown_27;
		VirtualInvokeData __unknown_28;
		VirtualInvokeData __unknown_29;
		VirtualInvokeData __unknown_30;
		VirtualInvokeData IsValueTypeImpl;
		VirtualInvokeData IsContextfulImpl;
		VirtualInvokeData IsMarshalByRefImpl;
		VirtualInvokeData GetConstructor;
		VirtualInvokeData GetConstructor_1;
		VirtualInvokeData GetConstructor_2;
		VirtualInvokeData GetConstructors;
		VirtualInvokeData __unknown_31;
		VirtualInvokeData FindMembers;
		VirtualInvokeData InvokeMember;
		VirtualInvokeData __unknown_32;
		VirtualInvokeData GetGenericArguments;
		VirtualInvokeData get_ContainsGenericParameters;
		VirtualInvokeData get_IsGenericTypeDefinition;
		VirtualInvokeData GetGenericTypeDefinition;
		VirtualInvokeData get_IsGenericType;
		VirtualInvokeData MakeGenericType;
		VirtualInvokeData get_IsGenericParameter;
		VirtualInvokeData GetGenericParameterConstraints;
		VirtualInvokeData MakeByRefType;
	};

	struct Type__StaticFields
	{
		uint16_t Delimiter;
		struct Type__Array *EmptyTypes;
		struct MemberFilter *FilterAttribute;
		struct MemberFilter *FilterName;
		struct MemberFilter *FilterNameIgnoreCase;
		struct Object *Missing;
	};

	struct Type__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		struct Type__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
		struct Type__VTable vtable;
	};

	struct Object
	{
		struct Object__Class *klass;
		MonitorData *monitor;
	};

	struct RuntimeTypeHandle__VTable
	{
		VirtualInvokeData Equals;
		VirtualInvokeData Finalize;
		VirtualInvokeData GetHashCode;
		VirtualInvokeData ToString;
		VirtualInvokeData GetObjectData;
	};

	struct RuntimeTypeHandle__StaticFields
	{
	};

	struct RuntimeTypeHandle__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		struct RuntimeTypeHandle__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
		struct RuntimeTypeHandle__VTable vtable;
	};

	struct Char__Array__VTable
	{
	};

	struct Char__Array__StaticFields
	{
	};

	struct Char__Array__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		struct Char__Array__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
		struct Char__Array__VTable vtable;
	};

	struct __declspec(align(8)) Encoding__Fields
	{
		int32_t codePage;
		int32_t windows_code_page;
		bool is_readonly;
		struct DecoderFallback *decoder_fallback;
		struct EncoderFallback *encoder_fallback;
		struct String *body_name;
		struct String *encoding_name;
		struct String *header_name;
		bool is_mail_news_display;
		bool is_mail_news_save;
		bool is_browser_save;
		bool is_browser_display;
		struct String *web_name;
	};

	struct Encoding__VTable
	{
		VirtualInvokeData Equals;
		VirtualInvokeData Finalize;
		VirtualInvokeData GetHashCode;
		VirtualInvokeData ToString;
		VirtualInvokeData Clone;
		VirtualInvokeData __unknown;
		VirtualInvokeData GetByteCount;
		VirtualInvokeData GetByteCount_1;
		VirtualInvokeData __unknown_1;
		VirtualInvokeData GetBytes;
		VirtualInvokeData GetBytes_1;
		VirtualInvokeData GetBytes_2;
		VirtualInvokeData GetBytes_3;
		VirtualInvokeData __unknown_2;
		VirtualInvokeData __unknown_3;
		VirtualInvokeData GetChars;
		VirtualInvokeData GetChars_1;
		VirtualInvokeData GetDecoder;
		VirtualInvokeData Clone_1;
		VirtualInvokeData __unknown_4;
		VirtualInvokeData __unknown_5;
		VirtualInvokeData GetPreamble;
		VirtualInvokeData GetString;
		VirtualInvokeData GetString_1;
		VirtualInvokeData get_HeaderName;
		VirtualInvokeData get_WebName;
		VirtualInvokeData GetByteCount_2;
		VirtualInvokeData GetBytes_4;
	};

	struct Encoding__StaticFields
	{
		struct Assembly *i18nAssembly;
		bool i18nDisabled;
		struct EncodingInfo__Array *encoding_infos;
		struct Object__Array *encodings;
		struct Encoding *asciiEncoding;
		struct Encoding *bigEndianEncoding;
		struct Encoding *defaultEncoding;
		struct Encoding *utf7Encoding;
		struct Encoding *utf8EncodingWithMarkers;
		struct Encoding *utf8EncodingWithoutMarkers;
		struct Encoding *unicodeEncoding;
		struct Encoding *isoLatin1Encoding;
		struct Encoding *utf8EncodingUnsafe;
		struct Encoding *utf32Encoding;
		struct Encoding *bigEndianUTF32Encoding;
		struct Object *lockobj;
	};

	struct Encoding
	{
		struct Encoding__Class *klass;
		MonitorData *monitor;
		struct Encoding__Fields fields;
	};

	struct Encoding__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
		struct Encoding__StaticFields* static_fields;
		const Il2CppRGCTXData* rgctx_data;
		Il2CppClass_1 _1;
		struct Encoding__VTable vtable;
	};

	struct Char__Array
	{
		struct Char__Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		uint16_t vector[32];
	};

	struct RuntimeTypeHandle
	{
		void *value;
	};

	struct RuntimeTypeHandle__Boxed
	{
		struct RuntimeTypeHandle__Class *klass;
		MonitorData *monitor;
		struct RuntimeTypeHandle fields;
	};


	struct __declspec(align(8)) Type__Fields
	{
		struct RuntimeTypeHandle _impl;
	};

	struct Type
	{
		struct Type__Class *klass;
		MonitorData *monitor;
		struct Type__Fields fields;
	};

	struct String__VTable
	{
		VirtualInvokeData Equals;
		VirtualInvokeData Finalize;
		VirtualInvokeData GetHashCode;
		VirtualInvokeData ToString;
		VirtualInvokeData GetTypeCode;
		VirtualInvokeData System_IConvertible_ToBoolean;
		VirtualInvokeData System_IConvertible_ToByte;
		VirtualInvokeData System_IConvertible_ToChar;
		VirtualInvokeData System_IConvertible_ToDateTime;
		VirtualInvokeData System_IConvertible_ToDecimal;
		VirtualInvokeData System_IConvertible_ToDouble;
		VirtualInvokeData System_IConvertible_ToInt16;
		VirtualInvokeData System_IConvertible_ToInt32;
		VirtualInvokeData System_IConvertible_ToInt64;
		VirtualInvokeData System_IConvertible_ToSByte;
		VirtualInvokeData System_IConvertible_ToSingle;
		VirtualInvokeData ToString_1;
		VirtualInvokeData System_IConvertible_ToType;
		VirtualInvokeData System_IConvertible_ToUInt16;
		VirtualInvokeData System_IConvertible_ToUInt32;
		VirtualInvokeData System_IConvertible_ToUInt64;
		VirtualInvokeData CompareTo;
		VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
		VirtualInvokeData Clone;
		VirtualInvokeData CompareTo_1;
		VirtualInvokeData Equals_1;
		VirtualInvokeData System_Collections_Generic_IEnumerable_char__GetEnumerator;
	};

	struct String__StaticFields
	{
		struct String *Empty;
		struct Char__Array *WhiteChars;
	};

	struct String__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		struct String__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
		struct String__VTable vtable;
	};

	struct __declspec(align(8)) String__Fields
	{
		int32_t length;
		uint16_t start_char;
	};

	struct String
	{
		struct String__Class *klass;
		MonitorData *monitor;
		struct String__Fields fields;
	};

	struct IFormatProvider
	{
		struct IFormatProvider__Class *klass;
		MonitorData *monitor;
	};

	struct IFormatProvider__VTable
	{
		VirtualInvokeData GetFormat;
	};

	struct IFormatProvider__StaticFields
	{
	};

	struct IFormatProvider__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		struct IFormatProvider__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
		struct IFormatProvider__VTable vtable;
	};

	struct Byte__Array__VTable
	{
	};

	struct Byte__Array__StaticFields
	{
	};

	struct Byte__Array__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		struct Byte__Array__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
		struct Byte__Array__VTable vtable;
	};

	struct Byte__Array
	{
		struct Byte__Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		uint8_t vector[32];
	};

	struct __declspec(align(8)) LuaBaseManager__Fields
	{
		struct LuaEnv *_luaenv;
	};

	struct LuaManager_ILuaReload__VTable
	{
		VirtualInvokeData Reload;
		VirtualInvokeData GetHotfixFuncs;
	};

	struct LuaManager_ILuaReload__StaticFields
	{
	};

	struct LuaManager_ILuaReload__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		struct LuaManager_ILuaReload__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
		struct LuaManager_ILuaReload__VTable vtable;
	};

	struct LuaBaseManager__VTable
	{
		VirtualInvokeData Equals;
		VirtualInvokeData Finalize;
		VirtualInvokeData GetHashCode;
		VirtualInvokeData ToString;
		VirtualInvokeData Init;
		VirtualInvokeData Tick;
		VirtualInvokeData PostTick;
		VirtualInvokeData LateTick;
		VirtualInvokeData LatePreTick;
		VirtualInvokeData LatePreTickEnd;
		VirtualInvokeData LatePostTick;
		VirtualInvokeData LatePostTickEnd;
		VirtualInvokeData Dump;
		VirtualInvokeData Destroy;
		VirtualInvokeData ClearOnLevelDestroy;
		VirtualInvokeData InitOnConnect;
		VirtualInvokeData ClearOnDisconnect;
		VirtualInvokeData ClearOnBackHome;
		VirtualInvokeData ReloadRes;
		VirtualInvokeData InitByLocalData;
		VirtualInvokeData InitLua;
		VirtualInvokeData Require;
		VirtualInvokeData OnLoadLuaFinish;
	};

	struct LuaBaseManager__StaticFields
	{
		struct DelegateBridge *_c__Hotfix0_ctor;
		struct DelegateBridge *__Hotfix0_Init;
		struct DelegateBridge *__Hotfix0_InitLua;
		struct DelegateBridge *__Hotfix0_DoLua;
		struct DelegateBridge *__Hotfix0_Require;
		struct DelegateBridge *__Hotfix0_OnLoadLuaFinish;
		struct DelegateBridge *__Hotfix0_ReloadRes;
		struct DelegateBridge *__Hotfix0_Tick;
		struct DelegateBridge *__Hotfix0_Destroy;
		struct DelegateBridge *__Hotfix0_ClearOnLevelDestroy;
		struct DelegateBridge *__Hotfix0_WaitForSeconds;
		struct DelegateBridge *__Hotfix0_WaitForSecondsImp;
		struct DelegateBridge *__Hotfix0_WaitForSeveralFrames;
		struct DelegateBridge *__Hotfix0_WaitForSeveralFramesImp;
		struct DelegateBridge *__Hotfix0_WaitForEndOfFrame;
		struct DelegateBridge *__Hotfix0_WaitForEndOfFrameImp;
		struct DelegateBridge *__Hotfix0_WaitForFixedUpdate;
		struct DelegateBridge *__Hotfix0_WaitForFixedUpdateImp;
		struct DelegateBridge *__Hotfix0_IsIOS;
		struct DelegateBridge *__Hotfix0_IsAndroid;
		struct DelegateBridge *__Hotfix0_ModifySafeFloat;
		struct DelegateBridge *__Hotfix0_ModifySafeInt;
		struct DelegateBridge *__Hotfix0_ModifySafeBool;
		struct DelegateBridge *__Hotfix0_GetActorPlugin;
		struct DelegateBridge *__Hotfix0_GetNetPacketV1Data;
		struct DelegateBridge *__Hotfix0_CreateLuaTable;
		struct DelegateBridge *__Hotfix0_ConvertDictionaryToLuaTable;
		struct DelegateBridge *__Hotfix0_ConvertDictionaryKeysToList;
		struct DelegateBridge *__Hotfix0_CreateLuaDelegate;
		struct DelegateBridge *__Hotfix0_CreateLuaAction;
		struct DelegateBridge *__Hotfix0_CreateLuaActionWithOneArg;
		struct DelegateBridge *__Hotfix0_CreateLuaActionWithTwoArgs;
		struct DelegateBridge *__Hotfix0_CreateLuaActionWithThreeArgs;
		struct DelegateBridge *__Hotfix0_CreateLuaActionWithFourArgs;
		struct DelegateBridge *__Hotfix0_CreateDelegate;
		struct DelegateBridge *__Hotfix0_CreateAction;
		struct DelegateBridge *__Hotfix0_CreateActionWithOneArg;
		struct DelegateBridge *__Hotfix0_CreateActionWithTwoArgs;
		struct DelegateBridge *__Hotfix0_CreateActionWithMultiArgs;
		struct DelegateBridge *__Hotfix0_CreateStaticClassDelegate;
		struct DelegateBridge *__Hotfix0_CreateStaticClassAction;
		struct DelegateBridge *__Hotfix0_CreateStaticClassActionWithOneArg;
		struct DelegateBridge *__Hotfix0_CreateStaticClassActionWithTwoArgs;
		struct DelegateBridge *__Hotfix0_CreateStaticClassActionWithMultiArgs;
		struct DelegateBridge *__Hotfix0_CreateInstance;
		struct DelegateBridge *__Hotfix0_CreateGenericInstance;
		struct DelegateBridge *__Hotfix0_CreateGenericInstanceWithTwoArgs;
		struct DelegateBridge *__Hotfix0_CreateGenericInstanceWithMultiArgs;
		struct DelegateBridge *__Hotfix0_GetObjectField;
		struct DelegateBridge *__Hotfix0_GetObjectFieldValue;
		struct DelegateBridge *__Hotfix0_SetObjectFieldValue;
		struct DelegateBridge *__Hotfix0_GetStaticClassField;
		struct DelegateBridge *__Hotfix0_GetStaticClassFieldValue;
		struct DelegateBridge *__Hotfix0_SetStaticClassFieldValue;
		struct DelegateBridge *__Hotfix0_InvokeObjectMethod;
		struct DelegateBridge *__Hotfix0_InvokeObjectMethodWithMultiArgs;
		struct DelegateBridge *__Hotfix0_InvokeStaticClassMethod;
		struct DelegateBridge *__Hotfix0_InvokeStaticClassMethodWithMultiArgs;
		struct DelegateBridge *__Hotfix0_ConvertLuaArgToCSharpArg;
		struct DelegateBridge *__Hotfix0_ChangeType;
		struct DelegateBridge *__Hotfix1_ChangeType;
		struct DelegateBridge *__Hotfix0_GetClassType;
		struct DelegateBridge *__Hotfix1_GetClassType;
		struct DelegateBridge *__Hotfix0_GetTypeArray;
		struct DelegateBridge *__Hotfix1_GetTypeArray;
		struct DelegateBridge *__Hotfix2_GetTypeArray;
		struct DelegateBridge *__Hotfix3_GetTypeArray;
		struct DelegateBridge *__Hotfix0_InvokeMethodImp;
		struct DelegateBridge *__Hotfix1_InvokeMethodImp;
	};

	struct LuaBaseManager__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		struct LuaBaseManager__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
		struct LuaBaseManager__VTable vtable;
	};

	struct LuaBaseManager
	{
		struct LuaBaseManager__Class *klass;
		MonitorData *monitor;
		struct LuaBaseManager__Fields fields;
	};

	struct LuaManager_ILuaReload
	{
		struct LuaManager_ILuaReload__Class *klass;
		MonitorData *monitor;
	};

	struct LuaManager_ILuaHotFix
	{
		struct LuaManager_ILuaHotFix__Class *klass;
		MonitorData *monitor;
	};

	struct LuaManager_ILuaMain
	{
		struct LuaManager_ILuaMain__Class *klass;
		MonitorData *monitor;
	};

	struct LuaManager__Fields
	{
		struct LuaBaseManager__Fields _;
		struct LuaManager_ILuaReload *_luaReload;
		struct LuaManager_ILuaHotFix *_luaHotfix;
		struct LuaManager_ILuaMain *_luaMain;
		struct ActorManager_ILuaActorManager *_luaActorMgr;
		struct Action *reloadCallback;
		struct LuaEnv_CustomLoader *_customLoader;
		uint32_t _gcCnt;
		bool gcEnabled;
		bool _isStarted;
		bool _hotfixInited;
		struct LuaTable *_patchTable;
	};

	struct LuaManager
	{
		struct LuaManager__Class *klass;
		MonitorData *monitor;
		struct LuaManager__Fields fields;
	};


	enum class DateTimeKind__Enum : int32_t
	{
		Unspecified = 0x00000000,
		Utc = 0x00000001,
		Local = 0x00000002,
	};

	struct TimeSpan
	{
		int64_t _ticks;
	};

	struct DateTime
	{
		struct TimeSpan ticks;
		DateTimeKind__Enum kind;
	};

	struct DateTime__Boxed
	{
		struct DateTime__Class *klass;
		MonitorData *monitor;
		struct DateTime fields;
	};

	struct __declspec(align(8)) LuaBase__Fields
	{
		bool disposed;
		int32_t luaReference;
		void *luaEnv;
	};

	struct DelegateBridgeBase__Fields
	{
		struct LuaBase__Fields _;
		void *firstKey;
		void *firstValue;
		void *bindTo;
		int32_t errorFuncRef;
	};


	struct DelegateBridge__Fields
	{
		struct DelegateBridgeBase__Fields _;
		int32_t _oldTop;
		void *_stack;
	};

	struct DelegateBridge
	{
		void *klass;
		MonitorData *monitor;
		struct DelegateBridge__Fields fields;
	};

	struct MoleMole_MiNetClient__VTable
	{
		VirtualInvokeData Equals;
		VirtualInvokeData Finalize;
		VirtualInvokeData GetHashCode;
		VirtualInvokeData ToString;
	};

	struct MoleMole_MiNetClient__StaticFields
	{
		struct DelegateBridge *FBPNECEFLOE;
		struct DelegateBridge *PHCOGNGOLIB;
		struct DelegateBridge *OMMFGIEPLNB;
		struct DelegateBridge *DNGLBOAIJHH;
		struct DelegateBridge *NCLIEEPFHDL;
		struct DelegateBridge *KKOMKIEGPDO;
		struct DelegateBridge *FKBGMOOHCEA;
		struct DelegateBridge *DLBNKFCNNPF;
		struct DelegateBridge *ENEPELNLPFO;
		struct DelegateBridge *MPAKCCMDCIJ;
		struct DelegateBridge *OPGPJFEHPHA;
		struct DelegateBridge *KJEDMNINANM;
		struct DelegateBridge *EKCDCMOHEII;
		struct DelegateBridge *DGOPGFKLHCK;
		struct DelegateBridge *GNFJCLOPBJA;
		struct DelegateBridge *ECOIAFKEILB;
		struct DelegateBridge *BMONDEPLGNK;
		struct DelegateBridge *EODKGEBKPEI;
		struct DelegateBridge *IGGNFLOEKIA;
		struct DelegateBridge *FGKFHJNKCKN;
		struct DelegateBridge *JCAEBEECFNM;
		struct DelegateBridge *NDEKDPHIEMI;
		struct DelegateBridge *DMGCMECPIAF;
		struct DelegateBridge *FMLKIDOAAGM;
	};

	struct MoleMole_MiNetClient__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		struct MoleMole_MiNetClient__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
		struct MoleMole_MiNetClient__VTable vtable;
	};

	enum class MoleMole_MiNetClient_PJOIODIAPNK__Enum : int32_t
	{
		UDP = 0x00000000,
		TCP = 0x00000001,
	};

	struct MoleMole_MiNetClient_PJOIODIAPNK__Enum__Boxed
	{
		struct MoleMole_MiNetClient_PJOIODIAPNK__Enum__Class *klass;
		MonitorData *monitor;
		MoleMole_MiNetClient_PJOIODIAPNK__Enum value;
	};

	struct __declspec(align(8)) MoleMole_MiNetClient__Fields
	{
		void *MEOGCAMBLHJ;
		MoleMole_MiNetClient_PJOIODIAPNK__Enum JAAAEGMMPIF;
	};

	struct MoleMole_MiNetClient
	{
		struct MoleMole_MiNetClient__Class *klass;
		MonitorData *monitor;
		struct MoleMole_MiNetClient__Fields fields;
	};

	struct ConfigChannel__VTable
	{
		VirtualInvokeData Equals;
		VirtualInvokeData Finalize;
		VirtualInvokeData GetHashCode;
		VirtualInvokeData ToString;
	};

	struct ConfigChannel__StaticFields
	{
		struct DelegateBridge *_c__Hotfix0_ctor;
		struct DelegateBridge *__Hotfix0_IsOversea;
		struct DelegateBridge *__Hotfix0_IsPreGMPackage;
		struct DelegateBridge *__Hotfix0_IsRelPackage;
	};

	struct ConfigChannel__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		struct ConfigChannel__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
		struct ConfigChannel__VTable vtable;
	};

	enum class AccountBranches__Enum : int32_t
	{
		Original = 0x00000000,
		UC = 0x00000001,
		QIHOO = 0x00000002,
		OPPO = 0x00000003,
		VIVO = 0x00000004,
		HUAWEI = 0x00000005,
		XIAOMI = 0x00000006,
		TENCENT = 0x00000007,
		GIONEE = 0x00000008,
		LENOVO = 0x00000009,
		BAIDU = 0x0000000a,
		COOLPAD = 0x0000000b,
		WANDOUJIA = 0x0000000c,
		MEIZU = 0x0000000d,
		BILIBILI = 0x0000000e,
		LESHI = 0x0000000f,
		JAPAN = 0x00000010,
		TAIWAN = 0x00000011,
		KOREA = 0x00000012,
		OVERSEAS = 0x00000013,
		GLOBAL = 0x00000014,
	};

	enum class PaymentBranches__Enum : int32_t
	{
		DEFAULT = 0x00000000,
		APPSTORE_CN = 0x00000001,
		ORIGINAL_ANDROID_PAY = 0x00000002,
		GOOGLE_ANDROID_PAY = 0x00000003,
	};

	struct __declspec(align(8)) ConfigChannel__Fields
	{
		struct String *ChannelName;
		struct String *BundleIdentifier;
		struct String *PS4ClientID;
		struct String *PS5ClientID;
		struct String *ProductName;
		struct String *PreDefines;
		struct String *TimeZones;
		void *DispatchConfigs;
		int32_t VersionCode;
		bool Obb;
		bool DataUseAssetBundle;
		bool EventUseAssetBundle;
		bool BetaMark;
		struct String *CVDefault;
		struct String *FAQUrl;
		struct String *ExceptionReportUrl;
		struct String *NetworkErrReportUrl;
		struct String *MediumReportUrl;
		struct String *CrashReportUrl;
		struct String *LogRecorderUrl;
		AccountBranches__Enum AccountBranch;
		PaymentBranches__Enum PaymentBranch;
		struct String *GVoiceAppID;
		struct String *GVoiceAppKey;
		struct String *GVoiceServerInfo;
		struct String *BaseTextLang;
		struct String *BaseAudioLang;
	};

	struct ConfigChannel
	{
		struct ConfigChannel__Class *klass;
		MonitorData *monitor;
		struct ConfigChannel__Fields fields;
	};

	struct UInt16__Array
	{
		void *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		uint16_t vector[32];
	};

	struct IPAddress__VTable
	{
		VirtualInvokeData Equals;
		VirtualInvokeData Finalize;
		VirtualInvokeData GetHashCode;
		VirtualInvokeData ToString;
	};

	struct IPAddress__StaticFields
	{
		struct IPAddress *Any;
		struct IPAddress *Broadcast;
		struct IPAddress *Loopback;
		struct IPAddress *None;
		struct IPAddress *IPv6Any;
		struct IPAddress *IPv6Loopback;
		struct IPAddress *IPv6None;
	};

	struct IPAddress__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		struct IPAddress__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
		struct IPAddress__VTable vtable;
	};

	enum class AddressFamily__Enum : int32_t
	{
		Unknown = -1,
		Unspecified = 0x00000000,
		Unix = 0x00000001,
		InterNetwork = 0x00000002,
		ImpLink = 0x00000003,
		Pup = 0x00000004,
		Chaos = 0x00000005,
		NS = 0x00000006,
		Ipx = 0x00000006,
		Iso = 0x00000007,
		Osi = 0x00000007,
		Ecma = 0x00000008,
		DataKit = 0x00000009,
		Ccitt = 0x0000000a,
		Sna = 0x0000000b,
		DecNet = 0x0000000c,
		DataLink = 0x0000000d,
		Lat = 0x0000000e,
		HyperChannel = 0x0000000f,
		AppleTalk = 0x00000010,
		NetBios = 0x00000011,
		VoiceView = 0x00000012,
		FireFox = 0x00000013,
		Banyan = 0x00000015,
		Atm = 0x00000016,
		InterNetworkV6 = 0x00000017,
		Cluster = 0x00000018,
		Ieee12844 = 0x00000019,
		Irda = 0x0000001a,
		NetworkDesigners = 0x0000001c,
		Max = 0x0000001d,
	};

	struct __declspec(align(8)) IPAddress__Fields
	{
		int64_t m_Address;
		AddressFamily__Enum m_Family;
		struct UInt16__Array *m_Numbers;
		int64_t m_ScopeId;
		int32_t m_HashCode;
	};

	struct IPAddress
	{
		struct IPAddress__Class *klass;
		MonitorData *monitor;
		struct IPAddress__Fields fields;
	};

	struct GameLogin__VTable
	{
		VirtualInvokeData Equals;
		VirtualInvokeData Finalize;
		VirtualInvokeData GetHashCode;
		VirtualInvokeData ToString;
		VirtualInvokeData Init;
		VirtualInvokeData Tick;
		VirtualInvokeData PostTick;
		VirtualInvokeData LateTick;
		VirtualInvokeData LatePreTick;
		VirtualInvokeData LatePreTickEnd;
		VirtualInvokeData LatePostTick;
		VirtualInvokeData LatePostTickEnd;
		VirtualInvokeData Dump;
		VirtualInvokeData Destroy;
		VirtualInvokeData ClearOnLevelDestroy;
		VirtualInvokeData InitOnConnect;
		VirtualInvokeData ClearOnDisconnect;
		VirtualInvokeData ClearOnBackHome;
		VirtualInvokeData ReloadRes;
		VirtualInvokeData InitByLocalData;
		VirtualInvokeData OnNotify;
	};

	struct GameLogin__StaticFields
	{
		float MLDLNMIPKPC;
		struct Action_1_Boolean_ *CILACBNHEJJ;
		struct Action_1_Boolean_ *CMLLGAMAOGJ;
		struct Action_1_Boolean_ *KLCMHGNLIDA;
		struct Action_1_Boolean_ *KHCJGGHLPJB;
		struct DelegateBridge *FBPNECEFLOE;
		struct DelegateBridge *DJGJOAIGMLD;
		struct DelegateBridge *GHBMOCNLBEP;
		struct DelegateBridge *HAOJOAIJDLC;
		struct DelegateBridge *BNPHMIAKMLH;
		struct DelegateBridge *POHLKBNMAKN;
		struct DelegateBridge *ACKIAAPPOCM;
		struct DelegateBridge *NGBIKKCFAMM;
		struct DelegateBridge *INCKMHOGFFM;
		struct DelegateBridge *NCKBEMGGAFG;
		struct DelegateBridge *LBBMGIBJGKK;
		struct DelegateBridge *BGCCHJCOMCA;
		struct DelegateBridge *IGGNFLOEKIA;
		struct DelegateBridge *FGKFHJNKCKN;
		struct DelegateBridge *NDEKDPHIEMI;
		struct DelegateBridge *DMGCMECPIAF;
		struct DelegateBridge *OPIAFCKIIMH;
		struct DelegateBridge *MCMBGKDLJDP;
		struct DelegateBridge *PKKEJMCEFMN;
		struct DelegateBridge *CKFHNMFEGDH;
		struct DelegateBridge *ENDBLDDKOJM;
		struct DelegateBridge *AJIAHCGPFAM;
		struct DelegateBridge *MJFEOEEDIOM;
		struct DelegateBridge *ADLFHGAEGGP;
		struct DelegateBridge *BDDLFNOHNPL;
		struct DelegateBridge *DHPBOABCJCA;
		struct DelegateBridge *FGLFGLOCDAI;
		struct DelegateBridge *EBCBEEKJDAG;
		struct DelegateBridge *PGDPLBMLIOB;
		struct DelegateBridge *BIDFGAAMEIF;
		struct DelegateBridge *OJKLMMNGCCE;
		struct DelegateBridge *JLEKLKBLABP;
		struct DelegateBridge *AGGGLDBEDFC;
		struct DelegateBridge *DNGLBOAIJHH;
		struct DelegateBridge *GNFJCLOPBJA;
		struct DelegateBridge *DPBNGBNHHKM;
		struct DelegateBridge *FOLCPIBPFHC;
		struct DelegateBridge *IIFHAOOAAAN;
		struct DelegateBridge *FNODFDBIEGF;
		struct DelegateBridge *BMLDOAJDEJN;
		struct DelegateBridge *PAIMJJBFPOE;
		struct DelegateBridge *EEFPHGIJLFA;
		struct DelegateBridge *ENJJEODKEDM;
		struct DelegateBridge *NCLIEEPFHDL;
		struct DelegateBridge *ICIBJOEFHIB;
		struct DelegateBridge *PGELDOHIPEO;
		struct DelegateBridge *LNKHMBAGMPM;
		struct DelegateBridge *BMOFMEKMKKB;
		struct DelegateBridge *FMBPAMABPAN;
		struct DelegateBridge *JOIDODGIKPF;
		struct DelegateBridge *HKCBNNKMBLK;
		struct DelegateBridge *AJKLPKIBLFO;
		struct DelegateBridge *IEHIFOMCEMC;
		struct DelegateBridge *MNFIFFECNIB;
		struct DelegateBridge *PDACKOLBBAD;
		struct DelegateBridge *NOOBGJMNHHK;
		struct DelegateBridge *NNNBPLNLFJA;
		struct DelegateBridge *CNIBMCFKIGE;
		struct DelegateBridge *MOKNHGMODIF;
		struct DelegateBridge *DJGADCOHAHL;
		struct DelegateBridge *ANBGMAFNKBM;
		struct DelegateBridge *KLEBJFCFALN;
		struct DelegateBridge *FACBONJJDGK;
		struct DelegateBridge *GCAOJPKPHBI;
		struct DelegateBridge *LNJDKPPGIHI;
		struct DelegateBridge *LHJKPKHDFBJ;
		struct DelegateBridge *ONLNGOLFEGA;
		struct DelegateBridge *MPEPFPBGPED;
		struct DelegateBridge *EOLNJIBIOOI;
		struct DelegateBridge *HIKIICODOHG;
		struct DelegateBridge *HFNFADFGFNL;
		struct DelegateBridge *BEDLIIGCPPB;
		struct DelegateBridge *BOGFANIJHNG;
		struct DelegateBridge *JCMMIJINFHM;
		struct DelegateBridge *PIBDEAPDMCN;
		struct DelegateBridge *HHOHNDMOIDG;
		struct DelegateBridge *OJPHGKMIPFO;
		struct DelegateBridge *LCCJIFBKFGP;
		struct DelegateBridge *KLCMEPIDAFN;
		struct DelegateBridge *EPICONADDGN;
		struct DelegateBridge *FIADEEKPMIN;
		struct DelegateBridge *AMLNCFFHMMH;
		struct DelegateBridge *BGBACPBFBJA;
		struct DelegateBridge *FPFJEGLIGKF;
		struct DelegateBridge *NEBMEFPPFHM;
		struct DelegateBridge *CDCALMACEIP;
		struct DelegateBridge *IGNFNPLNEBA;
		struct DelegateBridge *OJBBNCGKILF;
		struct DelegateBridge *FLNMAACDBHM;
		struct DelegateBridge *HMNCCPODJGF;
		struct DelegateBridge *CGGCJLLEENH;
		struct DelegateBridge *LHJKHFBCIDE;
		struct DelegateBridge *PDMFMEFDHMP;
		struct DelegateBridge *MBMHIBGNIKC;
		struct DelegateBridge *KFNKKPLIIKF;
		struct DelegateBridge *EPLNCJFPCNG;
		struct DelegateBridge *CKDMDIFBFMO;
		struct DelegateBridge *APKIONCDHNO;
		struct DelegateBridge *GLBKPNPOPLF;
		struct DelegateBridge *JNOMMDNINDF;
		struct DelegateBridge *JNBKEEAIEGD;
		struct DelegateBridge *PJGIPHAPLHJ;
		struct DelegateBridge *EFCAJLBLGHG;
		struct DelegateBridge *IMDDIJKJBFJ;
		struct DelegateBridge *IDLKNOKFEEG;
		struct DelegateBridge *CIPKGBECGCO;
		struct DelegateBridge *GLOOBCCHAAO;
		struct DelegateBridge *KMNLELOIKCA;
		struct DelegateBridge *GDHONGOIBHA;
		struct DelegateBridge *FKIGDKPILPF;
		struct DelegateBridge *EDOBLDBKOBI;
		struct DelegateBridge *NGEPNKNJCON;
		struct DelegateBridge *CCAAIBGMMJJ;
		struct DelegateBridge *FMFMJABGOPO;
		struct DelegateBridge *MANGFJHPNFG;
		struct DelegateBridge *BHHNILKLEOB;
		struct DelegateBridge *JACGFJLFOPN;
		struct DelegateBridge *OLDOMPNPJKD;
		struct DelegateBridge *OAOLKAIKNEO;
		struct DelegateBridge *IFLMKHFDPEN;
		struct DelegateBridge *DEJIGJPCNJL;
		struct DelegateBridge *BDEDCJFGFMB;
		struct DelegateBridge *AKGNLGBKMJH;
		struct DelegateBridge *LIDLNAGEELP;
		struct DelegateBridge *HDMNGHAJLKO;
		struct DelegateBridge *OHPMGIJHACJ;
		struct DelegateBridge *JLJJNOEPOOP;
		struct DelegateBridge *HDDALELIOOB;
		struct DelegateBridge *HFNDDDAPAHM;
		struct DelegateBridge *OLFOHKMOMLE;
		struct DelegateBridge *FPNDMIOONDK;
		struct DelegateBridge *KBCBMIBDPCE;
		struct DelegateBridge *DJOJBKNPCNM;
		struct DelegateBridge *NIJAAMDNELA;
		struct DelegateBridge *NINDPFAFIDN;
		struct DelegateBridge *NEKKIGGEEEE;
		struct DelegateBridge *EAMDPBHJOOH;
		struct DelegateBridge *LHMKOMMHCNJ;
		struct DelegateBridge *NBOOIECOMOL;
		struct DelegateBridge *BJHLCNJMGCO;
		struct DelegateBridge *PIOBJAHPLBJ;
		struct DelegateBridge *DKPBBLPHGKA;
		struct DelegateBridge *HKCIKDAPFDF;
		struct DelegateBridge *GAJAKCFJFFG;
		struct DelegateBridge *CFJMPGGFPFO;
	};

	struct NetworkManager_1__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		struct GameLogin__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
		struct GameLogin__VTable vtable;
	};

	struct __declspec(align(8)) NetworkManager_1__Fields
	{
		struct MoleMole_MiNetClient *_client;
		bool useJobThread;
		struct ConfigChannel *channelConfig;
		void *_DispatchSeverData_k__BackingField;
		void *serverPatterns;
		void *currentServerConfig;
		bool _isGlobalDispatch_k__BackingField;
		bool ServerStop;
		bool HasServerList;
		struct IPAddress *_lastIPAddress_k__BackingField;
		struct IPAddress *lastDispatchIP;
		struct String *lastIP;
		uint16_t lastPort;
		bool isConnect;
		bool isValidToSend;
		struct DateTime _nextPingTime;
		struct DateTime _nextCheckConnectTime;
		int32_t _watch;
		uint32_t _clientSequenceId;
		void *trafficMonitor;
		void *reason2Reconnect;
		void *reason2Callback;
		bool hasDisconnectCB;
		uint32_t resultData;
		uint32_t GOGAODGGJJB;
		void *_packetQueue;
		struct DateTime _nextPrintTime;
		void *_regionBlackList;
		float FNOLDKFPBLL;
		float PJHHBBICHPD;
		void *_pingAllRegionAddressCoroutine;
		void *_allAddressPingCoroutines;
		bool isPingAllRegionAddressDone;
		int32_t _runningPingCount;
		bool isReconnect;
		uint32_t timeoutCount;
		int32_t _reconnectCorotine;
		void *coroutine_1;
		void *_packetCount;
		void *_specialPacketDeserializedCallback;
	};

	struct MoleMole_NetworkManager
	{
		struct NetworkManager_1__Class *klass;
		MonitorData *monitor;
		struct NetworkManager_1__Fields fields;
	};

	struct __declspec(align(8)) Google_Protobuf_MessageBase__Fields
	{
		int32_t count;
		uint8_t _flag;
		int32_t recycleVersionStamp;
	};

	struct PlayerLoginReq__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		struct String *string_1;
		struct String *string_2;
		struct String *string_3;
		struct String *string_4;
		struct String *string_5;
		uint32_t DCDMCEEGPHO;
		uint64_t HNNPGFOOOGF;
		bool GJEGPDCKHKC;
		uint32_t OHILLNPMGOG;
		uint32_t PJCAONOLKME;
		struct String *string_6;
		struct String *string_7;
		struct String *string_8;
		uint32_t GLALNAFJNPI;
		bool GFDJDACPNEF;
		uint32_t HGMCFPBHFIP;
		uint32_t MHOMEBNKBMB;
		struct String *string_16;
		struct String *string_9;
		uint32_t IJKANMFMBID;
		void *CJDKDCIPBPF;
		void *EOIAHBHLOOP;
		struct String *string_10;
		uint32_t LIDAFJHHONJ;
		uint32_t PMGDOOKBJND;
		struct String *string_11;
		uint32_t NFNAILJKHNB;
		void *HBMOHKNKCDH;
		struct String *string_12;
		uint32_t BEAOKGHFDLP;
		struct NHHMPCAAKGF *COALKJGFLEJ;
		uint32_t NDJHCJFIKGH;
		struct String *string_13;
		struct String *string_14;
		bool OKOOABLDFNB;
		uint32_t FCOKNAHMKMD;
		uint32_t KOHNHBDBAGH;
		void *HAJNHPHHBJH;
		struct String *string_15;
	};

	struct PlayerLoginReq
	{
		void *klass;
		MonitorData *monitor;
		struct PlayerLoginReq__Fields fields;
	};

	struct Array__VTable
	{
		VirtualInvokeData Equals;
		VirtualInvokeData Finalize;
		VirtualInvokeData GetHashCode;
		VirtualInvokeData ToString;
		VirtualInvokeData GetEnumerator;
		VirtualInvokeData Clone;
		VirtualInvokeData System_Collections_ICollection_get_Count;
		VirtualInvokeData get_IsSynchronized;
		VirtualInvokeData get_SyncRoot;
		VirtualInvokeData CopyTo;
		VirtualInvokeData get_IsFixedSize;
		VirtualInvokeData get_IsReadOnly;
		VirtualInvokeData System_Collections_IList_get_Item;
		VirtualInvokeData System_Collections_IList_set_Item;
		VirtualInvokeData System_Collections_IList_Add;
		VirtualInvokeData System_Collections_IList_Clear;
		VirtualInvokeData System_Collections_IList_Contains;
		VirtualInvokeData System_Collections_IList_IndexOf;
		VirtualInvokeData System_Collections_IList_Insert;
		VirtualInvokeData System_Collections_IList_Remove;
		VirtualInvokeData System_Collections_IList_RemoveAt;
	};

	struct Array__StaticFields
	{
	};

	struct Array__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		struct Array__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
		struct Array__VTable vtable;
	};

	struct Array
	{
		struct Array__Class *klass;
		MonitorData *monitor;
	};

	struct Byte__VTable
	{
		VirtualInvokeData Equals;
		VirtualInvokeData Finalize;
		VirtualInvokeData GetHashCode;
		VirtualInvokeData ToString;
		VirtualInvokeData ToString_1;
		VirtualInvokeData GetTypeCode;
		VirtualInvokeData System_IConvertible_ToBoolean;
		VirtualInvokeData System_IConvertible_ToByte;
		VirtualInvokeData System_IConvertible_ToChar;
		VirtualInvokeData System_IConvertible_ToDateTime;
		VirtualInvokeData System_IConvertible_ToDecimal;
		VirtualInvokeData System_IConvertible_ToDouble;
		VirtualInvokeData System_IConvertible_ToInt16;
		VirtualInvokeData System_IConvertible_ToInt32;
		VirtualInvokeData System_IConvertible_ToInt64;
		VirtualInvokeData System_IConvertible_ToSByte;
		VirtualInvokeData System_IConvertible_ToSingle;
		VirtualInvokeData ToString_2;
		VirtualInvokeData System_IConvertible_ToType;
		VirtualInvokeData System_IConvertible_ToUInt16;
		VirtualInvokeData System_IConvertible_ToUInt32;
		VirtualInvokeData System_IConvertible_ToUInt64;
		VirtualInvokeData CompareTo;
		VirtualInvokeData CompareTo_1;
		VirtualInvokeData Equals_1;
	};

	struct Byte__StaticFields
	{
	};

	struct Byte__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		struct Byte__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
		struct Byte__VTable vtable;
	};

	struct Vector3
	{
		float x;
		float y;
		float z;
	};

	struct Vector3d
	{
		double x;
		double y;
		double z;
	};

	struct Vector3d_1
	{
		double x;
		double y;
		double z;
	};

	struct LuaAbilityParam__VTable
	{
		VirtualInvokeData Equals;
		VirtualInvokeData Finalize;
		VirtualInvokeData GetHashCode;
		VirtualInvokeData ToString;
	};

	struct LuaAbilityParam__StaticFields
	{
		struct DelegateBridge *_c__Hotfix0_ctor;
		struct DelegateBridge *__Hotfix0_Init;
	};

	struct LuaAbilityParam__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		struct LuaAbilityParam__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
		struct LuaAbilityParam__VTable vtable;
	};

	struct __declspec(align(8)) LuaAbilityParam__Fields
	{
		int32_t valueInt;
		float valueFloat;
		struct String *valueString;
	};

	struct LuaAbilityParam
	{
		struct LuaAbilityParam__Class *klass;
		MonitorData *monitor;
		struct LuaAbilityParam__Fields fields;
	};

	struct __declspec(align(8)) LuaLogic__Fields
	{
		void *OnInit;
		void *OnTick;
		void *OnDestroy;
	};

	struct ILuaActor__VTable
	{
		VirtualInvokeData get_alias;
		VirtualInvokeData get_isAutoStart;
		VirtualInvokeData get_uActor;
		VirtualInvokeData InvokeOnInteraction;
		VirtualInvokeData InvokeOnResetFreeStyle;
		VirtualInvokeData InvokeOnAbility;
		VirtualInvokeData InvokeOnFinalTalkFinish;
		VirtualInvokeData InvokeOnAppear;
		VirtualInvokeData InvokeOnDisappear;
	};

	struct ILuaActor__StaticFields
	{
	};

	struct ILuaActor__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		struct ILuaActor__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
		struct ILuaActor__VTable vtable;
	};

	struct ILuaActor
	{
		struct ILuaActor__Class *klass;
		MonitorData *monitor;
	};

	struct ActorManager__VTable
	{
		VirtualInvokeData Equals;
		VirtualInvokeData Finalize;
		VirtualInvokeData GetHashCode;
		VirtualInvokeData ToString;
		VirtualInvokeData Init;
		VirtualInvokeData Tick;
		VirtualInvokeData PostTick;
		VirtualInvokeData LateTick;
		VirtualInvokeData LatePreTick;
		VirtualInvokeData LatePreTickEnd;
		VirtualInvokeData LatePostTick;
		VirtualInvokeData LatePostTickEnd;
		VirtualInvokeData Dump;
		VirtualInvokeData Destroy;
		VirtualInvokeData ClearOnLevelDestroy;
		VirtualInvokeData InitOnConnect;
		VirtualInvokeData ClearOnDisconnect;
		VirtualInvokeData ClearOnBackHome;
		VirtualInvokeData ReloadRes;
		VirtualInvokeData InitByLocalData;
	};

	struct ActorManager__StaticFields
	{
		struct DelegateBridge *_c__Hotfix0_ctor;
		struct DelegateBridge *__Hotfix0_GetTaskListByTaskId;
		struct DelegateBridge *__Hotfix0_AddTaskByTaskId;
		struct DelegateBridge *__Hotfix0_RemoveTaskByTaskId;
		struct DelegateBridge *__Hotfix0_FinishTaskByTaskId;
		struct DelegateBridge *__Hotfix0_FinishAndClearAllTaskByType;
		struct DelegateBridge *__Hotfix0_GetTransByAlias;
		struct DelegateBridge *__Hotfix0_AddTransByAlias;
		struct DelegateBridge *__Hotfix0_RemoveTransByAlias;
		struct DelegateBridge *__Hotfix0_GetActor;
		struct DelegateBridge *__Hotfix1_GetActor;
		struct DelegateBridge *__Hotfix0_GetQuestActor;
		struct DelegateBridge *__Hotfix0_ReloadRes;
		struct DelegateBridge *__Hotfix0_AddActor;
		struct DelegateBridge *__Hotfix0_AddQuestActor;
		struct DelegateBridge *__Hotfix0_RemoveActor;
		struct DelegateBridge *__Hotfix0_ChangeActorAlias;
		struct DelegateBridge *__Hotfix0_RemoveQuestActor;
		struct DelegateBridge *__Hotfix0_DestroyByAlias;
		struct DelegateBridge *__Hotfix0_Init;
		struct DelegateBridge *__Hotfix0_InjectLuaActorMgr;
		struct DelegateBridge *__Hotfix0_Tick;
		struct DelegateBridge *__Hotfix0_TickActor;
		struct DelegateBridge *__Hotfix0_FireEvent;
		struct DelegateBridge *__Hotfix0_DispatchEvent;
		struct DelegateBridge *__Hotfix0_Destroy;
		struct DelegateBridge *__Hotfix0_DestroyOnDisconnect;
		struct DelegateBridge *__Hotfix0_DestroyBeforeQuestListInit;
		struct DelegateBridge *__Hotfix0_ClearSoft;
		struct DelegateBridge *__Hotfix0_Clear;
		struct DelegateBridge *__Hotfix0_InitLuaGlobal;
		struct DelegateBridge *__Hotfix0_InitLuaSubGlobal;
		struct DelegateBridge *__Hotfix0_PostInitLuaGlobal;
		struct DelegateBridge *__Hotfix0_PostEnterSceneLuaGlobal;
		struct DelegateBridge *__Hotfix0_LocalEntityRewind;
		struct DelegateBridge *__Hotfix0_RefreshCommonInfoData;
		struct DelegateBridge *__Hotfix0_ReconnectInitLuaGlobal;
		struct DelegateBridge *__Hotfix0_CreateActor;
		struct DelegateBridge *__Hotfix0_CreateActorWithInfo;
		struct DelegateBridge *__Hotfix0_CreateLocalActorWithInfo;
		struct DelegateBridge *__Hotfix0_CreateActorWithLocalInfo;
		struct DelegateBridge *__Hotfix0_CreateQuestActor;
		struct DelegateBridge *__Hotfix0_CreateCutsceneActor;
		struct DelegateBridge *__Hotfix0_CreateGadgetActor;
		struct DelegateBridge *__Hotfix0_CreateInterActor;
		struct DelegateBridge *__Hotfix0_StartActor;
		struct DelegateBridge *__Hotfix0_DestroyActor;
		struct DelegateBridge *__Hotfix0_DestroyActorMeta;
		struct DelegateBridge *__Hotfix0_SetEntityHandler;
		struct DelegateBridge *__Hotfix0_GetEntityHandler;
		struct DelegateBridge *__Hotfix0_DestroyEntityHandler;
		struct DelegateBridge *__Hotfix0_NotifyBanDailyExternal;
		struct DelegateBridge *__Hotfix0_NotifyStartDailyExternal;
		struct DelegateBridge *__Hotfix0_ClearOnLevelDestroy;
		struct DelegateBridge *__Hotfix0_ClearOnDisconnect;
		struct DelegateBridge *__Hotfix0_ClearOnBackHome;
		struct DelegateBridge *__Hotfix0_ClearBeforeQuestListInit;
		struct DelegateBridge *__Hotfix0_CreateLocalMonster;
		struct DelegateBridge *__Hotfix0_CreateLocalGadget;
		struct DelegateBridge *__Hotfix0_GetTaskTagsByAction;
		struct DelegateBridge *__Hotfix0_InitTaskTag;
		struct DelegateBridge *__Hotfix0_PlayerDie;
		struct DelegateBridge *__Hotfix0_PlayerInCombat;
		struct DelegateBridge *__Hotfix0_OpenMainPage;
		struct DelegateBridge *__Hotfix0_OpenPage;
		struct DelegateBridge *__Hotfix0_Transmiting;
		struct DelegateBridge *__Hotfix0_EnterDungeon;
		struct DelegateBridge *__Hotfix0_PauseByTag;
		struct DelegateBridge *__Hotfix0_ResumeByTag;
		struct DelegateBridge *__Hotfix0_AddPauseTag;
		struct DelegateBridge *__Hotfix0_RemovePauseTag;
		struct DelegateBridge *__Hotfix0_ClearPauseTag;
		struct DelegateBridge *__Hotfix0_GetTaskTagPauseCount;
		struct DelegateBridge *__Hotfix0_Dump;
	};

	struct ActorManager__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		struct ActorManager__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
		struct ActorManager__VTable vtable;
	};

	struct Int32__Array
	{
		void *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		int32_t vector[32];
	};

	struct Link
	{
		int32_t HashCode;
		int32_t Next;
	};

	struct Link__Array
	{
		void *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct Link vector[32];
	};

	struct String__Array
	{
		void *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct String *vector[32];
	};

	struct BaseActor__Array
	{
		void *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct BaseActor *vector[32];
	};

	struct __declspec(align(8)) Dictionary_2_System_String_MoleMole_BaseActor___Fields
	{
		struct Int32__Array *table;
		struct Link__Array *linkSlots;
		struct String__Array *keySlots;
		struct BaseActor__Array *valueSlots;
		int32_t touchedSlots;
		int32_t emptySlot;
		int32_t count;
		int32_t threshold;
		void *hcp;
		void *serialization_info;
		int32_t generation;
	};

	struct Dictionary_2_System_String_MoleMole_BaseActor_
	{
		void *klass;
		MonitorData *monitor;
		struct Dictionary_2_System_String_MoleMole_BaseActor___Fields fields;
	};

	struct __declspec(align(8)) List_1_System_String___Fields
	{
		struct String__Array *_items;
		int32_t _size;
		int32_t _version;
		struct Object *_syncRoot;
	};

	struct List_1_System_String_
	{
		struct List_1_System_String___Class *klass;
		MonitorData *monitor;
		struct List_1_System_String___Fields fields;
	};

	struct __declspec(align(8)) List_1_MoleMole_BaseActor___Fields
	{
		struct BaseActor__Array *_items;
		int32_t _size;
		int32_t _version;
	};

	struct List_1_MoleMole_BaseActor_
	{
		void *klass;
		MonitorData *monitor;
		struct List_1_MoleMole_BaseActor___Fields fields;
	};

	struct __declspec(align(8)) Object_1__Fields
	{
		void *m_CachedPtr;
	};

	struct Object_1
	{
		struct Object_1__Class *klass;
		MonitorData *monitor;
		struct Object_1__Fields fields;
	};

	struct Component_1__Fields
	{
		struct Object_1__Fields _;
	};

	struct Component_1
	{
		struct Component_1__Class *klass;
		MonitorData *monitor;
		struct Component_1__Fields fields;
	};

	struct Component_1__Array
	{
		struct Component_1__Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct Component_1 *vector[32];
	};

	struct Transform__Fields
	{
		struct Component_1__Fields _;
	};

	struct Transform
	{
		void *klass;
		MonitorData *monitor;
		struct Transform__Fields fields;
	};

	struct Transform__Array
	{
		void *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct Transform *vector[32];
	};

	struct __declspec(align(8)) Dictionary_2_System_String_UnityEngine_Transform___Fields
	{
		struct Int32__Array *buckets;
		struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Transform___Array *entries;
		int32_t count;
		int32_t version;
		int32_t freeList;
		int32_t freeCount;
		struct IEqualityComparer_1_System_String_ *comparer;
		void *keys;
		void *values;
		struct Object *_syncRoot;
	};

	struct Dictionary_2_System_String_UnityEngine_Transform_
	{
		void *klass;
		MonitorData *monitor;
		struct Dictionary_2_System_String_UnityEngine_Transform___Fields fields;
	};

	struct __declspec(align(8)) ActorManager__Fields
	{
		bool _initialized;
		struct Dictionary_2_System_String_MoleMole_BaseActor_ *_actorDic;
		struct List_1_MoleMole_BaseActor_ *_actorList;
		void *_questActorDic;
		void *_taskId2TaskDic;
		struct Dictionary_2_System_String_UnityEngine_Transform_ *_transDic;
		void *_luaActorMgr;
		void *_curPausedTag;
		void *_action2TaskTags;
	};

	struct ActorManager
	{
		struct ActorManager__Class *klass;
		MonitorData *monitor;
		struct ActorManager__Fields fields;
	};

	struct BaseActor__Fields
	{
		struct LuaLogic__Fields _;
		void *OnActorEvent;
		struct String *_alias;
		struct String *_metaPath;
		struct ILuaActor *_luaActor;
		struct LuaAbilityParam *_luaAbilityParam;
		struct ActorManager *_actMgr;
		bool _isPaused;
		void *_taskQueues;
		void *_runningTaskList;
		bool _isDestroied;
		void *_actorHandlers;
		void *_coroutineDic;
		int32_t _coroutinueId;
		bool _isDayRegistered;
		void *_onLuaActorDayTime;
		bool _isNightRegistered;
		void *_onLuaActorNightTime;
		bool _isAbyssalPalaceDayRegistered;
		void *_onLuaActorAbyssalPalaceDayChanged;
		bool _isAbyssalPalaceNightRegistered;
		void *_onLuaActorAbyssalPalaceNightChanged;
		bool _isWeatherRegistered;
		void *_onSelfWeatherChanged;
		bool _isHourRegistered;
		void *_onLuaHour;
		void *_effectHandlerDic;
		uint32_t _lastSayDialogID;
		uint32_t _lastSayNarratorMainQuestID;
		void *_tag2Task;
		void *_tagTaskHasPaused;
		void *_tag2PauseCallback;
		void *_tag2ResumeCallback;
	};

	struct BaseActor__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		void *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
	};

	struct BaseActor
	{
		struct BaseActor__Class *klass;
		MonitorData *monitor;
		struct BaseActor__Fields fields;
	};

	struct GlobalActor__Fields
	{
		struct BaseActor__Fields _;
		struct MoleMole_LevelEntity *_levelEntity;
		struct LevelTimeManager *_levelTimeMgr;
		struct EnviroSky *_enviroSky;
		struct Action_1_Int32_ *_OnWeatherChanged;
		struct LevelTimeManager_isDayCB *_OnDayCallBack;
		struct LevelTimeManager_isNightCB *_OnNightCallBack;
		struct LevelTimeManager_HourPassed *_OnHourPassedCallBack;
		struct LuaBtnTransmitTask *_curBtnTransmitTask;
	};

	struct GlobalActor
	{
		struct GlobalActor__Class *klass;
		MonitorData *monitor;
		struct GlobalActor__Fields fields;
	};

	enum class LuaHomeTask_GreetState__Enum : int32_t
	{
		None = 0x00000000,
		Entering = 0x00000001,
		Performing = 0x00000002,
		Leaving = 0x00000003,
	};

	enum class LuaTaskType__Enum : int32_t
	{
		NORMAL = 0x00000000,
		MOVE = 0x00000001,
		THREAT = 0x00000002,
		FREE_STYLE = 0x00000003,
		LIMIT_REGION = 0x00000004,
		BTN_TRANS = 0x00000005,
		STEER = 0x00000006,
		SPEECH_BUBBLE = 0x00000007,
		FORCE_WALK = 0x00000008,
		HOME = 0x00000009,
		SAFE_CIRCLE = 0x0000000a,
		NPC_FOLLOW_PLAYER = 0x0000000b,
	};


	struct __declspec(align(8)) LuaTask__Fields
	{
		void *StartEvent;
		void *FinishEvent;
		void *PauseEvent;
		void *ResumeEvent;
		void *TickEvent;
		void *DisappearEvent;
		void *AppearEvent;
		void *DestroyEvent;
		LuaTaskType__Enum _taskType;
		bool _isStarted;
		bool _isFinished;
		bool _isPaused;
		bool _isDestroyed;
		int32_t _taskQueueID;
		struct BaseActor *_actor;
		struct String *_tag;
		void *_syncCoDic;
	};

	struct __declspec(align(8)) DTimer__Fields
	{
		int32_t _JLJFEKLMDOF_k__BackingField;
		void *_callback;
		uint32_t KBPOAAOFJLM;
		float time1;
		float time2;
		bool isActiveMaybe;
	};

	struct DTimer
	{
		struct DTimer__Class *klass;
		MonitorData *monitor;
		struct DTimer__Fields fields;
	};

	enum class EntityType__Enum_1 : int32_t
	{
		None = 0x00000000,
		Avatar = 0x00000001,
		Monster = 0x00000002,
		Bullet = 0x00000003,
		AttackPhyisicalUnit = 0x00000004,
		AOE = 0x00000005,
		Camera = 0x00000006,
		EnviroArea = 0x00000007,
		Equip = 0x00000008,
		MonsterEquip = 0x00000009,
		Grass = 0x0000000a,
		Level = 0x0000000b,
		NPC = 0x0000000c,
		TransPointFirst = 0x0000000d,
		TransPointFirstGadget = 0x0000000e,
		TransPointSecond = 0x0000000f,
		TransPointSecondGadget = 0x00000010,
		DropItem = 0x00000011,
		Field = 0x00000012,
		Gadget = 0x00000013,
		Water = 0x00000014,
		GatherPoint = 0x00000015,
		GatherObject = 0x00000016,
		AirflowField = 0x00000017,
		SpeedupField = 0x00000018,
		Gear = 0x00000019,
		Chest = 0x0000001a,
		EnergyBall = 0x0000001b,
		ElemCrystal = 0x0000001c,
		Timeline = 0x0000001d,
		Worktop = 0x0000001e,
		Team = 0x0000001f,
		Platform = 0x00000020,
		AmberWind = 0x00000021,
		EnvAnimal = 0x00000022,
		SealGadget = 0x00000023,
		Tree = 0x00000024,
		Bush = 0x00000025,
		QuestGadget = 0x00000026,
		Lightning = 0x00000027,
		RewardPoint = 0x00000028,
		RewardStatue = 0x00000029,
		MPLevel = 0x0000002a,
		WindSeed = 0x0000002b,
		MpPlayRewardPoint = 0x0000002c,
		ViewPoint = 0x0000002d,
		RemoteAvatar = 0x0000002e,
		GeneralRewardPoint = 0x0000002f,
		PlayTeam = 0x00000030,
		OfferingGadget = 0x00000031,
		EyePoint = 0x00000032,
		MiracleRing = 0x00000033,
		Foundation = 0x00000034,
		WidgetGadget = 0x00000035,
		Vehicle = 0x00000036,
		DangerZone = 0x00000037,
		EchoShell = 0x00000038,
		HomeGatherObject = 0x00000039,
		Projector = 0x0000003a,
		Screen = 0x0000003b,
		CustomTile = 0x0000003c,
		FishPool = 0x0000003d,
		FishRod = 0x0000003e,
		CustomGadget = 0x0000003f,
		RoguelikeOperatorGadget = 0x00000040,
		ActivityInteractGadget = 0x00000041,
		BlackMud = 0x00000042,
		SubEquip = 0x00000043,
		UIInteractGadget = 0x00000044,
		NightCrowGadget = 0x00000045,
		Partner = 0x00000046,
		DeshretObeliskGadget = 0x00000047,
		CoinCollectLevelGadget = 0x00000048,
		PlaceHolder = 0x00000063,
	};

	enum class TickState__Enum : int32_t
	{
		NormalTick = 0x00000000,
		Idle = 0x00000001,
		InterleavedTick = 0x00000002,
	};

	enum class CollisionDetectionMode__Enum : int32_t
	{
		Discrete = 0x00000000,
		Continuous = 0x00000001,
		ContinuousDynamic = 0x00000002,
	};

	struct GameObject__Fields
	{
		struct Object_1__Fields _;
	};

	struct GameObject
	{
		struct GameObject__Class *klass;
		MonitorData *monitor;
		struct GameObject__Fields fields;
	};

	struct GameObject__VTable
	{
		VirtualInvokeData Equals;
		VirtualInvokeData Finalize;
		VirtualInvokeData GetHashCode;
		VirtualInvokeData ToString;
	};

	struct GameObject__StaticFields
	{
	};

	struct GameObject__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		struct GameObject__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
		struct GameObject__VTable vtable;
	};

	struct SimpleSafeUInt32
	{
		uint32_t _value;
	};

	struct SimpleSafeInt32
	{
		int32_t _value;
	};

	struct SimpleSafeUInt16
	{
		uint16_t _value;
	};

	struct SimpleSafeInt16
	{
		uint16_t _value;
	};

    struct SimpleSafeUInt8
    {
        uint8_t _value;
    };

	struct Quaternion
	{
		float x;
		float y;
		float z;
		float w;
	};

	struct AsyncJob
	{
		void *_voucher;
		void *_job;
	};

	enum class VisionType__Enum : int32_t
	{
		VisionNone = 0x00000000,
		VisionMeet = 0x00000001,
		VisionReborn = 0x00000002,
		VisionReplace = 0x00000003,
		VisionWaypointReborn = 0x00000004,
		VisionMiss = 0x00000005,
		VisionDie = 0x00000006,
		VisionGatherEscape = 0x00000007,
		VisionRefresh = 0x00000008,
		VisionTransport = 0x00000009,
		VisionReplaceDie = 0x0000000a,
		VisionReplaceNoNotify = 0x0000000b,
		VisionBorn = 0x0000000c,
		VisionPickup = 0x0000000d,
		VisionRemove = 0x0000000e,
		VisionChangeCostume = 0x0000000f,
		VisionFishRefresh = 0x00000010,
		VisionFishBigShock = 0x00000011,
		VisionFishQteSucc = 0x00000012,
		DGAHPCMJBNI = 0x00000013,
	};

	enum class MoleMole_BaseEntity_MoleMole_BaseEntity_ReInitReason__Enum : int32_t
	{
		Default = 0x00000000,
		Appear = 0x00000001,
		Revive = 0x00000002,
		Reuse = 0x00000003,
	};

	struct Behaviour__Fields
	{
		struct Component_1__Fields _;
	};

	struct Nullable_1_Vector3_
	{
		struct Vector3 value;
		bool has_value;
	};

	struct Nullable_1_Quaternion_
	{
		struct Quaternion value;
		bool has_value;
	};

	struct MonoBehaviour__Fields
	{
		struct Behaviour__Fields _;
	};

	enum class HitBoxType__Enum : int32_t
	{
		Normal = 0x00000000,
		Head = 0x00000001,
	};

	struct __declspec(align(8)) NamedCollider__Fields
	{
		uint32_t index;
		struct String *name;
		struct Collider *collider;
		bool lockable;
		HitBoxType__Enum hitBoxType;
		struct Transform__Array *hitObjects;
		struct Single__Array *hitObjectsRadius;
		struct Renderer__Array *renderers;
	};

	struct NamedCollider
	{
		struct NamedCollider__Class *klass;
		MonitorData *monitor;
		struct NamedCollider__Fields fields;
	};

	struct NamedCollider__Array
	{
		struct NamedCollider__Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct NamedCollider *vector[32];
	};

	struct __declspec(align(8)) NamedTransform__Fields
	{
		struct String *name;
		struct Transform *transform;
	};

	struct NamedTransform
	{
		struct NamedTransform__Class *klass;
		MonitorData *monitor;
		struct NamedTransform__Fields fields;
	};

	struct NamedTransform__Array
	{
		struct NamedTransform__Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct NamedTransform *vector[32];
	};

	struct MonoTransformChangeHelper__Fields
	{
		struct MonoBehaviour__Fields _;
		struct HashList_1_Action_1_Vector3__ *_onPositionChange;
		struct HashList_1_Action_1_Quaternion__ *_onRotationChange;
	};

	struct MonoVisualEntityTool__Fields
	{
		struct MonoTransformChangeHelper__Fields _;
		struct NamedTransform__Array *transforms;
		struct Dictionary_2_Int32_TransformDefaults_ *_transformsDefault;
		struct Dictionary_2_String_Transform_ *_dynamicTransformDict;
		struct Dictionary_2_String_Transform_ *_dynamicTransformWorldDict;
		struct Dictionary_2_Transform_Boolean_ *_dynamicTransformWorldDisableConfig;
		struct Renderer__Array *_renderers;
		struct SkinnedMeshRenderer__Array *_skinnedMeshRenderers;
		bool _isSkinnedMeshRenderersInit;
		struct RendererInfo__Array *rendererInfos;
		struct MaterialInfo__Array *materialInfos;
		struct VisualEntityLightInfo__Array *lightInfos;
		struct Dictionary_2_Collider_EGJMDMDJKMC__Enum_ *KBDPAGCCOPM;
		struct NamedCollider__Array *hitBoxes;
		struct Dictionary_2_Int32_NamedColliderDefaults_ *_hitBoxesDefault;
		bool complexHitBox;
		struct NamedTransform__Array *pushColliders;
		struct Dictionary_2_Int32_CollidersDefaults_ *_pushCollidersDefault;
		struct Vector3__Array *meshVertices;
		struct Int32__Array *meshTriangles;
		struct Collider__Array *connectTriggers;
		struct Collider__Array *ScenePropColliders;
		struct Collider__Array *detectTriggers;
		struct Bounds__Array *ScenePropColliderBounds;
		struct Collider__Array *DynamicBarriers;
		struct Vector3 dynamicBarriersColliderOverallMax;
		struct Vector3 dynamicBarriersColliderOverallMin;
		struct GameObject__Array *gameObjectsCantFindEntity;
		struct BoneFollowMove *boneFollowMove;
		float shoesOffset;
		bool dynamicShoesOffset;
		int32_t footIKMode;
		float climbFootOffset;
		float characterPushCollisionRadius;
		float entityHeight;
		float entityNearByRange;
		struct NamedTransform *entityHeightAttachPoint;
		bool entityHeightEnable;
		bool isVolatileGameObject;
		bool ignoreLODPattern;
		float effectFallOffBegin;
		float effectFallOffEnd;
		struct List_1_MonoLightActiveBase_ *lightActiveCallbackList;
		struct List_1_IK_ *finalIKList;
		bool BornWithDefaultMotionVectorsSetting;
		bool usePushColliderExCollision;
		struct Vector3 _readyPosition;
		struct EmoSync *_emoSync;
		struct EyeCtrl *_eyeCtrl;
		struct EyeKey *_eyeKey;
		struct Action_3_BaseEntity_Int32_Int32_ *_onTickLodChanged;
		struct Renderer *_cachedMainRenderer_k__BackingField;
		struct MonoVisualEntityTool_AfterImageFollowInfo__Array *_afterImages;
		struct AnimationClip *IKClip;
		float _viewSize;
		float _rootNodeHeight;
		bool _isMonoRefInited;
		struct Nullable_1_Vector3_ _sharedRootNodePosition;
	};

	struct MonoVisualEntityTool
	{
		struct MonoVisualEntityTool__Class *klass;
		MonitorData *monitor;
		struct MonoVisualEntityTool__Fields fields;
	};

	// Entity fields
	struct __declspec(align(8)) BaseEntity__Fields
	{
        struct Dictionary_2_System_UInt32_AIPerceptionInfo_ *_aiPerceptionDic;
        struct ConfigEntity *jsonConfig;
        struct EntityExcelConfig *excelConfig;
        uint32_t _runtimeID_k__BackingField;
        uint32_t _preRuntimeID_k__BackingField;
        uint32_t _configID_k__BackingField;
        uint32_t _questID_k__BackingField;
        uint32_t _switchToQuestID_k__BackingField;
        struct SimpleSafeUInt32 campID;
        bool isDestroied;
        bool _isToBeRemoved;
        bool isInCutscene;
        bool isDontDestroyGameObject;
        struct String *alias;
        int32_t order;
        bool isForceClientSynced;
        int32_t HHCOJOALGNJ;
        bool IJMFPLJHCPJ;
        struct ComponentManager *_logicComponentManager;
        struct ComponentManager *_visualComponentManager;
        bool _isInited;
        struct Action_1_EvtEntityTimeScaleChange_ *_onLevelTimeScaleChange;
        struct Action *_syncAnimatorSpeed;
        struct Action *_onTimeScaleChangedByAbility;
        struct EntityQueryIndex *_queryIndex;
        struct AbilityComponentProxy *_abilityProxy;
        struct TokenManager *_tokenMgr;
        VisionType__Enum _disappearVisionType_k__BackingField;
        bool CELCEPAEEOI;
        bool NAPKKPCLEJL;
        bool _GDKDNDAGBFB_k__BackingField;
        bool PBKECDHGBIN;
        float OACIBKKCGCO;
        bool HBECPLJFPOI;
        struct Action_1_BaseEntity_ *onComponentInitPostCallback;
        struct Action_1_BaseEntity_ *onEntityReadyPreCallback;
        struct Action_1_BaseEntity_ *onEntityReadyBeforePostCallback;
        bool _IsTickable;
        bool _forceTickVisualComMgrIfDisable_k__BackingField;
        bool _logicHasAnyTickComponent_k__BackingField;
        bool _visualHasAnyTickComponent_k__BackingField;
        bool _logicHasAnyLateTickComponent_k__BackingField;
        bool _visualHasAnyLateTickComponent_k__BackingField;
        bool isLightInitializationEntity;
        bool _canBeDestroied_k__BackingField;
        bool _isDestroying;
        struct Action_1_BaseEntity_ *onEntityRemovedCallback;
        struct Action_1_BaseEntity_ *onDestroyCallback;
        bool _isAlive;
        struct Action_1_BaseEntity_ *onSetAliveFalseCallback;
        bool _isActive;
        struct Action_1_BaseEntity_ *preAnimatorInitUpdateCallback;
        bool _needSetActiveOnEntityReady;
        bool _setActiveOnEntityReady;
        struct Action_2_BaseEntity_Boolean_ *onSetActiveCallback;
        bool _withGameObjWhenSetActive;
        bool _isLightActive;
        bool _playDefault;
        bool _deepIfInactive;
        bool _forceSkipAnimatorUpdate;
        bool _hasActiveInited;
        bool _duringSetComponentsEnabledOnSetActive_k__BackingField;
        float _lastTimeScale;
        float _timeScale;
        float GALBNKDJLPA;
        bool ignoreLevelTimeScale;
        struct FixedStack_1_System_Single_ *_timeScaleStack;
        struct LCAbilityState *_lcAblityState;
        uint32_t _nextComponentID;
        EntityType__Enum_1 entityType;//i've gone completely mental
        bool _isAuthority;
        uint32_t authorityPeerId;
        bool BKJPKHNCBBE;
        bool JHDMINPIGEP;
        struct HashList_1_BaseComponent_ *_componentsForEntityTickManager;
        float _lastTickTime_k__BackingField;
        struct List_1_BaseEntity_BaseEntity_ComponentInitNotifyData_ *_notifyListOnComponentInit;
        struct Dictionary_2_System_String_DynamicCollisionInfo_ *_collisionTagDic;
        bool _needSafeEntityInit;
        struct List_1_EntitySafeCmd_ *_entitySafeCmds;
        struct Vector3 _sharedPosition;
        struct Vector3 _sharedForward;
        struct MEventDispatcher *_eventDispatcher;
        struct Func_1_Boolean_ *onShouldNoPause;
        struct Action_3_UnityEngine_TickState_Boolean_Boolean_ *onAnimatorTickStateChange;
        struct HashList_1_IRenderable_ *_extraRenderers;
        struct HashSet_1_IRequestOwnerEntityNoPauseTask_ *_noPauseTaskRequests;
        bool OLFBFLJECFC;
        bool MGGGAHFHAKN;
        TickState__Enum _currentAnimatorTickState;
        struct EntityTickBalanceProxy *_tickBalanceProxy;
        bool IIFCMNHLCHL;
        bool _bIgnoreIntervalTick_k__BackingField;
        bool _AFKDABPOMLB_k__BackingField;
        float __fullTickSqrMag_k__BackingField;
        int32_t _greaterToDisableInterval_k__BackingField;
        struct Func_1_Single_ *_getBalanceTickDeltaTimeHandler;
        struct Func_1_Boolean_ *_getRequestPauseHandler;
        uint64_t animatorConfigPath;
        struct Config_ConfigAnimator *_animatorConfig;
        struct AnimatorOverrideController *_animatorOverrideController;
        int32_t _lastSetOverrideAnimeFrame;
        struct AnimatorOverrideController *_originAnimatorController;
        struct Dictionary_2_System_String_BaseEntity_BaseEntity_AnimeLoadInfo_ *_curLoadedAnime;
        struct RecycledLinkedList_1_BaseEntity_BaseEntity_AnimeLoadInfo_ *_needFlushResetAnimes;
        int32_t _curForceCacheFreeStyleId;
        struct EntityTimerReceiver *_animeRecycleTimer;
        struct Coroutine *_checkAnimeLoadFinishCoroutine;
        struct BaseEntity_BaseEntity_AnimeOverrideFlushList *_animatorOverrideFlushList;
        struct EntityPreloader *_onCreatePreloader;
        struct EntityPreloader *_onCombatPreloader;
        struct EntityPreloader *_onSceneDataNotifyPreloader;
        uint32_t _gameObjectResourceHandle;
        int32_t _preloadIndex;
        struct GameObject *_preLoadObject;
        struct Action_1_BaseEntity_ *_jsonConfigLoadedCallback;
        struct MonoVisualEntityTool *_visualEntityTool_k__BackingField;
        struct GameObject *_rootGameObject_k__BackingField;
        struct GameObject *_offsetDummyObject;
        struct GameObject *_animatorObject;
        bool _isForceDisableGameObjectPool;
        struct MaterialGroup *_defaultGroup;
        struct MaterialGroup *_instancedMaterialGroup;
        struct GameObject *_gameObject_k__BackingField;
        bool _enableSyncFromTransform_k__BackingField;
        struct Transform *_transform_k__BackingField;
        struct Transform *_gameObjectParent_k__BackingField;
        bool forceUpdateRigidbodyRotationCurFrame;
        struct Rigidbody *_mRigidbody;
        CollisionDetectionMode__Enum _defaultCollisionDetectionMode;
        CollisionDetectionMode__Enum _curCollisionDetectionMode;
        struct Animator *_animator;
        bool _animatorCullModeExternal;
        struct Action_1_BaseEntity_ *finishLoadCallback;
        float cachedEntityDist;
        float localEntityDist;
        bool localEntityWithGO;
        bool _isLoaded_k__BackingField;
        struct Vector3 _initPos_k__BackingField;
        struct Quaternion _initRotation_k__BackingField;
        float _initUniformScale_k__BackingField;
        uint64_t _prefabPathHash_k__BackingField;
        bool _forceDontUseUpdateRigidbody;
        bool _useDummyPrefab;
        bool _createDummyGameObject;
        struct AsyncJob _loadJob;
        struct WorldTimer *_infoTimer;
        struct EntityGameObjectNode *_gameObjectNode;
        bool _isGameObjectFromPool;
        bool _isEntityAsyncLoad;
        bool _hasGameObject_k__BackingField;
        float _curMass;
        struct FixedFloatStack *_massRatio;
        bool _enableSetPostiion;
        struct Vector3 _lastPosInParent;
        struct Collider__Array *HGKGNFJIGCK;
        int32_t AHFEOKHDNFC;
        bool CECPNABKMAN;
        int32_t KBLPJPHLOFE;
        int32_t EBOFNGCDPJH;
        bool OECAPHBFDPJ;
        bool PMMFNDDLABL;
        bool LPEKNGOGMNA;
        struct Vector3 EJJIGHIEFOB;
        struct Quaternion CKMKDNFIDPG;
        float JDMJNKBMOJN;
        bool GAIFCPOADPN;
        struct Vector3 AOFJNDHPHDL;
        struct RuntimeAnimatorController *_authorityRuntimeAnimatorController;
        struct RuntimeAnimatorController *_remoteRuntimeAnimatorController;
        uint32_t _authorityRuntimeAnimatorHandler;
        uint32_t _remoteRuntimeAnimatorHandler;
        bool NEFPKAALJEK;
        struct HashSet_1_String_ *DMNDPPHNKPG;
        struct Dictionary_2_System_Int32_System_Boolean_ *_boolPersistentParams;
        struct Dictionary_2_System_Int32_System_Int32_ *_intPersistentParams;
        struct Dictionary_2_System_Int32_System_Single_ *_floatPersistentParams;
        struct List_1_System_ValueTuple_5_ *_linearSmoothAnimatorFloats;
	};
	struct BaseEntity
	{
		void *klass;
		MonitorData *monitor;
		struct BaseEntity__Fields fields;
	};

	struct EntityActor__Fields
	{
		struct BaseActor__Fields _;
		void *_lcActor;
		struct BaseEntity *_entity;
		bool _isDaily;
		void *SensibleInfoEvent;
		void *_curDitherCallBack;
		bool _ensureDitherCallBack;
		void *_disappearFinishCallback;
		bool _isActorOnly;
		bool _isDisappearToDestroy;
		struct DTimer *_disappearTimer;
	};

	struct EntityActor
	{
		struct EntityActor__Class *klass;
		MonitorData *monitor;
		struct EntityActor__Fields fields;
	};

	struct __declspec(align(8)) SpeechBubbleData__Fields
	{
		uint32_t _dirtyFlag_k__BackingField;
		bool _lastCondRet_k__BackingField;
		void *conditions;
		int32_t weight;
		uint32_t initDialog;
	};

	struct SpeechBubbleData
	{
		struct SpeechBubbleData__Class *klass;
		MonitorData *monitor;
		struct SpeechBubbleData__Fields fields;
	};

	struct LuaHomeTask__Fields
	{
		struct LuaTask__Fields _;
		struct EntityActor *_entityActor;
		void *_actionList;
		void *_speechBubbleGroup;
		int32_t _curActionIndex;
		uint32_t _condDirtyFlag;
		bool _needCheckAction;
		bool _needCheckActionForce;
		bool _needRefreshAction;
		void *_curFreeStyleData;
		float _curFreeStyleLeftTime;
		struct Vector3 _curActionPointPos;
		struct Vector3 _curActionPointForward;
		float _curWaitingQuitFreeStyle;
		void *_greetConfig;
		bool _allowGreet;
		float _curGreetTurnTime;
		struct Vector3 _curGreetForward;
		LuaHomeTask_GreetState__Enum _curGreetState;
		float _lastGreetLeaveTime;
		struct SpeechBubbleData *_curSpeechBubbleData;
		uint32_t _curSpeechBubbleDialogId;
		float _nextSpeechBubbleTime;
		float _curSpeechBubbleLeftTime;
		uint32_t _nextSpeechBubbleDialogId;
		bool _isSpeechBubblePlayVoice;
		bool _isInitFinish;
		bool _isSelfPause;
		bool _isSelfDisappear;
		bool _registAnimeReady;
		void *_tempCondContainerList;
	};

	struct LuaHomeTask
	{
		void *klass;
		MonitorData *monitor;
		struct LuaHomeTask__Fields fields;
	};

	struct __declspec(align(8)) MonoLevelMap_AreaFogConfig__Fields
	{
		uint32_t AreaID;
		float blend;
		struct String__Array *blockName;
		struct String__Array *channnel;
	};

	struct MonoLevelMap_AreaFogConfig
	{
		struct MonoLevelMap_AreaFogConfig__Class *klass;
		MonitorData *monitor;
		struct MonoLevelMap_AreaFogConfig__Fields fields;
	};

	struct MonoLevelMap_AreaFogConfig__Array
	{
		struct MonoLevelMap_AreaFogConfig__Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct MonoLevelMap_AreaFogConfig *vector[32];
	};

	struct MonoSpriteProxy__Fields
	{
		struct MonoBehaviour__Fields _;
		void *FHGFLEBJCGO;
	};

	struct Animator__Fields
	{
		struct Behaviour__Fields _;
	};

	struct Animator
	{
		void *klass;
		MonitorData *monitor;
		struct Animator__Fields fields;
	};

	struct Color
	{
		float r;
		float g;
		float b;
		float a;
	};

	struct UIBehaviour__Fields
	{
		struct MonoBehaviour__Fields _;
	};

	struct Graphic__Fields
	{
		struct UIBehaviour__Fields _;
		void *m_Material;
		bool m_UseRendererColor;
		struct Color m_Color;
		bool m_RaycastTarget;
		void *m_RectTransform;
		void *m_CanvasRenderer;
		void *m_Canvas;
		bool m_VertsDirty;
		bool m_MaterialDirty;
		void *m_OnDirtyLayoutCallback;
		void *m_OnDirtyVertsCallback;
		void *m_OnDirtyMaterialCallback;
		void *m_ColorTweenRunner;
		bool _useLegacyMeshGeneration_k__BackingField;
		bool _verticesDirtyWhenLightweightDeactive_k__BackingField;
		bool _materialDirtyWhenLightweightDeactive_k__BackingField;
	};

	struct MaskableGraphic__Fields
	{
		struct Graphic__Fields _;
		bool m_ShouldRecalculateStencil;
		void *m_MaskMaterial;
		bool m_ShouldRecalculateSmoothMask;
		void *m_SmoothMaskMaterial;
		void *m_SmoothMask;
		void *m_ParentMask;
		bool m_Maskable;
		bool m_IncludeForMasking;
		void *m_OnCullStateChanged;
		bool m_ShouldRecalculate;
		int32_t m_StencilValue;
		void *m_Corners;
	};

	/*struct MaskableGraphic {
		 struct MaskableGraphic__Class* klass;
		 MonitorData* monitor;
		 struct MaskableGraphic__Fields fields;
	 };*/

	struct Text__Fields
	{
		struct MaskableGraphic__Fields _;
		void *m_FontData;
		struct String *m_Text;
		void *m_TextCache;
		void *m_TextCacheForLayout;
		bool m_DisableFontTextureRebuiltCallback;
		struct Color m_CachedColor;
		void *m_TempVerts;
	};

	struct Text
	{
		struct Text__Class *klass;
		MonitorData *monitor;
		struct Text__Fields fields;
	};
	struct Text__Array
	{
		void *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct Text *vector[32];
	};

	struct Vector2
	{
		float x;
		float y;
	};

	struct MonoLevelMap__Fields
	{
		struct MonoSpriteProxy__Fields _;
		struct MonoLevelMap_AreaFogConfig__Array *areaConfig;
		float fogAnimSpeed;
		float fogAreaAnimSpeed;
		int32_t _cellRectSize;
		int32_t _cellSize;
		struct Transform *_mapArea;
		struct Transform *MapRoomAnchor;
		struct Transform *_fogArea;
		struct Transform *_guidArea;
		struct Animator *placeNames;
		struct Animator *areaNames;
		struct Text__Array *placeTextList;
		struct Text__Array *areaTextList;
		void *exploreDegreeList;
		void *HAIFLCJCDPN;
		void *FFBIMCFJIIP;
		struct Vector2 vec2;
		struct Color OKKOJCIOMAF;
		struct Color IDICJLOMLML;
		bool KDGCCIAMPEP;
		float OPJFODGABDE;
		void *HKAINLLOIOO;
		float LDKBKFCJFGG;
		float LCDJLIPCPPH;
		struct String *_terrainMatPrefix;
		void *sceneTag;
		void *sceneTagRelatedTerrain;
		bool isInterior;
		bool hasMultiFloor;
		bool isBigWorld;
		bool needExploreDegree;
		struct String *_terrainMatName;
		struct String *roomIconName;
		int32_t PPKNEBBAOJK;
		struct String *currSceneTag;
		void *LDBLNDEJGNB;
		int32_t _playerCurrentFloor;
		void *PNHFGGFPDDP;
		struct GameObject *JADKKHKDDHD;
		uint32_t AOGIJPKLAFB;
		struct GameObject *OAPJGOIJCBK;
		struct AsyncJob JMFIHNONJOH;
		struct GameObject *markPointArea;
		void *dicQuestArea;
		void *markAreaAnchor;
		void *markAreaAnchorMiniMap;
		struct GameObject *exploreDegreePrefab;
		uint32_t PNGBAMGLJPP;
		struct GameObject *EKMBOPLOOFA;
		void *NKNPJOCFKJG;
	};

	struct MonoLevelMap
	{
		void *klass;
		MonitorData *monitor;
		struct MonoLevelMap__Fields fields;
	};

	enum class MoleMole_Config_MarkType__Enum : int32_t
	{
		Default = 0x00000000,
		TransPoint = 0x00000001,
		Quest = 0x00000002,
		Custom = 0x00000003,
		LocalAvatar = 0x00000004,
		Companion = 0x00000005,
		Monster = 0x00000006,
		NearHint = 0x00000008,
		ScenePoint = 0x00000009,
		Task = 0x0000000a,
		Boss = 0x0000000b,
		Talk = 0x0000000c,
		PacketAnchor = 0x0000000d,
		Widget = 0x0000000e,
		FlightChallenge = 0x0000000f,
		Hunting = 0x00000010,
		Routine = 0x00000011,
		ActivitySearchRegion = 0x00000012,
		GalleryChallenge = 0x00000013,
		HomeworldDynamic = 0x00000014,
		SignalPoint = 0x00000015,
		Vehicle = 0x00000016,
		HomeworldFurnitureSuite = 0x00000017,
		Activity = 0x00000018,
		HomeworldFarmField = 0x00000019,
		Offering = 0x0000001a,
		QuestAcception = 0x0000001b,
	};

	enum class MoleMole_Config_MarkIconType__Enum : int32_t
	{
		Default = 0x00000000,
		MarkChurch = 0x00000001,
		MarkKnights = 0x00000002,
		MarkPub = 0x00000003,
		MarkSouvenir = 0x00000004,
		MarkRestaurant = 0x00000005,
		MarkGeneralCargo = 0x00000006,
		MarkBlacksmith = 0x00000007,
		MarkTeamArranger = 0x00000008,
		MarkDailyTask = 0x00000009,
		MarkRandomTask = 0x0000000a,
		MarkAdventurers = 0x0000000b,
		MarkAlchemy = 0x0000000c,
		MarkSeaLampGiving = 0x0000000d,
		MarkInvestigationMonster = 0x0000000e,
		MarkBlacksmith_liyue = 0x0000000f,
		MarkSouvenir_liyue = 0x00000010,
		MarkRestaurant_liyue = 0x00000011,
		MarkReputation = 0x00000012,
		MarkReputation_liyue = 0x00000013,
		MarkReputation_Inazuma = 0x00000014,
		MarkBlacksmith_Inazuma = 0x00000015,
		MarkSouvenir_Inazuma = 0x00000016,
		MarkRestaurant_Inazuma = 0x00000017,
		MarkGroupLink = 0x00000018,
		MarkFish = 0x00000019,
		MarkFish_liyue = 0x0000001a,
		MarkFish_Inazuma = 0x0000001b,
		MarkGroupLink_Area = 0x0000001c,
		MarkTransPoint = 0x00000064,
		MarkTransPointLocked = 0x00000065,
		MarkPortal = 0x00000066,
		MarkDungeonEntry = 0x00000067,
		MarkDungeonEntryLocked = 0x00000068,
		MarkWeeklyDungeonEntry = 0x00000069,
		MarkWeeklyDungeonEntryLocked = 0x0000006a,
		MarkDailyDungeonEntry = 0x0000006b,
		MarkDailyDungeonEntryLocked = 0x0000006c,
		MarkTowerDungeonEntry = 0x0000006d,
		MarkTowerDungeonEntryLocked = 0x0000006e,
		MarkDailyDungeonEntryToBeExplored = 0x0000006f,
		MarkTowerDungeonEntryToBeExplored = 0x00000070,
		MarkEffigyDungeonEntry = 0x00000071,
		MarkEffigyDungeonEntryLocked = 0x00000072,
		MarkFleurFairDungeonEntry = 0x00000073,
		MarkBlitzRushDungeonEntry = 0x00000074,
		MarkHachiDungeonEntry = 0x00000075,
		MarkMiniEldritchDungeonEntry = 0x00000076,
		MarkGoddessLocked = 0x000000c7,
		MarkGoddessUnlocked = 0x000000cc,
		MarkPacketAnchor = 0x000000cd,
		MarkQuest = 0x0000012c,
		MarkDangerousQuest = 0x0000012d,
		MarkQuestArea = 0x0000012e,
		MarkDangerousQuestArea = 0x0000012f,
		MarkCustom = 0x00000190,
		MarkCustomBoss = 0x00000192,
		MarkCustomBox = 0x00000193,
		MarkCustomCollect = 0x00000194,
		MarkCustomCooking = 0x00000195,
		MarkCustomMainTask = 0x00000197,
		MarkCustomMonster = 0x00000198,
		MarkCustomSlime = 0x0000019b,
		MarkCustomTrap = 0x0000019c,
		MarkCustomWind = 0x0000019d,
		MarkCustomFish = 0x0000019e,
		MarkLocalAvatar = 0x000001f4,
		MarkPlayer1 = 0x000001f5,
		MarkPlayer2 = 0x000001f6,
		MarkPlayer3 = 0x000001f7,
		MarkPlayer4 = 0x000001f8,
		MarkBoredMonster = 0x000001f9,
		MarkRadarHint = 0x000001fa,
		MarkActivity = 0x000001fb,
		MarkTalk = 0x000001fc,
		MarkMiscsMarvs = 0x000001fd,
		MarkActivityAsterLittle = 0x000001fe,
		MarkActivityAsterMiddle = 0x000001ff,
		MarkRadarHintArea = 0x00000200,
		MarkActivityAsterlarge = 0x00000201,
		MarkHuntingArea = 0x00000202,
		MarkActivityAsterMiddleNPC = 0x00000203,
		MarkWidgetSeverDetectorArea = 0x00000204,
		MarkActivityFlightChallengePoint = 0x00000205,
		MarkElderTree = 0x00000206,
		MarkElderTreeEvent = 0x00000207,
		MarkWidgetTreasureMapArea = 0x00000208,
		MarkActivityTreasureMapNPC = 0x00000209,
		MarkActivityDragonSpineBoss = 0x0000020a,
		MarkActivityBlessing = 0x0000020b,
		MarkActivityMonsterBannerDrakePrimoRock = 0x0000020c,
		MarkActivityExpeditionChallengeArea = 0x0000020d,
		MarkMechanicisNPC = 0x0000020e,
		MarkActivityWaterSpriteExploreArea = 0x0000020f,
		MarkActivityArenaChallenge = 0x00000210,
		MarkActivityFleurFairFall = 0x00000211,
		MarkActivityFleurFairBalloon = 0x00000212,
		MarkActivityWaterSpriteBoss = 0x00000213,
		MarkActivitySummerTimeRace = 0x00000214,
		MarkActivityRegionSearch = 0x00000258,
		MarkGalleryChallenge = 0x00000259,
		MarkActivityFleurFairNPC = 0x0000025a,
		MarkChannellerSlabCampLow = 0x0000025b,
		MarkChannellerSlabCampMiddle = 0x0000025c,
		MarkChannellerSlabCampHigh = 0x0000025d,
		MarkChannellerSlabOneOffDungeon = 0x0000025e,
		MarkChannellerSlabLoopDungeon = 0x0000025f,
		MarkChannellerSlabNPC = 0x00000260,
		MarkActivityMiniTomoHiliWeiArea = 0x00000261,
		MarkActivityHideAndSeekNPC = 0x00000262,
		MarkHomeworldDjinn = 0x00000263,
		MarkHomeworldDjinnWeekend = 0x00000264,
		MarkHomeworldMainHouse = 0x00000265,
		MarkHideAndSeekHunter = 0x00000266,
		MarkActivityBuoyantCombatPoint = 0x00000267,
		MarkActivityBounceConjuring = 0x00000268,
		MarkHomeworldNpc = 0x00000269,
		MarkSummerIsleSignalPoint = 0x0000026c,
		MarkVehicleSummonPoint = 0x0000026d,
		MarkVehicleSummonPointLocked = 0x0000026e,
		MarkBounceConjuringNPC = 0x00000271,
		MarkVehicleSkiff = 0x00000272,
		MarkHomeworldFurnitureSuite = 0x00000276,
		MarkHomeworldTransPoint = 0x00000277,
		MarkHomeworldFarmField1 = 0x00000279,
		MarkHomeworldFarmField2 = 0x0000027a,
		MarkHomeworldFarmField3 = 0x0000027b,
		MarkActivityTreasureMapChallenge = 0x000002bc,
		MarkActivityBlitzRushParkour = 0x000002bd,
		MarkActivityPerpetualNPC = 0x000002c1,
		MarkOraionokamiTree = 0x000002c6,
		MarkSumoDungeon = 0x000002c7,
		MarkMoonfinTrialChallenge = 0x000002c8,
		MarkMoonfinTrialFinal = 0x000002c9,
		MarkLunaRiteExploreArea = 0x000002d0,
		MarkLunaRiteNPC = 0x000002d1,
		MarkLunaRiteCrystal = 0x000002d2,
		MarkLunaRiteChest = 0x000002d3,
		MarkRoguelike = 0x000002da,
		MarkBugyowu = 0x00000320,
		MarkChashitsu = 0x00000321,
		MarkHomeworldPaimon = 0x00000322,
		MarkMusicGameNPC = 0x00000323,
		MarkGrowFlowersNPC = 0x00000324,
		MarkHachiStealthChallenge = 0x00000325,
		MarkHachiBattleChallenge = 0x00000326,
		MarkWinterCampSnowman = 0x0000032a,
		MarkActivityWinterCampBoss = 0x0000032b,
		MarkAnimalCaptureShop = 0x00000334,
		MarkAlcorTransmit = 0x00000335,
		MarkQunyugeTransmit = 0x00000336,
		MarkAshanpoNPC = 0x0000033e,
		MarkPotionDungeonEntry = 0x00000348,
		MarkProjectionGameEntry = 0x00000352,
		MarkLanternRiteShipSummonPoint = 0x0000035c,
		MarkLanternRiteShipSummonPointLocked = 0x0000035d,
		MarkMichiaeOffering = 0x00000366,
		MarkBartenderNPC = 0x00000367,
		MarkMichiaeChest = 0x00000368,
		MarkMichiaeChallenge = 0x00000369,
		MarkCustomLevel = 0x0000036a,
		MarkLuminanceStoneNPC = 0x00000a29,
		MarkCrystalLink = 0x00000a2a,
		MarkQuestAcception = 0x00000a2b,
		MarkIrodoriFlowerNPC = 0x00000a32,
		MarkIrodoriPhotoNPC = 0x00000a33,
		MarkIrodoriMasterNPC = 0x00000a34,
		MarkIrodoriChessNPC = 0x00000a35,
		MarkMusicGameV3NPC = 0x00000a8d,
		MarkActivityGachaNPC = 0x00000a8e,
		MarkRogueDiary = 0x00000a8f,
		MarkCocoonSpace = 0x00000a90,
	};
	enum class MoleMole_Config_MarkOrder__Enum : int32_t
	{
		None = 0x00000000,
		LocalPlayer = 0x00000001,
		OtherPlayer = 0x00000002,
		QuestMain = 0x00000003,
		QuestBranch = 0x00000004,
		Radar = 0x00000005,
		TransportGoddess = 0x00000006,
		Dungeon = 0x00000007,
		QuestEvent = 0x00000008,
		QuestActivity = 0x00000009,
		QuestWorld = 0x0000000a,
		QuestRandom = 0x0000000b,
		Ore = 0x0000000c,
		Activity = 0x0000000d,
		Custom = 0x0000000e,
		Monster = 0x0000000f,
		TransportOther = 0x00000010,
		NpcAdventure = 0x00000011,
		NpcActivity = 0x00000012,
		Area = 0x00000013,
		Default = 0x00000014,
		NpcOther = 0x00000015,
		Vehicle = 0x00000016,
		QuestAcception = 0x00000017,
		HomeworldMainHouse = 0x000003e9,
		HomeworldFarmField = 0x000003ea,
		HomeworldFurnitureSuite = 0x000003eb,
		HomeworldDjinn = 0x000003ec,
		HomeworldNpc = 0x000003ed,
		HomeworldTransPoint = 0x000003ee,
	};

	enum class MoleMole_Config_MarkVisibilityType__Enum : int32_t
	{
		None = 0x00000000,
		Invisible = 0x00000001,
		Around = 0x00000002,
		Always = 0x00000003,
	};

	enum class IACLLAMDHGF__Enum : int32_t
	{
		None = 0x00000000,
		Boss = 0x00000001,
		Character = 0x00000002,
		Paimon = 0x00000003,
	};

	enum class LBOKOEJFMEP__Enum : int32_t
	{
		Default = 0x00000000,
		Teleport = 0x00000001,
		Trace = 0x00000002,
	};

	struct MonoUIProxy__Fields
	{
		struct MonoSpriteProxy__Fields _;
		void *_animator;
		float _fadeInDuration;
		float _fadeOutDuration;
		void *_coroutine;
		void *_proxySet;
		void *_delegatedInstanceSet;
	};

	struct MonoMapCursor__Fields
	{
		struct MonoBehaviour__Fields _;
		bool CCGMBOCLHDI;
		struct MonoMapMark *mapMark;
		void *LODFBKEGONO;
		struct Vector3 someVec1;
		struct Vector3 someVec2;
	};

	struct MonoMapCursor
	{
		struct MonoMapCursor__Class *klass;
		MonitorData *monitor;
		struct MonoMapCursor__Fields fields;
	};

	struct MonoInLevelMapPage__Fields
	{
		struct MonoUIProxy__Fields _;
		struct Transform *_GrpMapTrans;
		struct MonoPrefabPlugin *_prefabPlugin;
		struct MonoElementSwitch *_elementSwitch;
		struct MonoMapMarkTips *_markTips;
		struct Button_1 *_markTipsFreeBtn;
		struct RectTransform *_markContainer;
		struct RectTransform__Array *_markContainerLayers;
		struct GameObject *_markPrefab;
		struct MonoLevelMapMarkContainer *_container;
		struct RectTransform *_goddessLevelGrp;
		struct RectTransform *_rewardTipsGrp;
		struct MonoSimpleReusableList *_rewardTipsList;
		struct RectTransform *_cursor;
		struct RectTransform *_ps4ButtonsGrp;
		struct RectTransform *_joypadMapButtonsGrp;
		bool _joypadMoveMapInverted;
		float _joypadMoveMapSensitivity;
		bool _joypadMoveCursorInverted;
		float _joypadMoveCursorSensitivity;
		float _joypadAttrackSpeed;
		struct MonoSliderWithButton *slider;
		struct GameObject *playerIndicator;
		struct RectTransform *playerIndicatorParent;
		struct MonoMapCursor *_monoMapCursor;
		struct MonoInputFieldExtention *_customMarkTipsInputField;
		struct MonoMaterialItemRow *_resin;
		struct RectTransform *_cycleDungeonLookupGrp;
		struct MonoUIContainer *_cycleDungeonLookupToggle;
		struct Text *_cycleDungeonLookupText;
		struct List_1_Queue_1_MoleMole_MonoMapMark_ *LMNPEFNMFIJ;
		struct GameObject *_exploreDegreeGrp;
		struct Text *_exploreArea;
		struct Text *_exploreDegree;
		struct Button_1 *exploreTagButton;
		struct GameObject *redPointAnchorExploreDegree;
		struct Image_1 *exploreDegreeImage;
		struct GameObject *mapTagSwitch;
		struct MonoGridScroller *mapTagScroller;
		struct MonoElementSwitch *mapTagElementSwitch;
		struct List_1_UnityEngine_GameObject_ *topInfoTagGroup;
		struct GameObject *dungeonTowerGO;
		struct Text *dungeonTowerText;
		struct MonoUIContainer *dungeonBtn;
		struct Sprite *_questTrackSprite;
		struct Sprite *_commonTrackSprite;
		struct Button_1 *homeworldVisitorBtn;
		struct Text *_homeworldVisitorLabel;
		struct MonoUIContainer *_homeworldVisitorPS4Container;
		struct Animator *_cursorAnimator;
	};

	struct MonoInLevelMapPage
	{
		struct MonoInLevelMapPage__Class *klass;
		MonitorData *monitor;
		struct MonoInLevelMapPage__Fields fields;
	};

	struct ConfigMarkIcon
	{
		struct String *IFMMCPNGPDI;
		struct SimpleSafeUInt32 GNBMICNFLBF;
		MoleMole_Config_MarkType__Enum markType;
		struct String *HDPJJBGHFCH;
		bool BLBOCGLEGAG;
		struct String *PPCPDJAHHNK;
		struct String *ENFNJCEIBIB;

		MoleMole_Config_MarkOrder__Enum IFEKPECENLC;

		MoleMole_Config_MarkOrder__Enum RadarVisibility;
		MoleMole_Config_MarkOrder__Enum mapVisibility;
		bool JABFACDGLDF;
		bool KKHGMKOLGDK;
		IACLLAMDHGF__Enum typeActor;
		LBOKOEJFMEP__Enum typeMovement;
	};

	struct ColorStyle_MarkPointAreaColor
	{
		struct Color mainColor;
		struct Color edgeColor;
	};

	struct Nullable_1_UInt32_
	{
		uint32_t value;
		bool has_value;
	};

	struct Nullable_1_Double_
	{
		double value;
		bool has_value;
	};

    enum class NDGFNABLOEL__Enum : int32_t
    {
        NDGFNABLOEL__Enum_Normal = 0x00000000,
        NDGFNABLOEL__Enum_HalfTransparent = 0x00000001,
    };

	struct MonoMapMark__Fields
	{
		struct MonoSpriteProxy__Fields _;
        MoleMole_Config_MarkType__Enum _markType;
        MoleMole_Config_MarkIconType__Enum _iconType;
        MoleMole_Config_MarkOrder__Enum _markOrder;
        uint32_t _identifier;
        MoleMole_Config_MarkVisibilityType__Enum realRadarVisibility;
        MoleMole_Config_MarkVisibilityType__Enum realMapVisibility;
        struct String *markerName;
        bool _alwaysShow;
        bool showHeight;
        float height;
        bool isHide;
        bool hideIcon;
        bool hideUnderMist;
        struct Transform *_contentRoot;
        struct Button_1 *_actionButton;
        struct RectTransform *_pointGrp;
        struct MonoMarkIconRenderer *_markIconRenderer;
        struct MonoUIEffect *_effect;
        struct GameObject *_defaultEffectObj;
        struct GameObject *_customEffectObj;
        struct MonoPrefabPlugin *_effectPrefabs;
        struct MonoAsyncPrefabPlugin *_asyncPrefabs;
        struct GameObject *_areaGrp;
        struct RectTransform *_rectTrans;
        struct Vector2 _levelMapPos;
        struct Vector3 DDBOIOBFNOK;
        struct ConfigMarkIcon config;
        uint32_t _dungeonIconLabelHandle;
        struct GameObject *_dungeonIconLabel;
        uint32_t _dungeonIconTipsHandle;
        struct GameObject *_dungeonIconTips;
        NDGFNABLOEL__Enum LJNIFCLMIJH;
        struct GeneralMarkData *generalMapData;
        bool LGJNMEFFJKN;
        bool IOHKFEFHCAJ;
        struct UnityAction_1_UnityEngine_RectTransform_ *OODIIHNIPFN;
        struct String *_currEffectName;
        struct ParticleSystem *_currEffect;
        float markAreaRadius;
        struct ColorStyle_MarkPointAreaColor _markPointAreaColor;
        struct RectTransform *layerParent;
        bool _inLayer;
        int32_t _layer;
        struct Nullable_1_UInt32_ _appearAudio;
        uint32_t _configEffectHandle;
        struct GameObject *_configEffectIns;
        struct GameObject *_completeIcon;
        struct Transform *_dungeonIconLabelRoot;
        struct GameObject *_bossGrp;
        struct Image_1 *_bossIcon;
        struct Image_1 *_bossIconNoBG;
        struct Transform *_bossIconRoot;
        struct Transform *_bossIconRootNoBG;
        struct String *imgPath;
        struct GameObject *_characterGrp;
        struct Image_1 *_characterIcon;
        struct Transform *_characterIconRoot;
        struct Transform *_characterIconRewardTrans;
        struct Transform *_characterIconTalkTrans;
        int32_t floor;
        bool JNKLHCMLMPB;
        struct CanvasGroup *GDEIPNLFDGA;
	};

	struct MonoMapMark
	{
		void *klass;
		MonitorData *monitor;
		struct MonoMapMark__Fields fields;
	};

	struct OJJLLNFBGDE
	{
		uint32_t configID;
		uint32_t ONMGIDKKDNL;
		bool DINCAJOGCMN;
		uint32_t BOFJCMIBPLN;
		bool DMDDLCKONOD;
	};

	struct __declspec(align(8)) GeneralMarkData__Fields
	{
		uint32_t sceneID;
		MoleMole_Config_MarkType__Enum markType;
		uint32_t markID;
		struct Vector3 position;
		MoleMole_Config_MarkIconType__Enum iconType;
		struct MoleMole_BaseEntity *entity;
		bool hideOnMove;
		bool hideIcon;
		bool hideUnderMist;
		struct Proto_MapMarkPoint *mapMarkPoint;
		struct Vector3 positionOffset;
		struct OJJLLNFBGDE groupId;
		bool hideOnMapAndRadar;
		float radius;
		bool tracking;
		bool deleteStopTrack;
		bool hideTrace;
		struct Nullable_1_UInt32_ worldAreaID;
		bool showWhenAreaLocked;
	};

	struct GeneralMarkData
	{
		struct GeneralMarkData__Class *klass;
		MonitorData *monitor;
		struct GeneralMarkData__Fields fields;
	};

	enum class EnterType__Enum : int32_t
	{
		EnterNone = 0x00000000,
		EnterSelf = 0x00000001,
		EnterGoto = 0x00000002,
		EnterJump = 0x00000003,
		EnterOther = 0x00000004,
		EnterBack = 0x00000005,
		EnterDungeon = 0x00000006,
		EnterDungeonReplay = 0x00000007,
		EnterGotoByPortal = 0x00000008,
		EnterSelfHome = 0x00000009,
		EnterOtherHome = 0x0000000a,
		EnterGotoRecreate = 0x0000000b,
	};

	struct UInt32__Array
	{
		void *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		uint32_t vector[32];
	};

	enum class MoleMole_LoadingTask_MoleMole_LoadingTask_LoadState__Enum : int32_t
	{
		Invalid = 0x00000000,
		Queuing = 0x00000001,
		EnterScene = 0x00000002,
		ShowLoadingPage = 0x00000003,
		WaitingPeerID = 0x00000004,
		SceneReady = 0x00000005,
		InitScene = 0x00000006,
		LoadStage = 0x00000007,
		SceneInitFinish = 0x00000008,
		SceneDone = 0x00000009,
		LoadingFinish = 0x0000000a,
	};

	enum class MoleMole_LoadingTask_MoleMole_LoadingTask_LoadType__Enum : int32_t
	{
		Invalid = 0x00000000,
		Scene = 0x00000001,
		Dungeon = 0x00000002,
		Goto = 0x00000003,
	};

	struct __declspec(align(8)) MoleMole_LoadingTask__Fields
	{
		MoleMole_LoadingTask_MoleMole_LoadingTask_LoadState__Enum stage;
		MoleMole_LoadingTask_MoleMole_LoadingTask_LoadType__Enum eventType;
		uint32_t token;
		uint32_t sceneID;
		uint32_t dungeonId;
		struct Vector3 initPos;
		bool isLoadNewScene;
		bool isFirstEnterScene;
		bool isReLogin;
		uint32_t tryToEnterWorldType;
		uint32_t tryToEnterSceneID;
		uint64_t loginTimeStamp;
		struct String *sceneTransaction;
		struct Coroutine *_timeOutCoroutine;
	};

	struct MoleMole_LoadingTask
	{
		struct MoleMole_LoadingTask__Class *klass;
		MonitorData *monitor;
		struct MoleMole_LoadingTask__Fields fields;
	};

	struct MoleMole_LoadingTask__Array
	{
		void *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct MoleMole_LoadingTask *vector[32];
	};

	struct __declspec(align(8)) Dictionary_2_System_UInt32_MoleMole_LoadingTask___Fields
	{
		struct Int32__Array *table;
		struct Link__Array *linkSlots;
		struct UInt32__Array *keySlots;
		struct MoleMole_LoadingTask__Array *valueSlots;
		int32_t touchedSlots;
		int32_t emptySlot;
		int32_t count;
		int32_t threshold;
		void *hcp;
		void *serialization_info;
		int32_t generation;
	};

	struct Dictionary_2_System_UInt32_MoleMole_LoadingTask_
	{
		void *klass;
		MonitorData *monitor;
		struct Dictionary_2_System_UInt32_MoleMole_LoadingTask___Fields fields;
	};

	struct Vector_1__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		float x;
		float y;
		float z;
	};

	struct Vector_1
	{
		void *klass;
		MonitorData *monitor;
		struct Vector_1__Fields fields;
	};

	struct PlayerEnterSceneNotify__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		uint32_t prevSceneId_;
		bool isSkipUi_;
		uint32_t worldLevel_;
		struct Vector_1 *pos_;
		bool isFirstLoginEnterScene_;
		uint32_t enterReason_;
		uint32_t enterSceneToken_;
		uint32_t dungeonId_;
		uint32_t sceneId_;
		EnterType__Enum type_;
		struct Google_Protobuf_Collections_RepeatedPrimitiveField_1_System_UInt32_ *sceneTagIdList_;
		uint64_t sceneBeginTime_;
		uint32_t worldType_;
		uint32_t targetUid_;
		struct Vector_1 *prevPos_;
		struct String *sceneTransaction_;
	};

	struct PlayerEnterSceneNotify
	{
		void *klass;
		MonitorData *monitor;
		struct PlayerEnterSceneNotify__Fields fields;
	};

	struct __declspec(align(8)) LoadingManager__Fields
	{
		struct Dictionary_2_System_UInt32_LoadingTask_ *_loadingTasks;
		struct LoadingTask *_curLoadingTask;
		struct LoadingTask *_lastLoadingTask;
		struct BornTask *_bornTask;
		struct Coroutine *_bornCoroutine;
		struct Thread *LJEPLHHBABE;
		bool CGMOHEDFEGG;
		struct Action_1_ILuaActor_ *_transPreCallback;
		struct Action_1_ILuaActor_ *_transFinishCallback;
		struct ILuaActor *_curActor;
		struct Vector3 _cacheJumpPos;
		EnterType__Enum _cacheEnterType;
		uint32_t _cacheToken;
		bool _cacheIsSkipUI;
		bool _isPlayerTransStart;
		uint32_t _enterReaon;
		struct Coroutine *_delayTransmitInCSCoroutine;
		uint32_t IAGMLKLMLNP;
		struct ILuaActor *FIGHCFNCEID;
		struct Action_1_ILuaActor_ *CDCCHDNMBOD;
		struct Action_1_ILuaActor_ *ADIHDGEDMDD;
	};

	struct MoleMole_LoadingManager
	{
		struct LoadingManager__Class *klass;
		MonitorData *monitor;
		struct LoadingManager__Fields fields;
	};

	enum class EvtTransmitAvatar_EvtTransmitAvatar_TransmitType__Enum : int32_t
	{
		Default = 0x00000000,
		Wormhole = 0x00000001,
		Quick = 0x00000002,
		DirectlySetPos = 0x00000003,
		QuickWithoutPaimonReminder = 0x00000004,
		QuickV2 = 0x00000005,
	};

	enum class MoleMole_NotifyTypes__Enum : int32_t
	{
		None = 0x00000000,
		NetworkPacket = 0x00000001,
		LoginNotify = 0x00000002,
		EnterSceneNotify = 0x00000003,
		DisConnectNotify = 0x00000004,
		PlayerListNotify = 0x00000005,
		PlayerLeaveNotify = 0x00000006,
		GetOnlinePlayerInfoNotify = 0x00000007,
		WorldPlayerListUpdate = 0x00000008,
		PrompStandy2Climb = 0x00000009,
		RegisterMonsterAIController = 0x0000000a,
		AttackDamegeNotify = 0x0000000b,
		AttackShieldNotify = 0x0000000c,
		AttackCureNotify = 0x0000000d,
		RefreshAvatarData = 0x0000000e,
		RefreshAvatarBuff = 0x0000000f,
		AvatarChangeNotify = 0x00000010,
		AvatarActionPanelNotify = 0x00000011,
		AvatarFocusModeChangeNotify = 0x00000012,
		ElementReactionNotify = 0x00000013,
		OnApplicationFocus = 0x00000014,
		AvatarSkillInfoUpdate = 0x00000015,
		FestivalUpdateNotify = 0x00000016,
		AvatarRenameInfoReady = 0x00000017,
		AvatarRenameInfoUpdated = 0x00000018,
		AvatarRenameValidityCheckPassed = 0x00000019,
		AvatarRenameValidityCheckFailed = 0x0000001a,
		AddMiniMapMark = 0x0000001b,
		MapNotify = 0x0000001c,
		MapToggle = 0x0000001d,
		EnterArea = 0x0000001e,
		EnterAreaLateUpdate = 0x0000001f,
		EnterSubArea = 0x00000020,
		ExitSubArea = 0x00000021,
		EnterErosionArea = 0x00000022,
		MapMarkChanged = 0x00000023,
		MapMarkMoved = 0x00000024,
		MapMarkDailyTaskChanged = 0x00000025,
		MapMarkDungeonEntryExploreChanged = 0x00000026,
		AreaExploreUpdated = 0x00000027,
		AreaUnlcoked = 0x00000028,
		GuidePointAppear = 0x00000029,
		GuidePointDisappear = 0x0000002a,
		NavigationPointAppear = 0x0000002b,
		NavigationPointDisappear = 0x0000002c,
		NavigationPointRefresh = 0x0000002d,
		NavigationShowGuideTips = 0x0000002e,
		POIIndicatorAppear = 0x0000002f,
		POIIndicatorDisappear = 0x00000030,
		PlayMarkUnlockEffect = 0x00000031,
		UnlockTransPoint = 0x00000032,
		UnlockScenePoint = 0x00000033,
		AddGadgetIndicator = 0x00000034,
		RemoveGadgetIndicator = 0x00000035,
		SetGadgetIndicatorCountDown = 0x00000036,
		MapMarkClicked = 0x00000037,
		MapMarkClickNeared = 0x00000038,
		RefreshMapRewardTips = 0x00000039,
		RefreshMapMarkTips = 0x0000003a,
		MapAreaUpdated = 0x0000003b,
		MapPlaceNameUpdated = 0x0000003c,
		MarkManagerReady = 0x0000003d,
		MarkRemovedOnCancelTracing = 0x0000003e,
		DungeonEntryInfo = 0x0000003f,
		DungeonEntryAppeared = 0x00000040,
		DungeonEntryDisappeared = 0x00000041,
		DungeonPlayerDie = 0x00000042,
		DungeonSettled = 0x00000043,
		DungeonGetReward = 0x00000044,
		GetDailyDungeonEntryInfo = 0x00000045,
		GetDungeonEntryExploreCondition = 0x00000046,
		GeneralInteeCreate = 0x00000047,
		GeneralInteeCommand = 0x00000048,
		RegisterUICombatBar = 0x00000049,
		UnregisterUICombatBar = 0x0000004a,
		RefreshUICombatBars = 0x0000004b,
		ShowUICombatBarSpark = 0x0000004c,
		ShowUICombatBarCharge = 0x0000004d,
		ShowUICombatBarFireEffect = 0x0000004e,
		ShowShakeOff = 0x0000004f,
		VehicleSkillDepotChange = 0x00000050,
		InteractionUITrigger = 0x00000051,
		InteractionUIClose = 0x00000052,
		InteractionRealStart = 0x00000053,
		GroupLinkUpdated = 0x00000054,
		GroupLinkRemoved = 0x00000055,
		CheckGroupReplacedRsp = 0x00000056,
		ChallengeBegin = 0x00000057,
		ChallengeUpdated = 0x00000058,
		ChallengeFailed = 0x00000059,
		ChallengeCompleted = 0x0000005a,
		ChallengeAddSub = 0x0000005b,
		ChallengeSubFinish = 0x0000005c,
		ChallengeSubFail = 0x0000005d,
		DialogSelectNotify = 0x0000005e,
		DialogSelectFinishNotify = 0x0000005f,
		DialogSelectItemNotify = 0x00000060,
		DialogSelectItemTimeOut = 0x00000061,
		AutoTalkDialogFinish = 0x00000062,
		ChangeAutoTalk = 0x00000063,
		CutScenePageShowTopText = 0x00000064,
		CutScenePageCloseTopText = 0x00000065,
		CoopSelectNotify = 0x00000066,
		CurrCoopConfidenceValueChanged = 0x00000067,
		CurrCoopTemperamentValueChanged = 0x00000068,
		CoopTemperamentSelect = 0x00000069,
		CoopTakeChapterReward = 0x0000006a,
		CoopUnlockChapter = 0x0000006b,
		CoopStartPointFromPage = 0x0000006c,
		CoopCancelQuest = 0x0000006d,
		CoopUIRefresh = 0x0000006e,
		CoopNewChapterAdd = 0x0000006f,
		CoopChapterViewed = 0x00000070,
		CoopStartFirstPoint = 0x00000071,
		CoopShowDefeatDialog = 0x00000072,
		CoopTryStartPoint = 0x00000073,
		CoopStartPointFailed = 0x00000074,
		CoopDefeatNotify = 0x00000075,
		QuestDialogToggle = 0x00000076,
		QuestBookUpdate = 0x00000077,
		QuestBookSelectItem = 0x00000078,
		AddQuestHint = 0x00000079,
		QuestTalkHistory = 0x0000007a,
		PaimenNavigationEnabled = 0x0000007b,
		PaimenNavigationFailed = 0x0000007c,
		PaimenNavigationAlreadyInArea = 0x0000007d,
		PaimenNavigationGuideHint = 0x0000007e,
		RemindQuest = 0x0000007f,
		BindTransButton = 0x00000080,
		QuestProgressHint = 0x00000081,
		QuestLackHint = 0x00000082,
		ActiveMainQuestDeleted = 0x00000083,
		QuestStateUpdated = 0x00000084,
		MainQuestStateUpdated = 0x00000085,
		QuestTalkFinished = 0x00000086,
		QuestGlobalVarUpdate = 0x00000087,
		QuestTakePhotograph = 0x00000088,
		NpcReady = 0x00000089,
		BagWeightUIRefresh = 0x0000008a,
		BagDialogToggle = 0x0000008b,
		BagSlotUpdate = 0x0000008c,
		BagItemUsed = 0x0000008d,
		BagItemDrop = 0x0000008e,
		BagAddChest = 0x0000008f,
		BagAddWidget = 0x00000090,
		BagAddQuest = 0x00000091,
		BagCombinableMaterialRPChanged = 0x00000092,
		ForceCloseBagPage = 0x00000093,
		BagItemDeleteReturnNotify = 0x00000094,
		NewItemEncountered = 0x00000095,
		SpecialItemEncountered = 0x00000096,
		ItemAdded = 0x00000097,
		MaterialDeleteReturnItemAdded = 0x00000098,
		ItemAddExceedLimitNotify = 0x00000099,
		GatherItemAdded = 0x0000009a,
		GeneralItemAdded = 0x0000009b,
		GeneralItemMiddleShowAdded = 0x0000009c,
		QuestItemAdded = 0x0000009d,
		DailyTaskItemAdded = 0x0000009e,
		RandTaskItemAdded = 0x0000009f,
		ActivityItemAdded = 0x000000a0,
		HuntingItemAdded = 0x000000a1,
		BlossomItemAdded = 0x000000a2,
		VirtualShopItemAdded = 0x000000a3,
		BatchItemAdded = 0x000000a4,
		ItemGivingFinish = 0x000000a5,
		CloseItemGiving = 0x000000a6,
		GadgetGivingClose = 0x000000a7,
		DestroyItemFinish = 0x000000a8,
		GetCalcWeaponUpgradeReturnItemsResult = 0x000000a9,
		ChangeEquipLockState = 0x000000aa,
		UseItemFail = 0x000000ab,
		BagAddRenameItem = 0x000000ac,
		AvatarVehicleStateChange = 0x000000ad,
		VehicleHPChange = 0x000000ae,
		VehicleLevelChange = 0x000000af,
		AvatarInfoUIRefresh = 0x000000b0,
		AvatarFightPropRefresh = 0x000000b1,
		AvatarEquipUIRefresh = 0x000000b2,
		AvatarEquipChanged = 0x000000b3,
		AvatarSwitch = 0x000000b4,
		ManekinCtrl = 0x000000b5,
		TeamInfoRefresh = 0x000000b6,
		TeamNameRefresh = 0x000000b7,
		CurrentTeamChanged = 0x000000b8,
		AvatarDead = 0x000000b9,
		AvatarSkillDepotIdChanged = 0x000000ba,
		AvatarBreakLevelChanged = 0x000000bb,
		AvatarBreakRewardGet = 0x000000bc,
		RefreshBreachMaterialBtnRPShow = 0x000000bd,
		AvatarLifeStateChanged = 0x000000be,
		AvatarFetterExpChanged = 0x000000bf,
		AvatarFetterRewardGet = 0x000000c0,
		AvatarHPChanged = 0x000000c1,
		AvatarHPChangedEnd = 0x000000c2,
		AvatarHungerChanged = 0x000000c3,
		BackgroundAvatarRefreshed = 0x000000c4,
		AvatarUpgradeNotify = 0x000000c5,
		AvatarLevelChanged = 0x000000c6,
		AvatarEnergyAdded = 0x000000c7,
		AvatarEnergyFull = 0x000000c8,
		CharacterSprintBS = 0x000000c9,
		AvatarSkillChanged = 0x000000ca,
		AvatarSkillDisable = 0x000000cb,
		AvatarSkillCDChanged = 0x000000cc,
		AvatarSkillEnable = 0x000000cd,
		AvatarHideSkill = 0x000000ce,
		AvatarAttackModeChanged = 0x000000cf,
		CurAvatarNum = 0x000000d0,
		FocusAvatar = 0x000000d1,
		AvatarFlycloakChanged = 0x000000d2,
		AvatarGainFlycloak = 0x000000d3,
		ActivitySkillState = 0x000000d4,
		ShowActivitySkill = 0x000000d5,
		AvatarCostumeChanged = 0x000000d6,
		AvatarGainCostume = 0x000000d7,
		TipShow = 0x000000d8,
		TipClose = 0x000000d9,
		ActivityCommonPlayerTipsStart = 0x000000da,
		ActivityCommonPlayerTipsFinish = 0x000000db,
		ActivityCommonPlayerTipsFail = 0x000000dc,
		ShopOpen = 0x000000dd,
		ShopClose = 0x000000de,
		ShopItemSelect = 0x000000df,
		ShopRefresh = 0x000000e0,
		ShopMaterialRefresh = 0x000000e1,
		ShopRequest = 0x000000e2,
		ShopRequestRecommend = 0x000000e3,
		ShopRequestPackage = 0x000000e4,
		ShopMallRequest = 0x000000e5,
		ShopDataUpdated = 0x000000e6,
		ActivityShopSheetUpdated = 0x000000e7,
		ShopOpenSubTab = 0x000000e8,
		MallJumpRecommend = 0x000000e9,
		ActivityRegionSearchProgressUpdate = 0x000000ea,
		ActivityRegionSearchProgressBegin = 0x000000eb,
		ActivityRegionSearchProgressComplete = 0x000000ec,
		ActivityRegionSearchIn = 0x000000ed,
		ActivityRegionSearchOut = 0x000000ee,
		ActivityRegionSearchRegionRewardGet = 0x000000ef,
		ActivityRegionSearchRegionDisappear = 0x000000f0,
		ActivityRegionSearchRegionAppear = 0x000000f1,
		ActivityRegionSearchRegionInfoUpdate = 0x000000f2,
		CountDownUIStart = 0x000000f3,
		CountDownUIEndLevelTime = 0x000000f4,
		CountDownUITerminate = 0x000000f5,
		DungeonCountDownUpdate = 0x000000f6,
		DungeonCountDownEnd = 0x000000f7,
		CountNumUIStart = 0x000000f8,
		CountNumUpdate = 0x000000f9,
		CountNumUITerminate = 0x000000fa,
		CountNumUIStartNew = 0x000000fb,
		CountNumUpdateNew = 0x000000fc,
		CountNumUITerminateNew = 0x000000fd,
		QuestQuitShow = 0x000000fe,
		QuestQuitHide = 0x000000ff,
		GachaWishUpdate = 0x00000100,
		LoadingNewScenePre = 0x00000101,
		LoadingScene = 0x00000102,
		LevelPreLoaded = 0x00000103,
		LevelLoaded = 0x00000104,
		LevelPostLoad = 0x00000105,
		LevelLoadBegin = 0x00000106,
		LoadingBundle = 0x00000107,
		LevelLoadFinish = 0x00000108,
		NoStaminaStopSprint = 0x00000109,
		JumpFly = 0x0000010a,
		PostAvatarEntityReady = 0x0000010b,
		AudioEventPost = 0x0000010c,
		LevelTagNotify = 0x0000010d,
		TouchMsgBoard = 0x0000010e,
		EasyTouchWorking = 0x0000010f,
		RefreshUISetting = 0x00000110,
		ScreenResolutionChanged = 0x00000111,
		RefreshAvatarTalent = 0x00000112,
		RefreshAvatarTalentPRShow = 0x00000113,
		Resist = 0x00000114,
		GuideUpdate = 0x00000115,
		PageLoad = 0x00000116,
		UIContextOpen = 0x00000117,
		UIContextClose = 0x00000118,
		PageDestroy = 0x00000119,
		ElementViewChange = 0x0000011a,
		SealProgress = 0x0000011b,
		CommonChallengeStartTips = 0x0000011c,
		CommonChallengeEndTips = 0x0000011d,
		RefreshGuide = 0x0000011e,
		GeneralGuideFinish = 0x0000011f,
		GeneralGuideUpdate = 0x00000120,
		ActionToUINotify = 0x00000121,
		RefreshDebugUI = 0x00000122,
		CheckDebugLoginServerList = 0x00000123,
		ShowDebugLoginPanel = 0x00000124,
		TimeChanged = 0x00000125,
		PlayerGameTimeNotify = 0x00000126,
		TeamSceneReady = 0x00000127,
		TeamChanged = 0x00000128,
		AvatarReviveRequested = 0x00000129,
		TeamRttRefresh = 0x0000012a,
		ShowTeamBtn = 0x0000012b,
		LevelUpItemFinished = 0x0000012c,
		PostSetupMPTeamPanel = 0x0000012d,
		WeaponUpgrade = 0x0000012e,
		WeaponPromote = 0x0000012f,
		WeaponAwaken = 0x00000130,
		ReliquaryUpgrade = 0x00000131,
		ReliquaryPromote = 0x00000132,
		TeammateSpeechBegin = 0x00000133,
		TeammateSpeechEnd = 0x00000134,
		AvatarCardChange = 0x00000135,
		SpringVolumeChanged = 0x00000136,
		WebviewClose = 0x00000137,
		MihoyoAccountInfoChanged = 0x00000138,
		MihoyoAccountRegisterSuccess = 0x00000139,
		CutsceneStart = 0x0000013a,
		CutsceneFinish = 0x0000013b,
		FinalTalkFinished = 0x0000013c,
		CutsceneQTEJump = 0x0000013d,
		CurrentQTEFinishCS = 0x0000013e,
		CurrentQTEBlackScreenStart = 0x0000013f,
		CutsceneQTEEnableSavePoint = 0x00000140,
		CutsceneQTEEnableSavePointId = 0x00000141,
		CutsceneChangeTimeScale = 0x00000142,
		CutsceneResumeTimeScale = 0x00000143,
		SetMainPageMoveToggleActive = 0x00000144,
		SetMainPageMoveToggleToWalk = 0x00000145,
		OpenStateInit = 0x00000146,
		OpenStateChange = 0x00000147,
		StartFadeOutWormhole = 0x00000148,
		EnterSneakMode = 0x00000149,
		EnterCombatSneakMode = 0x0000014a,
		ExitSneakMode = 0x0000014b,
		PlayModeChange = 0x0000014c,
		ActionSlotChange = 0x0000014d,
		ActionPanelRefresh = 0x0000014e,
		ActionPanelClearInputState = 0x0000014f,
		RefreshCookPage = 0x00000150,
		GetCookQTEArgs = 0x00000151,
		OnCookRecipeDataNotify = 0x00000152,
		RefreshCookCompoundPage = 0x00000153,
		GetCompoundOutput = 0x00000154,
		CompoundBoostRsp = 0x00000155,
		GetCombineOutput = 0x00000156,
		CombineFormulaUnlock = 0x00000157,
		SmeltSuccess = 0x00000158,
		SmeltGetDrop = 0x00000159,
		GetForgeQueue = 0x0000015a,
		ForgeQueueUpdate = 0x0000015b,
		GetForgeOutput = 0x0000015c,
		ForgeStart = 0x0000015d,
		ForgeStop = 0x0000015e,
		ForgeFormulaUnlock = 0x0000015f,
		RefreshMailPage = 0x00000160,
		RefreshMailPageAfterDel = 0x00000161,
		MailDataReady = 0x00000162,
		ShowMailItemGet = 0x00000163,
		NewMailGot = 0x00000164,
		AddToFavorites = 0x00000165,
		RefreshMailFavoritesDialog = 0x00000166,
		RefreshMailFavoritesDialogAfterDel = 0x00000167,
		RefreshMailPageAfterFavMailChange = 0x00000168,
		FavoriteMailDataReady = 0x00000169,
		RefreshCoinNum = 0x0000016a,
		MutiPlayerAvailableChange = 0x0000016b,
		MutiPlayerModeChange = 0x0000016c,
		CompanionCurrAvatarChanged = 0x0000016d,
		CompanionAvatarHPChanged = 0x0000016e,
		CompanionAvatarHPChangedEnd = 0x0000016f,
		KickGuestFailed = 0x00000170,
		MPTeamChangeFailed = 0x00000171,
		MPDeathOpenChat = 0x00000172,
		MPCloseMainPageBtn = 0x00000173,
		MPOpenMainPageBtn = 0x00000174,
		PlayerMatchInfoUpdate = 0x00000175,
		WorldPlayerDie = 0x00000176,
		MpSettingType = 0x00000177,
		JoinOtherPlayerScene = 0x00000178,
		BackMyWorld = 0x00000179,
		UpdateDungeonExitBtn = 0x0000017a,
		DungeonTeamChanged = 0x0000017b,
		DungeonTeamChangeFailed = 0x0000017c,
		DungeonTeamDismissed = 0x0000017d,
		DungeonInviteRefused = 0x0000017e,
		DungeonTeamKicked = 0x0000017f,
		EnterTowerLevel = 0x00000180,
		TowerStarRefresh = 0x00000181,
		TowerRecordHandbookRefresh = 0x00000182,
		RefreshPlayGuestState = 0x00000183,
		CloseMPPlayDialog = 0x00000184,
		CloseMPPlayPage = 0x00000185,
		MpPlayGuestReplyInviteSucc = 0x00000186,
		GCGMatchSucc = 0x00000187,
		GCGMatchStateUpdated = 0x00000188,
		GCGBattleInvitationStateUpdated = 0x00000189,
		CloseGCGMatchDialog = 0x0000018a,
		GCGWorldPlayerStateGot = 0x0000018b,
		PlayerMatchAgreedResultNotify = 0x0000018c,
		MpPlayInviteResultNotify = 0x0000018d,
		ScenePlayInviteResultNotify = 0x0000018e,
		DraftInviteResultNotify = 0x0000018f,
		DraftTwiceConfirmResultNotify = 0x00000190,
		PlayerLevelChange = 0x00000191,
		PlayerExpChange = 0x00000192,
		PlayerWorldLevelChange = 0x00000193,
		ClosePlayerProfilePage = 0x00000194,
		PlayerWorldLevelAdjust = 0x00000195,
		ShowGuideRatingDialog = 0x00000196,
		ChargeBarValueChange = 0x00000197,
		DailyTaskStarted = 0x00000198,
		DailyTaskProgresUpdated = 0x00000199,
		DailyTaskComplete = 0x0000019a,
		DailyTaskExitRegion = 0x0000019b,
		DailyTaskScoreReward = 0x0000019c,
		DailyTaskRefresh = 0x0000019d,
		TaskVarChange = 0x0000019e,
		RandTaskStarted = 0x0000019f,
		RandTaskComplete = 0x000001a0,
		RandTaskFail = 0x000001a1,
		RandTaskExitRegion = 0x000001a2,
		RoutineStarted = 0x000001a3,
		RoutineProgresUpdated = 0x000001a4,
		RoutineComplete = 0x000001a5,
		RoutineExitRegion = 0x000001a6,
		RoutineScoreReward = 0x000001a7,
		RoutineRefresh = 0x000001a8,
		ProudSkillChange = 0x000001a9,
		CombatSkillChange = 0x000001aa,
		PlayerLevelRewardChange = 0x000001ab,
		GetInvestigationMonsterList = 0x000001ac,
		GetInvestigationMonsterListForMark = 0x000001ad,
		InvestigationChange = 0x000001ae,
		InvestigationChapterComplete = 0x000001af,
		InvestigationTargetChange = 0x000001b0,
		InvestigationQuestDailyNotify = 0x000001b1,
		ExplorationAllDataChange = 0x000001b2,
		ExplorationCharacterDataChange = 0x000001b3,
		MainPageTips = 0x000001b4,
		MiracleRingItemAdded = 0x000001b5,
		NewPlayerAppling = 0x000001b6,
		PushTipsChange = 0x000001b7,
		GetPushTipsReward = 0x000001b8,
		PushTipsNotifyFinish = 0x000001b9,
		NewPushTips = 0x000001ba,
		GetTowerAllData = 0x000001bb,
		GetTowerStarReward = 0x000001bc,
		VersusBattleBegin = 0x000001bd,
		VersusBattleUpdate = 0x000001be,
		VersusBattleEnd = 0x000001bf,
		ActivityOpen = 0x000001c0,
		ActivityClose = 0x000001c1,
		ActivityContextClose = 0x000001c2,
		ActivityRefresh = 0x000001c3,
		ActivityUpdate = 0x000001c4,
		ActivityBannerShow = 0x000001c5,
		ActivityBannerEffectShow = 0x000001c6,
		ActivitySeaLampContriFinish = 0x000001c7,
		ActivityStart = 0x000001c8,
		ActivityCrucibleInfo = 0x000001c9,
		ActivityOperationBonusUpdate = 0x000001ca,
		ActivityWatcherUpdate = 0x000001cb,
		ActivityDeliveryRewardUpdate = 0x000001cc,
		ActivityDeliveryUpdate = 0x000001cd,
		ActivityWatcherFinish = 0x000001ce,
		ActivityAsterScoreUpdate = 0x000001cf,
		ActivitySaleUpdate = 0x000001d0,
		ActivityEchoShellUpdate = 0x000001d1,
		ActivityCoinInfoNotify = 0x000001d2,
		ActivityBlitzRushContentClose = 0x000001d3,
		ActivityCondUpdate = 0x000001d4,
		ActivityPotionStageReset = 0x000001d5,
		CloseActivityMainPage = 0x000001d6,
		EffigyChallengeResultNotify = 0x000001d7,
		MistTrialTimeOutNotify = 0x000001d8,
		BannerReminderAppeared = 0x000001d9,
		BannerReminderDisappeared = 0x000001da,
		BannerReminderForceClosed = 0x000001db,
		InLevelQuestHintReminderAppeared = 0x000001dc,
		InLevelQuestHintReminderDisappeared = 0x000001dd,
		OnGetGameplayRecommendationNotify = 0x000001de,
		CloseRecommendationNotify = 0x000001df,
		OnGetGameplayRecommendationFailedNotify = 0x000001e0,
		CameraLookBegin = 0x000001e1,
		CameraLock = 0x000001e2,
		CameraFieldLook = 0x000001e3,
		DisableMainPageControl = 0x000001e4,
		DisableMainPageControlWithConfigName = 0x000001e5,
		ResinChanged = 0x000001e6,
		ResinPurchased = 0x000001e7,
		BlossomBriefInfoNotify = 0x000001e8,
		BlossomStart = 0x000001e9,
		BlossomUpdate = 0x000001ea,
		BlossomEnd = 0x000001eb,
		BlossomFinish = 0x000001ec,
		ShowDamageTextComponent = 0x000001ed,
		SinInRefresh = 0x000001ee,
		OnSignInInfoRsp = 0x000001ef,
		BonusActivityRewardRsp = 0x000001f0,
		ShowActivityMainBtn = 0x000001f1,
		OnBonusActivityInfoRsp = 0x000001f2,
		OnOpActivityStateRsp = 0x000001f3,
		OnOpActivityStateNotify = 0x000001f4,
		TrialActivityRewardUpdate = 0x000001f5,
		SalesManTakeRewardRsp = 0x000001f6,
		SalesmanDeliverItemRsp = 0x000001f7,
		GetAuthSalesmanInfoRsp = 0x000001f8,
		OnVirtualDialAction = 0x000001f9,
		OnVirtualDialEntryAction = 0x000001fa,
		OnTransmitStart = 0x000001fb,
		OnTransmitEnd = 0x000001fc,
		OnTransmitAfterAudioEvent = 0x000001fd,
		BundleDownloadStart = 0x000001fe,
		BundleDownloadRestart = 0x000001ff,
		BundleDownloadStartForLogin = 0x00000200,
		BargainStart = 0x00000201,
		BargainPriceRsp = 0x00000202,
		BargainTerminate = 0x00000203,
		BargainDataRsp = 0x00000204,
		AllActivatedBargainData = 0x00000205,
		HideRoom = 0x00000206,
		ShowRoom = 0x00000207,
		DeleteFriend = 0x00000208,
		RefreshFriendList = 0x00000209,
		RefreshFriendListWithAni = 0x0000020a,
		RefreshFriendRequestList = 0x0000020b,
		RefreshFriendRequestListWithAni = 0x0000020c,
		RefreshBlacklist = 0x0000020d,
		RefreshMultiplayRecentlyListWithAni = 0x0000020e,
		RefreshPSNFriendList = 0x0000020f,
		RefreshPSNFriendListWithAni = 0x00000210,
		GetPlayerSocialDetail = 0x00000211,
		GetFriendShowAvatarInfo = 0x00000212,
		GetFriendShowAvatarInfoInCD = 0x00000213,
		RefreshNickname = 0x00000214,
		RefreshRemarkname = 0x00000215,
		RefreshHeadPortrait = 0x00000216,
		RefreshNameCard = 0x00000217,
		RefreshAllNameCard = 0x00000218,
		RefreshSignature = 0x00000219,
		RefreshAvatarShowList = 0x0000021a,
		RefreshNameCardShowList = 0x0000021b,
		NicknameWordIllegal = 0x0000021c,
		TeamNameIllegal = 0x0000021d,
		SignatureIllegal = 0x0000021e,
		RefreshBirthday = 0x0000021f,
		AddInBlockChatList = 0x00000220,
		RemoveFromBlockChatList = 0x00000221,
		AddInBlacklist = 0x00000222,
		RemoveFromBlacklist = 0x00000223,
		ChatRoomInfoUpdate = 0x00000224,
		RefreshMainPageChatContent = 0x00000225,
		RefreshMainPageChatContentForce = 0x00000226,
		RefreshChatEmojiCollectionList = 0x00000227,
		ChatChannelBanStateUpdate = 0x00000228,
		ChatChannelHideStateUpdate = 0x00000229,
		BattlePassMissionChange = 0x0000022a,
		BattlePassScheduleChange = 0x0000022b,
		BattlePassProductPay = 0x0000022c,
		BattlePassLevelChange = 0x0000022d,
		BattlePassBuySuccess = 0x0000022e,
		RefreshLocalNotification = 0x0000022f,
		EnterSceneDone = 0x00000230,
		PSNStateChange = 0x00000231,
		PS5LaunchActivity = 0x00000232,
		MpPlayPrepareNotify = 0x00000233,
		GadgetPlayStartNotify = 0x00000234,
		GadgetPlayDataNotify = 0x00000235,
		GadgetPlayUidOpNotify = 0x00000236,
		GadgetPlayStopNotify = 0x00000237,
		GadgetChainChangeNotify = 0x00000238,
		ScenePlayBattlePrepare = 0x00000239,
		ScenePlayBattlePrestart = 0x0000023a,
		ScenePlayBattleStart = 0x0000023b,
		ScenePlayBattleStop = 0x0000023c,
		ScenePlayBattleInterrupt = 0x0000023d,
		ScenePlayUidOpNotify = 0x0000023e,
		StartChargeCountDown = 0x0000023f,
		InterruptChargeCountDown = 0x00000240,
		ShowTemplateReminderNotify = 0x00000241,
		CloseTemplateReminderDialog = 0x00000242,
		ShowPromptDownReminderNotify = 0x00000243,
		NormalUidOpNotify = 0x00000244,
		OnDispatchConfigSet = 0x00000245,
		ShowDistanceTarget = 0x00000246,
		CloseDistanceTarget = 0x00000247,
		ClimateMeterType = 0x00000248,
		ClimateMeterValue = 0x00000249,
		ClimateAreaType = 0x0000024a,
		ClimateAreaID = 0x0000024b,
		ClimateMeterValueChanged = 0x0000024c,
		ClimateMeterTypeChanged = 0x0000024d,
		ClimateAreaTypeChanged = 0x0000024e,
		ClimateMeterWarning = 0x0000024f,
		ClimateMeterRefresh = 0x00000250,
		ShowClimateInfoDialog = 0x00000251,
		DungeonFactorDialogClose = 0x00000252,
		ShowMonthlyCardReward = 0x00000253,
		AchievementPageRefresh = 0x00000254,
		AchievementItemAdded = 0x00000255,
		RefreshAvatarLinePage = 0x00000256,
		OnPersonalLineAllDataRsp = 0x00000257,
		AvatarLineGetKey = 0x00000258,
		AvatarLineUnlock = 0x00000259,
		ShareComplete = 0x0000025a,
		SDKPayStart = 0x0000025b,
		SDKPayEnd = 0x0000025c,
		SDKGetProductList = 0x0000025d,
		AvatarAddNotify = 0x0000025e,
		TrialAvatarDelete = 0x0000025f,
		OnTakeReputationLevelReward = 0x00000260,
		RefreshReputation = 0x00000261,
		OnCityReputationLevelup = 0x00000262,
		RefreshHunting = 0x00000263,
		HuntingStart = 0x00000264,
		HuntingRevealClue = 0x00000265,
		HuntingRevealFinal = 0x00000266,
		HuntingSuccess = 0x00000267,
		HuntingFail = 0x00000268,
		CloseReputationHuntingDialog = 0x00000269,
		CloseReputationRequestDialog = 0x0000026a,
		HuntingTaken = 0x0000026b,
		HuntingFinished = 0x0000026c,
		TakeOfferingLevelReward = 0x0000026d,
		OfferingLevelChange = 0x0000026e,
		OfferingLevelChangeReward = 0x0000026f,
		ForbiddenToggleMoveStateChange = 0x00000270,
		OnToggleMoveSettingChange = 0x00000271,
		KeyboardLayoutUpdate = 0x00000272,
		ControllerMapModified = 0x00000273,
		OnControllerConnected = 0x00000274,
		OnDeviceTypeSet = 0x00000275,
		SetDeviceTypeInSettingPage = 0x00000276,
		OnJoypadIconDisplayTypeChange = 0x00000277,
		WidgetActionBtnRefresh = 0x00000278,
		WidgetEquipChange = 0x00000279,
		WidgetCollectorWindSeed = 0x0000027a,
		WidgetQuickUseButtonRelease = 0x0000027b,
		WidgetQuickUseRsp = 0x0000027c,
		ForcePlayBattleBtnCdEndEffect = 0x0000027d,
		FlightChallengeBegin = 0x0000027e,
		FlightChallengeFinish = 0x0000027f,
		ReportSuccNotify = 0x00000280,
		PlayerQuitFromMpByHostBlock = 0x00000281,
		PlayerQuitFromMpByGuestBlock = 0x00000282,
		ActivityBlessingDataRefresh = 0x00000283,
		ActivityBlessingScanSuccess = 0x00000284,
		ActivityBlessingScanFail = 0x00000285,
		ActivityBlessingRefresh = 0x00000286,
		ActivityGiveFriendPicSuccess = 0x00000287,
		TreasureHuntCurrencyNumChange = 0x00000288,
		ReunionAddToOpActivityListNotify = 0x00000289,
		ReunionRemoveFromOpActivityListNotify = 0x0000028a,
		ReunionGetFirstRewardSuccNotify = 0x0000028b,
		ReunionSignInGetRewardNotify = 0x0000028c,
		ReunionTaskClaimFinalRewardSuccNotify = 0x0000028d,
		ReunionTaskClaimWatcherRewardSuccNotify = 0x0000028e,
		AvatarExpeditionStartNtf = 0x0000028f,
		ShowLendHistoryNotify = 0x00000290,
		ExpeditionActivityStartNotify = 0x00000291,
		ExpeditionActivityRecallNotify = 0x00000292,
		ExpeditionActivityRewardClaimedNotify = 0x00000293,
		ExpeditionActivityInfoUpdateNotify = 0x00000294,
		OpenExpeditionMap = 0x00000295,
		OnExpeditionChallengeEnterRegion = 0x00000296,
		OnExpeditionChallengeFinish = 0x00000297,
		GetExpeditionRewardNotify = 0x00000298,
		GadgetGroupButtonAddNotify = 0x00000299,
		GadgetGroupButtonRemoveNotify = 0x0000029a,
		ActivityUpdateRegion = 0x0000029b,
		WalkModeChanged = 0x0000029c,
		FireUIEffectNotify = 0x0000029d,
		AttachUIEffectNotify = 0x0000029e,
		UntachUIEffectNotify = 0x0000029f,
		PlayerApplyEnterMpResult = 0x000002a0,
		PlayerQuitFromMp = 0x000002a1,
		PlayerVehilceUpdate = 0x000002a2,
		UpdateFriendsWishNotify = 0x000002a3,
		UpdateRecvGiftsNotify = 0x000002a4,
		UpdateGiftRecvInfoNotify = 0x000002a5,
		UpdateGiveGiftDialog = 0x000002a6,
		HaveRecvGiftNotify = 0x000002a7,
		OnActivitySetGiftWishRsp = 0x000002a8,
		GachaActivityPercentNotify = 0x000002a9,
		GachaActivityCreateRobotRsp = 0x000002aa,
		GachaActivityResetRsp = 0x000002ab,
		GachaActivityTakeRewardRsp = 0x000002ac,
		GachaActivityNextStageRsp = 0x000002ad,
		GetMechanicusInfoRsp = 0x000002ae,
		UpdateGearItem = 0x000002af,
		UnLockGearItem = 0x000002b0,
		FoundationOpLockFailed = 0x000002b1,
		MechanicusCoinNotify = 0x000002b2,
		FoundationUpdateNotify = 0x000002b3,
		OnInBattleMechanicusStageKillStartNotify = 0x000002b4,
		OnInBattleMechanicusStageKillEndNotify = 0x000002b5,
		OnInBattleMechanicusStageCardFlipEndNotify = 0x000002b6,
		OnInBattleMechanicusStart = 0x000002b7,
		OnInBattleMechanicusUpdate = 0x000002b8,
		OnInBattleMechanicusFinish = 0x000002b9,
		OnInBattleMechanicusPickCardRsp = 0x000002ba,
		OnInBattleMechanicusPickCardNotify = 0x000002bb,
		OnInBattleMechanicusConfirmCardRsp = 0x000002bc,
		OnInBattleMechanicusConfirmCardNotify = 0x000002bd,
		OnInBattleMechanicusCardResultNotify = 0x000002be,
		OnInBattleChessPickCardNotify = 0x000002bf,
		OnInBattleChessCandidateCardsNotify = 0x000002c0,
		FleurFairDungeonPreview = 0x000002c1,
		FleurFairDungeonPrepare = 0x000002c2,
		FleurFairDungeonGallery = 0x000002c3,
		FleurFairDungeonBoss = 0x000002c4,
		FleurFairDungeonGallerySettle = 0x000002c5,
		FleurFairDungeonBossSettle = 0x000002c6,
		FleurFairDungeonEnergy = 0x000002c7,
		FleurFairDungeonGalleryUpdate = 0x000002c8,
		SummerTimeStage4JoypadFocusChange = 0x000002c9,
		SummerTimeSprintBoatRedpointChange = 0x000002ca,
		GalleryDialogShow = 0x000002cb,
		GalleryPreStart = 0x000002cc,
		GalleryStart = 0x000002cd,
		GalleryStop = 0x000002ce,
		GalleryUpdateAll = 0x000002cf,
		GalleryBalloonShoot = 0x000002d0,
		GalleryBalloonScore = 0x000002d1,
		GalleryFallCatch = 0x000002d2,
		GalleryFallScore = 0x000002d3,
		GalleryMusicGameClose = 0x000002d4,
		GallerySettleRestart = 0x000002d5,
		GalleryPreInitCountDownStart = 0x000002d6,
		GalleryPreInitCountDownEnd = 0x000002d7,
		RefreshAvatarPanel = 0x000002d8,
		CheckUIOpenState = 0x000002d9,
		SlabCheckEnterLoopDungeon = 0x000002da,
		SlabEquipBuffChange = 0x000002db,
		GallerySumoStageStart = 0x000002dc,
		GallerySumoStageFinish = 0x000002dd,
		GallerySumoChangeTeam = 0x000002de,
		GallerySumoChangeTeamCdUpdate = 0x000002df,
		GallerySumoChangeTeamUpdateScore = 0x000002e0,
		StartCrystalLinkGalleryNotify = 0x000002e1,
		UpdateCrystalLinkGalleryNotify = 0x000002e2,
		StopCrystalLinkGalleryNotify = 0x000002e3,
		CrystalLinkBuffUpdate = 0x000002e4,
		CrystalLinkBuffEffect = 0x000002e5,
		CrystalLinkBuffActiveNotify = 0x000002e6,
		QuickSwitchTeamFetchNextTeamInfo = 0x000002e7,
		QuickSwitchTeamReqToChangeTeam = 0x000002e8,
		ArenaChallengeStart = 0x000002e9,
		ArenaChallengeTakeWatcherReward = 0x000002ea,
		ActivityMistTrialTakeReward = 0x000002eb,
		ActivityMistTrialExhibitionRefresh = 0x000002ec,
		ActivityMistTrialGalleryCountDown = 0x000002ed,
		ActivityMiniTomoClose = 0x000002ee,
		HomeWorldCompInfoUpdate = 0x000002ef,
		HomeWorldModuleChange = 0x000002f0,
		HomeWorldModuleChoose = 0x000002f1,
		HomeWorldModuleSeenUpdate = 0x000002f2,
		HomeWorldModulePrepareGoIn = 0x000002f3,
		HomeWorldFurnitureMakeInfoRefresh = 0x000002f4,
		HomeWorldFurnitureMakeGetResult = 0x000002f5,
		HomeWorldFurnitureMakeCancel = 0x000002f6,
		HomeWorldFurnitureFormulaUnlock = 0x000002f7,
		HomeWorldLevelUp = 0x000002f8,
		HomeWorldSuiteDetailShow = 0x000002f9,
		GetHomeworldVisitor = 0x000002fa,
		HomeKickPlayerRspSuccess = 0x000002fb,
		HomeWorldComfortInfoUpdate = 0x000002fc,
		ClearDeployGadgetData = 0x000002fd,
		HomeWorldChangeBGM = 0x000002fe,
		HomeWorldUnlockBGM = 0x000002ff,
		HomeWorldBlueprintSearchInfoUpdate = 0x00000300,
		HideAndSeekStagePrepare = 0x00000301,
		HideAndSeekStagePick = 0x00000302,
		HideAndSeekStageHide = 0x00000303,
		HideAndSeekStageSeek = 0x00000304,
		HideAndSeekPlayerSetAvatarNotify = 0x00000305,
		HideAndSeekSelectSkillRsp = 0x00000306,
		HideAndSeekPlayerReadyNotify = 0x00000307,
		HideAndSeekStageSettle = 0x00000308,
		HideAndSeekCaught = 0x00000309,
		HideAndSeekBecomeGhost = 0x0000030a,
		HideAndSeekPlayerChosenMapUpdate = 0x0000030b,
		AvatarChargeSkillNotify = 0x0000030c,
		LoginSceneNotify = 0x0000030d,
		CharacterPageNotify = 0x0000030e,
		CloseCharacterPageNotify = 0x0000030f,
		WeaponPageNotify = 0x00000310,
		CloseWeaponPageNotify = 0x00000311,
		LoadingBeginNotify = 0x00000312,
		LoadingEndNotify = 0x00000313,
		GachaItemNotify = 0x00000314,
		CloseGachaNotify = 0x00000315,
		GoToGachaPageNotify = 0x00000316,
		GrowFlowersUpdateTodaySeedNotify = 0x00000317,
		GrowFlowersUpdateExchangePage = 0x00000318,
		GrowFlowersUpdateFriendsWishNotify = 0x00000319,
		GrowFlowersUpdateRecvFlowersNotify = 0x0000031a,
		GrowFlowersUpdateRecvInfo = 0x0000031b,
		GrowFlowersUpdateGiveDialog = 0x0000031c,
		WinterCampSnowmanUpdateFriendsWishNotify = 0x0000031d,
		WinterCampSnowmanUpdateRecvItemNotify = 0x0000031e,
		WinterCampSnowmanUpdateRecvInfo = 0x0000031f,
		WinterCampSnowmanUpdateGiveDialog = 0x00000320,
		StartBuoyantCombatGallerySuccess = 0x00000321,
		StartBuoyantCombatGalleryNotify = 0x00000322,
		UpdateBuoyantCombatGalleryNotify = 0x00000323,
		StopBuoyantCombatGalleryNotify = 0x00000324,
		StartGalleryProgressNotify = 0x00000325,
		UpdateGalleryProgressNotify = 0x00000326,
		StopGalleryProgressNotify = 0x00000327,
		StartDigCombatGalleryNotify = 0x00000328,
		UpdateDigCombatGalleryNotify = 0x00000329,
		StopDigCombatGalleryNotify = 0x0000032a,
		SalvagePreventUpdateNotify = 0x0000032b,
		SalvageEscortUpdateNotify = 0x0000032c,
		UpdateSalvageBundleMark = 0x0000032d,
		UpdateBounceConjuringScore = 0x0000032e,
		AddBounceConjuringScore = 0x0000032f,
		LunaRiteSacrificeSuccess = 0x00000330,
		LunaRiteRefresh = 0x00000331,
		MoonfinTrialWatcherUpdated = 0x00000332,
		TryShowQTEDialog = 0x00000333,
		EnableSubtitleInputPenetrate = 0x00000334,
		CodexKillNumRefresh = 0x00000335,
		FishBaitUpdate = 0x00000336,
		FishQteStart = 0x00000337,
		FishBattleEnd = 0x00000338,
		ExitFishing = 0x00000339,
		FishRippleEffectStart = 0x0000033a,
		FishRippleEffectEnd = 0x0000033b,
		OnShikigamiSkillUpgrade = 0x0000033c,
		OnRefreshRoguelikeDungeonCardRsp = 0x0000033d,
		OnTakeRoguelikeStageFirstPassReward = 0x0000033e,
		OnEnterRoguelikeDungeonNotify = 0x0000033f,
		ActivityRogueContentClose = 0x00000340,
		CustomGadgetSubmitRsp = 0x00000341,
		IrodoriEditFlowerSubmitRsp = 0x00000342,
		CustomGadgetPendingDataUnexpectedlyRemoved = 0x00000343,
		ProjectionGameGuideFinishFreeRotationXY = 0x00000344,
		ProjectionGameGuideFinishFreeRotationZ = 0x00000345,
		ProjectionGameGuideFinishSwitch = 0x00000346,
		ProjectionGameAnswerUnlocked = 0x00000347,
		FireworkMakerRefreshPage = 0x00000348,
		FireworkReformSettlement = 0x00000349,
		LanternRiteStartFireworksReformRsp = 0x0000034a,
		LanternRiteDoFireworksReformRsp = 0x0000034b,
		LanternRiteEndFireworksReformRsp = 0x0000034c,
		LanternRiteEndFireworksReform = 0x0000034d,
		LanternRiteFireworksReformDoOnce = 0x0000034e,
		LocalAvatarStateIDChanged = 0x0000034f,
		LocalAvatarAttackTag = 0x00000350,
		LocalAvatarDoSkillSucc = 0x00000351,
		LocalAvatarAnimatorStateChangedBeforeClear = 0x00000352,
		BattleFervorAuthorityOnBeingHit = 0x00000353,
		BattleFervorAttackDamageResult = 0x00000354,
		BattleFervorKilledNotify = 0x00000355,
		CustomLevelDungeonUpdate = 0x00000356,
		CustomDungeonTryTypeChanged = 0x00000357,
		CustomLevelSearchResult = 0x00000358,
		CustomLevelSubscribeResult = 0x00000359,
		CustomLevelLikeResult = 0x0000035a,
		CustomLevelSaveResult = 0x0000035b,
		RegionalPlayEnable = 0x0000035c,
		RegionalPlayDisable = 0x0000035d,
		MichiaeBattleSkillUnlock = 0x0000035e,
		ShowSignalMichiae = 0x0000035f,
		LifeCountShow = 0x00000360,
		LifeCountHide = 0x00000361,
		LifeCountChange = 0x00000362,
		AttachBartenderEffectNotify = 0x00000363,
		DetachBartenderEffectNotify = 0x00000364,
		BartenderRecipeUnlockNotify = 0x00000365,
		HomeBalloonShootStartNotify = 0x00000366,
		HomeBalloonShootScoreUpdateNotify = 0x00000367,
		HomeBalloonShootEndNotify = 0x00000368,
		SpiceActivityProcessFoodRsp = 0x00000369,
		SpiceActivityFinishMakeSpiceRsp = 0x0000036a,
		IrodoriAcitvityInfoUpdate = 0x0000036b,
		IrodoriAcitvityWatcherInfoUpdate = 0x0000036c,
		FillPoetry = 0x0000036d,
		ScanPoetryEntity = 0x0000036e,
		MasterGalleryStart = 0x0000036f,
		MasterGallerySettle = 0x00000370,
		IrodoriChessEquipCardUpdate = 0x00000371,
		WidgetToyOnPhotographRelease = 0x00000372,
		WidgetToyStartTakingPhoto = 0x00000373,
		OnPhotoSettleNotify = 0x00000374,
		OnGalleryPhotoStart = 0x00000375,
		OnGalleryPhotoEnd = 0x00000376,
		ActivityPhotoConfirmCameraSetting = 0x00000377,
		PostActivityPhotoConfirmCameraSetting = 0x00000378,
		OnPhotoActivityFinishRsp = 0x00000379,
		BeforeShowActivityPhotoAdjustCameraPage = 0x0000037a,
		GetQuestLackingResourceRsp = 0x0000037b,
		ArrangeSaveFoundNotify = 0x0000037c,
		ArrangeSaveNotFoundNotify = 0x0000037d,
		UGCLimitedNotify = 0x0000037e,
		UGCLockedNotify = 0x0000037f,
		UGCStateUpdateNotify = 0x00000380,
		CheckHistorySavesUpdateNotify = 0x00000381,
		MusicGameRewardUnlockNotify = 0x00000382,
		MusicGameRefreshUgcArchivesNotify = 0x00000383,
		MusicGameImportOfficialLevelNotify = 0x00000384,
		MusicGameImportUgcLevelNotify = 0x00000385,
		MusicGameCompareUgcLevelNotify = 0x00000386,
		MusicGameTrialUgcLevelNotify = 0x00000387,
		MusicGamePlayUgcLevelNotify = 0x00000388,
		MusicGameSettleNotify = 0x00000389,
		MusicGameEndNotify = 0x0000038a,
		MusicGameRestartNotify = 0x0000038b,
		RogueDiaryCardReroll = 0x0000038c,
		RogueDiaryStartDungeon = 0x0000038d,
		RogueDiaryResetDungeon = 0x0000038e,
		RogueDiaryCardSelected = 0x0000038f,
		RogueDiaryAvatarRevive = 0x00000390,
		RogueDiaryFinishBanPick = 0x00000391,
		ActivityQuickOpen = 0x00000392,
		ActivitySpecialItem = 0x00000393,
		ChasmChallengeGalleryInfoUpdateNotify = 0x00000394,
		HomeSeekGalleryInfoUpdateNotify = 0x00000395,
		IslandMoutainSelectRsp = 0x00000396,
		IslandPartyAcitvityWatcherInfoUpdate = 0x00000397,
		IslandPartyRaftReminderRefresh = 0x00000398,
		IslandPartyRaftGalleryInfoUpdate = 0x00000399,
		IslandPartySailGalleryInfoUpdate = 0x0000039a,
		IslandPartyDownHillGalleryInfoUpdate = 0x0000039b,
		ActivityJigsawGameSuccess = 0x0000039c,
		ActivityGearGameSuccess = 0x0000039d,
		ActivityGearAutoPlaceUpperLayer = 0x0000039e,
		ActivityGearAutoFlip = 0x0000039f,
		PlotInferenceFinishTalk = 0x000003a0,
		PlotInferenceUpdate = 0x000003a1,
		TeamManaged = 0x000003a2,
		BackupTeamDeleted = 0x000003a3,
		UpdateShownTeamId = 0x000003a4,
		DeathZoneActiveChange = 0x000003a5,
		MuqadasPotionGalleryInfoUpdate = 0x000003a6,
		InstableSprayTeamRefresh = 0x000003a7,
		InstableSprayGalleryInfoUpdate = 0x000003a8,
		InstableSpraySwitchTeamRsp = 0x000003a9,
		HomeWoodExchangeInfoRefresh = 0x000003aa,
		HomeWoodExchangeUpdate = 0x000003ab,
		HomeWoodSelectedMaterialExchange = 0x000003ac,
		HomeWoodSelectedMaterialDialogClsoe = 0x000003ad,
		WindFieldActivityWatcherInfoUpdate = 0x000003ae,
		WindFieldGalleryInfoUpdate = 0x000003af,
		WindFieldChallengeInfoUpdate = 0x000003b0,
		VintageHuntingGalleryStart = 0x000003b1,
		VintageHuntingGalleryStop = 0x000003b2,
		VintageHuntingGalleryUpdate = 0x000003b3,
		OnVintageMarketStrategySlotUnlockRsp = 0x000003b4,
		OnVintageMarketStoreChooseStrategyRsp = 0x000003b5,
		OnVintageMarketStoreViewStrategyRsp = 0x000003b6,
		OnVintageMarketDividendFinishNotify = 0x000003b7,
		OnVintageMarketNpcEventFinishNotify = 0x000003b8,
		OnVintageStoreAttrTooSmall = 0x000003b9,
		OnVintageMarketFinishStorePlayRsp = 0x000003ba,
		SwitchSkillIcon = 0x000003bb,
		CalalogWatcherUpdated = 0x000003bc,
		GCGClientSettle = 0x000003bd,
		GcgGuideTaskStateCancel = 0x000003be,
		RefreshGcgDeckName = 0x000003bf,
		GcgRefreshDeck = 0x000003c0,
		GcgDeckSaved = 0x000003c1,
		GcgCurrentDeckChanged = 0x000003c2,
		GcgRefreshCardDetail = 0x000003c3,
		GcgCardNumChanged = 0x000003c4,
		GcgFilterDataConfirm = 0x000003c5,
		GcgFilterDialogVisionStateChanged = 0x000003c6,
		GcgFilterDialogShow = 0x000003c7,
		GcgFilterDialogUpdate = 0x000003c8,
		RefreshGcgDeckAppearance = 0x000003c9,
		GcgPlayerDataReady = 0x000003ca,
		GcgPlayerDataUpdate = 0x000003cb,
		GcgPlayerLevelInfoUpdate = 0x000003cc,
		GcgHandbookWeeklyChallengeInfoUpdate = 0x000003cd,
		GCGWeekChallengeNotifyNpcChange = 0x000003ce,
		GcgCardProficiencyUpdate = 0x000003cf,
		GcgCardProficiencyRewardTaken = 0x000003d0,
		GcgCardProficiencyRewardItemAdded = 0x000003d1,
		GcgBannedCardListUpdate = 0x000003d2,
		GcgBannedCardListUpdateRefresh = 0x000003d3,
		GcgCardFaceUnlock = 0x000003d4,
		FungusFighterCaptureGalleryStart = 0x000003d5,
		FungusFighterCaptureGalleryInfoUpdate = 0x000003d6,
		FungusFighterCaptureGallerySettle = 0x000003d7,
		FungusFighterCaptureGalleryStop = 0x000003d8,
		FungusFighterTrainingGalleryStart = 0x000003d9,
		FungusFighterTrainingGalleryInfoUpdate = 0x000003da,
		FungusFighterTrainingGallerySettle = 0x000003db,
		FungusFighterTrainingGalleryStop = 0x000003dc,
		FungusFighterTrainingOrganizeSuccess = 0x000003dd,
		FungusFighterTrainingBackupSuccess = 0x000003de,
		FungusFighterTrainingClearSuccess = 0x000003df,
		FungusFighterPartnerUseSkillSuccess = 0x000003e0,
		CharAmusementStagePreview = 0x000003e1,
		CharAmusementStagePrepare = 0x000003e2,
		CharAmusementStageGallery = 0x000003e3,
		CharAmusementGalleryInfoUpdate = 0x000003e4,
		FungusFighterLevelUp = 0x000003e5,
		FungusFighterLevelError = 0x000003e6,
		FungusRenameSuccess = 0x000003e7,
		FungusRenameFailed = 0x000003e8,
		EffigyV2GalleryInfoUpdate = 0x000003e9,
		HomeworldBlueprintSlotInfoUpdate = 0x000003ea,
		HomeworldBlueprintFriendCopyOption = 0x000003eb,
		HomeworldBlueprintSlotOptionUpdate = 0x000003ec,
		HomeworldBlueprintCreateInfo = 0x000003ed,
		HomeworldBlueprintDeleInfo = 0x000003ee,
		HomeworldPreviewBlockChange = 0x000003ef,
		HomeworldCrossModulePreview = 0x000003f0,
		HomeworldEnterPreviewModeSuccess = 0x000003f1,
		HomeworldResumeBlueprintHandBook = 0x000003f2,
		HomeworldSceneFishpondFarmSuccess = 0x000003f3,
		BrickBreakerStagePrepare = 0x000003f4,
		BrickBreakerStagePick = 0x000003f5,
		BrickBreakerStageGame = 0x000003f6,
		BrickBreakerPlayerSetAvatarNotify = 0x000003f7,
		BrickBreakerSelectSkillRsp = 0x000003f8,
		BrickBreakerPlayerSetSkillNotify = 0x000003f9,
		BrickBreakerPlayerReadyNotify = 0x000003fa,
		BrickBreakerStageSettle = 0x000003fb,
		BrickBreakerPlayerChangingNotify = 0x000003fc,
		OnSingleStartBrickBreakerRsp = 0x000003fd,
		OnInBattleBrickBreakerStart = 0x000003fe,
		OnInBattleBrickBreakerUpdate = 0x000003ff,
		OnInBattleBrickBreakerFinish = 0x00000400,
		OnInBattleBrickBreakerShowBanner = 0x00000401,
		BrickBreakerLevelChecked = 0x00000402,
		BrickBreakerWatcherInfoUpdate = 0x00000403,
		CoinCollectSkillSelectFailed = 0x00000404,
		CoinCollectSkillSelectSucceed = 0x00000405,
		CoinCollectInviteCheckFailed = 0x00000406,
		CoinCollectInviteCheckSucceed = 0x00000407,
		CoinCollectGalleryInfoUpdate = 0x00000408,
		CoinCollectGalleryReady = 0x00000409,
		CoinCollectMultistagePrepare = 0x0000040a,
		CoinCollectMultistageCutScene = 0x0000040b,
		CoinCollectMultistageGallery = 0x0000040c,
		CoinCollectMultistageEnd = 0x0000040d,
		CoinCollectMultistagePlayerInfoUpdate = 0x0000040e,
	};

	enum class ScenePointType__Enum : int32_t
	{
		NORMAL = 0x00000000,
		TOWER = 0x00000001,
		PORTAL = 0x00000002,
		Other = 0x00000003,
	};

	enum class RealScenePointType__Enum : int32_t
	{
		Other = 0x00000000,
		TransPointNormal = 0x00000001,
		TransPointStatue = 0x00000002,
		TransPointPortal = 0x00000003,
		DungeonEntry = 0x00000004,
		DungeonExit = 0x00000005,
		DungeonWayPoint = 0x00000006,
		DungeonQuitPoint = 0x00000007,
		DungeonRewardPoint = 0x00000008,
		PersonalSceneJumpPoint = 0x00000009,
		SceneBuildingPoint = 0x0000000a,
		DungeonSlipRevivePoint = 0x0000000b,
		VehicleSummonPoint = 0x0000000c,
	};

	struct Vector
	{
		float _x;
		float _y;
		float _z;
	};

	struct __declspec(align(8)) ConfigScenePoint__Fields
	{
		ScenePointType__Enum _type;
		struct SimpleSafeUInt32 gadgetIdRawNum;
		struct SimpleSafeUInt16 areaIdRawNum;
		struct Vector3 _pos;
		struct Vector3 _rot;
		struct Vector3 _tranPos;
		struct Vector3 _tranRot;
		bool _unlocked;
		struct String *_alias;
		bool _groupLimit;
		bool _isModelHidden;
	};

	struct ConfigScenePoint
	{
		struct ConfigScenePoint__Class *klass;
		MonitorData *monitor;
		struct ConfigScenePoint__Fields fields;
	};

	struct ConfigScenePoint__VTable
	{
		VirtualInvokeData Equals;
		VirtualInvokeData Finalize;
		VirtualInvokeData GetHashCode;
		VirtualInvokeData ToString;
		VirtualInvokeData InitEmpty;
		VirtualInvokeData ObjectContentHashOnto;
		VirtualInvokeData get_pointType;
		VirtualInvokeData ObjectContentHashOnto_1;
		VirtualInvokeData ForeachRefTypeMember;
		VirtualInvokeData Clone;
		VirtualInvokeData GetHashNum;
		VirtualInvokeData InitEmpty_1;
		VirtualInvokeData FromBinary;
	};

	struct ConfigScenePoint__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		struct ConfigScenePoint__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
		char unknown[24];
		struct ConfigScenePoint__VTable vtable;
	};

	struct Nullable_1_UnityEngine_Vector3_
	{
		struct Vector3 value;
		bool has_value;
	};

	enum class ElementType__Enum : int32_t
	{
		None = 0x00000000,
		Fire = 0x00000001,
		Water = 0x00000002,
		Grass = 0x00000003,
		Electric = 0x00000004,
		Ice = 0x00000005,
		Frozen = 0x00000006,
		Wind = 0x00000007,
		Rock = 0x00000008,
		AntiFire = 0x00000009,
		VehicleMuteIce = 0x0000000a,
		Mushroom = 0x0000000b,
		Overdose = 0x0000000c,
		Wood = 0x0000000d,
		COUNT = 0x0000000e,
	};

	enum class Config_WorldAreaType__Enum : int32_t
	{
		LEVEL_NONE = 0x00000000,
		LEVEL_1 = 0x00000001,
		LEVEL_2 = 0x00000002,
		LEVEL_3 = 0x00000003,
		LEVEL_PLAY = 0x0000000a,
	};

	enum class Config_AreaTerrainType__Enum : int32_t
	{
		AREA_TERRAIN_NONE = 0x00000000,
		AREA_TERRAIN_CITY = 0x00000001,
		AREA_TERRAIN_OUTDOOR = 0x00000002,
	};

	struct SimpleSafeFloat
	{
		uint32_t _value;
	};

	struct __declspec(align(8)) MoleMole_Config_WorldAreaConfig__Fields
	{
		struct SimpleSafeUInt32 IDRawNum;
		struct SimpleSafeUInt32 SceneIDRawNum;
		Config_WorldAreaType__Enum _AreaType;
		struct SimpleSafeUInt32 AreaID_1RawNum;
		struct SimpleSafeUInt32 AreaID_2RawNum;
		bool _AreaDefaultLock;
		uint32_t _AreaNameTextMapHash;
		struct SimpleSafeUInt32 tower_point_idRawNum;
		ElementType__Enum _elementType;
		Config_AreaTerrainType__Enum _terrainType;
		bool _showTips;
		struct SimpleSafeFloat minimapScaleRawNum;
	};

	struct MoleMole_Config_WorldAreaConfig
	{
		void *klass;
		MonitorData *monitor;
		struct MoleMole_Config_WorldAreaConfig__Fields fields;
	};

	struct BaseEntity__Array
	{
		void *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct BaseEntity *vector[32];
	};

    struct Dictionary_2_TKey_TValue_Entry_System_UInt32_MoleMole_BaseEntity_
    {
        int32_t hashCode;
        int32_t next;
        uint32_t key;
        struct BaseEntity* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_UInt32_MoleMole_BaseEntity___Array
    {
        struct Dictionary_2_TKey_TValue_Entry_System_UInt32_MoleMole_BaseEntity___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_UInt32_MoleMole_BaseEntity_ vector[32];
    };

	struct __declspec(align(8)) Dictionary_2_System_UInt32_BaseEntity___Fields
	{
		struct Int32__Array *buckets;
		struct Dictionary_2_TKey_TValue_Entry_System_UInt32_MoleMole_BaseEntity___Array *entries;
		int32_t count;
		int32_t version;
		int32_t freeList;
		int32_t freeCount;
		struct IEqualityComparer_1_System_UInt32_ *comparer;
		struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_MoleMole_BaseEntity_ *keys;
		struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_MoleMole_BaseEntity_ *values;
		struct Object *_syncRoot;
	};

	struct Dictionary_2_System_UInt32_BaseEntity_
	{
		void *klass;
		MonitorData *monitor;
		struct Dictionary_2_System_UInt32_BaseEntity___Fields fields;
	};

	struct __declspec(align(8)) Dictionary_2_System_String_BaseEntity___Fields
	{
		struct Int32__Array *buckets;
		struct Dictionary_2_TKey_TValue_Entry_System_String_MoleMole_BaseEntity___Array *entries;
		int32_t count;
		int32_t version;
		int32_t freeList;
		int32_t freeCount;
		struct IEqualityComparer_1_System_String_ *comparer;
		struct Dictionary_2_TKey_TValue_KeyCollection_System_String_MoleMole_BaseEntity_ *keys;
		struct Dictionary_2_TKey_TValue_ValueCollection_System_String_MoleMole_BaseEntity_ *values;
		struct Object *_syncRoot;
	};

	struct Dictionary_2_System_String_BaseEntity_
	{
		void *klass;
		MonitorData *monitor;
		struct Dictionary_2_System_String_BaseEntity___Fields fields;
	};

	struct __declspec(align(8)) MoleMole_MapModule__Fields
	{
		struct Dictionary_2_System_UInt32_Dictionary_2_System_UInt32_MoleMole_MapModule_MoleMole_MapModule_ScenePointData_ *_scenePointDics;
		struct Vector3 _bigworldPos;
		struct String *_activityLimitRegion;
		struct String *_homeworldLimitRegion;
		uint32_t _checkScenePointTimer;
		uint32_t _curDungeonID_k__BackingField;
		uint32_t _dungeonReviseLevelID_k__BackingField;
		uint32_t _dungeonReviseLevel_k__BackingField;
		uint32_t _dungeonEndTime_k__BackingField;
		uint32_t _dungeonMonsterDieCount_k__BackingField;
		uint32_t _NPFJPCKKJLF_k__BackingField;
		bool _isTowerUnlocked_k__BackingField;
		struct List_1_System_UInt32_ *dungeonDataLevelConfigIdList;
		struct Nullable_1_UnityEngine_Vector3_ curClientAvatarRebornPoint;
		struct Dictionary_2_System_UInt32_Dictionary_2_System_UInt32_System_UInt32_ *toBeExploredDungeonEntryDic;
		struct Dictionary_2_System_UInt32_Dictionary_2_System_UInt32_System_UInt32_ *canNotBeExploredDungeonEntryDic;
		struct HashSet_1_System_UInt32_ *MNBMBNBEMNP;
		float ILAOLLCMCMI;
		struct Dictionary_2_System_UInt32_MoleMole_Config_ConfigScene_ *_cfgSceneDic;
		struct Dictionary_2_System_UInt32_Dictionary_2_System_UInt32_MoleMole_Config_ConfigScenePoint_ *_cfgPointDic;
		struct List_1_System_UInt32_ *_currTransPointList;
		struct List_1_System_UInt32_ *_currFunctionalPointList;
		struct Dictionary_2_System_UInt32_Dictionary_2_System_UInt32_MoleMole_MapModule_CJAOFADLLDO_ *IMMNJBKCILF;
		uint32_t _activityPlayId_k__BackingField;
		float MAX_IN_LIMIT_REGION_TIME;
		float _startInLimitRegionTime;
		uint32_t _homeworldRegionSceneId_k__BackingField;
		uint32_t _ODLFKOAMDDB_k__BackingField;
		struct List_1_System_String_ *HAEOLGFHPEN;
		void * /*private List<string>*/ LPEPLJMMALJ;
		struct Dictionary_2_System_UInt32_Dictionary_2_System_UInt32_MoleMole_MapModule_MoleMole_MapModule_CityData_ *_cityDataDic;
		struct Dictionary_2_System_UInt32_Dictionary_2_System_UInt32_MoleMole_MapModule_MoleMole_MapModule_WorldAreaData_ *_worldAreaDataDic;
		struct Dictionary_2_System_UInt32_System_UInt32_ *_areaId2ExplorePointDic;
		struct MoleMole_Config_WorldAreaConfig *_currAreaConfig;
		struct MoleMole_BaseEntity *_dungeonQuitPoint;
		struct Dictionary_2_System_UInt32_MoleMole_BaseEntity_ *_dungeonWayPointDic;
		struct Dictionary_2_System_UInt32_List_1_System_UInt32_ *_dungeonToEntrytDic;
		struct Dictionary_2_System_UInt32_List_1_System_UInt32_ *_dungeonToDateDic;
		uint32_t _dungeonCloseTime;
		struct Dictionary_2_System_String_MoleMole_BaseEntity_ *_forceFieldDic;
		bool _playerAudioOnEnterDungeonSuccess;
		void *_KNNFAGHICKN_k__BackingField;
		struct HashSet_1_System_UInt32_ *_activatedDungeonWayPoint;
		bool _dungeonEntryOpen;
		struct Dictionary_2_System_UInt32_System_Boolean_ *_sceneUnlockDic;
		struct Dictionary_2_System_UInt32_List_1_System_UInt32_ *KGKDFINOOHM;
		struct List_1_MoleMole_MapModule_MoleMole_MapModule_ScannerInfo_ *_scannerInfoList;
		void * /*private Dictionary<uint, uint>*/ GOKLHEPNIPF;
		struct List_1_MoleMole_MapAreaMistData_ *_mistDataList;
		struct List_1_MoleMole_MapAreaMistData_ *_openMistDataList;
		struct List_1_MoleMole_MapAreaMistData_ *_newOpenMistDataList;
		struct List_1_System_UInt32_ *dirtyMistDataList;
		struct Transform *_mapAreaFog;
		struct Dictionary_2_System_String_MoleMole_MapModule_MoleMole_MapModule_PrefabHandle_ *_prefabHandleDict;
	};

	struct MoleMole_MapModule
	{
		struct MoleMole_MapModule__Class *klass;
		MonitorData *monitor;
		struct MoleMole_MapModule__Fields fields;
	};

	struct MapModule_ScenePointData
	{
		bool isUnlocked;
		struct ConfigScenePoint *config;
		bool isGroupLimit;
		bool isModelHidden;
		uint32_t entityId;
		uint32_t level;
	};

	enum class MoleMole_Config_MapTagType__Enum : int32_t
	{
		BigWorld = 0x00000000,
		HomeWorld = 0x00000001,
		Islands = 0x00000002,
		Abyssalisle = 0x00000003,
		MichiaeMatsuri = 0x00000004,
		TheChasm = 0x00000005,
	};

	enum class MoleMole_CustomMarkTrackReasonType__Enum : int32_t
	{
		Noe = 0x00000000,
		Monster = 0x00000001,
		Quest = 0x00000002,
	};

	struct Rect
	{
		float m_XMin;
		float m_YMin;
		float m_Width;
		float m_Height;
	};

	enum class MoleMole_InLevelMapPageContext_MoleMole_InLevelMapPageContext_MarkTipsContentType__Enum : int32_t
	{
		Normal = 0x00000000,
		AddCustomMark = 0x00000001,
		EditCustomMark = 0x00000002,
		Dungeon = 0x00000003,
		Boss = 0x00000004,
		Routine = 0x00000005,
		MapTagSwitch = 0x00000006,
		TemplateMapTips = 0x00000007,
	};

	enum class MoleMole_InLevelMapPageContext_MoleMole_InLevelMapPageContext_DungeonEntryState__Enum : int32_t
	{
		LOCKED = 0x00000000,
		TOBEEXPLORE = 0x00000001,
		UNLOCKED = 0x00000002,
	};

	enum class MoleMole_InLevelMapPageContext_MoleMole_InLevelMapPageContext_DungeonTabSelectState__Enum : int32_t
	{
		NotReady = 0x00000000,
		SelectTitle = 0x00000001,
		SelectReward = 0x00000002,
		DailyReward = 0x00000003,
	};

	struct MoleMole_WeeklyBossResinDiscountInfoStruct
	{
		uint32_t discountNum;
		uint32_t discountNumLimit;
		uint32_t resinCost;
		uint32_t originalResinCost;
	};

	struct MoleMole_InLevelMapPageContext_MoleMole_InLevelMapPageContext_DungeonEntryInfo
	{
		uint32_t id;
		bool isPassed;
		uint32_t maxBossChestNum;
		uint32_t openedBossCheestNum;
		uint32_t nextRefreshTime;
		struct MoleMole_WeeklyBossResinDiscountInfoStruct weeklyBossResinDiscount;
	};

	struct MoleMole_InLevelMapPageContext_MoleMole_InLevelMapPageContext_DungeonEntryInfoList
	{
		int32_t count;
		struct MoleMole_InLevelMapPageContext_MoleMole_InLevelMapPageContext_DungeonEntryInfo first;
		struct MoleMole_InLevelMapPageContext_MoleMole_InLevelMapPageContext_DungeonEntryInfo second;
		struct MoleMole_InLevelMapPageContext_MoleMole_InLevelMapPageContext_DungeonEntryInfo third;
		struct MoleMole_InLevelMapPageContext_MoleMole_InLevelMapPageContext_DungeonEntryInfo fourth;
	};

	struct MoleMole_ItemTipsDialogHelper
	{
		struct MoleMole_ItemTipsDialogContext *_dialog;
	};

	enum class CursorLockMode__Enum : int32_t
	{
		None = 0x00000000,
		Locked = 0x00000001,
		Confined = 0x00000002,
	};

	struct Dictionary_2_System_UInt32_MapModule_ScenePointData___Array
	{
		struct Dictionary_2_System_UInt32_MoleMole_MapModule_ScenePointData___Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct Dictionary_2_System_UInt32_MoleMole_MapModule_ScenePointData_ *vector[32];
	};

	struct MapModule_ScenePointData__Array
	{
		struct MoleMole_MapModule_MoleMole_MapModule_ScenePointData__Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct MapModule_ScenePointData vector[32];
	};

	struct __declspec(align(8)) Dictionary_2_System_UInt32_MapModule_ScenePointData___Fields
	{
		struct Int32__Array *table;
		struct Link__Array *linkSlots;
		struct UInt32__Array *keySlots;
		struct MapModule_ScenePointData__Array *valueSlots;
		int32_t touchedSlots;
		int32_t emptySlot;
		int32_t count;
		int32_t threshold;
		void *hcp;
		void *serialization_info;
		int32_t generation;
	};

	struct __declspec(align(8)) Dictionary_2_System_UInt32_Dictionary_2_System_UInt32_MapModule_ScenePointData___Fields
	{
		struct Int32__Array *table;
		struct Link__Array *linkSlots;
		struct UInt32__Array *keySlots;
		struct Dictionary_2_System_UInt32_MapModule_ScenePointData___Array *valueSlots;
		int32_t touchedSlots;
		int32_t emptySlot;
		int32_t count;
		int32_t threshold;
		void *hcp;
		void *serialization_info;
		int32_t generation;
	};

	struct Dictionary_2_System_UInt32_Dictionary_2_System_UInt32_MapModule_ScenePointData_
	{
		void *klass;
		MonitorData *monitor;
		struct Dictionary_2_System_UInt32_Dictionary_2_System_UInt32_MapModule_ScenePointData___Fields fields;
	};

	struct Dictionary_2_System_UInt32_MoleMole_MapModule_ScenePointData_
	{
		void *klass;
		MonitorData *monitor;
		struct Dictionary_2_System_UInt32_MapModule_ScenePointData___Fields fields;
	};

	struct Notify
	{
		MoleMole_NotifyTypes__Enum type;
		struct Object *body;
		struct Packet *udpPacket;
	};

	struct __declspec(align(8)) Dictionary_2_SafeUInt32_JKNLDEEBGLL___Fields
	{
		struct Int32__Array *table;
		struct Link__Array *linkSlots;
		struct SafeUInt32__Array *keySlots;
		struct JKNLDEEBGLL__Array *valueSlots;
		int32_t touchedSlots;
		int32_t emptySlot;
		int32_t count;
		int32_t threshold;
		struct IEqualityComparer_1_SafeUInt32_ *hcp;
		struct SerializationInfo *serialization_info;
		int32_t generation;
	};

	struct SafeUInt32
	{
		int64_t _data1;
		int64_t _data2;
	};

	struct SafeUInt32__Array
	{
		struct SafeUInt32__Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct SafeUInt32 vector[32];
	};

	struct Dictionary_2_SafeUInt32_JKNLDEEBGLL_
	{
		void *klass;
		MonitorData *monitor;
		struct Dictionary_2_SafeUInt32_JKNLDEEBGLL___Fields fields;
	};

	struct JKNLDEEBGLL
	{
		int64_t OBMDKAHDODE;
		int64_t EEADNINIHGI;
	};

	struct JKNLDEEBGLL__Boxed
	{
		struct JKNLDEEBGLL__Class *klass;
		MonitorData *monitor;
		struct JKNLDEEBGLL fields;
	};

	struct JKNLDEEBGLL__Array
	{
		struct JKNLDEEBGLL__Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct JKNLDEEBGLL vector[32];
	};

	enum class PropType__Enum : uint32_t
	{
		PROP_NONE = 0x00000000,
		PROP_EXP = 0x000003e9,
		PROP_BREAK_LEVEL = 0x000003ea,
		PROP_SATIATION_VAL = 0x000003eb,
		PROP_SATIATION_PENALTY_TIME = 0x000003ec,
		PROP_GEAR_START_VAL = 0x000007d1,
		PROP_GEAR_STOP_VAL = 0x000007d2,
		PROP_LEVEL = 0x00000fa1,
		PROP_LAST_CHANGE_AVATAR_TIME = 0x00002711,
		PROP_MAX_SPRING_VOLUME = 0x00002712,
		PROP_CUR_SPRING_VOLUME = 0x00002713,
		PROP_IS_SPRING_AUTO_USE = 0x00002714,
		PROP_SPRING_AUTO_USE_PERCENT = 0x00002715,
		PROP_IS_FLYABLE = 0x00002716,
		PROP_IS_WEATHER_LOCKED = 0x00002717,
		PROP_IS_GAME_TIME_LOCKED = 0x00002718,
		PROP_IS_TRANSFERABLE = 0x00002719,
		PROP_MAX_STAMINA = 0x0000271a,
		PROP_CUR_PERSIST_STAMINA = 0x0000271b,
		PROP_CUR_TEMPORARY_STAMINA = 0x0000271c,
		PROP_PLAYER_LEVEL = 0x0000271d,
		PROP_PLAYER_EXP = 0x0000271e,
		PROP_PLAYER_HCOIN = 0x0000271f,
		PROP_PLAYER_SCOIN = 0x00002720,
		PROP_PLAYER_MP_SETTING_TYPE = 0x00002721,
		PROP_IS_MP_MODE_AVAILABLE = 0x00002722,
		PROP_PLAYER_WORLD_LEVEL = 0x00002723,
		PROP_PLAYER_RESIN = 0x00002724,
		PROP_PLAYER_WAIT_SUB_HCOIN = 0x00002726,
		PROP_PLAYER_WAIT_SUB_SCOIN = 0x00002727,
		PROP_IS_ONLY_MP_WITH_PS_PLAYER = 0x00002728,
		PROP_PLAYER_MCOIN = 0x00002729,
		PROP_PLAYER_WAIT_SUB_MCOIN = 0x0000272a,
		PROP_PLAYER_LEGENDARY_KEY = 0x0000272b,
		PROP_IS_HAS_FIRST_SHARE = 0x0000272c,
		PROP_PLAYER_FORGE_POINT = 0x0000272d,
		PROP_CUR_CLIMATE_METER = 0x00002733,
		PROP_CUR_CLIMATE_TYPE = 0x00002734,
		PROP_CUR_CLIMATE_AREA_ID = 0x00002735,
		PROP_CUR_CLIMATE_AREA_CLIMATE_TYPE = 0x00002736,
		PROP_PLAYER_WORLD_LEVEL_LIMIT = 0x00002737,
		PROP_PLAYER_WORLD_LEVEL_ADJUST_CD = 0x00002738,
		PROP_PLAYER_LEGENDARY_DAILY_TASK_NUM = 0x00002739,
		PROP_PLAYER_HOME_COIN = 0x0000273a,
		PROP_PLAYER_WAIT_SUB_HOME_COIN = 0x0000273b,
		PROP_IS_AUTO_UNLOCK_SPECIFIC_EQUIP = 0x0000273c,
	};

	struct __declspec(align(8)) BaseComponentPlugin__Fields
	{
		struct BaseComponent *owner;
		bool isInited;
		bool hasTick;
		bool hasLateTick;
		struct Int32__Array *_selfOnEventIDsCache;
		bool _isSelfOnEventIDsCached;
		struct Int32__Array *_selfOnEventResolvedIDsCache;
		bool _isSelfOnEventResolvedIDsCached;
		struct Int32__Array *_selfListenEventIDsCache;
		bool _isSelfListenEventIDsCached;
		bool _enabled;
		bool _hasEnabledInited;
		bool _listenEventValid_k__BackingField;
	};

	struct BaseComponentPlugin
	{
		Il2CppClass *klass;
		MonitorData *monitor;
		struct BaseComponentPlugin__Fields fields;
	};

	struct LevelSyncCombatPlugin__Fields
	{
		struct BaseComponentPlugin__Fields _;
		struct List_1_MoleMole_CombatEntryProxy_ *IKPLMBFILHG;
		float _flushTimeAcc;
	};

	struct LevelSyncCombatPlugin
	{
		struct LevelSyncCombatPlugin__Class *klass;
		MonitorData *monitor;
		struct LevelSyncCombatPlugin__Fields fields;
	};

	struct __declspec(align(8)) List_1_MoleMole_CombatEntryProxy___Fields
	{
		struct MoleMole_CombatEntryProxy__Array *_items;
		int32_t _size;
		int32_t _version;
		struct Object *_syncRoot;
	};

	struct List_1_MoleMole_CombatEntryProxy_
	{
		struct List_1_MoleMole_CombatEntryProxy___Class *klass;
		MonitorData *monitor;
		struct List_1_MoleMole_CombatEntryProxy___Fields fields;
	};

	struct MoleMole_CombatEntryProxy__Array
	{
		struct MoleMole_CombatEntryProxy__Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct MoleMole_CombatEntryProxy *vector[32];
	};

	enum class Proto_CombatTypeArgument__Enum : int32_t
	{
		CombatNone = 0x00000000,
		CombatEvtBeingHit = 0x00000001,
		CombatAnimatorStateChanged = 0x00000002,
		CombatFaceToDir = 0x00000003,
		CombatSetAttackTarget = 0x00000004,
		CombatRushMove = 0x00000005,
		CombatAnimatorParameterChanged = 0x00000006,
		EntityMove = 0x00000007,
		SyncEntityPosition = 0x00000008,
		CombatSteerMotionInfo = 0x00000009,
		CombatForceSetPosInfo = 0x0000000a,
		CombatCompensatePosDiff = 0x0000000b,
		CombatMonsterDoBlink = 0x0000000c,
		CombatFixedRushMove = 0x0000000d,
		CombatSyncTransform = 0x0000000e,
		CombatLightCoreMove = 0x0000000f,
		CombatBeingHealedNtf = 0x00000010,
		CombatSkillAnchorPositionNtf = 0x00000011,
	};

	enum class ForwardType__Enum : int32_t
	{
		ForwardLocal = 0x00000000,
		ForwardToAll = 0x00000001,
		ForwardToAllExceptCur = 0x00000002,
		ForwardToHost = 0x00000003,
		ForwardToAllGuest = 0x00000004,
		ForwardToPeer = 0x00000005,
		ForwardToPeers = 0x00000006,
		ForwardOnlyServer = 0x00000007,
		ForwardToAllExistExceptCur = 0x00000008,
	};

	struct __declspec(align(8)) NHHMPCAAKGF__Fields
	{
		bool GNKMNOEMHEH;
		struct Byte__Array *BEEHBAABKNH;
	};

	struct NHHMPCAAKGF
	{
		void *klass;
		MonitorData *monitor;
		struct NHHMPCAAKGF__Fields fields;
	};

	struct Proto_CombatInvokeEntry__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		ForwardType__Enum forwardType_;
		Proto_CombatTypeArgument__Enum argumentType_;
		struct Google_Protobuf_ByteString *combatData_;
	};

	struct Proto_CombatInvokeEntry
	{
		struct Proto_CombatInvokeEntry__Class *klass;
		MonitorData *monitor;
		struct Proto_CombatInvokeEntry__Fields fields;
	};

	struct __declspec(align(8)) AJKACNNKJGG__Fields
	{
		struct Proto_CombatInvokeEntry *PANOALIPEFB;
		struct MAKEGCIBGMD *IHFPAPEDDBM;
	};

	struct AJKACNNKJGG
	{
		void *klass;
		MonitorData *monitor;
		struct AJKACNNKJGG__Fields fields;
	};

	// CMAGCELPFOP
	enum class EventID__Enum : int32_t
	{
		None = 0x00000000,
		EvtAbilityAudio = 0x00000001,
		EvtAbilityStart = 0x00000002,
		EvtApplyModifier = 0x00000003,
		EvtAttachment = 0x00000004,
		EvtAttackLanded = 0x00000005,
		EvtAudio = 0x00000006,
		EvtAvatarBecomeThreat = 0x00000007,
		EvtAvatarAppear = 0x00000008,
		EvtAvatarChanged = 0x00000009,
		EvtAvatarDieEnd = 0x0000000a,
		EvtAvatarEnterFocus = 0x0000000b,
		EvtAvatarEquipChanged = 0x0000000c,
		EvtAvatarExitFocus = 0x0000000d,
		EvtAvatarInBattle = 0x0000000e,
		EvtBeingHealed = 0x0000000f,
		EvtBeingHit = 0x00000010,
		EvtBeingHitEnd = 0x00000011,
		EvtBeingHitResult = 0x00000012,
		EvtBillboard = 0x00000013,
		EvtBuffAdd = 0x00000014,
		EvtBuffRemove = 0x00000015,
		EvtCameraFrameTransition = 0x00000016,
		EvtCameraMove = 0x00000017,
		EvtCameraMoveClear = 0x00000018,
		EvtCameraSceneLook = 0x00000019,
		EvtCameraFieldLook = 0x0000001a,
		EvtPlayerDie = 0x0000001b,
		EvtChangeAvatar = 0x0000001c,
		EvtChangeProp = 0x0000001d,
		EvtCombatEnd = 0x0000001e,
		EvtCrash = 0x0000001f,
		EvtCreateGadgetToEquipPart = 0x00000020,
		EvtCure = 0x00000021,
		EvtBleeding = 0x00000022,
		EvtCutsceneNotify = 0x00000023,
		EvtDoSkillSucc = 0x00000024,
		EvtForceUseSkillSucc = 0x00000025,
		EvtEntityEffectChange = 0x00000026,
		EvtElementReaction = 0x00000027,
		EvtEntityEnterSurface = 0x00000028,
		EvtEntityExitSurface = 0x00000029,
		EvtEntityResetSurface = 0x0000002a,
		EvtEquipAttached = 0x0000002b,
		EvtEquipDestroy = 0x0000002c,
		EvtEquipDetached = 0x0000002d,
		EvtFallOnGround = 0x0000002e,
		EvtFieldEnter = 0x0000002f,
		EvtFieldExit = 0x00000030,
		EvtFightPropChangeReason = 0x00000031,
		EvtFlag = 0x00000032,
		EvtForceQuitStoryCamera = 0x00000033,
		EvtGadgetState = 0x00000034,
		EvtGadgetEnableInteract = 0x00000035,
		EvtHeadControl = 0x00000036,
		EvtHeal = 0x00000037,
		EvtHittingOther = 0x00000038,
		EvtHittingScene = 0x00000039,
		EvtHPChange = 0x0000003a,
		EvtInteraction = 0x0000003b,
		EvtInterFree = 0x0000003c,
		EvtInterruptIntee = 0x0000003d,
		EvtKill = 0x0000003e,
		EvtMonsterTryDropEquip = 0x0000003f,
		EvtOpenChest = 0x00000040,
		EvtPickupGadget = 0x00000041,
		EvtPickupGadgetCallBack = 0x00000042,
		EvtRemoveModifier = 0x00000043,
		EvtRevive = 0x00000044,
		EvtRutimeIDRetarget = 0x00000045,
		EvtDoTileAction = 0x00000046,
		EvtSceneAudioPostMIDIEvent = 0x00000047,
		EvtSetCameraLockTime = 0x00000048,
		EvtShoppingFinish = 0x00000049,
		EvtSkillStart = 0x0000004a,
		EvtShareCDSkillStart = 0x0000004b,
		EvtCameraLock = 0x0000004c,
		EvtTeamChanged = 0x0000004d,
		EvtReserveTeamChanged = 0x0000004e,
		EvtThrowGadget = 0x0000004f,
		EvtTransmitAvatar = 0x00000050,
		EvtTurnDirection = 0x00000051,
		EvtUIBackBlur = 0x00000052,
		EvtWorktopOption = 0x00000053,
		EvtLoopStart = 0x00000054,
		EvtInterFinish = 0x00000055,
		EvtInterDialogFinish = 0x00000056,
		EvtAttachAnimatorParam = 0x00000057,
		EvtEntityDestroy = 0x00000058,
		EvtEntityTimeScaleChange = 0x00000059,
		EvtEntityGhostChange = 0x0000005a,
		EvtEntityActiveChange = 0x0000005b,
		EvtEntityAliveChange = 0x0000005c,
		EvtPlayStageChange = 0x0000005d,
		EvtPlayUidChange = 0x0000005e,
		EvtGlobalValueChange = 0x0000005f,
		EvtGlobalValueCreated = 0x00000060,
		EvtGlobalValueClear = 0x00000061,
		EvtServerGlobalValueChange = 0x00000062,
		EvtAppearFromServer = 0x00000063,
		EvtAbilityRefreshed = 0x00000064,
		EvtAISoundBroadcast = 0x00000065,
		EvtAISoundAttraction = 0x00000066,
		EvtAIDeadth = 0x00000067,
		EvtBoundInCity = 0x00000068,
		EvtEntityActive = 0x00000069,
		EvtEntityCreated = 0x0000006a,
		EvtEntityReady = 0x0000006b,
		EvtEntityRemoved = 0x0000006c,
		EvtEntityResetPos = 0x0000006d,
		EvtEntityReconnect = 0x0000006e,
		EvtEntitySynced = 0x0000006f,
		EvtInputChange = 0x00000070,
		EvtMsgBoard = 0x00000071,
		EvtMultiplayer = 0x00000072,
		EvtPlatformChangeRoute = 0x00000073,
		EvtPlatformStartRoute = 0x00000074,
		EvtPlatformStopRoute = 0x00000075,
		EvtRoomVisiable = 0x00000076,
		EvtSceneCollider = 0x00000077,
		EvtSceneRouteChange = 0x00000078,
		EvtShowReminder = 0x00000079,
		EvtInterruptReminder = 0x0000007a,
		EvtTemplateReminder = 0x0000007b,
		EvtStageCreated = 0x0000007c,
		EvtStageDestroying = 0x0000007d,
		EvtStageProgress = 0x0000007e,
		EvtStageReady = 0x0000007f,
		EvtWillCreateStage = 0x00000080,
		EvtQuestState = 0x00000081,
		EvtWeatherChange = 0x00000082,
		EvtThunder = 0x00000083,
		EvtSkyThunder = 0x00000084,
		EvtWindSeedNotify = 0x00000085,
		EvtWindSeedMixinInfo = 0x00000086,
		EvtTransportAvatar = 0x00000087,
		EvtMonsterAppear = 0x00000088,
		EvtShieldAdded = 0x00000089,
		EvtWatcherSysAction = 0x0000008a,
		EvtAreaLevelChange = 0x0000008b,
		EvtAnimatorStateChanged = 0x0000008c,
		EvtAnimatorTransitionFinish = 0x0000008d,
		EvtStateIDChanged = 0x0000008e,
		EvtEntityReadyPost = 0x0000008f,
		EvtGainCrystalSeed = 0x00000090,
		EvtMovingWaterStop = 0x00000091,
		EvtMovingWaterChangeState = 0x00000092,
		EvtAnimatorStateChangedBeforeClear = 0x00000093,
		EvtSkillDepotIdChanged = 0x00000094,
		EvtEntityAnimeLoadFinishPost = 0x00000095,
		EvtEntityAnimeReadyPost = 0x00000096,
		EvtAvatarDownRayTrigger = 0x00000097,
		EvtGadgetChainLevelChange = 0x00000098,
		EvtGadgetChainInteracted = 0x00000099,
		EvtVehicleInteract = 0x0000009a,
		EvtZoneInteract = 0x0000009b,
		EvtChangeFly = 0x0000009c,
		EvtElectricCoreMoveEnterP1 = 0x0000009d,
		EvtElectricCoreMoveInterrupt = 0x0000009e,
		EvtAvatarEnterViewBias = 0x0000009f,
		EvtAvatarExitViewBias = 0x000000a0,
		EvtWidgetActiveStateChange = 0x000000a1,
		EvtMultiplayersCountChanged = 0x000000a2,
		EvtWidgetExCDChange = 0x000000a3,
		EvtPlayerLevelUpdate = 0x000000a4,
		EvtNormalSceneTransPointUnlock = 0x000000a5,
		EvtFireworkStartCountDown = 0x000000a6,
		EvtTriggerUGCGadgetMove = 0x000000a7,
		EvtSkillReady = 0x000000a8,
		EvtCount = 0x000000a9,
	};

	enum class EventRemoteState__Enum
	{
		Local = 0x00000000,
		IsForwarded = 0x00000001,
	};

	// BaseEvent
	struct __declspec(align(8)) BaseEvent__Fields
	{
		EventID__Enum eventID;
		uint32_t targetID;
		bool canBeHandledImmediately;
		bool canBeHandledByLogic;
		bool canBeHandledByVisual;
		bool canBeHandledByLogicResolved;
		bool canBeHandledByDispatcher;
		bool canBeHandledOnlyByListeners;
		bool canBeHandledIfDie;
		bool fromEventCache;
		EventRemoteState__Enum remoteState;
		ForwardType__Enum forwardType;
		uint32_t fromPeerID;
	};

	struct BaseEvent
	{
		struct BaseEvent__Class *klass;
		MonitorData *monitor;
		struct BaseEvent__Fields fields;
	};

	struct EvtBeingHit__Fields
	{
		struct BaseEvent__Fields _;
		uint32_t _attackerID;
		uint32_t _frameID;
		struct AttackResult *_attackResult;
	};

	struct EvtBeingHit
	{
		struct EvtBeingHit__Class *klass;
		MonitorData *monitor;
		struct EvtBeingHit__Fields fields;
	};

	struct EvtBeingHitResult__Fields
	{
		struct BaseEvent__Fields _;
		uint32_t _attackerID;
		struct AttackResult *_attackResult;
	};

	struct EvtBeingHitResult
	{
		struct EvtBeingHitResult__Class *klass;
		MonitorData *monitor;
		struct EvtBeingHitResult__Fields fields;
	};

	struct AttackLanded__Fields
	{
		struct BaseEvent__Fields _;
		uint32_t _attackerID;
		uint32_t _attackeeID;
		struct AttackResult *_attackResult;
	};

	struct AttackLanded
	{
		void *klass;
		MonitorData *monitor;
		struct AttackLanded__Fields fields;
	};

	enum class ElementReactionType__Enum : int32_t
	{
		None = 0x00000000,
		Explode = 0x00000001,
		Stream = 0x00000002,
		Burning = 0x00000003,
		Burned = 0x00000004,
		Wet = 0x00000005,
		Overgrow = 0x00000006,
		Melt = 0x00000007,
		Freeze = 0x00000008,
		AntiFire = 0x00000009,
		Rock = 0x0000000a,
		SlowDown = 0x0000000b,
		Shock = 0x0000000c,
		Wind = 0x0000000d,
		Electric = 0x0000000e,
		Fire = 0x0000000f,
		Superconductor = 0x00000010,
		SwirlFire = 0x00000011,
		SwirlWater = 0x00000012,
		SwirlElectric = 0x00000013,
		SwirlIce = 0x00000014,
		SwirlFireAccu = 0x00000015,
		SwirlWaterAccu = 0x00000016,
		SwirlElectricAccu = 0x00000017,
		SwirlIceAccu = 0x00000018,
		StickRock = 0x00000019,
		StickWater = 0x0000001a,
		CrystallizeFire = 0x0000001b,
		CrystallizeWater = 0x0000001c,
		CrystallizeElectric = 0x0000001d,
		CrystallizeIce = 0x0000001e,
		FrozenBroken = 0x0000001f,
		StickGrass = 0x00000020,
		Overdose = 0x00000021,
	};

	enum class AttackResult_EndureBreakLevel__Enum : uint32_t
	{
		None = 0x00000000,
		OnlyShake = 0x00000001,
		Break = 0x00000002,
	};

	enum class AttackResult_AttackSpecific__Enum : int32_t
	{
		None = 0x00000000,
		Attack = 0x00000001,
		MassiveAttack = 0x00000002,
		Proto = 0x00000003,
		AttackeeInvalid = 0x00000004,
	};

	struct AttackResult_HitCollsion
	{
		uint32_t hitIndex;
		struct Collider *hitCollider;
		struct Vector3 hitDir;
		struct Vector3 hitPoint;
		float attackeeHitForceAngle;
		float attackeeHitEntityAngle;
	};

	enum class TargetType__Enum : int32_t
	{
		None = 0x00000000,
		Alliance = 0x00000001,
		Enemy = 0x00000002,
		Self = 0x00000003,
		SelfCamp = 0x00000004,
		All = 0x00000005,
		AllExceptSelf = 0x00000006,
	};

	struct Nullable_1_MoleMole_Config_TargetType_
	{
		TargetType__Enum value;
		bool has_value;
	};

	struct AbilityIdentifier
	{
		void *instancedAbility;
		void *instancedModifier;
		int32_t localId;
		uint32_t instancedAbilityID;
		uint32_t abilityCasterID;
		bool abilityIsValid;
		uint32_t instancedModifierID;
		uint32_t modifierOwnerID;
		bool isModifierValid;
	};

	struct Nullable_1_MoleMole_AbilityIdentifier_
	{
		struct AbilityIdentifier value;
		bool has_value;
	};

	enum class StrikeType__Enum : int32_t
	{
		Default = 0x00000000,
		Slash = 0x00000001,
		Blunt = 0x00000002,
		Pierce = 0x00000003,
		Spear = 0x00000004,
		None = 0x00000005,
	};

	enum class AttackType__Enum : int32_t
	{
		None = 0x00000000,
		Melee = 0x00000001,
		Range = 0x00000002,
		Default = 0x00000003,
	};

	struct __declspec(align(8)) ConfigAttackProperty__Fields
	{
		void *_damagePercentage;
		void *_damagePercentageRatio;
		ElementType__Enum _elementType;
		struct SimpleSafeFloat elementRankRawNum;
		void *_elementDurability;
		bool _overrideByWeapon;
		bool _ignoreAttackerProperty;
		StrikeType__Enum _strikeType;
		struct SimpleSafeFloat enBreakRawNum;
		struct SimpleSafeFloat enHeadBreakRawNum;
		AttackType__Enum _attackType;
		void *_damageExtra;
		void *_bonusCritical;
		void *_bonusCriticalHurt;
		bool _ignoreLevelDiff;
		bool _trueDamage;
		bool MNLLIPMAHJM;
	};

	struct ConfigAttackProperty
	{
		void *klass;
		MonitorData *monitor;
		struct ConfigAttackProperty__Fields fields;
	};

	enum class HitLevel__Enum : int32_t
	{
		Mute = 0x00000000,
		Shake = 0x00000001,
		Light = 0x00000002,
		Heavy = 0x00000003,
		Air = 0x00000004,
	};

	enum class RetreatType__Enum : int32_t
	{
		ByAttacker = 0x00000000,
		ByHitDirection = 0x00000001,
		ByTangent = 0x00000002,
		ByOriginOwner = 0x00000003,
		ByHitDirectionInverse = 0x00000004,
		ByAttackerForward = 0x00000005,
	};

	struct __declspec(align(8)) ConfigHitPattern__Fields
	{
		struct String *_onHitEffectName;
		HitLevel__Enum _hitLevel;
		struct EJABEMMALJF *_hitImpulseX;
		struct EJABEMMALJF *_hitImpulseY;
		struct String *_hitImpulseType;
		struct NLDKMJMPBKE *_overrideHitImpulse;
		RetreatType__Enum _retreatType;
		struct SimpleSafeFloat hitHaltTimeRawNum;
		struct SimpleSafeFloat hitHaltTimeScaleRawNum;
		bool _canBeDefenceHalt;
		bool _muteHitText;
		bool _recurring;
		bool LKMCCNGPNBA;
	};

	struct AttackResult_AttackHitEffectResult
	{
		HitLevel__Enum hitEffLevel;
		HitLevel__Enum originHitEffLevel;
		float retreatStrength;
		float airStrength;
		float hitHaltTime;
		float hitHaltTimeScale;
	};

	struct ConfigHitPattern
	{
		void *klass;
		MonitorData *monitor;
		struct ConfigHitPattern__Fields fields;
	};

	struct SafeUInt64
	{
		int64_t _data1;
		int64_t _data2;
	};

	struct SafeInt32
	{
		int64_t _data1;
		int64_t _data2;
	};

	struct SafeInt64
	{
		int64_t _data1;
		int64_t _data2;
	};

	struct SafeFloat
	{
		int64_t _data1;
		int64_t _data2;
	};

	struct SafeDouble
	{
		int64_t _data1;
		int64_t _data2;
	};

	struct SafeFloat__Boxed
	{
		struct SafeFloat__Class *klass;
		MonitorData *monitor;
		struct SafeFloat fields;
	};

	struct FixedBoolStack
	{
		struct FixedBoolStack__Class *klass;
		MonitorData *monitor;
		// struct FixedBoolStack__Fields fields;
	};

	struct __declspec(align(8)) CombatProperty__Fields
	{
		struct SafeFloat maxHP; // 0x10
		struct SafeFloat HP; // 0x20
		struct SafeFloat elemEnergy; // 0x30
		struct SafeFloat maxElemEnergy; // 0x40
		struct SafeFloat attackBase; // 0x50
		struct SafeFloat attackPermanent; // 0x60
		struct SafeFloat defenseBase; // 0x70
		struct SafeFloat defensePermanent; // 0x80
		struct SafeFloat addHurtBase; // 0x90
		struct SafeFloat subHurtBase; // 0xA0
		struct SafeFloat criticalHurtBase; // 0xB0
		struct SafeFloat criticalBase; // 0xC0
		struct SafeFloat antiCriticalBase; // 0xD0
		struct SafeFloat physicalSubHurtBase; // 0xE0
		struct SafeFloat GLLHLKAONCK; // 0xF0
		struct SafeFloat AMMLOFAEBPF; // 0x100
		struct SafeFloat NMOEINCFOIL; // 0x110
		struct SafeFloat MDJFMKMEIIN; // 0x120
		struct SafeFloat BHLONKDLCLC; // 0x130
		struct SafeFloat NJPBPIJDNBD; // 0x140
		struct SafeFloat GDEJAPKOKFN; // 0x150
		struct SafeFloat BEMFDLDEKAF; // 0x160
		struct SafeFloat GNFEHPLABAM; // 0x170
		struct SafeFloat AGJJLGONEPJ; // 0x180
		struct SafeFloat ALHFLGABIBG; // 0x190
		struct SafeFloat NAFKFNENFAE; // 0x1A0
		struct SafeFloat GMLBLPOKMPM; // 0x1B0
		struct SafeFloat MHDHODBFKOJ; // 0x1C0
		struct SafeFloat DFAMAMIOLDF; // 0x1D0
		struct SafeFloat HIJAAGIAPBJ; // 0x1E0
		struct SafeFloat BGGDHGGOIIB; // 0x1F0
		struct SafeFloat IGPLDEFLKAP; // 0x200
		struct SafeFloat LGJFLMNLEBJ; // 0x210
		struct SafeFloat ECKCEIIANJI; // 0x220
		struct SafeFloat EILLOLJEPBP; // 0x230
		struct SafeFloat FDICILELCAM; // 0x240
		struct SafeFloat KGKBEKECCKL; // 0x250
		struct SafeFloat OEHJIEGCDCD; // 0x260
		struct SafeFloat GLKLDAGLMLD; // 0x270
		struct SafeFloat OPMENIDKNGK; // 0x280
		struct SafeFloat LNCCLOMPFHJ; // 0x290
		struct SafeFloat LJGDKDNPCFL; // 0x2A0
		struct SafeFloat LAHCEIHKHEH; // 0x2B0
		struct SafeFloat FENPPKOPDBD; // 0x2C0
		struct SafeFloat JPCAGGFKDFA; // 0x2D0
		struct SafeFloat JOOMCGNILPB; // 0x2E0
		struct SafeFloat ECIBKJPMIJP; // 0x2F0
		struct SafeFloat KIFAFBPPIDJ; // 0x300
		struct SafeFloat BFFIGNMHPJC; // 0x310
		struct SafeFloat JJHFKGEPMKO; // 0x320
		struct SafeFloat HKKDJJOFCIM; // 0x330
		struct SafeFloat KJFMGICOGEE; // 0x340
		struct SafeFloat HOFOFLJJPGB; // 0x350
		struct SafeFloat CLIKAEMOJLA; // 0x360
		struct SafeFloat HOEBPCCODAJ; // 0x370
		struct SafeFloat PEKFECEPDEL; // 0x380
		struct SafeFloat GPKMLFEGPHE; // 0x390
		struct SafeFloat GFAEBLKAJNB; // 0x3A0
		struct SafeFloat HJADDAMBMJA; // 0x3B0
		struct SafeFloat BLIFPELOGIN; // 0x3C0
		struct SafeFloat BKIPGJPBPMK; // 0x3D0
		struct SafeFloat DFCCKCEIEGB; // 0x3E0
		struct SafeFloat IGAMOIDDIFE; // 0x3F0
		struct SafeFloat EOBHDMLFNGI; // 0x400
		struct SafeFloat MIFGEHHLABD; // 0x410
		struct SafeFloat LKJMENMPGBO; // 0x420
		struct SafeFloat FGICMKCHLFG; // 0x430
		struct SafeFloat KHEHPPLEGCF; // 0x440
		struct SafeFloat GHCNGBFPABP; // 0x450
		struct SafeFloat OFAGIKILIEB; // 0x460
		struct SafeFloat BPJGHCMEAJA; // 0x470
		struct SafeFloat HHLNPMMOEDH; // 0x480
		struct SafeFloat DAJCINDIGAN; // 0x490
		struct SafeFloat KBDMLOCNCMH; // 0x4A0
		struct SafeFloat DIFHLDCEOIH; // 0x4B0
		struct SafeFloat NCOFCJBGPJC; // 0x4C0
		struct SafeFloat IPCJMLNCPKM; // 0x4D0
		struct SafeFloat OCIBHGOMJFF; // 0x4E0
		struct SafeFloat POMOHEHHMGH; // 0x4F0
		struct SafeFloat DKOJCAPOFBK; // 0x500
		struct SafeFloat EHHLLDIIILD; // 0x510
		struct SafeFloat BOLFGJOHOIA; // 0x520
		struct SafeFloat KPDAAOIPIOL; // 0x530
		struct SafeFloat ILDKJPKJEIA; // 0x540
		struct SafeFloat JLGMEOHCIHH; // 0x550
		struct SafeFloat APEFFAPLJHB; // 0x560
		struct SafeFloat MOPNGNANEGC; // 0x570
		struct SafeFloat AKNEEOAAKMN; // 0x580
		struct SafeFloat JLKKEADCBJD; // 0x590
		struct SafeFloat IAPMABEMEMG; // 0x5A0
		struct SafeFloat level; // 0x5B0
		struct SafeFloat exp; // 0x5C0
		ElementType__Enum elemType; // 0x5D0
		struct SafeFloat weight; // 0x5D8
		struct SafeFloat endure; // 0x5E8
		struct SafeFloat endureShake; // 0x5F8
		struct SafeFloat gaugeLength; // 0x608
		struct SafeFloat waneSpeed; // 0x618
		struct SafeFloat recoverTime; // 0x628
		struct SafeFloat endurance; // 0x638
		struct FixedBoolStack *denyLockOn; // 0x648
		struct FixedBoolStack *isInvincible; // 0x650
		struct FixedBoolStack *islockHP; // 0x658
		struct FixedBoolStack *isNoheal; // 0x660
		struct FixedBoolStack *isGhostToAllied; // 0x668
		struct FixedBoolStack *isGhostToEnemy; // 0x670
		struct FixedBoolStack *canTriggerBullet; // 0x678
		struct FixedBoolStack *denyElementStick; // 0x680
		struct LCAbilityState *_ability; // 0x688
		bool useAbilityProperty; // 0x690
		//void* ANJJMGPDHKO; // 0x698 not rly important lol
	};

	struct CombatProperty
	{
		struct OIAODCALEJK__Class *klass;
		MonitorData *monitor;
		struct CombatProperty__Fields fields;
	};

	enum class GIMPBDFJKCF__Enum : int32_t
	{
		OriginOwner = 0x00000000,
		Owner = 0x00000001,
		None = 0x00000002,
	};

	struct __declspec(align(8)) AttackResult__Fields
	{
        struct CombatProperty *attackerCombatProperty;
        struct CombatProperty *defenseCombatProperty;
        bool attackeeDummyEntity;
        float damage;
        float damageShield;
        bool critical;
        uint32_t criticalRand;
        bool isResistText;
        bool muteElementHurt;
        struct String *onHitEffectName;
        uint32_t attackTimeStamp;
        struct Nullable_1_MoleMole_Config_TargetType_ targetType;
        AttackResult_AttackSpecific__Enum attackType;
        struct AttackResult_HitCollsion hitCollision;
        HitBoxType__Enum hitPosType;
        struct String *animEventId;
        struct String *attackTag;
        struct String *attenuationTag;
        struct String *attenuationGroup;
        GIMPBDFJKCF__Enum PHNHGFCDKKN;
        uint32_t attenuationCount;
        float elementdurabilityAttenuation;
        struct Nullable_1_MoleMole_AbilityIdentifier_ abilityIdentifier;
        bool useGadgetDamageAction;
        uint32_t gadgetDamageActionIdx;
        bool canHitHead;
        float elementReductionRate;
        float elementAmplifyRate;
        ElementReactionType__Enum elementAmplifyType;
        ElementReactionType__Enum elementAddhurtType;
        ElementReactionType__Enum elementReactionType;
        ElementReactionType__Enum MHGJGODNMCG;
        struct ConfigAttackProperty *_attackerAttackProperty;
        struct AttackResult_AttackResult_ModifiedAttackProperty *modifiedAttackProperty;
        float BPKNLEAADOC;
        ElementType__Enum _origElementType;
        float _origElementDurability;
        float endureDelta;
        AttackResult_EndureBreakLevel__Enum endureBreak;
        struct Vector3 resolvedDir;
        struct ConfigHitPattern *attackerHitPattern;
        struct AttackResult_AttackHitEffectResult hitEffResult;
        bool attackerForceCameraShake;
        struct ConfigCameraShake *attackerCameraShake;
        float bulletFlyTime;
        struct ConfigBulletWane *bulletWane;
        int32_t rejectState;
        struct SafeUInt32 PFKNGMEKMPC;
        struct SafeUInt32 DPLMJHDCHEM;
        struct SafeUInt32 GDEEJKNMLGM;
        struct SafeUInt32 OPMFDCIHICB;
        struct SafeUInt32 GPMOPFKPBCN;
        struct Vector3 hitRetreatDir;
	};

	struct AttackResult
	{
		void *klass;
		MonitorData *monitor;
		struct AttackResult__Fields fields;
	};

	struct AbilityIdentifier_1__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		uint32_t instancedAbilityId_;
		uint32_t abilityCasterId_;
		int32_t localId_;
		uint32_t instancedModifierId_;
		uint32_t modifierOwnerId_;
		bool isServerbuffModifier_;
	};

	struct AbilityIdentifier_1
	{
		void *klass;
		MonitorData *monitor;
		struct AbilityIdentifier_1__Fields fields;
	};

	struct AttackHitEffectResult__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		uint32_t hitEffLevel_;
		float retreatStrength_;
		float airStrength_;
		float hitHaltTime_;
		float hitHaltTimeScale_;
		uint32_t originalHitEffLevel_;
	};

	struct AttackHitEffectResult
	{
		void *klass;
		MonitorData *monitor;
		struct AttackHitEffectResult__Fields fields;
	};

	struct AttackResult_1__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		bool isResistText_;
		uint32_t HEFALFKIKJK;
		uint32_t amplifyReactionType_;
		uint32_t endureBreak_;
		uint32_t elementType_;
		float elementDurabilityAttenuation_;
		uint32_t defenseId_;
		uint32_t attackTimestampMs_;
		uint32_t bulletFlyTimeMs_;
		bool isCrit_;
		float elementAmplifyRate_;
		uint32_t attackCount_;
		uint32_t criticalRand_;
		uint32_t hitPosType_;
		struct String *animEventId_;
		struct AttackHitEffectResult *hitEffResult_;
		float damageShield_;
		float endureDelta_;
		struct Vector_1 *resolvedDir_;
		float damage_;
		uint32_t addhurtReactionType_;
		uint32_t hashedAnimEventId_;
		bool useGadgetDamageAction_;
		int32_t hitRetreatAngleCompat_;
		struct AbilityIdentifier_1 *abilityIdentifier_;
		uint32_t attackerId_;
		bool muteElementHurt_;
		uint32_t targetType_;
		void *hitCollision_;
		uint32_t gadgetDamageActionIdx_;
	};

	struct AttackResult_1
	{
		void *klass;
		MonitorData *monitor;
		struct AttackResult_1__Fields fields;
	};

	enum class MotionState__Enum : int32_t
	{
		MotionNone = 0x00000000,
		MotionReset = 0x00000001,
		MotionStandby = 0x00000002,
		MotionStandbyMove = 0x00000003,
		MotionWalk = 0x00000004,
		MotionRun = 0x00000005,
		MotionDash = 0x00000006,
		MotionClimb = 0x00000007,
		MotionClimbJump = 0x00000008,
		MotionStandbyToClimb = 0x00000009,
		MotionFight = 0x0000000a,
		MotionJump = 0x0000000b,
		MotionDrop = 0x0000000c,
		MotionFly = 0x0000000d,
		MotionSwimMove = 0x0000000e,
		MotionSwimIdle = 0x0000000f,
		MotionSwimDash = 0x00000010,
		MotionSwimJump = 0x00000011,
		MotionSlip = 0x00000012,
		MotionGoUpstairs = 0x00000013,
		MotionFallOnGround = 0x00000014,
		MotionJumpUpWallForStandby = 0x00000015,
		MotionJumpOffWall = 0x00000016,
		MotionPoweredFly = 0x00000017,
		MotionLadderIdle = 0x00000018,
		MotionLadderMove = 0x00000019,
		MotionLadderSlip = 0x0000001a,
		MotionStandbyToLadder = 0x0000001b,
		MotionLadderToStandby = 0x0000001c,
		MotionDangerStandby = 0x0000001d,
		MotionDangerStandbyMove = 0x0000001e,
		MotionDangerWalk = 0x0000001f,
		MotionDangerRun = 0x00000020,
		MotionDangerDash = 0x00000021,
		MotionCrouchIdle = 0x00000022,
		MotionCrouchMove = 0x00000023,
		MotionCrouchRoll = 0x00000024,
		MotionNotify = 0x00000025,
		MotionLandSpeed = 0x00000026,
		MotionMoveFailAck = 0x00000027,
		MotionWaterfall = 0x00000028,
		MotionDashBeforeShake = 0x00000029,
		MotionSitIdle = 0x0000002a,
		MotionForceSetPos = 0x0000002b,
		MotionQuestForceDrag = 0x0000002c,
		MotionFollowRoute = 0x0000002d,
		MotionSkiffBoarding = 0x0000002e,
		MotionSkiffNormal = 0x0000002f,
		MotionSkiffDash = 0x00000030,
		MotionSkiffPoweredDash = 0x00000031,
		MotionDestroyVehicle = 0x00000032,
		MotionFlyIdle = 0x00000033,
		MotionFlySlow = 0x00000034,
		MotionFlyFast = 0x00000035,
		MotionNum = 0x00000036,
		OOFNNHKLEFE = 0x00000037,
		KMIGLMEGNOK = 0x00000038,
	};

	struct MotionInfo__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
        struct Vector_1* pos_;
        struct Vector_1* rot_;
        struct Vector_1* speed_;
		MotionState__Enum motionState;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_Vector_ *params_;
		struct Vector_1 *refPos_;
		uint32_t refId_;
		uint32_t sceneTime_;
		uint32_t intervalVelocity_;
	};

	struct MotionInfo
	{
		void *klass;
		MonitorData *monitor;
		struct MotionInfo__Fields fields;
	};

	struct Singleton_1_MoleMole_EntityManager_
	{
		struct Singleton_1_EntityManager___Class *klass;
		MonitorData *monitor;
	};

	enum class EntityManager_EntityManager_HeroEntityTeamState__Enum : int32_t
	{
		None = 0x00000000,
		MainAvatarInTeam = 0x00000001,
		MainAvatarNotInTeam = 0x00000002,
	};

	struct Matrix4x4
	{
		float m00;
		float m10;
		float m20;
		float m30;
		float m01;
		float m11;
		float m21;
		float m31;
		float m02;
		float m12;
		float m22;
		float m32;
		float m03;
		float m13;
		float m23;
		float m33;
	};

	struct __declspec(align(8)) List_1_MoleMole_BaseEntity___Fields
	{
		struct BaseEntity__Array *_items;
		int32_t _size;
		int32_t _version;
		struct Object *_syncRoot;
	};

	struct List_1_MoleMole_BaseEntity_
	{
		struct List_1_MoleMole_BaseEntity___Class *klass;
		MonitorData *monitor;
		struct List_1_MoleMole_BaseEntity___Fields fields;
	};

    struct MoleMole_LevelEntity__Fields
    {
        struct BaseEntity__Fields _;
        struct MoleMole_LevelSceneGrassPlugin* _grassScenePlugin;
        struct MoleMole_LevelSceneWaterPlugin* _waterScenePlugin;
        struct MoleMole_LevelSceneCustomTilePlugin* _customTileScenePlugin;
        struct MoleMole_LevelSceneBushPlugin* _bushScenePlugin;
        struct MoleMole_LevelSceneTreePlugin* _treeScenePlugin;
        struct MoleMole_LevelTileAttackPlugin* _tileAttackPlugin;
        struct MoleMole_LevelSceneSubEmitterPlugin* _subEmitterPlugin;
        struct MoleMole_LevelScenePropSyncPlugin* _scenePropSyncPlugin;
        struct MoleMole_LevelSceneEffectLineLinkPlugin* _effectLineLinkPlugin;
        struct MoleMole_LCAIManager* _aiMgr;
		struct Dictionary_2_String_POKDLKEBOPO_BJPDFJJGHDP_OCLNGLCLKII_* NEHILKFEOKE;
    };

    struct MoleMole_LevelEntity
    {
        struct MoleMole_LevelEntity__Class* klass;
        MonitorData* monitor;
        struct MoleMole_LevelEntity__Fields fields;
    };

	// Entity fields
	struct __declspec(align(8)) EntityManager__Fields
	{
        bool useTickFunctionTick;
        struct EntityTickContext* _normalEntityTickContext;
        struct EntityTickContext* _lightInitEntityTickContext;
        struct EntityTickContext* _syncInitEntityTickContext;
        int32_t _unityThreadDoubleBufferIdx;
        struct Queue_1_BaseEntity___Array* _toDeleteEntitiesQueuesTripleBuffer;
        struct EntityManager_EntityManager_EntityTickListGroup__Array* _entityTickGroupDoubleBuffer;
        struct List_1_BaseEntity_* _entitiesLastFrame;
        struct Stack_1_EntityManager_EntityManager_EntityNotReadyReason___Array* _entityNotReadyReasonsDoubleBuffer;
        struct Dictionary_2_System_UInt32_EntityManager_EntityManager_AnimatorParamCache_* _entityAnimatorDefaultParamMap;
        struct Dictionary_2_System_UInt32_Dictionary_2_System_Int32_List_1_BaseCommand_* _configID2cmdDic;
        struct EntityQueryGroup* _queryGroup;
        struct List_1_BaseEntity_* _entities;
        struct List_1_BaseEntity_* _entitiesToBeAdded;
        struct List_1_BaseEntity_* _entitiesToBeSafeReady;
        struct List_1_BaseEntity_* _entitiesToBeRemove;
        struct List_1_BaseComponent_* _preTickComponents;
        struct Queue_1_System_Int32_* _preTickComponentsEmptySlots;
        struct Dictionary_2_System_UInt32_Dictionary_2_System_UInt32_System_Int32_* _preTickComponentDic;
        struct List_1_System_Int32_* _toBeRemovePreTickComponents;
        struct Dictionary_2_System_UInt32_BaseEntity_* _entityMap;
        struct Dictionary_2_System_UInt32_IBaseEntity_* _dummyEntityMap;
        struct ListAmortizedEntityTickHelper* _massiveEntities;
        struct Dictionary_2_UnityEngine_GameObject_System_UInt32_* _gameObjectDic;
        struct IList_1_VCAutoPickable_* _autoPickableComponents;
        struct IList_1_IAutoAttract_* _autoAttractComponents;
        float _localEntitiesCheckTime;
        struct List_1_BaseEntity_* _oldCachedEntityList;
        float _cachedEntitiesCheckTime;
        struct Dictionary_2_System_String_IList_1_BaseEntity_* _tagEntities;
        int32_t _ILBJGHHHJME_k__BackingField;
        int32_t _initComponnetCommonFramingTimer;
        int32_t _initLightComponentCommonFramingTimer;
        bool isEntityReadyOnly;
        struct ThreadTask_ProjectedHeightmapTask* _projectedHeightmapTask;
        int32_t NKDCAEIAHDA;
        struct Action* onPostDestroy;
        struct Action* AEJFLKJDLLO;
        bool isDestroying;
        struct HashList_1_NPOKMLGJLAB_* MEDIEDBEJFE;
        int32_t _preIndex;
        struct Queue_1_Dictionary_2_System_UInt32_System_Int32_* _preTickDicPool;
        uint32_t _curTeamEntityID;
        uint32_t _globalTeamEntityID;
        uint32_t _curPlayTeamEntityID;
        struct List_1_System_UInt32_* _remoteTeamsEntitiesList;
        struct Dictionary_2_System_UInt32_System_UInt32_* _remoteTeamEntitiesDict;
        struct List_1_BaseEntity_* KHHEMGMBDAL;
        struct Dictionary_2_System_UInt32_BaseEntity_* _avatarEntityMap;
        struct List_1_BaseEntity_* HHAHCFHPDDP;
        uint32_t _curAvatarEntityID;
        struct List_1_BaseEntity_* _noCachedAvatarEntitys;
        struct List_1_BaseEntity_* _noCachedAvatarOnVehicleEntitys;
        uint64_t heroGuid;
        EntityManager_EntityManager_HeroEntityTeamState__Enum heroAvatarState;
        struct BaseEntity* _paimonEntity;
        struct CameraEntity* _mainCamera;
        bool _IPOCOIOMAEM_k__BackingField;
        struct Vector3 _IOCIKBGFKGH_k__BackingField;
        struct Matrix4x4 _KCBEIGODCLK_k__BackingField;
        struct CameraEntity* _subCamera;
        struct MoleMole_LevelEntity* _levelEntity;
        struct List_1_BaseEntity_* _entityListTemp;
        struct List_1_BaseEntity_* _combatEntitiesTemp;
        struct Dictionary_2_System_UInt32_System_Boolean_* _selectPickableShowDic;
        int32_t _SFWatchFlushRemoveEntityHandle;
        bool _nextForceFlushRemoveAllEntity;
        int32_t _forceFlushRemoveEntityFrame;
        bool _waitRemoveEntity;
        struct Dictionary_2_UInt32_List_1_UInt32__* AECODCHADII;
        struct List_1_UInt32_* FBFDLFNDEBN;
        struct List_1_UInt64_* LJPAAMGCFKE;
        struct HashSet_1_UInt64_* LINHPFLOKDB;
        struct FCHJLMFFMHP* NADAIDILAMH;
        struct BNFFKOHMOMK* FNFMLPCIFKC;
        struct Dictionary_2_GFEKLPPHGCP_PMFIABMDMBA_* HPPILJILLGC;
        struct Dictionary_2_JPFLONMJBKP__Enum_OFPFNNPJKEP_* AKFMMAAGMEN;
        struct Queue_1_BaseEntity_* _destroyReuseQueue;
        struct HashSet_1_System_UInt32_* _configIDBlackList;
        struct IGroup__Array* _taskGroups;
        struct List_1_UnityEngine_Vector3_* _sharedAvatarPositions;
        struct List_1_UnityEngine_Vector3_* _sharedRemoteAvatarPositions;
        struct Vector3 _sharedLocalAvatarPosition;
	};

	struct MoleMole_EntityManager
	{
		void *klass;
		MonitorData *monitor;
		struct EntityManager__Fields fields;
	};

	struct __declspec(align(8)) ConfigEntityPoint__Fields
	{
		struct String *_elementAbsorb;
		struct String *_elementPendant;
		struct String *_elementDrop;
		struct String *_bulletAim;
		struct String__Array *_hitPoints;
		struct String__Array *_selectedPoints;
	};

	struct ConfigEntityPoint
	{
		struct ConfigEntityPoint__Class *klass;
		MonitorData *monitor;
		struct ConfigEntityPoint__Fields fields;
	};

	struct __declspec(align(8)) ConfigEntity__Fields
	{
		struct ConfigEntityCommon *_common;
		struct ConfigHeadControl *_headControl;
		struct ConfigEntityPoint *_specialPoint;
		struct ConfigCustomAttackShape *_customAttackShape;
		struct ConfigModel *_model;
		struct ConfigDither *_dither;
		struct ConfigGlobalValue *_globalValue;
		struct ConfigEntityTags *_entityTags;
	};

	struct MoleMole_SimpleSafeFloat
	{
		uint32_t _value;
	};

	struct MoleMole_SimpleSafeFloat__Boxed
	{
		struct MoleMole_SimpleSafeFloat__Class *klass;
		MonitorData *monitor;
		struct MoleMole_SimpleSafeFloat fields;
	};

	struct __declspec(align(8)) ConfigGlobalValue__Fields
	{
		struct String__Array *_serverGlobalValues;
		struct Dictionary_2_System_String_MoleMole_SimpleSafeFloat_ *_initServerGlobalValues;
	};

	struct ConfigGlobalValue
	{
		struct ConfigGlobalValue__Class *klass;
		MonitorData *monitor;
		struct ConfigGlobalValue__Fields fields;
	};

	struct __declspec(align(8)) ConfigEntityTags__Fields
	{
		struct String__Array *_initTags;
	};

	struct ConfigEntityTags
	{
		struct ConfigEntityTags__Class *klass;
		MonitorData *monitor;
		struct ConfigEntityTags__Fields fields;
	};

	struct ConfigEntity
	{
		struct ConfigEntity__Class *klass;
		MonitorData *monitor;
		struct ConfigEntity__Fields fields;
	};

	struct ConfigEffectAttachShape
	{
		struct IPKPCAHLJMG__Class *klass;
		MonitorData *monitor;
	};

	struct __declspec(align(8)) ConfigHeadControl__Fields
	{
		bool _useHeadControl;
		struct SimpleSafeFloat maxYawDegreeRawNum;
		struct SimpleSafeFloat maxPitchDegreeRawNum;
		struct SimpleSafeFloat speedRawNum;
		struct SimpleSafeFloat weightSpeedRawNum;
		bool _useWhiteAnimStates;
		struct String__Array *_animStates;
		struct String__Array *_dontAnimStates;
	};

	// OOMADMNGOPK
	struct ConfigHeadControl
	{
		struct OOMADMNGOPK__Class *klass;
		MonitorData *monitor;
		struct ConfigHeadControl__Fields fields;
	};

	struct __declspec(align(8)) ConfigEntityCommon__Fields
	{
		struct ConfigEffectAttachShape *IJCEFOJNOHH;
		struct SimpleSafeFloat massRawNum;
		struct SimpleSafeFloat heightRawNum;
		struct SimpleSafeFloat modelHeightRawNum;
		struct SimpleSafeFloat viewSizeRawNum;
		struct SimpleSafeFloat shadowViewSizeRatioRawNum;
		struct SimpleSafeFloat overrideCullBoundsRadiusRawNum;
		bool _affectedByWorld;
		bool _checkInSurface;
		struct SimpleSafeFloat scaleRawNum;
		struct SimpleSafeFloat disableTickDistanceRawNum;
		struct SimpleSafeFloat forcePauseTickDistanceRawNum;
		bool _shouldPauseAnimatorBeforeReady;
		bool _canTriggerElementReactionText;
		bool _useGrassDisplacement;
		bool _muteElementStickUI;
		bool _hasAfterImage;
		bool _useDynamicBoneMultiParams;
		bool _enableCrashDamage;
		bool _clearAnimatorOnSetLightDeactive;
		bool _clearAIOnSetLightDeactive;
		bool _useFinalIK;
		struct SimpleSafeFloat AAFDECOKPNE;
		struct SimpleSafeFloat GIDINJKEKGG;
	};

	struct ConfigEntityCommon
	{
		struct ConfigEntityCommon__Class *klass;
		MonitorData *monitor;
		struct ConfigEntityCommon__Fields fields;
	};

	struct __declspec(align(8)) EntityExcelConfig__Fields
	{
		struct SimpleSafeUInt32 idRawNum;
		uint32_t _nameTextMapHash;
		uint8_t _prefabPathHashPre;
		uint32_t _prefabPathHashSuffix;
		uint8_t _prefabPathRemoteHashPre;
		uint32_t _prefabPathRemoteHashSuffix;
		uint8_t _controllerPathHashPre;
		uint32_t _controllerPathHashSuffix;
		uint8_t _controllerPathRemoteHashPre;
		uint32_t _controllerPathRemoteHashSuffix;
		struct SimpleSafeUInt32 campIDRawNum;
		struct String *_LODPatternName;
	};

	struct EntityExcelConfig
	{
		struct EntityExcelConfig__Class *klass;
		MonitorData *monitor;
		struct EntityExcelConfig__Fields fields;
	};

	enum class RemoveActorType__Enum : int32_t
	{
		NONE = 0x00000000,
		REMOVE = 0x00000001,
		REMOVE_WITH_DISAPPEAR = 0x00000002,
	};

	enum class ActorType__Enum : int32_t
	{
		INVALID = 0x00000000,
		BASE_ENTITY = 0x00000001,
		NPC_ACTOR = 0x00000002,
		QUEST_ACTOR = 0x00000003,
		GLOBAL_ACTOR = 0x00000004,
		GADGET_ACTOR = 0x00000005,
		SUB_GLOBAL_ACTOR = 0x00000006,
		CUTSCENE_ACTOR = 0x00000007,
		INTERACTION_ACTOR = 0x00000008,
		NPCGLOBAL_ACTOR = 0x00000009,
	};

	struct __declspec(align(8)) LocalEntityInfoData__Fields
	{
		int32_t _index_k__BackingField;
		uint32_t _entityId;
		ActorType__Enum _actorType_k__BackingField;
		struct String *_alias_k__BackingField;
		struct String *_metaPath_k__BackingField;
		uint32_t _configId_k__BackingField;
		struct Vector3 _initPos_k__BackingField;
		struct Vector3 _initEuler_k__BackingField;
		uint32_t _sceneId_k__BackingField;
		uint32_t _roomId_k__BackingField;
		uint32_t _questId_k__BackingField;
		uint32_t _level_k__BackingField;
		uint32_t _dropId_k__BackingField;
		float _scale_k__BackingField;
	};

	struct LocalEntityInfoData
	{
		struct LocalEntityInfoData__Class *klass;
		MonitorData *monitor;
		struct LocalEntityInfoData__Fields fields;
	};

	enum class GlobalVars_WorldType__Enum : int32_t
	{
		Invalid = -1,
		Login = 0x00000000,
		Home = 0x00000001,
		Level = 0x00000002,
		DevLevel = 0x00000003,
		BundleDownload = 0x00000004,
		LevelTestScene = 0x00000005,
		TestCutscene = 0x00000006,
		ScenicScanLevel = 0x00000007,
		TalkPreview = 0x00000008,
		ProfileEffects = 0x00000009,
		RagdollScene = 0x0000000a,
		MoveTestScene = 0x0000000b,
		PSPrepare = 0x0000000c,
	};

	struct __declspec(align(8)) GameWorld__Fields
	{
		struct String *_scenePath_k__BackingField;
		GlobalVars_WorldType__Enum _worldType_k__BackingField;
	};

	struct GameWorld
	{
		struct GameWorld__Class *klass;
		MonitorData *monitor;
		struct GameWorld__Fields fields;
	};

	struct GameManager__Fields
	{
		struct MonoBehaviour__Fields _;
		bool isDevLevel;
		bool workOffline;
		bool isOnlineMode;
		bool isUnloadResource;
		struct GameWorld *_curGameWorld;
		bool _shouldForceFinishObjectPoolWarmUp;
		int32_t _lastFixedUpdateFrameCount;
		bool _isToGoBackHome;
		bool _isToGoBundleDownload;
		uint64_t pauseApplicationTime;
		struct Coroutine *_setAndroidResolution;
		struct SchedulerMgr *_schedulerMgr;
		struct SchedulerGlobalMgr *_schedulerGlobalMgr;
	};

	struct GameManager__VTable
	{
		VirtualInvokeData Equals;
		VirtualInvokeData Finalize;
		VirtualInvokeData GetHashCode;
		VirtualInvokeData ToString;
	};

	struct GameManager__StaticFields
	{
		struct GameManager *Instance;
		struct DelegateBridge *OAGELDJLOJD;
		struct DelegateBridge *NEABNMMILLI;
		struct DelegateBridge *KEOKLBODBLP;
		struct DelegateBridge *DEEMHHNNOEK;
		struct DelegateBridge *KIMMOGJPFFD;
		struct DelegateBridge *LBFLLENAFKB;
		struct DelegateBridge *IABPFHNPPCJ;
		struct DelegateBridge *BMEDOLOGBCB;
		struct DelegateBridge *CCMJFDDMCFG;
		struct DelegateBridge *BAFLDGOPNOO;
		struct DelegateBridge *MAIMNJNJDGC;
		struct DelegateBridge *BKILMOMOHAB;
		struct DelegateBridge *HNMMHCNFPCD;
		struct DelegateBridge *DACANBJAGPF;
		struct DelegateBridge *JGPNHNMDPDB;
		struct DelegateBridge *ADDDBIFJPFO;
		struct DelegateBridge *JHLAEBJBMOD;
		struct DelegateBridge *AHBOCPFBOCL;
		struct DelegateBridge *POFODBIGLFB;
		struct DelegateBridge *CDNGECKGDMH;
		struct DelegateBridge *DCOPNDDOBKC;
		struct DelegateBridge *OGMBELHIGBH;
		struct DelegateBridge *KHENDDJCHIP;
		struct DelegateBridge *NEEFOPMIMCF;
		struct DelegateBridge *CMGIEDELLDJ;
		struct DelegateBridge *DCKAELBHEEC;
		struct DelegateBridge *PNLGKJHENMN;
		struct DelegateBridge *MCONGDJILEF;
		struct DelegateBridge *PDIGKMFPAME;
		struct DelegateBridge *DLGKDHDBDEF;
		struct DelegateBridge *INLLOKNJEPG;
		struct DelegateBridge *EIMHAAKNEPG;
		struct DelegateBridge *PBLANCHOJAG;
		struct DelegateBridge *BGMPGGDLHJL;
		struct DelegateBridge *CLELPJPKLKF;
		struct DelegateBridge *GOCBMGBJNIM;
		struct DelegateBridge *GJDECCBHKDJ;
		struct DelegateBridge *EFBOILNAOGP;
		struct DelegateBridge *GGAGDELBNNO;
		struct DelegateBridge *FAFFFDMLIDM;
		struct DelegateBridge *PLOIIMCGGLJ;
		struct DelegateBridge *JMFLAJFLGAF;
		struct DelegateBridge *BLEKOLCNEOI;
		struct DelegateBridge *GJJMMCPAIOJ;
		struct DelegateBridge *FBPBBLIMCMH;
		struct DelegateBridge *KAFNJPDAOHE;
		struct DelegateBridge *DCKCMNEFOLB;
		struct DelegateBridge *NPNJEJGNKLP;
	};

	struct GameManager__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		struct GameManager__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
		struct GameManager__VTable vtable;
	};


	struct GameManager
	{
		struct GameManager__Class *klass;
		MonitorData *monitor;
		struct GameManager__Fields fields;
	};

	struct Singleton_1__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		void *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
	};

	// PNEPINGJIGK__Enum
	enum class FacingMoveType__Enum : int32_t
	{
		ForwardOnly = 0x00000000,
		ForwardBackward = 0x00000001,
		FourDirection = 0x00000002,
		LeftRight = 0x00000003,
		AirBlend = 0x00000004,
	};

	// HFEHGGJADHF__Enum
	enum class WaterResult__Enum : int32_t
	{
		SAFE = 0x00000000,
		ALMOST_IN_OR_OUT_WATER = 0x00000001,
		BOUND_EXCEEDED = 0x00000002,
	};

	// JEILBENMJFJ__Enum
	enum class MonsterSizeType__Enum : int32_t
	{
		NormalHumanoidType = 0x00000000,
		StoopType = 0x00000001,
		StrongHumanoidType = 0x00000002,
		SlimeType = 0x00000003,
		OtherType = 0x00000063,
	};

	enum class PositionModifyState__Enum : int32_t
	{
		All = 0x00000000,
		Walk = 0x00000001,
		Run = 0x00000002,
		None = 0x00000003,
	};

	struct RaycastHit
	{
		struct Vector3 m_Point;
		struct Vector3 m_Normal;
		int32_t m_FaceID;
		int32_t m_InternalFaceID;
		float m_Distance;
		struct Vector2 m_UV;
		int32_t m_InstanceID;
		int32_t m_ColliderTag;
		int32_t m_SurfaceType;
		int32_t m_Layer;
		struct Collider *m_Collider;
	};

	struct Ray
	{
		struct Vector3 m_Origin;
		struct Vector3 m_Direction;
	};

	struct Nullable_1_Boolean_
	{
		bool value;
		bool has_value;
	};

	struct __declspec(align(8)) BaseComponent__Fields
	{
		uint32_t componentRuntimeID; // 0x10
		uint32_t entityRuntimeID; // 0x14
		bool preTick; // 0x18
		int32_t order; // 0x1C
		struct ComponentManager *_componentManager; // 0x20
		struct BaseEntity *_entity; // 0x28
		bool _isToBeRemoved; // 0x30
		bool _enabled; // 0x31
		bool hasTick; // 0x34
		bool hasLateTick; // 0x35
		bool _selfHasTick; // 0x36
		bool _selfHasLateTick; // 0x37
		bool _managerTick; // 0x38
		bool _managerLateTick; // 0x39
		struct List_1_System_Int32_ *onEventIDs; // 0x40
		struct List_1_System_Int32_ *listenEventIDs; // 0x48
		struct Int32__Array *_selfOnEventIDsCache; // 0x50
		bool _isSelfOnEventIDsCached; // 0x58
		struct Int32__Array *_selfListenEventIDsCache; // 0x60
		bool _isSelfListenEventIDsCached; // 0x68
		struct Action *preInitCallback; // 0x70
		struct Action *initCallback; // 0x78
		bool _canTickIfDisable; // 0x80
		bool canTickIfDie; // 0x81
		bool canHandleEventIfDie; // 0x82
		bool _hasEnabledInited; // 0x83
		int32_t _tickIntervalRatio; // 0x84
		int32_t _lastTickInterval; // 0x88
		struct Action_1_Single_ *_tickMethodForEntityTickManager; // 0x90
		struct Nullable_1_Boolean_ _isTickableForEntityTickManager; // 0x98
		struct Action_1_Single_ *_lateTickMethodForEntityTickManager; // 0xA0
		struct Nullable_1_Boolean_ _isLateTickableForEntityTickManager; // 0xA8
		struct Action_1_Single_ *_latePreTickMethodForEntityTickManager; // 0xB0
		struct Nullable_1_Boolean_ _isLatePreTickableForEntityTickManager; // 0xB8
		bool needRetarget; // 0xBA
		bool isInited; // 0xBC
		bool isPreInited; // 0xBD
		bool hasCallEntityReady; // 0xBF
		bool _isDestroied; // 0xC0
		bool _listenEventValid_k__BackingField; // 0xC1
		struct Dictionary_2_System_Type_MoleMole_BaseComponentPlugin_ *_pluginMap; // 0xC8
		struct List_1_MoleMole_BaseComponentPlugin_ *_pluginList; // 0xD0
		struct List_1_MoleMole_BaseComponentPlugin_ *_tickPlugins; // 0xD8
		struct List_1_MoleMole_BaseComponentPlugin_ *_lateTickPlugins; // 0xE0
		struct Dictionary_2_System_Type_System_Int32_ *_disableNoTickPlugins; // 0xE8
		struct Dictionary_2_System_Type_System_Int32_ *_disableNoLateTickPlugins; // 0xF0
		struct Dictionary_2_System_Int32_MoleMole_BaseComponentPlugin_ *_onEventPluginMap; // 0xF8
		struct Dictionary_2_System_Int32_List_1_MoleMole_BaseComponentPlugin_ *_onEventPluginsMap; // 0x100
		struct Dictionary_2_System_Int32_MoleMole_BaseComponentPlugin_ *_listenEventPluginMap; // 0x108
		struct Dictionary_2_System_Int32_List_1_MoleMole_BaseComponentPlugin_ *_listenEventPluginsMap; // 0x110
		bool _bIgnoreIntervalTick_k__BackingField; // 0x118
		int32_t _greaterToDisableInterval_k__BackingField; // 0x11C
	};

	struct VCBase__Fields
	{
		struct BaseComponent__Fields _;
	};

	struct VCBase
	{
		struct FJBDIDKHCPN__Class *klass;
		MonitorData *monitor;
		struct VCBase__Fields fields;
	};

	struct VCBaseMove__Fields
	{
		struct VCBase__Fields _;
        struct MoleMole_VCMoveData* _moveData;
        struct CMNPNEKDAIC* _configMove_k__BackingField;
        struct DFOFDDIAOID* referenceSystem;
        uint32_t referenceSystemId;
        uint32_t FOKGDKKILEH;
        struct Vector3 curLocalPositionRS;
        struct Vector3 lastLocalPositionRS;
        bool curRS;
        bool lastRS;
        struct Collider* referenceCol;
        bool referenceSystemNewAttached;
        struct Transform* _transform;
        struct EFEBGPHLEBK* controlData;
        struct Action* onFallOnGround;
        struct Action* ONDHBHEPDLC;
        float dropGravityAcceleration;
        float _gravityScale;
        struct MCJJMMHFGPF__Array* ILFNNBCPBBM;
        bool _needFaceToAnimParam_k__BackingField;
        struct BOGIMDEGABM* _moveCollider;
        bool _moveColliderEnable;
        struct LAGCKJPGJIE* _velocityDetect;
        bool _IsInAirflowAcc_k__BackingField;
        struct Dictionary_2_System_Int32_System_Boolean_* _animatorParamCache;
        bool AOIMJFGIDJA;
        bool FKEFLBBNNHI;
        struct OEGJKMILHEO* _velocityForceMove;
        struct Vector3 _currentVelocityForce;
        int32_t _lastGetVelocityForceFrame;
        bool _keepInAirVelocityForce;
        struct PEFIHPNNKMH* syncPlugin;
	};

	struct VCBaseMove
	{
		struct VCBaseMove__Class *klass;
		MonitorData *monitor;
		struct VCBaseMove__Fields fields;
	};

	struct VCNonHumanoidMoveBase__Fields
	{
		struct VCBaseMove__Fields _;
		float maxMoveUphillSlope;
		float maxSlipSpeed;
		float yawSpeedRatio;
		uint32_t _moveLodValue;
		uint32_t _closeToGroundFrequency;
		uint32_t _currentCloseToGroundCount;
		struct Vector3 _lastDetectGroundPos;
		float avatarHeight;
		float avatarRadius;
		float _airDistance;
		struct Rigidbody *_rigidbody;
		bool canSteerInCurrentState;
		struct Animator *_animator;
		struct RuntimeAnimatorController *_cacheRuntimeAnimatorCtrl;
		float _currTilt;
		float _lastTimeTilt;
		struct EFEBGPHLEBK *_controlData;
		struct AnimatorController *_animatorController;
		bool _isInEmptyAnimatorControllerMode;
		struct Vector3 _lastPostion;
		float _currentGroundHeight;
		float _currentWaterHeight;
		bool _isInAir;
		bool _groundHit;
		bool _waterHit;
		struct RaycastHit _groundHitResult;
		struct Vector3 _extraCloseToGroundVelocity;
		struct Vector3 _cachedPosition;
		struct Vector3 _startPosition;
		struct Quaternion _cachedRotation;
		bool _setRotation;
		bool exactMove;
		struct Vector3 exactMoveTarget;
		struct Action_2_BaseEntity_Boolean_ *_onInAirStateChanged;
		bool hasExtraGravityChange;
		float extraGravityChangeVal;
		struct Vector3 _dampVelocity;
		struct NAPAIPLOOAL *_lcAblityState;
	};

	struct VCAnimatorMove__Fields
	{
		struct VCNonHumanoidMoveBase__Fields _;
		struct FACKJKDBOPM *_cache;
		struct EIFKEDPIPCM *_data;
		struct Vector3 _lastHeadPosition;
		int32_t headIndex;
		int32_t cacheBonePosCount;
		struct VCAnimatorMove_FKMNEHFHOBL__Array *cachedPosArray;
		float stepTest;
		float changeLerp;
		bool _isInSlip;
		WaterResult__Enum _isInWater;
		struct Vector3 _teleportToPoint;
		struct Vector3 _teleportToFwd;
		bool _applyGravityInAir_k__BackingField;
		bool _isInAirMove;
		bool forceSetAirMove;
		bool remoteForceUseAnimatorVel;
		bool _enableAirTilt_k__BackingField;
		struct Vector3 _targetPointForTilt_k__BackingField;
		bool _airMoveFollowAnimationBySkill;
		bool _airMoveFollowAnimationByMove;
		bool _airMoveFollowAnimationByAnimation;
		bool _disableAnimatorTranslation;
		struct DKBOGPNAHKJ *_smoothSpeed;
		bool _moveOnGround;
		bool _moveOnWater;
		float _moveOnWaterDepth;
		float _targetYCoordinate;
		bool _hasTargetY;
		bool _targetWater;
		float _modelHeight;
		float _predictWaterHeight;
		float _predictGroundHeight;
		bool _predictWaterHit;
		bool _predictGroundHit;
		FacingMoveType__Enum _facingMoveType;
		MonsterSizeType__Enum _monsterSizeType;
		PositionModifyState__Enum _defaultPositionModifyState;
		struct Dictionary_2_System_UInt32_PCNJDLLFAGL_ *_positionModifyStateMap;
		int32_t _returnDirectlyCount;
		bool _groundFollowAnimRotation;
		float _groundRotationScale;
		bool _handleAnimatorStateImmediately;
		struct Transform *_bip001;
		struct Quaternion _lastBipRotation;
		bool _setMoveOnWaterBeforePrepare;
		bool _preSetMoveOnWaterVal;
		float _pushColRadiusRatio;
		bool _destroyRockWhenInit;
		struct HKJJLCENDJM *_scenePropPlugin;
		struct BoneFollowMove *_boneChains;
		float _boneChainLerpRatio;
		int32_t _lastAnimHash;
		struct MonsterBoneChainAnimationData *_boneChainData;
		bool _boneChainMoveByAnimation;
		bool _enableBoneFollowMove;
		float _chainLengthRandomRangeUp;
		float _chainLengthRandomRangeLow;
		float _chainLengthRandomInterval;
		float _currentChainLengthRandomValue;
		float _lastChainLengthRandomTime;
		float extendDistLerpRatio;
		bool _enableVelocityDetect_k__BackingField;
		struct Vector2 _currentGeneralSteerAirPose;
		float flySmoothSpeed;
		int32_t dropHash;
		bool _currentIsIce;
		int64_t _currentIceId;
		float _groundRayTempExtraLength;
		bool _groundInfoRefreshed_k__BackingField;
		bool _isUsingAnimatorDeltaMode;
		bool canSyncMove;
		bool _firstTick;
		struct Vector3 _positionAfterInit;
		bool _syncFirstEnter;
		bool _syncFirstEnterNeedMove;
		bool _lastCanSyncMove;
		float _cannotSyncMoveTime;
		struct Vector3 _syncAirMoveVelocity;
		struct Vector3 _syncVelocity;
		struct GJPJPKFOHNG *_vcSyncAnimator;
		MotionState__Enum _lastNonStandbyMotion;
	};

	enum class MoleMole_VCBulletMove_MoleMole_VCBulletMove_UpdateAngleType__Enum : int32_t
	{
		None = 0x00000000,
		ByVelocity = 0x00000001,
		Rotating = 0x00000002,
	};

	struct MoleMole_BaseEntityHandle
	{
		uint32_t runtimeID;
		struct BaseEntity *_entityRef;
	};

	struct MoleMole_VCBulletMove__Fields
	{
		struct VCBaseMove__Fields _;
		struct Rigidbody *_rigidBody;
		float _moveDistance;
		struct Vector3 _lastPosition;
		struct Vector3 _velocity;
		float _angularVelocity;
		float _delay;
		float _maxSpeed;
		float _minSpeed;
		bool _checkBornInWater;
		bool _canBornInWater;
		float _acceleration;
		float _accelerationTime;
		bool _bornWithChesed;
		uint32_t _chasedTargetRuntimeID_k__BackingField;
		uint32_t _chasedTargetLockPointIndex_k__BackingField;
		struct List_1_System_UInt32_ *chasedTargetRuntimeIDList;
		struct List_1_System_UInt32_ *chasedTargetLockPointIndexList;
		struct MoleMole_BaseEntityHandle _chasedEntity;
		struct Transform *_chasedTrans;
		struct Vector3 NNCGBLGBMNI;
		bool _traceOnYAxis;
		bool _destroyWhenTargetDie;
		bool _isSafeDestroied;
		bool _isSyncToRemote;
		float _lastSyncToRemoteTime;
		bool CFMEFGCKOIA;
		float ACAACKNOMJD;
		bool JLAPEPKODCA;
		MoleMole_VCBulletMove_MoleMole_VCBulletMove_UpdateAngleType__Enum _updateAngleType;
		float _traceLerpCoef;
		bool _isSmoothRotation;
		struct Vector3 _transRotateAngluarVelocity;
		struct Vector3 _localAngle;
		struct MoleMole_MoveStickToGroundPlugin *_stickToGroundPlugin;
		bool _blockedByMonster;
		float _blockedByMonsterRadius;
		struct Collider__Array *_blockRes;
		int32_t _blockedByMonsterCounter;
		struct Vector3 blockedVelocity;
		float AICMHOGECOM;
		struct Vector3 CJKAKHOMPCF;
		bool JOFAEGAEJNC;
		struct MoleMole_LCAbilityState *_lcAblityState;
		struct MoleMole_LCAbility *_lcAbility;
		float _moveSpeedRatio;
		float _angularVelocityAddRatio;
		float _surroundRadiusAddRatio;
		struct Vector3 remoteTargetPos;
		struct Vector3 FJAMGOHCNCI;
	};

	struct MoleMole_VCBulletMove
	{
		struct MoleMole_VCBulletMove__Class *klass;
		MonitorData *monitor;
		struct MoleMole_VCBulletMove__Fields fields;
	};

	struct VCAnimatorMove
	{
		struct VCAnimatorMove__Class *klass;
		MonitorData *monitor;
		struct VCAnimatorMove__Fields fields;
	};

	enum class DieStateFlag__Enum : int32_t
	{
		None = 0x00000000,
		FrozenToDeath = 0x00000001,
		BurningToAshes = 0x00000002,
		DieFall = 0x00000003,
		DieDrawn = 0x00000004,
		DieAbyss = 0x00000005,
		Broken = 0x00000006,
		PetrifiedToDeath = 0x00000007,
	};

	struct LCBase__Fields
	{
		struct BaseComponent__Fields _;
		struct Dictionary_2_System_Int32_MoleMole_BaseComponentPlugin_ *_onEventResolvedPluginMap;
		struct Dictionary_2_System_Int32_List_1_MoleMole_BaseComponentPlugin_ *_onEventResolvedPluginsMap;
		struct List_1_System_Int32_ *onEventResolvedIDs;
		struct Int32__Array *_selfOnEventResolvedIDsCache;
		bool _isSelfOnEventResolvedIDsCached;
	};

	struct LCBaseCombat_AttackTarget
	{
		uint32_t runtimeID;
		struct String *lockedPoint;
		int32_t MBCDNGIFGDD;
	};

	struct LCBaseCombat__Fields
	{
		struct LCBase__Fields _;
		struct CombatProperty *_combatProperty_k__BackingField;
		struct Config_ConfigCombat *configCombat;
		struct Action_1_LCBaseCombat_ *onHPChanged;
		bool needCallHpChanged;
		struct Proto_MassiveEntityElementOpBatchNotify *massiveOpBatch;
		DieStateFlag__Enum dieStateFlag;
		TargetType__Enum targetType;
		bool _addToCombatEntities;
		struct VCBaseMove_1 *_vcCombat;
		struct Dictionary_2_System_UInt32_LCBaseCombat_CombatCollision_ *_attackeeEntityIds;
		uint32_t _lastTriggerAttackeeEntityId;
		int32_t _attackTagTriggeredFrameCount;
		struct HashSet_1_System_String_ *_attackTagTriggeredThisFrame;
		struct Dictionary_2_OEFMIBLPBEO_OLLOGJOELBI_MCJPIHGOIPK_ *LOIHENPOMNH; // 0x1A0
		struct LCBaseCombat_AttackTarget _attackTarget;
		bool _isSafeDestroied;
		float _recoverEndureTime;
		struct LCAttackAttenuationPlugin *_attackAttenuation;
		struct Config_ConfigCombatLock *_combatLock_k__BackingField;
		struct Config_ChangeLockTypeMixin *changeLockType;
	};

	struct LCBaseCombat
	{
		struct LCBaseCombat__Class *klass;
		MonitorData *monitor;
		struct LCBaseCombat__Fields fields;
	};

	enum class MoleMole_Config_AbilityState__Enum : uint64_t
	{
		None = 0x0000000000000000,
		Invincible = 0x0000000000000001,
		DenyLockOn = 0x0000000000000002,
		IsGhostToAllied = 0x0000000000000004,
		IsGhostToEnemy = 0x0000000000000008,
		ElementBurning = 0x0000000000000010,
		ElementWet = 0x0000000000000020,
		ElementFrozen = 0x0000000000000080,
		LockHP = 0x0000000000000200,
		IgnoreTriggerBullet = 0x0000000000000400,
		ElementShock = 0x0000000000000800,
		Struggle = 0x0000000000001000,
		ElementRock = 0x0000000000002000,
		ElementIce = 0x0000000000008000,
		ElementFreeze = 0x0000000000010000,
		AttackUp = 0x0000000000020000,
		DefenseUp = 0x0000000000040000,
		SpeedUp = 0x0000000000080000,
		DefenseDown = 0x0000000000100000,
		SpeedDown = 0x0000000000200000,
		ElementWind = 0x0000000000400000,
		ElementElectric = 0x0000000000800000,
		ElementFire = 0x0000000001000000,
		NoHeal = 0x0000000002000000,
		Limbo = 0x0000000004000000,
		MuteTaunt = 0x0000000008000000,
		ElementPetrifaction = 0x0000000010000000,
		IgnoreAddEnergy = 0x0000000040000000,
		ElementGrass = 0x0000000080000000,
		ElementOverdose = 0x0000000100000000,
		Corruption = 0x0000000200000000,
		UnlockFrequencyLimit = 0x0000000400000000,
		ElementDeadTime = 0x0000000800000000,
		OvergrowVariation = 0x0000001000000000
	};

	struct LCAbilityState__Fields
	{
		struct LCBase__Fields _;
		int32_t _freezeMassRatioIx;
		int32_t _freezeSpeedRatioIx;
		int32_t _petrifactionMassRatioIx;
		int32_t _petrifactionSpeedRatioIx;
		int32_t _paralyzeSpeedRatioIx;
		int32_t JNGMGKLPIBE;
		struct Action_2_MoleMole_Config_AbilityState_Boolean_ *onAbilityStateAdd;
		struct Action_1_MoleMole_Config_AbilityState_ *onAbilityStateRemove;
		struct Action_1_MoleMole_Config_AbilityState_ *onAbilityStateImmune;
		int32_t _abilityStateChangedFrameCount;
		struct List_1_System_ValueTuple_3__2 *_abilityStateChanged;
		struct Action_1_System_Collections_Generic_List_1__1 *onAbilityStateChangedPost;
		struct LCAbility *_selfLCAbility;
		MoleMole_Config_AbilityState__Enum abilityState;
		struct List_1_MoleMole_LCAbilityState_AbilityStateEntry_ *_abilityStatePushCount;
		struct List_1_MoleMole_LCAbilityState_AbilityStateEntry_ *_abilityStateImmuneCount;
		int32_t _immuneCount;
		struct List_1_System_Nullable_1_ *_abilityStateEffectIxLs;
		int32_t _maxSpeedPropertyIx;
		int32_t _paralyzeAniDefenceStackIx;
		struct Dictionary_2_MoleMole_EncryptedString_FixedSafeFloatStack_ *_properties;
		struct Dictionary_2_MoleMole_EncryptedString_System_Action_ *_propertyChangedCallbacks;
		struct Dictionary_2_MoleMole_EncryptedString_MoleMole_Config_ConfigAbilityPropertyEntry_ *_createdAbilityDefinedProperties;
		struct LCAbility *_levelAbilityCom;
		bool _canShakeOff;
		bool CLJALEKDCDO;
	};

	struct LCAbilityState
	{
		struct MoleMole_LCAbilityState__Class *klass;
		MonitorData *monitor;
		struct LCAbilityState__Fields fields;
	};

	enum class MoleMole_LCAbility_SyncAbilityState__Enum : int32_t
	{
		NotSynced = 0x00000000,
		HasSynced = 0x00000001,
	};

	struct LCAbility__Fields
	{
		struct LCBase__Fields _;
		struct MoleMole_ActorAbilityPlugin *abilityPlugin;
		struct ActorAbilityLogPlugin *AbilityLogPlugin;
		struct ConfigEntityAbilityEntry__Array *allBornAbilities;
		struct List_1_System_ValueTuple_2_ *staticConfigAbilities;
		struct List_1_System_ValueTuple_2_ *dynamicConfigAbilities;
		bool muteCheckDoOffStage;
		struct List_1_Config_ConfigBuffDebuffResistance_ *_resistanceBuffDebuffs;
		struct List_1_Config_ConfigBuffDebuffAddition_ *_additionBuffDebuffs;
		struct HashSet_1_System_String_ *_serverGlobalValues;
		bool KALGKNLBHCC;
		MoleMole_LCAbility_SyncAbilityState__Enum _syncStateFromServer;
		struct Action_1_String_ *_addDynamicConfigAbilityWithoutOverrideCallBack;
		struct Action_2_String_Boolean_ *_addPreDynamicConfigAbilityWithoutOverrideCallBack;
		struct Dictionary_2_System_Int32_System_ValueTuple_2_ *_elementTypeResistances;
		struct Proto_AbilitySyncStateInfo *_abilitySyncInfoOnChangeAuthority;
	};

	struct LCAbility
	{
		struct MoleMole_LCAbility__Class *klass;
		MonitorData *monitor;
		struct LCAbility__Fields fields;
	};

	enum class EvtFallOnGround_GroundType__Enum : int32_t
	{
		Land = 0x00000000,
		Water = 0x00000001,
		LandUnderWater = 0x00000002,
	};

	struct EvtFallOnGround__Fields
	{
		struct BaseEvent__Fields _;
		EvtFallOnGround_GroundType__Enum groundType;
		struct Vector3 velocity;
		float waterDepth;
	};

	struct EvtFallOnGround
	{
		struct EvtFallOnGround__Class *klass;
		MonitorData *monitor;
		struct EvtFallOnGround__Fields fields;
	};

	struct Config_RocketJumpExt
	{
		struct SimpleSafeFloat xzMultiplierRawNum;
		struct SimpleSafeFloat yMultiplierRawNum;
	};

	enum class Config_BodyType__Enum : int32_t
	{
		BODY_NONE = 0x00000000,
		BODY_BOY = 0x00000001,
		BODY_GIRL = 0x00000002,
		BODY_LADY = 0x00000003,
		BODY_MALE = 0x00000004,
		BODY_LOLI = 0x00000005,
	};

	struct HumanoidMoveFSMGoUpstairsState_PoseParameter
	{
		float length;
		float startRotate;
		float endRotate;
		float closeToGround;
		float enableMove;
		float enableLeftFootIK;
		float enableRightFootIK;
		float animatorPose;
		float distUp;
		float distForward;
		bool enable50Blend;
	};

    struct MoveSyncTask
    {
        struct Vector3 position;
        struct Vector3 velocity;
        struct Vector3 forward;
        struct Vector3 up;
        struct Quaternion rotation;
        int32_t motion;
        int32_t paramNumber;
        struct Vector3 param0;
        struct Vector3 param1;
        struct Vector3 param2;
        struct Vector3 param3;
        uint32_t time;
        uint32_t reliableSeq;
        uint32_t clientSequenceId;
        uint32_t subSequenceId;
        bool reliable;
        bool isFake;
        struct Vector3 refPosition;
        uint32_t refEntityId;
        uint32_t refEntityTimestamp;
        bool hasValue;
        struct Vector3 positionRS;
        struct Vector3 positionRSLocal;
        uint32_t randomDelay;
        int32_t frameCountWhenAddTask;
    };

    struct AnimatorStateInfo
    {
        int32_t m_Name;
        int32_t m_Path;
        int32_t m_FullPath;
        float m_NormalizedTime;
        float m_Length;
        float m_Speed;
        float m_SpeedMultiplier;
        int32_t m_Tag;
        int32_t m_Loop;
    };

    enum class MoleMole_VCMoveData_MoleMole_VCMoveData_MotionFlag__Enum : int32_t
    {
        Idle = 0x00000000,
        Walk = 0x00000001,
        Run = 0x00000002,
        Climb = 0x00000003,
        ClimbIdle = 0x00000004,
        Sprint = 0x00000005,
        SwimIdle = 0x00000006,
        SwimMove = 0x00000007,
        SwimDash = 0x00000008,
        BackWard = 0x00000009,
        CombatAir = 0x0000000a,
        CrouchIdle = 0x0000000b,
        CrouchMove = 0x0000000c,
        LadderIdle = 0x00000014,
        LadderMove = 0x00000015,
        FreeStyle = 0x00000063,
    };

    enum class MoleMole_VCMoveData_MoleMole_VCMoveData_MotionDirection__Enum : int32_t
    {
        Idle = 0x00000000,
        Forward = 0x00000001,
        Backward = 0x00000002,
        Left = 0x00000003,
        Right = 0x00000004,
    };

    enum class SceneSurfaceMaterial__Enum : int32_t
    {
        Invalid = 0x00000000,
        Grass = 0x00000001,
        Dirt = 0x00000002,
        Rock = 0x00000003,
        Snow = 0x00000004,
        Water = 0x00000005,
        Tile = 0x00000006,
        Sand = 0x00000007,
        Wood = 0x00000008,
        Iron = 0x00000009,
        Tree = 0x0000000a,
        Ice = 0x0000000b,
        Marble = 0x0000000c,
        Carpet = 0x0000000d,
        WoodLog = 0x0000000e,
        Cloud = 0x0000000f,
        Coin = 0x00000010,
        SnowRock = 0x00000011,
        ElectricWater = 0x00000012,
        Sakura = 0x00000013,
    };

    enum class MoleMole_SceneObjTag__Enum : int32_t
    {
        Ladder = 0x00000000,
        AirWall = 0x00000001,
        NCGU_Low = 0x00000002,
        NCGU_High = 0x00000003,
        AirWall_PTNS = 0x00000004,
        AirWall_NS = 0x00000005,
        Climbable = 0x00000006,
        Stair = 0x00000007,
        SpecialWater = 0x00000008,
        RainOccluder = 0x00000009,
        DestoryRockGadget = 0x0000000a,
        NPCSkin = 0x0000000b,
        AirWall_Stay = 0x0000000c,
        ClimbableNarrow = 0x00000014,
    };

    enum class MoleMole_VCMoveData_MoleMole_VCMoveData_AnimationTypeWhenFreeze__Enum : int32_t
    {
        MoveKeep = 0x00000000,
        MoveToStandby = 0x00000001,
        Slip = 0x00000002,
        Air = 0x00000003,
        Swim = 0x00000004,
    };

    enum class BlendMoveType__Enum : int32_t
    {
        None = 0x00000000,
        BlendMove = 0x00000001,
        BlendMove3D = 0x00000002,
    };

    struct __declspec(align(8)) MoleMole_VCMoveData__Fields
    {
        MoleMole_VCMoveData_MoleMole_VCMoveData_MotionFlag__Enum _curMoveState_k__BackingField;
        MoleMole_VCMoveData_MoleMole_VCMoveData_MotionFlag__Enum _preMoveState_k__BackingField;
        struct Vector3 targetSteerDir;
        struct Vector3 turnDirTargetPos;
        MoleMole_VCMoveData_MoleMole_VCMoveData_MotionDirection__Enum motionDir;
        bool rawIsMoving;
        bool isOnTempCollider;
        bool isOnWater;
        int32_t groundLayerBeneath;
        int32_t compensateType;
        struct Vector3 lastSyncAnimAuthorityPosition;
        struct Vector3 lastSyncAnimRemotePosition;
        struct Vector3 lastSyncAnimDiff;
        float compensateDuration;
        struct Vector3 lastSyncCompensateVel;
        bool exactMove;
        bool DNNCOPEIHHF;
        int32_t exactMoveArriveCount;
        struct Vector3 exactMoveTarget;
        float exactMoveSpeed;
        float exactMoveYawSpeedRatio;
        bool moveOnWater;
        bool canSprintInBlackMud;
        BlendMoveType__Enum blendMoveType;
        struct Vector3 moveToTargetDir;
        bool JBNGGPBOHLB;
        struct Vector3 curGroundNormal;
        struct Vector3 curGroundPos;
        SceneSurfaceMaterial__Enum curGroundSurfaceType;
        float curGroundHitDistance;
        float curSlope;
        float curSmoothedGroundHeight;
        struct Vector3 curSmoothedGroundNormal;
        MoleMole_SceneObjTag__Enum curGroundColliderTag;
        float curWaterHeight;
        float moveWaterHeight;
        bool isWaterSlope;
        float waterSlopeAngle;
        float curWaterFallHeight;
        struct Vector3 waterFallNormal;
        struct Collider* groundHitCollider;
        bool isInWetness;
        bool _frozen;
        bool _tryFreezeCharacter;
        bool _tryUnfreezeCharacter;
        MoleMole_VCMoveData_MoleMole_VCMoveData_AnimationTypeWhenFreeze__Enum _animationTypeWhenFreeze;
        struct MoveSyncTask currentSyncTask;
        bool syncWaiting;
        bool isInCutSceneMode;
        bool stayInPlace;
    };

    struct MoleMole_VCMoveData
    {
        struct MoleMole_VCMoveData__Class* klass;
        MonitorData* monitor;
        struct MoleMole_VCMoveData__Fields fields;
    };

    enum class ControlType__Enum : int32_t
    {
        Normal = 0x00000000,
        Strafe = 0x00000001,
    };

    struct LBCODNAELMK
    {
        int64_t CPBCIENOFML;
        int64_t PHGPDHOIIJD;
    };

    enum class MoveType__Enum : int32_t
    {
       normalMove = 0x00000000,
       combatMove = 0x00000001,
       combatAir = 0x00000002,
       combatSkillAir = 0x00000003,
       performMove = 0x00000004,
       combatSkillMove = 0x00000005,
    };

    enum HumanoidMoveFSMBaseMoveState_BeneathResult__Enum
    {
        Move = 0x00000000,
        Slip = 0x00000001,
        Air = 0x00000002,
        NoStandGround = 0x00000003,
    };

    struct MoveSlope
    {
        bool _exists_k__BackingField;
        float _angle_k__BackingField;
        struct Vector3 _surfaceNormal_k__BackingField;
        struct Vector3 _downAlongSurface_k__BackingField;
        struct Vector3 _castHitPosition_k__BackingField;
        float _castHitDistance_k__BackingField;
        float _distanceTillFoothill_k__BackingField;
    };

    struct VCHumanoidMoveData__Fields
    {
        struct MoleMole_VCMoveData__Fields _;
        struct List_1_EACNABDMBBF_* values;
        float MIN_CROUCH_ROLL_STAMINA;
        struct Vector3 nextHitAirVelocityForce;
        bool tryDoJump;
        bool tryTrampolineJump;
        bool tryDoSlip;
        bool tryDoBlink;
        bool trySprintBS;
        bool tryStopSprint;
        bool tryDoCrouch;
        bool tryTurnDir;
        bool trySitOnChair;
        bool tryFlyUp;
        bool tryStopFlyUp;
        bool tryFlyDown;
        bool tryStopFlyDown;
        float rawJoystickAngle;
        struct Vector3 blinkDir;
        bool blinkPreferInput;
        float blinkDist;
        float jumpFallSavedTryDoJumpTime;
        bool forceAirStateFly;
        float jumpXZVelocityScale;
        bool inSprint;
        float lastCline;
        float curCeilHeight;
        struct AnimatorStateInfo currentAnimatorStateInfo;
        struct AnimatorStateInfo nextAnimatorStateInfo;
        int32_t lastGetStateInfoFrame;
        uint32_t lastEvtAvatarDownRayTriggerEntityId;
        bool longDelayMode;
        struct Vector3 sitOnChairPosition;
        struct Vector3 sitOnChairRotationEular;
        struct Vector3 lastClimbCheckNormalLeft;
        struct Vector3 lastClimbCheckNormalRight;
		MoveType__Enum curAnimConfigMoveType;
        struct Transform* lastHitWaterTrans;
        struct Vector3 lastSafePosition;
        int32_t checkSafePositionCount;
        struct MoveSlope currentSlopeBeneath;
		HumanoidMoveFSMBaseMoveState_BeneathResult__Enum currentBeneathResult;
        int32_t lastUpdateSlopeFrame;
        bool airGroundNoStandAndHorizontal;
        bool combatExitClimbSetDir;
        struct Vector3 combatExitClimbDir;
        int32_t lastEvtAvatarDownRayTriggerCheckFrame;
        struct Vector3 lastPos;
        struct Quaternion lastRotation;
        uint32_t vehicleEntityID;
        struct ENPILPEOOMO* vehicleMove;
        struct Transform* vehicleSeatTrans;
        struct DOAPCIMHFNB* vehicleSeat;
        uint32_t vehicleSeatPos;
        struct VCHumanoidMove* vcHumanoidMove;
    };

    struct VCHumanoidMoveData
    {
        struct VCHumanoidMoveData__Class* klass;
        MonitorData* monitor;
        struct VCHumanoidMoveData__Fields fields;
    };

	struct VCHumanoidMove__Fields
	{
		struct VCBaseMove__Fields _;
        Config_BodyType__Enum moveModelType;
        float minClimbSlope;
        float maxClimbSlope;
        float maxMoveSlope;
        float minSlipSlope;
        float upstairTanConst;
        float slipDropThreshold;
        float maxSlipSpeed;
        float slipAcceleration;
        float slipRapidDecelerationSlope;
        float slipRapidDecelerationRatio;
        float slipHaltSlope;
        float waterfallExtraDownAngle;
        float dropCliffAngleThreshold;
        float dropLandLightMaxSpeed;
        float dropLandMiddleMaxSpeed;
        float yawSpeedRatio;
        float swimYawSpeedRatio;
        float swimDashYawSpeedRatio;
        float startSwimHeightRatio;
        float stopSwimHeightRatio;
        float SwimHeightRatio;
        float airToSwimHeightRatio;
        float swimEnableSprintHeightRatio;
        float climbCloseToGroundDist;
        float hipOffsetFromIK;
        float allowMoveNoDropHeightRatio;
        float _avatarHeight_k__BackingField;
        struct LBCODNAELMK avatarModelHeight;
        struct LBCODNAELMK avatarModelClimbHeight;
        struct LBCODNAELMK avatarWaitToheadHeight;
        float _avatarShoesHeight_k__BackingField;
        float _avatarRadius_k__BackingField;
        float _avatarHeadExtraHeight_k__BackingField;
        float moveSphereCastRadius;
        struct HumanoidMoveFSMGoUpstairsState_PoseParameter climbToStandbyHard;
        struct HumanoidMoveFSMGoUpstairsState_PoseParameter climbToStandbyMiddle;
        struct HumanoidMoveFSMGoUpstairsState_PoseParameter climbToStandbyLight;
        struct HumanoidMoveFSMGoUpstairsState_PoseParameter jumpUpstairs;
        struct HumanoidMoveFSMGoUpstairsState_PoseParameter climbtoStandbyGentle;
        struct AnimationCurve* jumpUpstairsHighCurve;
        struct AnimationCurve* jumpUpstairsLowCurve;
        struct AnimationCurve* jumpUpstairsHighZCurve;
        struct AnimationCurve* jumpUpstairsLowZCurve;
		struct AirRigidbody *_airRigidbody_k__BackingField;
        struct Rigidbody* dummyRigidbody;
        struct MonoAnimationIKEventHelper* animatorMoveHelper;
		struct HeightmapPlugin *heightmap;
        float closeToLadderDist;
        struct String* animatorTriggerOnLanded;
        struct Animator* animator;
        struct AnimatorController* animatorController;
        float sprintCheckInterval;
        float muteSprintInterval;
        struct VCHumanoidMove_StandbyIKParams__Array* standbyIKParams;
        struct Rigidbody* _rigidbody;
        struct Vector3 _center;
        int32_t _rotationFrame;
        bool applyGravityExternal;
        bool enableHitAirRetreatInAir;
        bool _enableLeanLayer;
		ControlType__Enum _moveControlType;
        bool useStrafeStamina;
        float _strafeSpeed;
        float _strafeDropSpeed;
        float _strafeAngularSpeed;
        bool _strafeUseRootMotion;
        bool _strafeUseGravity;
        bool _strafeRotateToTarget;
        struct Vector3 remoteStrafeTargetPos;
        struct Vector3 remoteStrafeTargetDir;
        struct EHNCEPNPMAP* _moveConfig;
        struct RuntimeAnimatorController* _cacheRuntimeAnimatorCtrl;
        struct HumanoidMoveFSM* _humanoidMoveFSM;
        struct HumanoidMoveEffectPlugin* _effectPlugin;
        struct VCLevel* vcLevel;
        struct LevelMoveScenePropPlugin* _scenePropPlugin;
        struct VCAvatarPerform* vcPerform;
        float orthogonalVelocityRatio;
        struct VCHumanoidMoveData* _humanoidMoveData;
        struct Proto_MotionInfo* _motionInfo;
        struct Config_RocketJumpExt rocketJumpSetting;
        float runStopVelocityRatio;
        struct Transform* moveHeadTrans;
        struct Transform* climbHeadTrans;
        struct Transform* footTrans;
        struct Transform* waistTrans;
        struct Transform* kneeTrans;
		struct AvatarDataItem *avatarData;
        bool isJamedOverMonster;
        float overrideMoveSpeedRatio;
        struct Vector3 lastLandVel;
        bool enableLandExternal;
        int32_t _lastAnimatorStateShortNameHash;
        bool _needFaceToAnimParamEver;
        float stayInAirCountToTrampoline;
        float maxStrafeStamina;
        float _strafeStamina;
        struct LCAbilityState* lcAblityState;
        struct VCAvatarEquipController* _equipController;
        struct Vector3 repeatlySetPos;
        int32_t repeatlySetPosFrameCount;
        struct Collider__Array* tempCollider;
        uint64_t disableChangeAvatarTime;
        int32_t _lastCheckDynamicBarrierFrame;
        struct HashSet_1_UInt32_* _ignoreCollisionEntities;
        struct HashSet_1_UInt32_* _nearbyDynamicBarriers;
        struct Vector3 _lastCheckDynamicBarrierPostion;
	};

	struct VCHumanoidMove
	{
		struct VCHumanoidMove__Class *klass;
		MonitorData *monitor;
		struct VCHumanoidMove__Fields fields;
	};

	enum class InteractionType__Enum : int32_t
	{
		NONE = 0x00000000,
		DIALOG = 0x00000001,
		DIALOG_NEXT = 0x00000002,
		DIALOG_FINISH = 0x00000003,
		DIALOG_SELECT = 0x00000004,
		BODY_LANG = 0x00000005,
		STEER_TO = 0x00000006,
		LOOK_AT = 0x00000007,
		LOOK_AT_EYECTRL = 0x00000008,
		CAMERA_MOVE = 0x00000009,
		SOUND = 0x0000000a,
		CUTSCENE = 0x0000000b,
		SHOP_EXCHANGE = 0x0000000c,
		GADGET_TOUCH = 0x0000000d,
		EMO_SYNC = 0x0000000e,
		UI_TRIGGER = 0x0000000f,
		EMOTION = 0x00000010,
		VISIBLE = 0x00000011,
		LUA_ACTION = 0x00000012,
		BLACK_SCREEN = 0x00000013,
		GODDESS = 0x00000014,
		SHOW_MESSAGE = 0x00000015,
		CAMERA_FOCUS = 0x00000016,
		DIALOG_CLEAR = 0x00000017,
		AUDIO_PLAY = 0x00000018,
		VIDEO_PLAY = 0x00000019,
		CAMERA_DOF = 0x0000001a,
		MOVE_TO = 0x0000001b,
		REQUEST_MSG = 0x0000001c,
		CAMERA_SHAKE = 0x0000001d,
		EMOJI_BUBBLE = 0x0000001e,
		TIME_PROTECT = 0x0000001f,
		SIMPLE_BLACK_SCREEN = 0x00000020,
		SIMPLE_UI_SHOW = 0x00000021,
		OPEN_BLOSSOM_MARK = 0x00000022,
		SPEECH_BUBBLE = 0x00000023,
		EMOTION_TEMPLATE = 0x00000024,
		SIT_OR_STAND = 0x00000025,
		PLAY_EFFECT = 0x00000026,
		TELEPORT_TO = 0x00000027,
		FIRST_SIGHT = 0x00000028,
		SET_ANIMATOR = 0x00000029,
		PLAY_POST_EFFECT = 0x0000002a,
		PLAY_FRAME_FACE_ANIMATION = 0x0000002b,
		HIDE_WIDGET_PET = 0x0000002c,
		LOCAL_GADGET_OP = 0x0000002d,
		PLAY_UI_EFFECT = 0x0000002e,
		SET_PLAYER_NPC_ENERGY_TYPE = 0x0000002f,
		CHANGE_NPC_MAT = 0x00000030,
		Other = 0x00000031,
	};

	struct __declspec(align(8)) BaseInterAction__Fields
	{
		InteractionType__Enum _type;
		uint32_t _mainQuestId;
		struct ConfigBaseInterAction *_cfg;
		struct InterActionGrp *_interGrp;
		bool _isFromExternal;
		struct OAMGPEEJGJL *_inter;
		struct LCBaseIntee *_intee;
		bool _isStarted;
		bool _isFinished;
	};

	//PONANPEDGNL__Fields
	struct DialogNextAction__Fields
	{
		struct BaseInterAction__Fields _;
		bool _insert;
		uint32_t _nextTalkID;
	};

	//PONANPEDGNL
	struct DialogNextAction
	{
		struct PONANPEDGNL__Class *klass;
		MonitorData *monitor;
		struct DialogNextAction__Fields fields;
	};

	enum class OLIGMHIBFPC__Enum : int32_t
	{
		None = 0x00000000,
		Debug = 0x00000001,
		Quest = 0x00000002,
		QuestCustom = 0x00000003,
		Talk = 0x00000004,
		Home = 0x00000005,
		TalkPreperform = 0x00000006,
		Daily = 0x00000007,
		ForceCache = 0x00000008,
		AnimeGroup = 0x00000009,
	};

	struct KAMMJKAFCMA
	{
		OLIGMHIBFPC__Enum LKBCPMNLDGM;
		uint32_t JNAIAKGGLDL;
	};

	struct MoleMole_EntityHandle_AvatarEntity_
	{
		uint32_t runtimeID;
		struct AvatarEntity *_entityRef;
	};

	enum class RigidbodyConstraints__Enum : int32_t
	{
		None = 0x00000000,
		FreezePositionX = 0x00000002,
		FreezePositionY = 0x00000004,
		FreezePositionZ = 0x00000008,
		FreezeRotationX = 0x00000010,
		FreezeRotationY = 0x00000020,
		FreezeRotationZ = 0x00000040,
		FreezePosition = 0x0000000e,
		FreezeRotation = 0x00000070,
		FreezeAll = 0x0000007e,
	};

	// KNINMIIGGLK__Fields
	struct CharacterEntity__Fields
	{
		struct BaseEntity__Fields _;
		struct Vector3 _originLocalPosRoot;
		struct Vector3 _originLocalEulerRoot;
		struct Vector3 _originLocalScaleRoot;
		RigidbodyConstraints__Enum HIEIEAJOLFK;
		int32_t GPOIKBAPLOK;
		struct Transform *_bipTrans;
	};

	// KNINMIIGGLK
	struct CharacterEntity
	{
		struct KNINMIIGGLK__Class *klass;
		MonitorData *monitor;
		struct CharacterEntity__Fields fields;
	};

	// CAJECMIFAOJ__Fields
	struct AvatarEntity__Fields
	{
		struct CharacterEntity__Fields _;
		uint64_t guid;
		bool isSupporting;
		struct LIBBCAIJOGO_System_Boolean_ *_activeStack;
		struct List_1_System_UInt32_ *_childrenRuntimeIds;
		struct List_1_System_UInt32_ *_descendantsRuntimeIds;
		bool _attackModeAuto;
	};

	// CAJECMIFAOJ
	struct AvatarEntity
	{
		struct CAJECMIFAOJ__Class *klass;
		MonitorData *monitor;
		struct AvatarEntity__Fields fields;
	};

	struct InteractionAvatarEntityProxy
	{
		struct CFHMEBOKAKH__Class *klass;
		MonitorData *monitor;
	};

	enum class AnimatorCullingMode__Enum : int32_t
	{
		AlwaysAnimate = 0x00000000,
		CullUpdateTransforms = 0x00000001,
		CullCompletely = 0x00000002,
	};

	struct LCBaseIntee__Fields
	{
		struct LCBase__Fields _;
		struct String *_triggerShapeIn;
		float _triggerShapeInHeight;
		struct String *_triggerShapeOut;
		float _triggerShapeOutHeight;
		struct Vector3 _triggerShapeInOffset;
		struct Vector3 _triggerShapeOutOffset;
		struct String *_triggerShapeFreeInteraction;
		float _triggerShapeFreeInteractionHeight;
		struct Vector3 _triggerShapeFreeInteractionOffset;
		struct Action_2_MoleMole_ILuaActor_MoleMole_ILuaActorCollisionInfo_ *OnPushCollider;
		struct InteeShareTaskData *_interShareTaskData;
		struct LCBaseInter *_inter;
		struct LCBaseInter *_preInter;
		struct LCExtraInterAction *_extraAction;
		struct VCBaseHeadController *_headCtrl;
		bool _disableHeadCtrl_k__BackingField;
		bool _isTalking;
		uint32_t curTalkId;
		uint32_t _curPriority;
		RemoveActorType__Enum _removeType;
		bool _isInterDisable;
		bool _isLuaInterDisable;
		struct Action_1_MoleMole_LCBaseIntee_ *OnFieldEnterHandler;
		struct Action_1_MoleMole_LCBaseIntee_ *OnFieldBtnHandler;
		struct Action_1_MoleMole_LCBaseIntee_ *OnFieldExitHandler;
		bool useTrigger;
		bool useInteractionTrigger;
		bool usePushCollider;
		bool useHeadControlTrigger;
		float _triggerRadius;
		float _interactionTriggerRadius;
		float _headCtrlTriggerRadius;
		uint32_t curPerformTalkId;
		bool _triggerEnter;
		bool _interactionTriggerEnter;
		bool _prePerformTriggerEnter;
		bool _headCtrlTriggerEnter;
		bool _isLookAtOnly;
		struct GameObject *_colliderObj;
		struct VCSpeechBubblePlugin *_speechBubble;
		AnimatorCullingMode__Enum _originalMode;
	};

	struct LCBaseIntee
	{
		struct LCBaseIntee__Class *klass;
		MonitorData *monitor;
		struct LCBaseIntee__Fields fields;
	};

	enum class TalkBeginWay__Enum : int32_t
	{
		TALK_BEGIN_NONE = 0x00000000,
		TALK_BEGIN_AUTO = 0x00000001,
		TALK_BEGIN_MANUAL = 0x00000002,
	};

	// GECLMNOMDKD__Enum
	enum class PlayMode__Enum_1 : int32_t
	{
		PLAY_MODE_ALL = 0x00000000,
		PLAY_MODE_SINGLE = 0x00000001,
		PLAY_MODE_MULTIPLE = 0x00000002,
		PLAY_MODE_HOST = 0x00000003,
		PLAY_MODE_GUEST = 0x00000004,
	};

	// KPBHGKOJDML__Enum
	enum class LogicType__Enum : int32_t
	{
		LOGIC_NONE = 0x00000000,
		LOGIC_AND = 0x00000001,
		LOGIC_OR = 0x00000002,
		LOGIC_NOT = 0x00000003,
		LOGIC_A_AND_ETCOR = 0x00000004,
		LOGIC_A_AND_B_AND_ETCOR = 0x00000005,
		LOGIC_A_OR_ETCAND = 0x00000006,
		LOGIC_A_OR_B_OR_ETCAND = 0x00000007,
		LOGIC_A_AND_B_OR_ETCAND = 0x00000008,
	};

	enum class TalkHeroType__Enum : int32_t
	{
		TALK_HERO_LOCAL = 0x00000000,
		TALK_HERO_MAIN = 0x00000001,
	};

	enum class TalkLoadType__Enum : int32_t
	{
		TALK_NORMAL_QUEST = 0x00000000,
		TALK_BLOSSOM = 0x00000001,
		TALK_ACTIVITY = 0x00000002,
		TALK_COOP = 0x00000003,
		TALK_GADGET = 0x00000004,
	};

	enum class TalkMarkType__Enum : int32_t
	{
		TALK_MARK_NONE = 0x00000000,
		TALK_MARK_COMMON = 0x00000001,
		TALK_MARK_HIDE = 0x00000002,
	};

	// GOPFNFNPLGP__Fields
	struct __declspec(align(8)) ConfigTalkScheme__Fields
	{
		uint32_t _id;
		TalkBeginWay__Enum _beginWay;
		PlayMode__Enum_1 _activeMode;
		LogicType__Enum _beginCondComb;
		struct TalkCondEx__Array *_beginCond;
		uint32_t _priority;
		struct UInt32__Array *_nextTalks;
		struct UInt32__Array *_nextRandomTalks;
		int32_t _showRandomTalkCount;
		uint32_t _initDialog;
		uint32_t _decoratorID;
		struct UInt32__Array *_npcId;
		struct String *_performCfg;
		TalkHeroType__Enum _heroTalk;
		TalkLoadType__Enum _loadType;
		uint32_t _questId;
		struct UInt32__Array *_extraLoadMarkId;
		uint64_t _assetIndex;
		bool _dontBlockDaily;
		struct UInt32__Array *_participantId;
		struct String *_prePerformCfg;
		bool _stayFreeStyle;
		bool _enableCameraDisplacement;
		bool _lockGameTime;
		TalkMarkType__Enum _talkMarkType;
		bool _questIdleTalk;
		bool _lowPriority;
		struct AIJNLBLCLCI__Array *_finishExec;
		struct Int32__Array *_prePerformFreeStyleList;
		struct Int32__Array *_freeStyleList;
		struct UInt32__Array *LFMNEFDCDND;
		bool setToBeRemove;
		struct List_1_System_UInt32_ *_nextValidTalkList;
		struct List_1_System_UInt32_ *_nextAfterRandomTalkList;
	};

	// GOPFNFNPLGP
	struct ConfigTalkScheme
	{
		struct GOPFNFNPLGP__Class *klass;
		MonitorData *monitor;
		struct ConfigTalkScheme__Fields fields;
	};

	struct __declspec(align(8)) List_1_MoleMole_BaseInterAction___Fields
	{
		struct BaseInterAction__Array *_items;
		int32_t _size;
		int32_t _version;
	};

	struct List_1_MoleMole_BaseInterAction_
	{
		struct List_1_MoleMole_BaseInterAction___Class *klass;
		MonitorData *monitor;
		struct List_1_MoleMole_BaseInterAction___Fields fields;
	};

	// ELIBDKPELPD__Fields
	struct __declspec(align(8)) InterActionGrp__Fields
	{
		uint64_t groupId;
		uint64_t nextGroupId;
		bool isKeyList;
		struct List_1_MoleMole_BaseInterAction_ *_interActionList;
		bool _isStarted;
	};

	// ELIBDKPELPD
	struct InterActionGrp
	{
		struct ELIBDKPELPD__Class *klass;
		MonitorData *monitor;
		struct InterActionGrp__Fields fields;
	};

	struct __declspec(align(8)) LinkedListNode_1_InterActionGrp___Fields
	{
		struct InterActionGrp *item;
		struct LinkedList_1_InterActionGrp_ *container;
		struct LinkedListNode_1_InterActionGrp_ *forward;
		struct LinkedListNode_1_InterActionGrp_ *back;
	};

	struct LinkedListNode_1_InterActionGrp_
	{
		struct LinkedListNode_1_ELIBDKPELPD___Class *klass;
		MonitorData *monitor;
		struct LinkedListNode_1_InterActionGrp___Fields fields;
	};

	struct __declspec(align(8)) LinkedList_1_InterActionGrp___Fields
	{
		uint32_t count;
		uint32_t version;
		struct Object *syncRoot;
		struct LinkedListNode_1_InterActionGrp_ *first;
		struct SerializationInfo *si;
	};

	struct LinkedList_1_InterActionGrp_
	{
		struct LinkedList_1_ELIBDKPELPD___Class *klass;
		MonitorData *monitor;
		struct LinkedList_1_InterActionGrp___Fields fields;
	};

	struct __declspec(align(8)) MoleMole_InteractionManager__Fields
	{
		bool _checkInteruptCoopOnFinish;
		struct InteractionAvatarEntityProxy *_localAvatarProxy;
		struct MoleMole_EntityHandle_AvatarEntity_ _simpleTalkActionAvatarHandle;
		struct Action_1_DKOJFNPLGIA_ *_interactionInteeCB;
		bool _isManulAttackMode;
		struct Dictionary_2_System_UInt32_MoleMole_Config_ConfigInterActor_ *_returnDailyNpcConfigDic;
		struct HashSet_1_System_UInt32_ *_participantDic;
		struct Dictionary_2_System_UInt32_System_UInt32_ *_avatarDialogIntees;
		struct Dictionary_2_System_String_System_String_ *_tmpAlias2Real;
		struct Dictionary_2_System_String_MoleMole_LCBaseIntee_ *_alias2intee;
		bool _canShowAvatarEffectWhenTalkStart;
		struct KAMMJKAFCMA _curLoadFreeStyleReason;
		struct Dictionary_2_System_UInt32_System_Int32__2 *_curLoadFreeStyleDic;
		bool _isLoadingFreeStyle;
		uint32_t _curLoadFreeStyleQuestId;
		struct ILuaActor *_currInterActor;
		struct Action_2_MoleMole_ILuaActor_Int32_ *StartInterEvent;
		struct Action_2_MoleMole_ILuaActor_Int32_ *FinishInterEvent;
		struct LCBaseIntee *_mainIntee;
		int32_t _keyInterCnt;
		bool _hasKeyPre;
		bool _havEndFade;
		float _endFadeInTime;
		float _endFadeOutTime;
		bool _inEndFade;
		bool _inStartFade;
		bool _talkLoading;
		bool _voiceLoading;
		bool _isLockGameTime;
		bool _isInteeReadyChecking;
		bool _isDelayClear;
		struct String *_interEntityBanConfig;
		bool _isFromPerformConfig;
		struct LinkedList_1_InterActionGrp_ *_keyInterList;
		struct Dictionary_2_System_UInt64_LinkedListNode_1_ELIBDKPELPD_ *_idInterDic;
		struct LinkedListNode_1_InterActionGrp_ *_currInterGrp;
		struct List_1_ELIBDKPELPD_ *_freeInterList;
		struct Dictionary_2_System_UInt32_List_1_ELIBDKPELPD_ *_priorityBtnDic;
		uint32_t _triggeringEntityID;
		bool _edtTalkWaiting;
		struct List_1_System_UInt32_ *_evtInterFinishList;
		struct Action *_keyListFinishHandler;
		struct Action *_keyListPreFinishHandler;
		struct Action *_levelLoadFinishHandler;
		struct InteractionManager_NpcInteractionRequestCache *_npcInteractionRequest;
		struct GBPAPDPGOGC__Array *_keyInterSystems;
		struct GBPAPDPGOGC__Array *_keyUsingSystems;
		struct GBPAPDPGOGC__Array *_freeInterSystems;
		struct GBPAPDPGOGC__Array *_freeUsingSystems;
		struct FBLKAMGAEBK_GBPAPDPGOGC_ *_systemListPool;
		struct List_1_MoleMole_LCBaseIntee_ *_candidateInteeAddList;
		struct List_1_GOPFNFNPLGP_ *_candidateTalkCfgList;
		struct List_1_MoleMole_LCBaseIntee_ *_candidateInteeRemoveList;
		struct HashSet_1_System_UInt32_ *_currCandidateIdSet;
		struct Dictionary_2_MoleMole_LCBaseIntee_FBLKAMGAEBK_PCAHMKPNKKE_ *_curRunningPreTalkDic;
		struct FBLKAMGAEBK_MoleMole_InteractionManager_PreTalkPerformContext_ *_curRunningPreTalkList;
		struct EEEOCECMOIP_MoleMole_InteractionManager_PreTalkPerformContext_ *_talkPerformContextPool;
		struct List_1_System_UInt32_ *_autoBanNpcRuntimeIdList;
		struct DAIJGKCPFFG *_autoTalkVoiceResponder;
		struct Dictionary_2_System_String_List_1_System_Int32_ *_effectHandlerDic;
		struct Dictionary_2_System_String_KeyValuePair_2_System_UInt32_UnityEngine_GameObject_ *_uiEffectDic;
	};

	struct MoleMole_InteractionManager
	{
		struct InteractionManager__Class *klass;
		MonitorData *monitor;
		struct MoleMole_InteractionManager__Fields fields;
	};

	struct BaseInterAction
	{
		struct BaseInterAction__Class *klass;
		MonitorData *monitor;
		struct BaseInterAction__Fields fields;
	};

	struct __declspec(align(8)) ConfigBaseInterAction__Fields
	{
		InteractionType__Enum _type;
		float _delayTime;
		float _duration;
		struct String__Array *_aliasList;
		bool _checkNextImmediately;
	};

	struct ConfigBaseInterAction
	{
		struct ConfigBaseInterAction__Class *klass;
		MonitorData *monitor;
		struct ConfigBaseInterAction__Fields fields;
	};

	struct __declspec(align(8)) MessageInfo__Fields
	{
		struct Dictionary_2_System_UInt16_System_String_ *_cmdNameDict;
		struct Dictionary_2_System_String_System_UInt16_ *_cmdIdDict;
		struct Dictionary_2_System_UInt16_System_UInt32_ *_cmdChannelIdDict;
		struct Dictionary_2_System_UInt16_MoleMole_MessageInfo_AGLNJLPBPMO_ *_cmdAllocFunc;
		struct HashSet_1_System_UInt16_ *_cmdIsReliableSet;
		struct HashSet_1_System_UInt16_ *_cmdIsAllowedSet;
	};

	struct MessageInfo
	{
		struct MessageInfo__Class *klass;
		MonitorData *monitor;
		struct MessageInfo__Fields fields;
	};

	struct KcpPacket_1
	{
		void *data;
		uint32_t dataLen;
	};

	enum class PacketStatus__Enum : int32_t
	{
		PACKET_CORRECT = 0x00000001,
		PACKET_NOT_COMPLETE = 0x00000002,
		PACKET_NOT_CORRECT = 0x00000003,
		PACKET_BUFF_IS_NULL = 0x00000004,
		PACKET_BUFF_LEN_SHORT = 0x00000005,
		PACKET_HEAD_MAGIC_ERROR = 0x00000006,
		PACKET_TAIL_MAGIC_ERROR = 0x00000007,
	};

	struct __declspec(align(8)) JDBPGPCCJJP__Fields
	{
		struct JPIOKGLLCPH *Head;
		struct Google_Protobuf_MessageBase *Body;
		bool _selfAllocBody;
		uint32_t ODEHIAOBAKE;
		uint32_t _packetSize;
		struct LockFreeQueue *_allocStack;
		int32_t lastStack;
		uint16_t _CmdId_k__BackingField;
	};

	struct Packet
	{
		struct JDBPGPCCJJP__Class *klass;
		MonitorData *monitor;
		struct JDBPGPCCJJP__Fields fields;
	};

	enum class KcpEventType__Enum : int32_t
	{
		EventNotSet = -1,
		EventConnect = 0x00000000,
		EventConnectFailed = 0x00000001,
		EventDisconnect = 0x00000002,
		EventRecvMsg = 0x00000003,
		EventCount = 0x00000004,
	};


	struct KcpEvent
	{
		KcpEventType__Enum type;
		uint32_t token;
		uint32_t data;
		struct KcpPacket_1 *packet;
	};

	struct ClientKcpEvent
	{
		struct KcpEvent _evt;
	};

	// EJGKINLFJKF__Enum
	enum class UIType__Enum : int32_t
	{
		Page = 0x00000000,
		SpecialDialog = 0x00000001,
		SuspendBar = 0x00000002,
		Dialog = 0x00000003,
		Root = 0x00000004,
	};

	// JBMBEBFMJAO__Enum
	enum class ContextQueueType__Enum : int32_t
	{
		NONE = 0x00000000,
		MAIN_PAGE_LEFT = 0x00000001,
		MAIN_PAGE_TOP = 0x00000002,
		MAIN_PAGE_LEFT_QUEST = 0x00000003,
		MAIN_PAGE_MIDDLE_QUEST = 0x00000004,
		MAIN_TOP_HIGH_PRIORITY = 0x00000005,
	};

	// IFIGONNBKLP__Enum
	enum class CanvasType__Enum : int32_t
	{
		Invalid = 0x00000000,
		InLevelCanvas = 0x00000001,
		RootCanvas = 0x00000002,
	};

	// PJGDFNLLFMO__Enum
	enum class ContextLoadState__Enum : int32_t
	{
		UnLoaded = 0x00000000,
		Cached = 0x00000001,
		Loading = 0x00000002,
		Loaded = 0x00000003,
		UnLoading = 0x00000004,
	};

	// IHKGPINHAJG__Enum
	enum class ContextViewState__Enum : int32_t
	{
		Active = 0x00000000,
		Inactive = 0x00000001,
		Hiding = 0x00000002,
	};

	// IHIAPPJGFMD
	struct UIMetaInfo
	{
		bool OKMCBOMPIML;
		bool BHHCEBPMJBP;
	};

	enum class InputMode__Enum : int32_t
	{
		None = 0x00000000,
		Normal = 0x00000001,
		TabMenu = 0x00000002,
		WheelMenu = 0x00000003,
		Disable = 0x00000004,
		Block = 0x00000005,
		SimpleMenu = 0x00000006,
		ScrollerMenu = 0x00000007,
	};

	enum class PCCursorMode__Enum : int32_t
	{
		Locked = -1,
		DontCare = 0x00000000,
		Normal = 0x000003e8,
	};

	enum class GDCNKCIOPMO__Enum : int32_t
	{
		Normal = 0x00000000,
		Heavy = 0x00000001,
	};

	struct __declspec(align(8)) BaseContext__Fields
	{
		struct PLGGMHHGNJK *config;
		int32_t uiType;
		int32_t queueType;
		int32_t canvasType;
		int32_t _loadState;
		int32_t _viewState;
		int32_t layerOrder;
		struct Queue_1_MoleMole_Notify_ *_notifyQueue;
		struct Queue_1_MoleMole_Notify_ *_eternalNotifyQueue;
		struct GameObject *_view_k__BackingField;
		struct MonoUIProxy *_monoProxy;
		struct UIMetaInfo _metaInfo_k__BackingField;
		struct List_1_UnityEngine_Events_UnityEventBase_ *_bindedEvents;
		struct List_1_MoleMole_MonoEventTrigger_ *_eventTriggers;
		struct List_1_UnityEngine_Coroutine_ *_bindedCoroutines;
		struct Coroutine *_fadeOutCoroutine;
		GDCNKCIOPMO__Enum performanceType; // 0x78
		struct Action_1_MoleMole_BaseContext_ *onLoadFinish;
		struct Action *closeCallback;
		struct Action *releaseCallback;
		struct Action *fadeOutCallback;
		bool _setViewAsLast;
		bool _setViewAsFirst;
		bool _forceSaveLocalDataOnDestroy;
		struct List_1_MoleMole_BaseContextComponent_ *_baseComponentList;
		struct List_1_MoleMole_BaseContextComponent_ *_tickComponentList;
		struct List_1_MoleMole_BaseContextComponent_ *_lateTickComponentList;
		struct List_1_MoleMole_BaseContextComponent_ *_handleAnyNotifyComponentList;
		struct Dictionary_2_System_Int32_List_1_MoleMole_BaseContextComponent_ *_baseComponentNotifyRegister;
		struct Dictionary_2_System_Int32_List_1_MoleMole_BaseContextComponent_ *_baseComponentPacketRegister;
		struct Dictionary_2_System_Int32_List_1_MoleMole_BaseContextComponent_ *_baseComponentActionEventRegister;
		uint32_t _pageHandler;
		bool _isIndependentLoaded;
		bool _UIResolutionChanged_k__BackingField;
		bool _landFromBack_k__BackingField;
		bool _layoutVersionChanged_k__BackingField;
		struct HashSet_1_System_UInt16_ *handlePacketSet;
		struct LPGAIFHDAHC *_jsonConfig;
		int32_t _stateID;
		struct IPKLEDPCMIN__Array *_inputEvents;
		bool _useCustomInputEvent;
		struct List_1_IPKLEDPCMIN_ *_customeInputEvent;
		bool _enableJoypadVirtualCursor;
		struct Nullable_1_Boolean_ _forceEnableJoypadVirtualCursor;
		bool _handledInputEvents;
		int32_t _inputMode;
		uint32_t _keySettingID;
		struct List_1_HHOMOPLIOLJ_ *_joypadControllerCache;
		bool _needResolveJoypadController;
		bool _useCommonTemplateConfig;
		bool _needResolveKeyMouseController;
		bool _needAutoHideContextJoypadIconOnBackend;
		struct Dictionary_2_System_Int32_UniRx_Tuple_3_ *_storedJoypadIconStateIns;
		struct Dictionary_2_System_String_HHOMOPLIOLJ_ *_name2JoypadController;
		int32_t _pcCursorMode;
		bool _doJoypadLostFocusBeforeClearView;
		bool _updateJoypadUIModule;
		bool _contextClosed;
		struct List_1_MoleMole_BaseContext_JoypadUIModulesList_ *_joypadUIModules;
		struct List_1_MoleMole_MonoJoypadUIModule_ *_modulesToBeAdd;
		struct List_1_MoleMole_MonoJoypadUIModule_ *_modulesToBeRemove;
		struct List_1_MoleMole_MonoJoypadUIModule_ *_joypadUIModuleCache;
		struct List_1_MoleMole_MonoJoypadNavRegionBase_ *_navRegionCache;
		bool _changeClimateLen;
		bool _showClimateLenEff;
		bool _immedialteClimateLenEff;
		struct Dictionary_2_MoleMole_MonoControllerIcon_Stack_1_System_Boolean_ *_controllerIconWithState;
		struct List_1_MoleMole_MonoControllerIcon_ *controllerIcons;
		struct MJNGIMLAOFN *_spriteLoadProxy;
	};

	struct BasePageContext__Fields
	{
		struct BaseContext__Fields _;
		struct List_1_MoleMole_BaseDialogContext_ *dialogContextList;
		struct List_1_MoleMole_BaseSubPageContext_ *subPageContextList;
		bool _forceLodOff;
		bool _autoClosePageOnBackEvent;
		bool _disableMainCamera;
		bool _pauseLevelTime;
		bool _asyncLoadRes;
		bool MPPCDJDCONN;
		struct Coroutine *_cameraCoroutine;
		bool _joyFocusOnParentPage;
	};

	struct InLevelMapPageContext__Fields
	{
		struct BasePageContext__Fields _;
		struct GameObject *_mapGameObject;
		struct MonoLevelMapUI *_mapScript;
		struct MonoInLevelMapPage *_pageMono;
		struct MoleMole_RewardPreviewComponent *_rewardPreviewComponent;
		uint32_t _mapFogHandle;
		struct Rect _mapViewRect;
		struct MonoMapMark *_localAvatarMark;
		struct Rect _markContainerViewport;
		struct MoleMole_InfoTextDialogContext *_infoTextDialog;
		int32_t _markLayer;
		uint32_t _markId;
		struct GeneralMarkData *_trackingMark;
		MoleMole_Config_MarkType__Enum _markType;
		bool _needTrack;
		struct List_1_MoleMole_MonoMapMark_ *_nearMarks;
		struct MonoMapMark *_hintMark;
		struct Vector3 _customMarkWorldPos;
		struct String *_customMarkTitle;
		MoleMole_Config_MarkIconType__Enum _customMarktype;
		bool EILBFDJFEFC;
		bool LJFOLIOPPAM;
		bool OBMFEPDBFPB;
		uint32_t _customMarkTrackMonsterID;
		uint32_t _customMarkTrackQuestID;
		MoleMole_CustomMarkTrackReasonType__Enum _customMarkTrackReasonType;
		bool _isAdventureHandbookOpened;
		bool GDGKMHJBOOE;
		float _slideValue;
		struct MoleMole_ResinViewComponent *_resinComp;
		struct MoleMole_ZoomAudioComponent *_zoomAudioComp;
		struct Dictionary_2_MoleMole_MonoMapMark_UnityEngine_GameObject_ *trackingIndictor;
		struct Coroutine *GEAEMOFMCKM;
		struct List_1_UnityEngine_Vector3_ *EKEKAIMJGNC;
		struct List_1_System_Single_ *IBIFLJKHDHL;
		bool _BBGLAKGEOHI_k__BackingField;
		bool NIHBBAEMMLG;
		float NJALHPPDGIM;
		struct Vector2 JDKGILDHALO;
		float BHAPNHFKDAK;
		float MKJHEPPLPIK;
		struct Vector2 JCJBABBACCE;
		float DBKBGDOPILO;
		bool EPKMJFMMCLB;
		struct Vector2 _currRectPos;
		struct Vector2 _currRectSize;
		struct Dictionary_2_System_UInt32_UnityEngine_GameObject_ *_companionIndicators;
		struct List_1_System_UInt32_ *HDLMDKKFBBE;
		struct GameObject *_playerIndicator;
		struct Vector2 _newPos;
		struct GameObject *_lockBlueObj;
		bool _canTrans;
		uint32_t _unlockAreaID;
		struct GameObject *_lockRedObj;
		bool _showDisableLimitRegion;
		struct PointerEventData *_cursorPointer;
		struct List_1_UnityEngine_EventSystems_RaycastResult_ *_raycastResults;
		struct GameObject *_currOverGameObject;
		bool _anyMarkUnderCursor;
		bool _resinOpened;
		bool EBMIHJPIIDA; // 0x352
		struct FABCAHHFGGN_UInt32_ *MFGNFKPLBBM; // 0x358
		MoleMole_Config_MapTagType__Enum _currTag;
		uint32_t _currShownID;
		uint32_t _currSelectedID;
		struct MoleMole_Config_MapTagDataConfig *_currSelectedConfig;
		struct List_1_MoleMole_Config_MapTagDataConfig_ *_mapTagConfig;
		uint32_t _sceneToLoad;
		int32_t EPNCFIJDMKN;
		bool LDDIAOADHKH;
		bool ACKFNCBGGHF;
		bool LLEJEBEGAHC;
		bool HEODHHPAKML;
		bool OAKHOECOKNG;
		bool POCKOOAPLEC;
		bool ONIEHJLAEEP;
		struct Action *_loadingCallback;
		struct Action *LLPPOEPMOBM;
		struct MonoMapMark *_selectedDungeonMark;
		uint32_t BOSS_DUNGEON_ENTRY_ID;
		MoleMole_InLevelMapPageContext_MoleMole_InLevelMapPageContext_MarkTipsContentType__Enum _markTipsContentType;
		struct List_1_MoleMole_BagItem_ *_reward;
		struct List_1_MoleMole_Config_IdCountStrConfig_ *_rewardPreviewList;
		float GBFCOLMNMOK;
		uint32_t LDDDLLOLDME;
		struct MoleMole_Config_DungeonEntry *_selectedDungeonEntry;
		MoleMole_InLevelMapPageContext_MoleMole_InLevelMapPageContext_DungeonEntryState__Enum _selectDungeonEntryState;
		struct Coroutine *_updateDungeonCooldownTipsCoroutine;
		struct MoleMole_ItemTipsDialogHelper _itemTipsHelper;
		struct Coroutine *_updateFarmFieldCoroutine;
		struct GameObject *_newMaxLevelGO;
		bool JIOHBCDPCIP;
		bool OOCKDIDFMAB;
		struct MoleMole_RewardPreviewComponent *_moonfinTrialRewardPreviewComponent;
		struct Coroutine *_updateReviveCooldownCoroutine;
		struct List_1_UInt32_ *PPGOICBBODE;
		struct List_1_UInt32_ *GEPKCDMLNKN;
		int32_t _selectedMapTagIndex;
		int32_t _selectedPanelTagIndex;
		struct MonoMapMark *_selectedCustomMark;
		int32_t _customMarkCount;
		struct MoleMole_Config_MarkIconType__Enum__Array *_customMarkIcons;
		struct Vector2 _currMapPos;
		struct Dictionary_2_Int32_Dictionary_2_UInt32_MonoMapMark__ *FBGPDLOGFCP;
		struct List_1_GeneralMarkData_ *JLGJNIMKFEB;
		struct Dictionary_2_Int32_NGAMEGNBOOL_KDBCBIHBEDD_ *KNHOGIDGIAE;
		struct Dictionary_2_UInt32_MonoMapMark_ *OKCFEOFPCND;
		struct Dictionary_2_UInt32_List_1_NGAMEGNBOOL_FBHDPCKOOKI__ *FHKEBPFDHPG;
		bool CDAOLMIHHME;
		bool PMOIGNHPPMD;
		int32_t DLPKCBOPKAG;
	};

	struct InLevelMapPageContext
	{
		void *klass;
		MonitorData *monitor;
		InLevelMapPageContext__Fields fields;
	};

	struct BaseDialogContext__Fields
	{
		struct BaseContext__Fields _;
		bool attachToPage;
		bool _autoCloseDialogOnBackEvent;
		struct BLDKFDKIPLL *_pageContext_k__BackingField;
	};

    enum class BIAFMNMNDCE__Enum : int32_t
    {
        BIAFMNMNDCE__Enum_COOP_VALUE_UI_DEFAULT = 0x00000000,
        BIAFMNMNDCE__Enum_COOP_VALUE_UI_PRESSURE = 0x00000001,
    };

	struct TalkDialogContext__Fields
	{
		struct BaseDialogContext__Fields _;
        bool _inCoopSelect;
        bool _inCoopTemperamentSelect;
        bool _coopSelectShow;
        int32_t _selectCoopIndex;
        struct List_1_MonoUIContainer_ *_confidenceItemArray;
        BIAFMNMNDCE__Enum GCMHDFNNICN;
        uint32_t LGJADOIIPFH;
        struct BIJCAEEGMMM_ENLDELGDNFD *KIIKEAPDIBM;
        struct DialogAction *_currDialogAction;
        struct DialogSelectAction *_currDialogSelectAction;
        struct MonoTalkDialog *_dialogMono;
        struct Config_ConfigDialogScheme *_currDialog;
        float _protectTime;
        bool _autoClick;
        struct List_1_OGNDIOGBMBO_ *MDIABFPPAOA;
        struct Action *HBGGNIGDNJF;
        struct List_1_UInt32_ *AJGDIGLLILD;
        bool OLECEEHPOJE;
        bool IOKGKKKKFHB;
        struct AHBCNDIFLEP *NNCNIGBPAED;
        struct FKHOKMOBDLB *IOEJAMLDDOL;
        bool HLHPFBDLEHL;
        struct Action *PHPGNEOBDPP;
        struct Action *MNDHKIGMGGM;
        float _interactableTime;
        float _autoTalkInteractableTime;
        struct Coroutine *_showClickTipCoroutine;
        bool _differentRole;
        struct Coroutine *_showSelectOptionsCoroutine;
        bool _inSelect;
        struct Coroutine *WaitDialogSelectCoroutine;
	};

	struct TalkDialogContext
	{
		struct TalkDialogContext__Class *klass;
		MonitorData *monitor;
		struct TalkDialogContext__Fields fields;
	};

	struct MonoTalkDialog__Fields
	{
		struct MonoUIProxy__Fields _;
		struct MonoGrpSelect *_selectGrp;
		struct MonoPrefabPlugin *_prefabPlugin;
		struct GameObject *_keyGameObject;
		struct MonoControlElement *monoControl;
		struct Animator *_clickAnimator;
		struct GameObject *_clickTip;
		struct Transform *_countDownTrans;
		struct GameObject *_conversationRoot;
		struct GameObject *_talkRoot;
		float _protectTime;
		float _clickTipAniTime;
		float _optionsDisplayDelay;
		float _waitDialogSelectTime;
		float _waitCoopSelectTime;
		struct MonoElementSwitch *_elementSwitch;
		bool _clickAniTimeAdd;
		struct MonoGrpConversation *_conversationGrp;
		struct MonoCoopPanel *_coopPanel;
	};

	struct MonoTalkDialog
	{
		struct MonoTalkDialog__Class *klass;
		MonitorData *monitor;
		struct MonoTalkDialog__Fields fields;
	};

	struct InLevelCutScenePageContext__Fields
	{
		struct BasePageContext__Fields _;
        struct MonoInLevelCutScenePage *_pageMono;
        struct TalkDialogContext *_talkDialog;
        struct Image_1 *_backImg;
        struct GameObject *_loadingAnim;
        struct Animator *_textAnimator;
        bool _needFreeClick;
        bool _isChangingColor;
        struct Coroutine *_wait2ShowLoadingDialog;
        bool _talking;
        uint32_t _inteeID;
        struct FDCAKJLJPCD *NJLHAMJPGHN;
        float _durationToHide;
        struct Vector2 _lastMousePos;
        float _lastMouseMoveTime;
        bool _firstUpdate;
        bool _needHideMouse;
        struct Color NOGNJCAEOHO;
        struct List_1_String_ *EOJOMJIAPPC;
        float HBADNOIGINH;
        float PKMEHHJCGEH;
        bool EHAGIDMJOAI;
        struct Action *NCEOMBLFFDN;
	};

	struct InLevelCutScenePageContext
	{
		struct InLevelCutScenePageContext__Class *klass;
		MonitorData *monitor;
		struct InLevelCutScenePageContext__Fields fields;
	};

	struct Int32__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		struct Int32__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
	};

	struct UInt32__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		struct Int32__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
	};

	struct Canvas__Fields
	{
		struct Behaviour__Fields _;
	};

	struct Canvas
	{
		struct Canvas__Class *klass;
		MonitorData *monitor;
		struct Canvas__Fields fields;
	};


	struct MoleMole_InfoTextDialogContext__Fields
	{
		struct BaseDialogContext__Fields _;
		struct MonoInfoTextDialog *_dialogMono;
		struct List_1_System_String_ *_contents;
		bool _needFreeClickButton;
		bool _interactable;
		struct Nullable_1_Boolean_ _customEnableInputPenetrate;
		/*MoleMole_InfoTextDialogContext_MoleMole_InfoTextDialogContext_InfoState__Enum _infoState;
		float _nextTimeStamp;
		bool _needFadeIn;*/
	};

	struct MoleMole_InfoTextDialogContext
	{
		struct MoleMole_InfoTextDialogContext__Class *klass;
		MonitorData *monitor;
		struct MoleMole_InfoTextDialogContext__Fields fields;
	};

	struct __declspec(align(8)) UIManager__Fields
	{
		struct LinkedList_1_MoleMole_BaseContext_ *_inputContextList;
		struct HashSet_1_MoleMole_BaseContext_ *_inputContextSet;
		PCCursorMode__Enum _currCursorMode;
		bool _EKNEFBIONCF_k__BackingField;
		struct HashSet_1_MoleMole_BaseContext_ *BCPDECEFFMF;
		struct UIPlatformConfig *platformConfig;
		uint32_t _curProfileHandle;
		struct Canvas *_sceneCanvas;
		struct Camera *_uiCamera;
		struct Stack_1_MoleMole_BasePageContext_ *_pageContextStack;
		struct List_1_MoleMole_BaseDialogContext_ *_rootDialogContextList;
		struct List_1_MoleMole_BaseWidgetContext_ *_widgetContextList;
		struct List_1_MoleMole_BaseContext_ *_tickContextList;
		struct List_1_MoleMole_BaseContext_ *_lateTickContextList;
		struct List_1_MoleMole_BaseContext_ *_toBeDestroyedContextList;
		struct List_1_MoleMole_BaseDialogContext_ *_cacheDialogContextList;
		struct Dictionary_2_System_Int32_MoleMole_DoublyList_1_ *_cachedLockingContexts;
		struct Dictionary_2_System_Int32_System_Int32_ *_lockPriorityCounts;
		int32_t _curLockPriority;
		struct Dictionary_2_System_Type_MoleMole_BaseContextData_ *_contextDatas;
		struct Dictionary_2_System_UInt32_Proto_AnnounceData_ *_announceDatas;
		struct MoleMole_ViewCache *_pageViewCache;
		struct MoleMole_ViewCache *_dialogViewCache;
		struct MoleMole_ViewCache *_widgetViewCache;
		int32_t _showingContext;
		bool BOJECMDPLDJ;
		struct Dictionary_2_System_String_MoleMole_UIManager_MoleMole_UIManager_HandleItem_ *_pathHandleDic;
		struct CanvasScaler *_canvasScaler_k__BackingField;
		struct MonoBaseCanvas *_levelCanvas;
		/*CameraClearFlags__Enum*/ void *_curClearFlag;
		struct MoleMole_FixedStack_1_System_Boolean_ *_isUICameraEnableStack;
		bool _needRefreshUICameraEnable;
		bool _enableJoypadVirtualCursor;
		bool _isWindowsPotrait;
		struct List_1_System_String_ *_uiResolitions;
		int32_t _canvasSizeLevel;
		struct Vector2 _currReferenceResolution;
		struct List_1_UnityEngine_Resolution_ *_windowResolutions;
		int32_t _currWindowResIndex;
		struct UnityAction *OnResolutionChanged;
		/*MoleMole_LayoutVersion__Enum*/ void *_layoutVersion_k__BackingField;
		bool _hideUI;
		struct MoleMole_UIManager_SaveData *_saveData;
		uint32_t _rootCanvasPrefabHandle;
		struct GameObject *_rootCanvasPrefab;
		struct MonoBaseCanvas *_rootCanvasInstance;
		bool _isMobilePlatform;
		struct List_1_MoleMole_BaseGroupContext_ *_groupContextList;
		struct MoleMole_BaseGroupContext *_curGroupContext;
		struct MoleMole_TipsDialogContext *_normalMessageDialog;
		struct MoleMole_InfoTextDialogContext *_infoDialogContext;
		struct MoleMole_InfoTextDialogContext *_rootInfoDialogContext;
		struct MoleMole_InfoTextDialogContext *_infoDialogContextWithoutBlockInput;
	};

	struct MoleMole_UIManager
	{
		struct UIManager__Class *klass;
		MonitorData *monitor;
		struct UIManager__Fields fields;
	};

	enum class CanBeModifiedBy__Enum : int32_t
	{
		None = 0x00000000,
		Owner = 0x00000001,
		OriginOwner = 0x00000002,
	};

	struct __declspec(align(8)) ConfigAttackInfo__Fields
	{
		struct String *_attackTag;
		struct String *_attenuationTag;
		struct String *_attenuationGroup;
		GIMPBDFJKCF__Enum KELLHNJOHEE;
		struct ConfigAttackProperty *_attackProperty;
		struct ConfigHitPattern *_hitPattern;
		bool _canHitHead;
		struct JMEHFAFIGOB *_hitHeadPattern;
		bool _forceCameraShake;
		struct HIFJNLHKFEE *NADMPJNLGEC;
		struct EMKDPBDJPFA *HHIMIJDIPPE;
		CanBeModifiedBy__Enum FLCCOAEHOJH;
	};

	struct ConfigAttackInfo
	{
		struct ConfigAttackInfo__Class *klass;
		MonitorData *monitor;
		struct ConfigAttackInfo__Fields fields;
	};

	struct Rigidbody__Fields
	{
		struct Component_1__Fields _;
	};

	struct Rigidbody
	{
		struct Rigidbody__Class *klass;
		MonitorData *monitor;
		struct Rigidbody__Fields fields;
	};

	enum class VelocityForceType__Enum : int32_t
	{
		RetreatType = 0x00000000,
		RetreatAirType = 0x00000001,
		RushMoveType = 0x00000002,
		WindZoneType = 0x00000003,
		AirflowType = 0x00000004,
		RiseType = 0x00000005,
		SpeedupType = 0x00000006,
		AirflowAccType = 0x00000007,
		InertiaType = 0x00000008,
		FixedRushMoveType = 0x00000009,
		LightCoreTypeNormal = 0x0000000a,
		LightCoreTypeAccelerate = 0x0000000b,
		GorouZoneType = 0x0000000c,
		UGCDirectedForceType = 0x0000000d,
		TrampolineForceType = 0x0000000e,
		GrapplingHookMoveType = 0x0000000f
	};

	struct MoleMole_ItemModule
	{
		struct ItemModule__Class *klass;
		MonitorData *monitor;
		// struct ItemModule__Fields fields;
	};

	struct LevelSceneElementViewPlugin__VTable
	{
		VirtualInvokeData Equals;
		VirtualInvokeData Finalize;
		VirtualInvokeData GetHashCode;
		VirtualInvokeData ToString;
		VirtualInvokeData get_listenEventValid;
		VirtualInvokeData set_listenEventValid;
		VirtualInvokeData ListenEvent;
		VirtualInvokeData CanHandleEvent;
		VirtualInvokeData get_metaTypeID;
		VirtualInvokeData get_isForceFullTick;
		VirtualInvokeData get_canBeTickedReadonly;
		VirtualInvokeData get_metaTypeID_1;
		VirtualInvokeData Init;
		VirtualInvokeData OnEntityReady;
		VirtualInvokeData Retarget;
		VirtualInvokeData ReInit;
		VirtualInvokeData PostReInit;
		VirtualInvokeData Clear;
		VirtualInvokeData ClearInThread;
		VirtualInvokeData OnEnable;
		VirtualInvokeData OnDisable;
		VirtualInvokeData Tick;
		VirtualInvokeData LateTick;
		VirtualInvokeData Destroy;
		VirtualInvokeData OnEvent;
		VirtualInvokeData OnRemoteEvtBeingHit;
		VirtualInvokeData OnEventResolved;
		VirtualInvokeData ListenEvent_1;
		VirtualInvokeData GetEntity;
	};

	struct LevelSceneElementViewPlugin__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		struct LevelSceneElementViewPlugin__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
		struct LevelSceneElementViewPlugin__VTable vtable;
	};

	struct LevelSceneElementViewPlugin__Fields
	{
		struct BaseComponentPlugin__Fields _;
		bool _triggerElementView;
		float _keepElementViewTime;
		struct ElementView *_elementViewSetting;
		float _transition;
		struct Action *onStartElementView;
		struct Action *onFinishElementView;
	};

	struct LevelSceneElementViewPlugin
	{
		struct LevelSceneElementViewPlugin__Class *klass;
		MonitorData *monitor;
		struct LevelSceneElementViewPlugin__Fields fields;
	};

	struct Nullable_1_Single_
	{
		float value;
		bool has_value;
	};

	struct CameraEntity__Fields
	{
		struct BaseEntity__Fields _;
		bool _KHMCIEEKOKE_k__BackingField;
		struct Camera *_AOBHHGONMME_k__BackingField;
		struct MoleMole_VCStackCamera *_vcStackCamera;
		struct MoleMole_VCCameraCharacterAmbientSensors *_vcSensors;
		bool _KKCBBGNJFOA_k__BackingField;
		float _MFBEFHCONNJ_k__BackingField;
		float _AEMIJJPOBLN_k__BackingField;
		bool _JFJEPKEONHO_k__BackingField;
		float _CKDMDCFIDBL_k__BackingField;
		struct Vector3d_1 _KCGNBELKOFL_k__BackingField;
		void * /*HNGOGENCDGD__Enum*/ _GKAKGCPIPIK_k__BackingField;
	};

	struct CameraEntity
	{
		struct CameraEntity__Class *klass;
		MonitorData *monitor;
		struct CameraEntity__Fields fields;
	};

	struct EvtCrash__Fields
	{
		struct BaseEvent__Fields _;
		float velChange;
		float maxHp;
		struct Vector3 hitPos;
	};

	struct EvtCrash
	{
		struct EvtCrash__Class *klass;
		MonitorData *monitor;
		struct EvtCrash__Fields fields;
	};

	struct BaseMoveSyncPlugin__Fields
	{
		struct BaseComponentPlugin__Fields _;
		struct Proto_MotionInfo__Array *_motion;
		struct MoveSyncTask _syncTask;
		MotionState__Enum _prevMotionState;
		struct MoleMole_VCBaseMove *_ownerMove;
		uint32_t _lod;
		float _lastSendSyncTaskTime;
		int32_t _fixedTickCount;
		int32_t _intervalVelocityCheckCount;
		uint64_t _intervalVelocityCheckBits;
		struct MoveSyncTask _lastSendMoveSyncTask;
		float _intervalTime;
		bool _canIgnoreTickSync;
		bool _reliableSendWhenSameComparablePart;
		float _reliableSendWhenSameComparablePartTime;
		uint32_t _lastSendReliabledPacketSeq;
		struct MoleMole_LCSyncMotion *_lcSyncMotion;
		bool _hasInitializedSyncMove;
		uint64_t _lastHandledTaskTimeStamp;
		uint32_t _lastHandledReliableTaskSeq;
		struct MoveSyncTask tempPeekGetMoveSyncTask;
	};

	struct BaseMoveSyncPlugin
	{
		struct BaseMoveSyncPlugin__Class *klass;
		MonitorData *monitor;
		struct BaseMoveSyncPlugin__Fields fields;
	};

	struct __declspec(align(8)) ADOCDLJKPGF__Fields
	{
		struct Dictionary_2_System_ValueTuple_2_Dictionary_2_System_UInt32_MoleMole_IndexHandleObjectList_1_ *JJHMKFJMIFN;
		struct Dictionary_2_System_UInt32_MoleMole_IndexHandleObjectList_1__2 *EABFBNIMFPP;
		struct Dictionary_2_System_UInt32_Dictionary_2_System_Type_MoleMole_EventManager_ListenerRegistry_ *_runtimeId2ListenerDic;
		struct List_1_MoleMole_BaseEvent_ *_queuedFrameEvents;
		struct List_1_MoleMole_BaseEvent_ *_queuedNextEvents;
		struct List_1_MoleMole_BaseEvent_ *_queuedNextEventsToAdd;
		struct Dictionary_2_System_Type_MoleMole_IndexHandleObjectList_1_ *_evtListeners;
		bool _isStopped;
		struct List_1_System_ValueTuple_5__1 *IEJKHEKFBII;
		int32_t BGHBKPIABOK;
		bool _dispatchPaused;
	};

	struct MoleMole_EventManager
	{
		struct ADOCDLJKPGF__Class *klass;
		MonitorData *monitor;
		struct ADOCDLJKPGF__Fields fields;
	};

	struct ActorAbilityPlugin__Fields
	{
        struct BaseComponentPlugin__Fields _;
        struct Action_3_MoleMole_BaseEntity_MoleMole_Config_AddGlobalValue_MoleMole_ActorAbility_* _addGlobalValueHandlerClosureDelegate;
        struct Action_3_MoleMole_BaseEntity_MoleMole_Config_SetGlobalValue_MoleMole_ActorAbility_* _setGlobalValueHandlerClosureDelegate;
        struct Action_3_MoleMole_BaseEntity_MoleMole_Config_MultiplyGlobalValue_MoleMole_ActorAbility_* _multiplyGlobalValueHandlerClosureDelegate;
        struct Action_4_MoleMole_BaseEntity_MoleMole_Config_SetTargetNumToGlobalValue_MoleMole_ActorAbility_Single_* _setTargetNumToGlobalValueHandlerClosureDelegate;
        struct Action_4_MoleMole_BaseEntity_String_Single_MoleMole_Config_GlobalValueChangeType_* _changeGlobalValueClosureDelegate;
        struct Action_4_KGAOABMEICO_KFJFCJEFANB_POLCMBIAIEC_Single_* DPOGMELHKKP;
        struct Action_4_KGAOABMEICO_DODDOKFKKDK_POLCMBIAIEC_HEPNAPIDAHN_* BJKGHNPLPED;
        struct List_1_MoleMole_MonoEffectProxyHandle_* _effectProxyListCache;
        struct List_1_MoleMole_MonoEffectProxyHandle_* _effectProxyListCacheForChangFollowDampTime;
        struct List_1_UnityEngine_Vector3_* _pushedPosList;
        struct Action_3_KGAOABMEICO_DHOJGAIEEOP_Vector3_* BOGFGPMIHPB;
        struct Action_3_KGAOABMEICO_JGGDENEBHPN_POLCMBIAIEC_* KGOBMJKNKKM;
        struct MoleMole_LCAbility* _owner;
        struct List_1_MoleMole_ActorAbility_* _appliedAbilities;
        struct Dictionary_2_System_UInt32_System_Int32_* _appliedAbilitiesIndex;
        struct Dictionary_2_System_String_MoleMole_ActorAbility_* _appliedAbilitiesDic;
        uint32_t nextValidAbilityID;
        struct List_1_MoleMole_ActorModifier_* _appliedModifiers;
        struct List_1_MoleMole_ActorModifier_* _deadModifiers;
        struct List_1_MoleMole_ActorModifier_* _appliedServerBuffModifiers;
        struct List_1_MoleMole_ActorModifier_* _allAppliedModifiers;
        bool _isTicking;
        struct List_1_MoleMole_ActorAbility_* _tickAbilities;
        struct List_1_MoleMole_ActorAbility_* _addTickAbilities;
        struct List_1_MoleMole_ActorAbility_* _removeTickAbilities;
        struct List_1_MoleMole_ActorModifier_* _tickModifiers;
        struct List_1_MoleMole_ActorModifier_* _addTickModifiers;
        struct List_1_MoleMole_ActorModifier_* _removeTickModifiers;
        struct Dictionary_2_MoleMole_EncryptedString_MoleMole_DynamicActorValue_1_* _dynamicFloatMap;
        bool _isKilled;
        struct MoleMole_LCAbilityElement* lcAbilityElement;
        struct MoleMole_LCAbilityState* lcAbilityState;
        struct MoleMole_TokenManager* _tokenMgr;
        struct Func_3_Single_Object_Boolean_* _hanlderModifierThinkTimerUp;
        struct List_1_Nullable_1_ValueTuple_2_JMGMKCEPMIO_TimerReceiver___* _modifierThinkTimers;
        struct HashSet_1_MoleMole_TimerReceiver_* _modifierThinkTimersAffectedByTimeScale;
        struct HashSet_1_MoleMole_TimerReceiver_* _modifierThinkTimersAffectedByAlive;
        struct Action_1_MoleMole_EvtEntityTimeScaleChange_* _onOwnerTimeScaleChangedCache;
        struct Action_1_MoleMole_EvtEntityAliveChange_* _onOwnerAliveChangedCache;
        bool _isOnEventing;
        struct Dictionary_2_System_Int32_List_1_MoleMole_BaseAbilityMixin_* _onEventMixins;
        struct List_1_ValueTuple_2_FDMNFDPMGGK__Enum_MoleMole_BaseAbilityMixin__* AAIKLAJCHDM;
        bool _isOnEventRemoting;
        struct Dictionary_2_Int32_List_1_MoleMole_BaseAbilityMixin__* _onEventRemoteMixins;
        struct List_1_ValueTuple_2_FDMNFDPMGGK__Enum_MoleMole_BaseAbilityMixin__* DEIDOOAEHNA;
        bool _isOnEventResolveing;
        struct Dictionary_2_Int32_List_1_MoleMole_BaseAbilityMixin__* _onEventResolvedMixins;
        struct List_1_ValueTuple_2_FDMNFDPMGGK__Enum_MoleMole_BaseAbilityMixin__* CJIBBMFLFHB;
        bool _isListenEventing;
        bool IsImmuneDebuff;
        bool _isDuringInitAbility_k__BackingField;
        bool _isDuringChangeAbility_k__BackingField;
        struct Action_1_MoleMole_EvtEntityReadyPost_* _handleServerBuffChangedOnEntityReady;
        struct Dictionary_2_System_UInt32_MoleMole_AvatarDataItem_MoleMole_AvatarDataItem_ServerBuffInfo_* _addSBuffsBeforeEntityReady;
        struct Dictionary_2_System_UInt32_MoleMole_AvatarDataItem_MoleMole_AvatarDataItem_ServerBuffInfo_* _rmvSBuffsBeforeEntityReady;
        struct MoleMole_SpriteLoadProxy* _spriteLoadProxy;
        struct Dictionary_2_System_UInt32_MoleMole_BaseAttachContainer_* _abilityAttachContainers;
        struct Dictionary_2_System_UInt32_MoleMole_BaseAttachContainer_* _modifierAttachContainers;
        struct ClosureList* _onEntityReadyClosureList;
        struct Action_1_MoleMole_EvtEntityReadyPost_* _callOnEntityReadyClosure;
        bool _HNMGNCCGKDI_k__BackingField;
	};

	struct ActorAbilityPlugin
	{
		struct ActorAbilityPlugin__Class *klass;
		MonitorData *monitor;
		struct ActorAbilityPlugin__Fields fields;
	};

	enum class Miscs_ChangeAvatarFailType__Enum : int32_t
	{
		NONE = 0x00000000,
		FAIL_AIM = 0x00000001,
		FAIL_CLIMB = 0x00000002,
		FAIL_FLY = 0x00000003,
		FAIL_JUMP = 0x00000004,
		FAIL_LADDER = 0x00000005,
		FAIL_SWIM = 0x00000006,
		FAIL_IN_PROCESS = 0x00000007,
		FAIL_LEVEL_FORBIDDEN = 0x00000008,
		FAIL_TARGETAVATAR = 0x00000009,
		FAIL_PERFORM = 0x0000000a,
		FAIL_DEAD = 0x0000000b,
		FAIL_COOLDOWN = 0x0000000c,
	};

	struct __declspec(align(8)) MoleMole_CharacterModule__Fields
	{
		struct Dictionary_2_System_UInt32_Dictionary_2_System_Int32_List_1_CFKBGDNLDGP_ *MFEPPBMCAGP;
	};

	enum class MoleMole_Config_JsonClimateType__Enum : int32_t
	{
		Normal = 0x00000000,
		Cold = 0x00000001,
		Hot = 0x00000002,
		ColdMonster = 0x00000003,
		HotMonster = 0x00000004,
		SeaMist = 0x00000005,
		HeroCourse = 0x00000006,
		SeaMistSurrounding = 0x00000007,
		TatariRegion = 0x00000008,
		TransClimate = 0x00000009,
		SeiraiStorm = 0x0000000a,
		TsurumiMist = 0x0000000b,
		TsurumiThunder = 0x0000000c,
		TsurumiRegionalMist = 0x0000000d,
		Count = 0x0000000e,
	};

	struct __declspec(align(8)) DataItem__Fields
	{
		uint32_t _entityId_k__BackingField;
		struct Dictionary_2_MoleMole_SafeUInt32_MoleMole_SafeDouble_ *_cacheNormalPropValueDic;
		struct Dictionary_2_MoleMole_SafeUInt32_MoleMole_SafeFloat_ *_cacheFightPropValueDic;
		bool isToBeRemoved;
		bool _unCacheEntity;
		MoleMole_Config_JsonClimateType__Enum climateType;
		uint32_t climateAreaID;
	};

	struct DataItem
	{
		struct DataItem__Class *klass;
		MonitorData *monitor;
		struct DataItem__Fields fields;
	};

	struct AccountDataItem__Fields
	{
		struct DataItem__Fields _;
		uint32_t accountType;
		uint32_t channelID;
		bool isGuest;
		struct String *accountUid;
		struct String *accountToken;
		uint32_t userId;
		uint32_t regionId;
		struct String *deviceUUID;
		struct String *onlineID;
		struct String *psnID;
		uint32_t nameCardID;
		struct String *token;
		struct String *nickName;
		uint64_t chooseAvatarGuid;
		uint64_t lastChangeAvatarTime;
		uint32_t level;
		uint32_t exp;
		uint32_t maxExp;
		uint32_t fullCost;
		bool isFirstLogin;
		bool isFirstShare;
		uint32_t cookGrade;
		struct Dictionary_2_System_UInt32_CJJDPGJPGJB_ *cookRecipeDic;
		struct List_1_System_UInt32_ *compoundList;
		struct Dictionary_2_System_UInt32_HBAOILFEMEH_ *compoundItemDic;
		struct List_1_System_UInt32_ *rewardLevelList;
		struct Dictionary_2_System_UInt32_System_Int32_ *newCombineDic;
		struct Dictionary_2_System_UInt32_System_Int32_ *newForgeDic;
		uint32_t currForgePoint;
		struct HashSet_1_System_UInt32_ *unlockedCombineSet;
		struct HashSet_1_System_UInt32_ *unlockedForgetSet;
		//struct MBCPHLGJHDJ headPortrait;
		//struct String* signature;
		//struct isShowAvatar birthday;
		//bool GEOGOAJDPBF;
		//struct String* MGDAPDFBKMF;
		//struct List_1_System_UInt32_* showAvatarIdList;
		//struct List_1_System_UInt32_* showNameCardIdList;
		//struct List_1_System_UInt32_* ownedFlyCloakList;
		//struct List_1_System_UInt32_* ownedCostumeList;
		//uint32_t curAvatarEntityID;
		//struct Dictionary_2_UInt32_String_* HHOFPLNCBGM;
	};

	struct AccountDataItem
	{
		struct AccountDataItem__Class *klass;
		MonitorData *monitor;
		struct AccountDataItem__Fields fields;
	};

	struct MoleMole_PlayerModule__Fields
	{
		struct MoleMole_CharacterModule__Fields  _;
		struct AccountDataItem *_accountData_k__BackingField;
		struct PlayerOpenStateData *openState;
		uint32_t curWorldType;
		uint32_t curSceneID;
		struct Config_SceneExcelConfig *_curSceneConfig;
		bool isServerLevelPaused;
		uint32_t extraAbilityId;
		bool extraAbilityEnable;
		uint64_t extraAbilityUseTime;
		float lastSendChangeAvatarTime;
		float lastPressSkillButtonTime;
		float PMAMAHGBLBJ;
		struct List_1_System_ValueTuple_3_ *teamEntityAbilitiesFromServer;
		bool IMCBNAMPBPG;
		bool PNCFBAOIKHB;
		bool IBNOIPGDGAG;
		bool MILPALJGOLD;
		bool PNBHCGNHOFB;
		uint32_t ALCHAOANODE;
		uint32_t FPBJOLBEJGO;
		bool enterSceneFromLogin;
		float _nextLoginReqTime;
		struct Dictionary_2_System_UInt64_System_UInt32_ *_backgroundAvatarRecoverTime;
		struct Google_Protobuf_Collections_MessageMapField_2_System_UInt64_Proto_AvatarExpeditionInfo_ *_currExpeditionInfo;
		struct Proto_AvatarExpeditionAllDataRsp *_currAllDataRsp;
		struct Proto_ExclusiveRuleNotify *_exclusiveRuleNotify;
		struct Action_1_Single_ *LENAIDKELJE;
		void *DDFMMKJJENE;
		void *CHNAOGEHNGB;
		struct Dictionary_2_System_UInt32_System_UInt32_ *HENIBLEKILJ;
		struct List_1_System_UInt64_ *_teamToLoad;
		bool needRecoverAbilities;
		struct List_1_Proto_SceneEntityInfo_ *_needAppearAvatars;
		struct Coroutine *_changeAvatarCoroutine;
		Miscs_ChangeAvatarFailType__Enum _failType;
		uint32_t _sceneOwnerUid;
		struct String *CBTEST_TOOL_PATH;
		struct String *WATER_MASK_PATH;
		struct Dictionary_2_System_UInt32_System_UInt32_ *_openstateDic;
		float _satiationCriticalValue;
		float _satiationRecoverySpeed;
		uint32_t _nextRecoveryTimestampOfResin;
		struct List_1_System_UInt32_ *_buyResinCost;
		uint32_t _dailyBoughtCountOfResin;
		bool _resinParamsParsed;
		uint32_t _resinTotalLimit;
		uint32_t _autoRecoveryResinLimit;
		uint32_t _resinAutoRecoverySpeed;
		uint32_t _resinCountPerPurchase;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_FriendBrief_ *_tempFriendBriefListInGame;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_FriendBrief_ *_tempFriendBriefListPSN;
		uint64_t _lastGetPlayerFriendListTime;
		struct Proto_AntiAddictNotify *_antiAddictNotify;
		struct GeneralDialogContext *KIEGHJDFLFD;
	};

	struct MoleMole_PlayerModule
	{
		struct PlayerModule__Class *klass;
		MonitorData *monitor;
		struct MoleMole_PlayerModule__Fields fields;
	};

	enum class MapManager_FEDPCJIHAJJ__Enum : int32_t
	{
		None = 0x00000000,
		Morning = 0x00000001,
		Day = 0x00000002,
		Afternoon = 0x00000003,
		Night = 0x00000004,
		BadWeather = 0x00000005,
	};

	struct Nullable_1_MoleMole_AsyncJob_
	{
		struct AsyncJob value;
		bool has_value;
	};

	struct __declspec(align(8)) MHCEDJLGNMG__Fields
	{
		bool smthg;
		struct GameObject *mapObj;
		struct MonoLevelMapUI *monoLevelMapUI;
		uint32_t _mapContainerHandle;
		uint32_t playerSceneID;
		uint32_t mapSceneID;
		struct SceneScriptData *_sceneDataInMap;
		struct MapScriptData *mapData;
		struct String *_currMapPrefabPath;
		struct Nullable_1_MoleMole_AsyncJob_ IPADPFPPDJI;
		bool _forceCurrentScene;
		uint32_t _mapSceneIDSelected;
		bool DebugNewmap;
		struct String *currMapString;
		struct RectTransform *currParent;
		struct GameObject *mapGameObjectInst;
		uint32_t _mapImageHandle;
		struct MonoLevelMap *levelMap;
		float mainPageCheckDistance;
		MapManager_FEDPCJIHAJJ__Enum _currState;
		bool _hasSignal;
		struct Vector3 _signalPos;
		float _distanceThreshold;
		uint32_t _id;
		bool CHKBLNNDFDH;
		struct Dictionary_2_System_UInt32_List_1_CCHDCNEBLGP_ *KKDHHBEFNNF;
		struct List_1_System_String_ *EENBABIJFKD;
		struct List_1_System_String_ *FDFHCABDDFE;
		bool NMJJKJPPIGC;
	};
	struct __declspec(align(8)) MoleMole_MapManager__Fields
	{
		bool GCNMOPKPIMF; // 0x10
		struct GameObject *mapObj; // 0x18
		struct MonoLevelMapUI *monoLevelMapUI; // 0x20
		uint32_t _mapContainerHandle; // 0x28
		uint32_t playerSceneID; // 0x2C
		uint32_t mapSceneID; // 0x30
		struct SceneScriptData *_sceneDataInMap; // 0x38
		struct MapScriptData *mapData; // 0x40
		struct String *_currMapPrefabPath; // 0x48
		struct Nullable_1_MoleMole_AsyncJob_ BKMDLHJBOMF; // 0x50
		struct String *currMapString; // 0x68
		struct RectTransform *currParent; // 0x70
		struct GameObject *mapGameObjectInst; // 0x78
		uint32_t _mapImageHandle; // 0x80
		struct MonoLevelMap *levelMap; // 0x88
		float mainPageCheckDistance; // 0x90
		int32_t _currState; // 0x94
		bool _hasSignalv; // 0x98
		struct Vector3 _signalPos; // 0x9C
		float _distanceThreshold; // 0xA8
		uint32_t _id; // 0xAC
		bool FLDAFADKOJI; // 0xB0
		struct GameObject *FPKDGCJHAGM; // 0xB8
		uint32_t LPOBPKLKGGK; // 0xC0
		struct List_1_OOMOGPMHEAO_ *HAEOLGFHPEN; // 0xC8
		struct List_1_System_String_ *EIJHGKFFDHO; // 0xD0
		struct Dictionary_2_System_String_PILLJDIDHIJ_ *_polygonLimitRegions; // 0xD8
		bool _isCurActivityLimitRegion; // 0xE0
		bool _isCurHomeworldLimitRegion; // 0xE1
		struct Coroutine *_curDestroyLimitRegionCoroutine; // 0xE8
		float KJLNBKEIFCJ; // 0xF0
		struct Vector3 CIPDJNHBFPB; // 0xF4
		struct List_1_System_UInt32_ *OBMINJCEAJL; // 0x100
		struct Dictionary_2_System_UInt32_List_1_LPKPLIFIBGA_ *JAKFLGOOBMP; // 0x108
		bool OJNGNBKMMFI; // 0x110
		struct List_1_System_String_ *OJBKAGDIEIK; // 0x118
		struct List_1_System_String_ *NFGGLJBPIBO; // 0x120
		struct Dictionary_2_System_String_System_UInt32_ *AIMGKHPHKMP; // 0x128
		struct Dictionary_2_System_UInt32_System_UInt32_ *NCOMNKCALBL; // 0x130
	};

	struct MoleMole_MapManager
	{
		struct MapManager__Class *klass;
		MonitorData *monitor;
		struct MoleMole_MapManager__Fields fields;
	};

	struct GadgetEntity__Fields
	{
		struct BaseEntity__Fields _;
		uint32_t groupId;
		uint32_t markFlag;
		uint32_t propOwnerRuntimeID;
		bool hasSyncCreate;
		bool _lifeByOwnerLife;
		bool _registedLifeToOwner;
		uint32_t _ownerRuntimeID;
		struct Action *_ownerReadyAction;
		uint32_t _originOwnerRuntimeID;
		struct List_1_System_UInt32_ *_childrenRuntimeIds;
		struct List_1_System_String_ *_tags;
		/*
		struct ANPOFFEGJHG_NGHFEJMFKFL EPLELPAMJBC;
		bool KCCHJICIHOH;
		struct CDIKPMFDALH* AALEGLLIIMC;
		struct LIILPNJKBJI* CFNHGPAJECO;
		bool NKJDGPLLBBD;
		*/
	};

	struct GadgetEntity
	{
		struct GadgetEntity__Class *klass;
		MonitorData *monitor;
		struct GadgetEntity__Fields fields;
	};

	struct BaseComponent__Array
	{
		struct BaseComponent__Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct BaseComponent *vector[32];
	};

	struct LCChestPlugin__Class
	{
		Il2CppClass_0 _0;
	};

	struct BaseComponent__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		struct BaseComponent__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
		// struct BaseComponent__VTable vtable;
	};


	struct BaseComponent
	{
		struct BaseComponent__Class *klass;
		MonitorData *monitor;
		struct BaseComponent__Fields fields;
	};

	struct __declspec(align(8)) List_1_MoleMole_BaseComponent___Fields
	{
		struct BaseComponent__Array *_items;
		int32_t _size;
		int32_t _version;
	};

	struct List_1_MoleMole_BaseComponent_
	{
		struct List_1_MoleMole_BaseComponent___Class *klass;
		MonitorData *monitor;
		struct List_1_MoleMole_BaseComponent___Fields fields;
	};

	enum class HOILKKLDNMA_LFAKNILHEEN__Enum : int32_t
	{
		None = 0x00000000,
		TrifleItem = 0x0000000c,
		GatherGadget = 0x0000000d,
		Worktop = 0x0000000e,
		ClientGadget = 0x0000000f,
		Weather = 0x00000011,
		AbilityGadget = 0x00000012,
		StatueGadget = 0x00000013,
		BossChest = 0x00000014,
		BlossomChest = 0x00000029,
		MpPlayReward = 0x0000002a,
		GeneralReward = 0x0000002b,
		OfferingInfo = 0x0000002c,
		FoundationInfo = 0x0000002d,
		VehicleInfo = 0x0000002e,
		ShellInfo = 0x0000002f,
		ScreenInfo = 0x00000030,
		FishPoolInfo = 0x0000003b,
		CustomGadgetTreeInfo = 0x0000003c,
		RoguelikeGadgetInfo = 0x0000003d,
	};

	struct WeeklyBossResinDiscountInfoStruct
	{
		uint32_t discountNum;
		uint32_t discountNumLimit;
		uint32_t resinCost;
		uint32_t originalResinCost;
	};


	struct GadgetDataItem_CBGKCHACFPE
	{
		uint32_t resinCost;
		uint32_t configId;
		uint32_t lifeTime;
		uint32_t blossomRefreshType;
		uint32_t blossomRefreshId;
		struct List_1_System_UInt32_ *authorisedUIDList;
		struct List_1_System_UInt32_ *openableUID;
		HOILKKLDNMA_LFAKNILHEEN__Enum type;
		struct WeeklyBossResinDiscountInfoStruct weeklyBossResinDiscountInfo;
	};

	struct Nullable_1_MoleMole_GadgetDataItem_CBGKCHACFPE_
	{
		struct GadgetDataItem_CBGKCHACFPE value;
		bool has_value;
	};

	enum class GadgetState__Enum : int32_t
	{
		Default = 0x00000000,
		GatherDrop = 0x00000001,
		ChestLocked = 0x00000065,
		ChestOpened = 0x00000066,
		ChestTrap = 0x00000067,
		ChestBramble = 0x00000068,
		ChestFrozen = 0x00000069,
		ChestRock = 0x0000006a,
		ExcitedState = 0x000000C8,
		GearStart = 0x000000c9,
		GearStop = 0x000000ca,
		GearAction1 = 0x000000cb,
		GearAction2 = 0x000000cc,
		DestroyState = 0x0000012C,
		CrystalResonate1 = 0x0000012d,
		CrystalResonate2 = 0x0000012e,
		CrystalExplode = 0x0000012f,
		CrystalDrain = 0x00000130,
		StatueActive = 0x00000191,
		Action01 = 0x00000385,
		Action02 = 0x00000386,
		Action03 = 0x00000387
	};

	struct __declspec(align(8)) CharacterModule__Fields
	{
		struct Dictionary_2_UInt32_Dictionary_2_Int32_List_1_ACKDIFHFDFH *ABAFJGKPOKL;
	};

	struct GadgetModule__Fields
	{
		struct CharacterModule__Fields _;
		struct Action_1_Google_Protobuf_MessageBase *gadgetStateNotifyHandler;
		struct List_1_HMFJEHBIDOC *_costItemsTemp;
		struct Action_1_Google_Protobuf_MessageBase *JPACBAMHGJA;
		struct Dictionary_2_UInt32_UInt32 *gadgetChainLevelMap;
		struct Dictionary_2_UInt32_BBBPBOJOJNG_CMAOLGMPBLD *gadgetIndicatorDic;
		uint32_t _FHJJBLPDIJO_k__BackingField;
		uint32_t _LCNMGLNMKKN_k__BackingField;
		uint32_t _IJFNNAGCOJG_k__BackingField;
		struct MNNGLHDICPB *_LJBFCLJCDEC_k__BackingField;
		uint32_t _FNPOHLBBDCN_k__BackingField;
		struct List_1_UInt32 *_HOMLOPLPIBB_k__BackingField;
		ElementType__Enum _elementType_k__BackingField;
		uint32_t _CPLEODDNLEK_k__BackingField;
		uint32_t _ILKHNJDDAJC_k__BackingField;
		uint32_t _JDHIABIFHMN_k__BackingField;
		uint32_t _NEIMOFMEAPJ_k__BackingField;
		struct BELDGBAIBGF_BKJDCJEJMOP *_JGPBKHKEMDF_k__BackingField;
		struct Dictionary_2_UInt32_GadgetModule_LIJDIIFADCC *BGBOPADECHP;
	};

	struct GadgetModule
	{
		struct GadgetModule__Class *klass;
		MonitorData *monitor;
		struct GadgetModule__Fields fields;
	};

	struct __declspec(align(8)) LevelModule__Fields
	{
		struct FCIDDGCLKOA *_GFPBPGMJELO_k__BackingField;
		uint32_t _worldLevel;
		uint64_t _cdOverTime;
		bool _ICNNLIAEKFG_k__BackingField;
		bool isDungeonSettled;
		struct List_1_Double__Array **NHKEOIDBCFH;
		struct Action_1_Google_Protobuf_MessageBase *_entityTagChangeNotifyHandler;
		struct Action_1_Google_Protobuf_MessageBase *entityFightPropNotifyHandler;
		struct Action_1_Google_Protobuf_MessageBase *entityFightPropUpdateNotifyHandler;
		struct Action_1_Google_Protobuf_MessageBase *entityPropNotifyHandler;
		struct Coroutine *loadEntityCoroutine;
		struct Action_1_Google_Protobuf_MessageBase *HNDIGCBPDMB;
		struct Action_2_Google_Protobuf_MessageBase_ValueTuple_4_Int32_Proto_VisionType_UInt32_UInt32 *entityAppearInLevelBy2ParamHandler;
		struct Action_2_Google_Protobuf_MessageBase_ValueTuple_4_UInt32_Proto_VisionType_UInt32_UInt32 *onSceneEntityDisappearBy2ParamHandler;
		struct Action_1_Google_Protobuf_MessageBase *entityFightPropChangeReasonNotifyHandler;
		struct Action_2_Google_Protobuf_MessageBase_UInt32 *lifeStateChangeNotifyHandler;
		uint64_t _forceDragTime;
		bool _inServerCutScene;
		struct List_1_LevelModule_EntityAppearWaitForOwner *_entitiesWaitForOwner;
		struct List_1_UInt32 *NJLGIPEKAMN;
		struct List_1_UInt32 *DEJONMIDFGD;
		struct Dictionary_2_BHLCIANBHPP_LODIGGIOLCC *HMDLPDMCFAH;
		struct IINFDNCMDLN *OOIHFLGMNOJ;
	};

	struct LevelModule
	{
		struct LevelModule__Class *klass;
		MonitorData *monitor;
		struct LevelModule__Fields fields;
	};

	struct Google_Protobuf_MessageBase
	{
		struct Google_Protobuf_MessageBase__Class *klass;
		MonitorData *monitor;
		struct Google_Protobuf_MessageBase__Fields fields;
	};

	enum class Proto_VisionType__Enum : int32_t
	{
		VisionNone = 0x00000000,
		VisionMeet = 0x00000001,
		VisionReborn = 0x00000002,
		VisionReplace = 0x00000003,
		VisionWaypointReborn = 0x00000004,
		VisionMiss = 0x00000005,
		VisionDie = 0x00000006,
		VisionGatherEscape = 0x00000007,
		VisionRefresh = 0x00000008,
		VisionTransport = 0x00000009,
		VisionReplaceDie = 0x0000000a,
		VisionReplaceNoNotify = 0x0000000b,
		VisionBorn = 0x0000000c,
		VisionPickup = 0x0000000d,
		VisionRemove = 0x0000000e,
		VisionChangeCostume = 0x0000000f,
		VisionFishRefresh = 0x00000010,
		VisionFishBigShock = 0x00000011,
		VisionFishQteSucc = 0x00000012,
		VisionCaptureDisappear = 0x00000013
	};

	enum class Proto_ProtEntityType__Enum : int32_t
	{
		ProtEntityNone = 0x00000000,
		ProtEntityAvatar = 0x00000001,
		ProtEntityMonster = 0x00000002,
		ProtEntityNpc = 0x00000003,
		ProtEntityGadget = 0x00000004,
		ProtEntityRegion = 0x00000005,
		ProtEntityWeapon = 0x00000006,
		ProtEntityWeather = 0x00000007,
		ProtEntityScene = 0x00000008,
		ProtEntityTeam = 0x00000009,
		ProtEntityMassiveEntity = 0x0000000a,
		ProtEntityMpLevel = 0x0000000b,
		ProtEntityPlayTeamEntity = 0x0000000c,
		ProtEntityEyePoint = 0x0000000d,
		ProtEntityMax = 0x0000000e,
	};

	enum class Proto_SceneEntityInfo_Proto_SceneEntityInfo_EntityOneofCase__Enum : int32_t
	{
		None = 0x00000000,
		Avatar = 0x0000000a,
		Monster = 0x0000000b,
		Npc = 0x0000000c,
		Gadget = 0x0000000d,
	};

	enum class Proto_MonsterBornType__Enum : int32_t
	{
		MonsterBornNone = 0x00000000,
		MonsterBornDefault = 0x00000001,
		MonsterBornRandom = 0x00000002,
	};

	enum class Proto_SceneMonsterInfo_Proto_SceneMonsterInfo_ContentOneofCase__Enum : int32_t
	{
		None = 0x00000000,
		FishInfo = 0x00000032,
	};

	enum class Proto_GadgetBornType__Enum : int32_t
	{
		GadgetBornNone = 0x00000000,
		GadgetBornInAir = 0x00000001,
		GadgetBornPlayer = 0x00000002,
		GadgetBornMonsterHit = 0x00000003,
		GadgetBornMonsterDie = 0x00000004,
		GadgetBornGadget = 0x00000005,
		GadgetBornGround = 0x00000006,
	};

	enum class Proto_SceneGadgetInfo_ContentOneofCase__Enum : int32_t
	{
		None = 0x00000000,
		TrifleItem = 0x0000000c,
		GatherGadget = 0x0000000d,
		Worktop = 0x0000000e,
		ClientGadget = 0x0000000f,
		Weather = 0x00000011,
		AbilityGadget = 0x00000012,
		StatueGadget = 0x00000013,
		BossChest = 0x00000014,
		BlossomChest = 0x00000029,
		MpPlayReward = 0x0000002a,
		GeneralReward = 0x0000002b,
		OfferingInfo = 0x0000002c,
		FoundationInfo = 0x0000002d,
		VehicleInfo = 0x0000002e,
		ShellInfo = 0x0000002f,
		ScreenInfo = 0x00000030,
		FishPoolInfo = 0x0000003b,
		CustomGadgetTreeInfo = 0x0000003c,
		RoguelikeGadgetInfo = 0x0000003d,
	};

	enum class GadgetType_Enum : int32_t
	{
		GADGET_NONE = 0,
		GADGET_WORLD_CHECT = 1,
		GADGET_DUNGEON_SECRET_CHEST = 2,
		GADGET_DUNGEON_PASS_CHEST = 3
	};

	struct Proto_GadgetStateNotify__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		uint32_t gadgetEntityId_;
		uint32_t gadgetState_;
		bool isEnableInteract_;
	};

	struct Proto_GadgetStateNotify
	{
		struct Proto_GadgetStateNotify__Class *klass;
		MonitorData *monitor;
		struct Proto_GadgetStateNotify__Fields fields;
	};

    struct Proto_EntityAuthorityInfo__Fields
    {
        struct Google_Protobuf_MessageBase__Fields _;
        struct Proto_AbilitySyncStateInfo* abilityInfo_;
        struct Proto_EntityRendererChangedInfo* rendererChangedInfo_;
        struct Proto_SceneEntityAiInfo* aiInfo_;
        struct Proto_Vector* bornPos_;
        struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AnimatorParameterValueInfoPair_* poseParaList_;
        struct Proto_EntityClientExtraInfo* clientExtraInfo_;
    };

    struct Proto_EntityAuthorityInfo
    {
        struct Proto_EntityAuthorityInfo__Class* klass;
        MonitorData* monitor;
        struct Proto_EntityAuthorityInfo__Fields fields;
    };

	struct Proto_SceneEntityInfo__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		Proto_ProtEntityType__Enum entityType_;
		uint32_t entityId_;
		struct String *name_;
		struct MotionInfo *motionInfo_;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_PropPair_ *propList_;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_FightPropPair_ *fightPropList_;
		uint32_t lifeState_;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AnimatorParameterValueInfoPair_ *animatorParaList_;
		uint32_t lastMoveSceneTimeMs_;
		uint32_t lastMoveReliableSeq_;
		struct Proto_EntityClientData *entityClientData_;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_EntityEnvironmentInfo_ *entityEnvironmentInfoList_;
		struct Proto_EntityAuthorityInfo *entityAuthorityInfo_;
		struct Google_Protobuf_Collections_RepeatedPrimitiveField_1_System_String_ *tagList_;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_ServerBuff_ *serverBuffList_;
		struct Object *entity_;
		Proto_SceneEntityInfo_Proto_SceneEntityInfo_EntityOneofCase__Enum entityCase_;
	};

	struct Proto_SceneEntityInfo
	{
		struct Proto_SceneEntityInfo__Class *klass;
		MonitorData *monitor;
		struct Proto_SceneEntityInfo__Fields fields;
	};

	struct KeyValuePair_2_System_UInt32_System_UInt32_
	{
		uint32_t key;
		uint32_t value;
	};

	struct __declspec(align(8)) DoublyList_1_T_ListNode_System_Collections_Generic_KeyValuePair_2___Fields
	{
		bool _isValid;
		struct DoublyList_1_T_ListNode_System_Collections_Generic_KeyValuePair_2_ *prev;
		struct DoublyList_1_T_ListNode_System_Collections_Generic_KeyValuePair_2_ *next;
		struct KeyValuePair_2_System_UInt32_System_UInt32_ data;
		struct DoublyList_1_System_Collections_Generic_KeyValuePair_2_ *list;
	};

	struct DoublyList_1_T_ListNode_System_Collections_Generic_KeyValuePair_2_
	{
		struct DoublyList_1_T_ListNode_System_Collections_Generic_KeyValuePair_2___Class *klass;
		MonitorData *monitor;
		struct DoublyList_1_T_ListNode_System_Collections_Generic_KeyValuePair_2___Fields fields;
	};

	struct __declspec(align(8)) DoublyList_1_System_Collections_Generic_KeyValuePair_2___Fields
	{
		struct DoublyList_1_T_ListNode_System_Collections_Generic_KeyValuePair_2_ *_head;
		int32_t _count;
		uint32_t _enumeratorIndex;
	};

	struct DoublyList_1_T_ListNode_System_Collections_Generic_KeyValuePair_2___Array
	{
		struct DoublyList_1_T_ListNode_System_Collections_Generic_KeyValuePair_2___Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct DoublyList_1_T_ListNode_System_Collections_Generic_KeyValuePair_2_ *vector[32];
	};

    struct __declspec(align(8)) DoublyList_1_T_ListNode_System_Collections_Generic_KeyValuePair_2__2__Fields
    {
		bool _isValid;
		struct DoublyList_1_T_ListNode_System_Collections_Generic_KeyValuePair_2__2 *prev;
		struct DoublyList_1_T_ListNode_System_Collections_Generic_KeyValuePair_2__2 *next;
		struct KeyValuePair_2_System_UInt32_System_UInt32_ data;
		struct DoublyList_1_System_Collections_Generic_KeyValuePair_2__1 *list;
	};

    struct DoublyList_1_T_ListNode_System_Collections_Generic_KeyValuePair_2__2
    {
		struct DoublyList_1_T_ListNode_System_Collections_Generic_KeyValuePair_2__2__Class *klass;
		MonitorData *monitor;
		struct DoublyList_1_T_ListNode_System_Collections_Generic_KeyValuePair_2__2__Fields fields;
	};

    struct Dictionary_2_TKey_TValue_Entry_System_UInt32_MoleMole_DoublyList_1_ListNode__1
    {
		int32_t hashCode;
		int32_t next;
		uint32_t key;
		struct DoublyList_1_T_ListNode_System_Collections_Generic_KeyValuePair_2__2 *value;
	};

    struct Dictionary_2_TKey_TValue_Entry_System_UInt32_MoleMole_DoublyList_1_ListNode__1__Array
    {
		struct Dictionary_2_TKey_TValue_Entry_System_UInt32_MoleMole_DoublyList_1_ListNode__1__Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct Dictionary_2_TKey_TValue_Entry_System_UInt32_MoleMole_DoublyList_1_ListNode__1 vector[32];
	};

	struct __declspec(align(8)) Dictionary_2_System_UInt32_MoleMole_DoublyList_1_ListNode___Fields
	{
		struct Int32__Array *buckets;
		struct Dictionary_2_TKey_TValue_Entry_System_UInt32_MoleMole_DoublyList_1_ListNode__1__Array *entries;
		int32_t count;
		int32_t version;
		int32_t freeList;
		int32_t freeCount;
		struct IEqualityComparer_1_System_UInt32_ *comparer;
		struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_MoleMole_DoublyList_1_ListNode__1 *keys;
		struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_MoleMole_DoublyList_1_ListNode__1 *values;
		struct Object *_syncRoot;
	};

	struct Dictionary_2_System_UInt32_MoleMole_DoublyList_1_ListNode_
	{
		struct Dictionary_2_System_UInt32_MoleMole_DoublyList_1_ListNode___Class *klass;
		MonitorData *monitor;
		struct Dictionary_2_System_UInt32_MoleMole_DoublyList_1_ListNode___Fields fields;
	};

	struct DoublyList_1_System_Collections_Generic_KeyValuePair_2_
	{
		struct DoublyList_1_System_Collections_Generic_KeyValuePair_2___Class *klass;
		MonitorData *monitor;
		struct DoublyList_1_System_Collections_Generic_KeyValuePair_2___Fields fields;
	};

	struct __declspec(align(8)) Google_Protobuf_Collections_MapField_2_System_UInt32_System_UInt32___Fields
	{
		struct Dictionary_2_System_UInt32_MoleMole_DoublyList_1_ListNode_ *map;
		struct DoublyList_1_System_Collections_Generic_KeyValuePair_2_ *list;
	};

	struct Google_Protobuf_Collections_MapField_2_System_UInt32_System_UInt32_
	{
		struct Google_Protobuf_Collections_MapField_2_System_UInt32_System_UInt32___Class *klass;
		MonitorData *monitor;
		struct Google_Protobuf_Collections_MapField_2_System_UInt32_System_UInt32___Fields fields;
	};

	struct __declspec(align(8)) Google_Protobuf_Collections_RepeatedPrimitiveField_1_System_UInt32___Fields
	{
		struct UInt32__Array *_array;
		int32_t count;
	};

	struct Google_Protobuf_Collections_RepeatedPrimitiveField_1_System_UInt32_
	{
		struct Google_Protobuf_Collections_RepeatedPrimitiveField_1_System_UInt32___Class *klass;
		MonitorData *monitor;
		struct Google_Protobuf_Collections_RepeatedPrimitiveField_1_System_UInt32___Fields fields;
	};

    struct Proto_AvatarExcelInfo__Fields
    {
        struct Google_Protobuf_MessageBase__Fields _;
        uint64_t prefabPathHash_;
        uint64_t prefabPathRemoteHash_;
        uint64_t controllerPathHash_;
        uint64_t controllerPathRemoteHash_;
        uint64_t combatConfigHash_;
    };

    struct Proto_AvatarExcelInfo
    {
        struct Proto_AvatarExcelInfo__Class* klass;
        MonitorData* monitor;
        struct Proto_AvatarExcelInfo__Fields fields;
    };

	struct Proto_SceneAvatarInfo__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		uint32_t uid_;
		uint32_t avatarId_;
		uint64_t guid_;
		uint32_t peerId_;
		struct Google_Protobuf_Collections_RepeatedPrimitiveField_1_System_UInt32_ *equipIdList_;
		uint32_t skillDepotId_;
		struct Google_Protobuf_Collections_RepeatedPrimitiveField_1_System_UInt32_ *talentIdList_;
		struct Proto_SceneWeaponInfo *weapon_;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_SceneReliquaryInfo_ *reliquaryList_;
		uint32_t coreProudSkillLevel_;
		struct Google_Protobuf_Collections_RepeatedPrimitiveField_1_System_UInt32_ *inherentProudSkillList_;
		struct Google_Protobuf_Collections_MapField_2_System_UInt32_System_UInt32_ *skillLevelMap_;
		struct Google_Protobuf_Collections_MapField_2_System_UInt32_System_UInt32_ *proudSkillExtraLevelMap_;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_ServerBuff_ *serverBuffList_;
		struct Google_Protobuf_Collections_RepeatedPrimitiveField_1_System_UInt32_ *teamResonanceList_;
		uint32_t wearingFlycloakId_;
		uint32_t bornTime_;
		uint32_t costumeId_;
		struct Proto_CurVehicleInfo *curVehicleInfo_;
		struct Proto_AvatarExcelInfo *excelInfo_;
		uint32_t animHash_;
	};

	struct Proto_SceneAvatarInfo
	{
		struct Proto_SceneAvatarInfo__Class *klass;
		MonitorData *monitor;
		struct Proto_SceneAvatarInfo__Fields fields;
	};

	struct Proto_SceneMonsterInfo__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		uint32_t monsterId_;
		uint32_t groupId_;
		uint32_t configId_;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_SceneWeaponInfo_ *weaponList_;
		uint32_t authorityPeerId_;
		struct Google_Protobuf_Collections_RepeatedPrimitiveField_1_System_UInt32_ *affixList_;
		bool isElite_;
		uint32_t ownerEntityId_;
		uint32_t summonedTag_;
		struct Google_Protobuf_Collections_MapField_2_System_UInt32_System_UInt32_ *summonTagMap_;
		uint32_t poseId_;
		Proto_MonsterBornType__Enum bornType_;
		uint32_t blockId_;
		uint32_t markFlag_;
		uint32_t titleId_;
		uint32_t specialNameId_;
		uint32_t attackTargetId_;
		struct Proto_MonsterRoute *monsterRoute_;
		uint32_t aiConfigId_;
		uint32_t levelRouteId_;
		uint32_t initPoseId_;
		bool GBADIACMCAJ;
		uint32_t BEFNCKKBBDN;
		struct Object *content_;
		Proto_SceneMonsterInfo_Proto_SceneMonsterInfo_ContentOneofCase__Enum contentCase_;
	};

	struct Proto_SceneMonsterInfo
	{
		struct Proto_SceneMonsterInfo__Class *klass;
		MonitorData *monitor;
		struct Proto_SceneMonsterInfo__Fields fields;
	};

	struct Proto_SceneNpcInfo__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		uint32_t npcId_;
		uint32_t roomId_;
		uint32_t parentQuestId_;
		uint32_t blockId_;
	};

	struct Proto_SceneNpcInfo
	{
		struct Proto_SceneNpcInfo__Class *klass;
		MonitorData *monitor;
		struct Proto_SceneNpcInfo__Fields fields;
	};

	struct Proto_SceneGadgetInfo__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		uint32_t gadgetId_;
		uint32_t groupId_;
		uint32_t configId_;
		uint32_t ownerEntityId_;
		Proto_GadgetBornType__Enum bornType_;
		uint32_t gadgetState_;
		uint32_t gadgetType_;
		bool isShowCutscene_;
		uint32_t authorityPeerId_;
		bool isEnableInteract_;
		uint32_t interactId_;
		uint32_t markFlag_;
		uint32_t propOwnerEntityId_;
		struct Proto_PlatformInfo *platform_;
		struct Google_Protobuf_Collections_RepeatedPrimitiveField_1_System_UInt32_ *interactUidList_;
		uint32_t draftId_;
		uint32_t gadgetTalkState_;
		struct Proto_GadgetPlayInfo *playInfo_;
		struct Object *content_;
		Proto_SceneGadgetInfo_ContentOneofCase__Enum contentCase_;
	};

	struct Proto_SceneGadgetInfo
	{
		struct Proto_SceneGadgetInfo__Class *klass;
		MonitorData *monitor;
		struct Proto_SceneGadgetInfo__Fields fields;
	};

	struct __declspec(align(8)) List_1_Proto_SceneEntityInfo___Fields
	{
		struct Proto_SceneEntityInfo__Array *_items;
		int32_t _size;
		int32_t _version;
	};

	struct List_1_Proto_SceneEntityInfo_
	{
		struct List_1_Proto_SceneEntityInfo___Class *klass;
		MonitorData *monitor;
		struct List_1_Proto_SceneEntityInfo___Fields fields;
	};

	struct Proto_SceneEntityInfo__Array
	{
		struct Proto_SceneEntityInfo__Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct Proto_SceneEntityInfo *vector[32];
	};

	struct __declspec(align(8)) Google_Protobuf_Collections_RepeatedMessageField_1_Proto_SceneEntityInfo___Fields
	{
		struct List_1_Proto_SceneEntityInfo_ *values;
		bool _isInPool;
		int32_t _count;
	};

	struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_SceneEntityInfo_
	{
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_SceneEntityInfo___Class *klass;
		MonitorData *monitor;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_SceneEntityInfo___Fields fields;
	};

	struct Proto_SceneEntityAppearNotify__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		Proto_VisionType__Enum appearType_;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_SceneEntityInfo_ *entityList_;
		uint32_t appearEnityId_;
	};

	struct Proto_SceneEntityAppearNotify
	{
		struct Proto_SceneEntityAppearNotify__Class *klass;
		MonitorData *monitor;
		struct Proto_SceneEntityAppearNotify__Fields fields;
	};

	enum class AGGAOKGNDPF__Enum : int32_t
	{
		GadgetBornNone = 0x00000000,
		GadgetBornInAir = 0x00000001,
		GadgetBornPlayer = 0x00000002,
		GadgetBornMonsterHit = 0x00000003,
		GadgetBornMonsterDie = 0x00000004,
		GadgetBornGadget = 0x00000005,
		GadgetBornGround = 0x00000006
	};

	struct __declspec(align(8)) AALJCABGFEP__Fields
	{
		uint32_t _entityId_k__BackingField;
		struct Dictionary_2_KFEENBPGJJA_JMOFLAAALOE_ *_cacheNormalPropValueDic;
		struct Dictionary_2_KFEENBPGJJA_IPEPPEAIJEC_ *_cacheFightPropValueDic;
		bool _isToBeRemoved;
		bool _unCacheEntity;
		int32_t climateType;
		uint32_t climateAreaID;
	};

	struct LCIKPOFEIAP_IOJMGCFMHAN
	{
		struct DNPMEDDBDLJ *GLJPNCEBHIO;
	};

	struct Nullable_1_LCIKPOFEIAP_IOJMGCFMHAN_
	{
		struct LCIKPOFEIAP_IOJMGCFMHAN value;
		bool has_value;
	};

	struct LCIKPOFEIAP__Fields
	{
		struct AALJCABGFEP__Fields _;
		uint32_t configId;
		uint32_t mapInstId;
		uint32_t groupId;
		uint32_t markFlag;
		AGGAOKGNDPF__Enum bornType;
		struct DFMGHHMLIJK *item;
		uint32_t gatherItemId;
		bool isForbitGuest;
		bool isShowCutscene;
		uint32_t gadgetState;
		bool isEnableInteract;
		uint32_t authorityPeerId;
		struct LHANLGFNKOH *platformInfo;
		uint32_t interactId;
		bool isOpenedStatue;
		struct NKLKOKAKOJB *entityClientData;
		uint32_t mpPlayId;
		uint32_t draftId;
		uint32_t chainID;
		struct List_1_System_UInt32_ *optionList;
		struct List_1_System_UInt32_ *interactUids;
		struct Nullable_1_MoleMole_GadgetDataItem_CBGKCHACFPE_ _openData;
		struct Nullable_1_LCIKPOFEIAP_IOJMGCFMHAN_ _foundationData;
		uint32_t liveId;
		uint32_t vodInteeId;
		struct UInt64__Array *_avatarsInVehicle;
		uint32_t ownerUid;
		uint32_t VEHICLE_SEAT_MAX;
		float cur_stamina;
		struct BIMFGAMJHFJ *fishPoolInfo;
		uint32_t roguelikeCellId;
		uint32_t roguelikeCellType;
		uint32_t roguelikeCellState;
	};

	struct GadgetDataItem
	{
		struct GadgetDataItem__Class *klass;
		MonitorData *monitor;
		struct LCIKPOFEIAP__Fields fields;
	};

	struct OMBJBEDFEJP__Fields
	{
		struct LCBase__Fields _;
		struct ConfigGadgetMisc *config;
		GadgetState__Enum curGadgetState;
		struct GadgetDataItem *_dataItem;
		struct LCPose *_lcPos;
		struct LCChestPlugin *_chestPlugin;
	};

	struct LCGadgetMisc
	{
		struct LCGadgetMisc__Class *klass;
		MonitorData *monitor;
		struct OMBJBEDFEJP__Fields fields;
	};

	struct __declspec(align(8)) ConfigChest__Fields
	{
		bool _bornLockedByAbility;
		struct String *_openEffect;
		bool _triggerOpenChestVo;
	};

	struct ConfigChest
	{
		struct ConfigChest__Class *klass;
		MonitorData *monitor;
		struct ConfigChest__Fields fields;
	};

	struct LCChestPlugin__Fields
	{
		struct BaseComponentPlugin__Fields _;
		struct ConfigChest *config;
		struct LCGadgetMisc *_owner;
		bool _marked;
		bool _isLockByAbility;
		struct LevelGadget *_levelGadget;
		struct Nullable_1_MoleMole_GadgetDataItem_CBGKCHACFPE_ _bossChestData;
		struct EntityTimerReceiver *_inteeActiveTimer;
	};

	struct LCChestPlugin
	{
		struct INNLBCONIIK__Class *klass;
		MonitorData *monitor;
		struct LCChestPlugin__Fields fields;
	};

	struct __declspec(align(8)) MoleMole_ScenePropManager__Fields
	{
		struct ScenePropEffectConfigs *_scenePropEffectConfigs;
		uint32_t _scenePropEffectConfigsHandle;
		struct SceneChairConfigs *_sceneChairConfigs;
		uint32_t _sceneChairConfigsHandle;
		struct SceneBushConfigs *_sceneBushConfigs;
		uint32_t _sceneBushConfigsHandle;
		struct SceneButterflyConfigs *ELKJMHEEJBI;
		uint32_t PPDOAJLHMIE;
		struct SceneTreeConfigs *_sceneTreeConfigs;
		uint32_t _sceneTreeConfigsHandle;
		struct SceneStoneTintConfigs *KPCGBGDKAKM;
		uint32_t NOKPOKFNHIO;
		struct Dictionary_2_System_Int32_MoleMole_ZOrderCollection_3_ *_treeBushCollection;
		struct List_1_MoleMole_ICombatSceneProp_ *_treeBushList;
		struct Dictionary_2_System_Int32_UnityEngine_Vector3_ *_treeBushId2Pos;
		struct Vector3 _rangeQueryLen;
		struct Dictionary_2_System_Int32_MoleMole_ICombatSceneProp_ *_scenePropDict;
		struct Dictionary_2_System_Int32_MoleMole_Config_TreeType_ *_treeTypeDict;
		struct DKGAEHIFICD *JNPAIHAOJFC;
		struct List_1_MoleMole_MonoEnviroLight_ *_pointLights;
		struct List_1_MoleMole_MonoEnviroCityLight_ *_cityLights;
		struct List_1_MKDEEDMDPAJ_ *NCHNJGLFBPH;
		struct Vector3 _lastSectorPos;
		struct List_1_MKDEEDMDPAJ_ *BEJHPFKENGD;
		struct MoleMole_ScenePropManager_MoleMole_ScenePropManager_TreeLeafInfo__Array *_treeLeafInfos;
		int32_t _treeLeafNum;
		struct MaterialPropertyBlock *_mpb;
		struct Camera *_mainCam;
		struct List_1_UnityEngine_Material_ *_leafDitherMaterials;
		struct Dictionary_2_System_Int32_UnityEngine_Vector3__1 *_shakeAnims;
		struct List_1_MoleMole_ICombatSceneProp_ *_playingScenePropShakes;
		struct List_1_MoleMole_IChair_ *_chairs;
		struct GameObject *iceBlockRoot;
		struct GameObject *_surfaceMeshObjectRoot;
		struct GameObject *_tileMeshObjectRoot;
	};

	struct MoleMole_ScenePropManager
	{
		struct MoleMole_ScenePropManager__Class *klass;
		MonitorData *monitor;
		struct MoleMole_ScenePropManager__Fields fields;
	};

	enum class ScenePropType__Enum : int32_t
	{
		None = 0x00000000,
		Tree = 0x00000001,
		Bush = 0x00000002,
		Stone = 0x00000003,
		TreeLeaf = 0x00000004,
		EnviroLight = 0x00000005,
		RoomLight = 0x00000006,
		Chair = 0x00000007,
		EnviroCityLight = 0x00000008,
		Count = 0x00000009,
	};


	struct Bounds
	{
		struct Vector3 m_Center;
		struct Vector3 m_Extents;
	};
	struct __declspec(align(8)) BaseScenePropObject__Fields
	{
		uint32_t patternNameHash;
		uint32_t effectPatternNameHash;
		struct GameObject *mainObj;
		int32_t instanceId;
		ScenePropType__Enum sceneType;
	};

	struct BaseCombatScenePropObject__Fields
	{
		struct BaseScenePropObject__Fields _;
		struct Bounds realBounds;
		uint32_t entityId;
		struct Vector3__Array *_anims;
		struct Vector3 originalPos;
		float _playTime;
		bool _isFinish;
		bool _die;
	};

	struct SceneTreeObject__Fields
	{
		struct BaseCombatScenePropObject__Fields _;
		struct SceneTreeConfig *_config;
		uint64_t _lastTreeDropTimeStamp;
		uint64_t _lastHitEffectTimeStamp;
		struct MonoBroadleafProxy *BCOFGNECLAE;
	};

	struct SceneTreeObject__Class
	{
	};

	struct SceneTreeObject
	{
		struct SceneTreeObject__Class *klass;
		MonitorData *monitor;
		struct SceneTreeObject__Fields fields;
	};

	struct __declspec(align(8)) ScenePropBaseConfig__Fields
	{
		struct String *scenePropPatternName;
	};

	struct ScenePropCombatBaseConfig__Fields
	{
		struct ScenePropBaseConfig__Fields _;
		struct Bounds triggerBounds;
		float shakeScale;
	};

	struct SceneTreeConfig__Fields
	{
		struct ScenePropCombatBaseConfig__Fields _;
		uint32_t configId;
		bool canDropItem;
		struct Vector3 dropOffsetPos;
		struct String *hitEffectName;
		uint64_t hitEffectCooldown;
	};

	struct SceneTreeConfig
	{
		struct SceneTreeConfig__Class *klass;
		MonitorData *monitor;
		struct SceneTreeConfig__Fields fields;
	};

	enum class MoleMole_Config_TreeType__Enum : int32_t
	{
		TREE_TYPE_BIRCH = 0x00000001,
		TREE_TYPE_MAPLE = 0x00000002,
		TREE_TYPE_PINE = 0x00000003,
		TREE_TYPE_POPULUS_EUPHRATICA = 0x00000004,
		TREE_TYPE_BAMBOO = 0x00000005,
		TREE_TYPE_ENERGY_WOOD = 0x00000006,
		TREE_TYPE_CYPRESS = 0x00000007,
		TREE_TYPE_FIRTREE = 0x00000008,
		TREE_TYPE_CERASUS = 0x00000009,
		TREE_TYPE_ACER = 0x0000000a,
		TREE_TYPE_CRYPTOMERIA = 0x0000000b,
		TREE_TYPE_OTOGI = 0x0000000c,
	};

	struct Tuple_4_MoleMole_ActorModifier_System_Single_MoleMole_IElementDurability_System_Single_
	{
		struct ActorModifier *item1;
		float item2;
		struct IElementDurability *item3;
		float item4;
	};

	struct Tuple_4_MoleMole_ActorModifier_System_Single_MoleMole_IElementDurability_System_Single___Boxed
	{
		struct Tuple_4_MoleMole_ActorModifier_System_Single_MoleMole_IElementDurability_System_Single___Class *klass;
		MonitorData *monitor;
		struct Tuple_4_MoleMole_ActorModifier_System_Single_MoleMole_IElementDurability_System_Single_ fields;
	};

	struct Nullable_1_UniRx_Tuple_4_
	{
		struct Tuple_4_MoleMole_ActorModifier_System_Single_MoleMole_IElementDurability_System_Single_ value;
		bool has_value;
	};

	enum class MoleMole_Config_ModifierTimeScale__Enum : int32_t
	{
		Owner = 0x00000000,
		Level = 0x00000001,
	};

	enum class MoleMole_Config_ModifierStacking__Enum : int32_t
	{
		Refresh = 0x00000000,
		Unique = 0x00000001,
		Prolong = 0x00000002,
		RefreshAndAddDurability = 0x00000003,
		Multiple = 0x00000004,
		MultipleRefresh = 0x00000005,
		MultipleRefreshNoRemove = 0x00000006,
		MultipleAllRefresh = 0x00000007,
		GlobalUnique = 0x00000008,
		Overlap = 0x00000009,
		RefreshUniqueDurability = 0x0000000a,
	};

	enum class MoleMole_Config_ConfigAbilityModifier_MoleMole_Config_ConfigAbilityModifier_ModifierMPBehavior__Enum : int32_t
	{
		NormallySynced = 0x00000000,
		MuteRemoteAuthorityOnly = 0x00000001,
	};

	struct __declspec(align(8)) MoleMole_BaseActorActionContext__Fields
	{
		struct MoleMole_BaseAbilityMixin__Array *instancedMixins;
		struct List_1_UniRx_Tuple_2__1 *_attachedPatternIndices;
		struct List_1_UniRx_Tuple_2__2 *_attachedResistanceBuffDebuffs;
		struct List_1_MoleMole_Config_ConfigAbilityAction__1 *_attachedAbilityActions;
		struct List_1_UniRx_Tuple_3__1 *_attachedElementTypeResistance;
		struct IList_1_MoleMole_BaseAbilityMixin_ *_tickMixins;
	};

	struct MoleMole_Config_ConfigAbilityAction__Array
	{
		struct MoleMole_Config_ConfigAbilityAction__Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct MoleMole_Config_ConfigAbilityAction *vector[32];
	};

	struct __declspec(align(8)) MoleMole_Config_ConfigAbility__Fields
	{
		struct String *_abilityName;
		struct MoleMole_Config_ConfigAbilityMixin__Array *_abilityMixins;
		struct Dictionary_2_System_String_MoleMole_Config_DynamicArgument_ *_abilitySpecials;
		struct Dictionary_2_System_String_MoleMole_Config_ConfigAbilityModifier_ *_modifiers;
		struct MoleMole_Config_ConfigAbilityModifier *_defaultModifier;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onAdded;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onRemoved;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onAbilityStart;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onKill;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onFieldEnter;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onFieldExit;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onAttach;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onDetach;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onAvatarIn;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onAvatarOut;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onVehicleIn;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onVehicleOut;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onTriggerAvatarRay;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onZoneEnter;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onZoneExit;
		bool _isDynamicAbility;
		struct Dictionary_2_System_String_MoleMole_Config_ConfigAbilityPropertyEntry_ *_abilityDefinedProperties;
		struct Dictionary_2_System_UInt32_MoleMole_Config_BaseActionContainer_ *invokeSites;
		struct List_1_MoleMole_Config_ConfigAbilityModifier_ *modifierIDMap;
		struct String *overrideName;
		int32_t fullNameHashCode;
		bool fromPool;
	};

	struct __declspec(align(8)) MoleMole_Config_ConfigAbilityModifier__Fields
	{
		MoleMole_Config_ModifierTimeScale__Enum _timeScale;
		MoleMole_Config_ModifierStacking__Enum _stacking;
		struct MoleMole_Config_ConfigModifierStackingOption *_stackingOption;
		bool _isBuff;
		bool _isDebuff;
		struct String *_modifierName;
		bool _isUnique;
		struct MoleMole_Config_DynamicFloat *_duration;
		ElementType__Enum _elementType;
		struct MoleMole_Config_DynamicFloat *_elementDurability;
		struct SimpleSafeFloat maxElementDurabilityRawNum;
		struct SimpleSafeFloat purgeIncrementRawNum;
		bool _isElementDurabilityMutable;
		bool _forceTriggerBurning;
		bool _overrideWeaponElement;
		struct MoleMole_Config_DynamicFloat *_thinkInterval;
		struct MoleMole_Config_ConfigAbilityMixin__Array *_modifierMixins;
		bool _trimThinkInterval;
		struct Dictionary_2_System_String_MoleMole_Config_DynamicFloat_ *_properties;
		MoleMole_Config_AbilityState__Enum _state;
		struct MoleMole_Config_ConfigAbilityStateOption *_stateOption;
		bool _muteStateDisplayEffect;
		bool _applyAttackerWitchTimeRatio;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onAdded;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onRemoved;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onBeingHit;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onAttackLanded;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onHittingOther;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onThinkInterval;
		struct MoleMole_Config_ConfigAbilityAction__Array *CLKOPBOIEEH;
		struct MoleMole_Config_ConfigAbilityAction__Array *PBDDACFFPOE;
		bool _onThinkIntervalIsFixedUpdate;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onKill;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onCrash;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onAvatarIn;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onAvatarOut;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onVehicleIn;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onVehicleOut;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onZoneEnter;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onZoneExit;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onReconnect;
		struct MoleMole_Config_ConfigAbilityAction__Array *_onChangeAuthority;
		struct MoleMole_Config_EntityType__Enum__Array *_forbiddenEntities;
		bool _fireEventWhenApply;
		bool _isDurabilityGlobal;
		bool _tickThinkIntervalAfterDie;
		bool _thinkIntervalIgnoreTimeScale;
		bool _reduceDurablityIgnoreTimeScale;
		bool _isLimitedProperties;
		bool _forceSyncToRemote;
		struct SimpleSafeUInt32 buffIDRawNum;
		bool _retainWhenDurabilityIsZero;
		struct FJEMGOOFBLI__Enum__Array *NMMMNMIMJJI;
		bool ICNNIPCEFPM;
		struct KGLKEJOEHPF *CKLBEEKMELD;
		bool HJMHGEEGAOG;
		bool NLEFGMBBEPG;
		int32_t fullNameHashCode;
		int32_t configLocalID;
		MoleMole_Config_ConfigAbilityModifier_MoleMole_Config_ConfigAbilityModifier_ModifierMPBehavior__Enum mpBehavior;
		bool isAuthorityOnly;
	};

	struct MoleMole_Config_ConfigAbilityModifier
	{
		struct MoleMole_Config_ConfigAbilityModifier__Class *klass;
		MonitorData *monitor;
		struct MoleMole_Config_ConfigAbilityModifier__Fields fields;
	};

	struct MoleMole_Config_ConfigAbility
	{
		struct MoleMole_Config_ConfigAbility__Class *klass;
		MonitorData *monitor;
		struct MoleMole_Config_ConfigAbility__Fields fields;
	};

	struct MoleMole_ActorModifier__Fields
	{
		struct MoleMole_BaseActorActionContext__Fields _;
		struct MoleMole_ActorAbility *parentAbility;
		uint32_t parentAbilityInstanceID;
		struct MoleMole_Config_ConfigAbility *_parentAbilityConfig;
		uint32_t parentAbilityEntityID;
		uint32_t _applyEntityId_k__BackingField;
		struct MoleMole_LCAbility *owner;
		struct Action *parentReadyLazySetCallBack;
		struct MoleMole_Config_ConfigAbilityModifier *_config;
		struct Dictionary_2_MoleMole_EncryptedString_System_Int32_ *stackIndices;
		int32_t _parentOwnedIx;
		uint32_t instancedModifierID;
		struct MoleMole_ActorModifier *attachedInstancedModifier;
		uint32_t attachedModifierOwnerEntityId;
		uint32_t attachedModifierInstancedModifierId;
		bool attachedModifierIsServerBuff;
		int32_t attachedModifierNameHash;
		bool attachedModifierRemoveWhenEntityInValid;
		bool isAttachedParentAbility;
		struct Action_1_MoleMole_ActorModifier_ *onDetached;
		uint32_t serverBuffUid;
		struct Action_2_Nullable_1_Single_Single_ *onDurabilityEmpty;
		bool _isValid_k__BackingField;
		uint64_t _modifierStartTime_k__BackingField;
		bool isModifierInvalidByServer;
		bool hasAddedAbilityState;
		float thinkInterval;
		float reduceElementRatio;
		float maxElementDurability;
	};

	struct MoleMole_ActorModifier
	{
		struct MoleMole_ActorModifier__Class *klass;
		MonitorData *monitor;
		struct MoleMole_ActorModifier__Fields fields;
	};

	struct ValueTuple_4_MoleMole_ActorModifier_Single_IElementDurability_Single_
	{
		struct MoleMole_ActorModifier *Item1;
		float Item2;
		struct IElementDurability *Item3;
		float Item4;
	};

	struct Nullable_1_ValueTuple_4_MoleMole_ActorModifier_Single_IElementDurability_Single__
	{
		struct ValueTuple_4_MoleMole_ActorModifier_Single_IElementDurability_Single_ value;
		bool has_value;
	};

	struct Nullable_1_ValueTuple_4_MoleMole_ActorModifier_Single_IElementDurability_Single____Array
	{
		struct Nullable_1_ValueTuple_4_MoleMole_ActorModifier_Single_IElementDurability_Single____Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct Nullable_1_ValueTuple_4_MoleMole_ActorModifier_Single_IElementDurability_Single__ vector[32];
	};

	struct __declspec(align(8)) List_1_Nullable_1_ValueTuple_4_MoleMole_ActorModifier_Single_IElementDurability_Single____Fields
	{
		struct Nullable_1_ValueTuple_4_MoleMole_ActorModifier_Single_IElementDurability_Single____Array *_items;
		int32_t _size;
		int32_t _version;
		struct Object *_syncRoot;
	};

	struct List_1_Nullable_1_ValueTuple_4_MoleMole_ActorModifier_Single_IElementDurability_Single___
	{
		struct List_1_Nullable_1_ValueTuple_4_MoleMole_ActorModifier_Single_IElementDurability_Single____Class *klass;
		MonitorData *monitor;
		struct List_1_Nullable_1_ValueTuple_4_MoleMole_ActorModifier_Single_IElementDurability_Single____Fields fields;
	};

	struct LCAbilityElement__Fields
	{
		struct LCBase__Fields _;
		struct Dictionary_2_System_Int32_List_1_MoleMole_ActorModifier_ *_elementModifierMap;
		struct Action *onElementModifierChanged;
		struct List_1_Nullable_1_ValueTuple_4_MoleMole_ActorModifier_Single_IElementDurability_Single___ *_modifierDurabilities;
		struct List_1_System_ValueTuple_3__4 *_elemOverloadDurabilities;
		struct MoleMole_LCAbility *_levelAbilityCom;
		struct MoleMole_LCAbility *_selfLCAbility;
		struct MoleMole_LCAbilityState *_lcAbilityState;
		struct MoleMole_VCBillboard *_vcBillboard;
		float _purgeRate;
		float _purgeIncement;
		bool _ignorePurgeRate;
		struct MoleMole_LevelSceneGrassPlugin *_grassScenePlugin;
		struct MoleMole_LevelSceneWaterPlugin *_waterScenePlugin;
		struct MoleMole_LevelSceneBushPlugin *_bushScenePlugin;
		struct MoleMole_EntityTimerReceiver *_shakeInterval;
		bool _showReactionText;
		struct String *elementDecrateGroup;
		bool IEGOGMPMOAO;
		bool DNHFGAMIIJP;
		struct List_1_System_ValueTuple_3__5 *CJNBCHLAKHE;
		struct Func_2_MoleMole_ActorModifier_Boolean_ *HGAAHMCALBE;
		struct Action_3_MoleMole_Config_ElementReactionType_MoleMole_BaseEntity_Nullable_1_UnityEngine_Vector3_ *GGOGFKDBFHJ;
		struct Action_3_MoleMole_Config_ElementReactionType_MoleMole_BaseEntity_Nullable_1_UnityEngine_Vector3_ *MIIBJEAOIJI;
		struct Vector3 elementReactionPos;
		bool triggerFrozenBroken;
		ElementReactionType__Enum NOPPEEHOMFG;
		float _lastCrystallizeTime;
		float GEHGAKLLPGA;
	};

	struct LCAbilityElement
	{
		struct LCAbilityElement__Class *klass;
		MonitorData *monitor;
		struct LCAbilityElement__Fields fields;
	};

	struct Camera__Fields
	{
		struct Behaviour__Fields _;
	};

	struct Camera
	{
		struct Camera__Class *klass;
		MonitorData *monitor;
		struct Camera__Fields fields;
	};

	struct Resolution
	{
		int32_t m_Width;
		int32_t m_Height;
		int32_t m_RefreshRate;
	};

	struct Collider__Array
	{
		struct Collider__Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct Collider *vector[32];
	};

	struct Collider__Fields
	{
		struct Component_1__Fields _;
	};

	struct Collider
	{
		struct Collider__Class *klass;
		MonitorData *monitor;
		struct Collider__Fields fields;
	};

	struct Behaviour
	{
		struct Behaviour__Class *klass;
		MonitorData *monitor;
		struct Behaviour__Fields fields;
	};

	struct IGKEDHHIDMA__Fields
	{
		struct BasePageContext__Fields _;
		float EnterCountDown;
		struct String *CountDownPrefab;
		struct GameObject *_CountDownGo;
		struct MonoInLevelProgressBar *_script;
		float _countDownTime;
		uint32_t _handle;
		struct Image *_fillImage;
		struct Coroutine *countCoroutine;
		bool _panelActive;
		bool _countDownAcitve;
		bool _isEndingCountdown;
		struct Nullable_1_MoleMole_AsyncJob_ _countDownLoadingJob;
		int32_t _versusBattleTotle;
		struct CNCFAOMBJIP *_countDown;
		struct EAPNPEGAAII *_inteePanelCom;
		struct AJEAPLJOAON *_directionIndicator;
		struct ELCMPFBKPBA *_targetIndicator;
		struct GDIAIBAJMDC *_gadgetIndicator;
		struct OOKIJPIAEGD *_navigationIndicator;
		struct LNBLFPFIGFF *_galleryPlay;
		struct BPJHCKHOCIO *_quickChangeTeamCom;
		struct MonoParticleDamageTextContainer *_damageParticleTextContainer;
		void *_pageMono;
		struct MonoInLevelLimitRegion *_monoBlackMask;
		struct BEJJFHHKIBA *_newItemDialog;
		struct NBMGJNBMIOA *_specialItemDialog;
		struct MLHLCCGMGOP *_galleryDialog;
		struct GJPBGPGKGNN *_localAvatar;
		struct Button *_transBtn;
		int32_t _lastLayoutVersion;
		bool _canChangeMoveType;
		bool _autoOpenedDungeonFactor;
		bool _forbiddenToggleMoveByState;
		bool _isPaimonNormal;
		bool _isChatEnabled;
		struct MBKDBIHKAGD *chatBubbleDisplayer;
		bool _chatPanelResolved;
		bool _mapActive;
		bool _transAppear;
		struct DateTime _rttRefreshTime;
		struct Color _rttGreen;
		struct Color _rttYellow;
		struct Color _rttRed;
		uint32_t _rttLowLimit;
		uint32_t _rttMidLimit;
		uint32_t _rttHighLimit;
		uint32_t _rttRefreshDeltaTime;
		struct String *KMBJFGJMNMH;
		struct Coroutine *_dungeonItemCoroutine;
		bool _isOpenInputContainer;
		bool _isOpenActionContainer;
		bool _isOpenMessageContainer;
		uint32_t _lastTimeLeft;
		uint32_t _lastCount;
		int32_t combatBarType;
		struct List_1_EJFOBCPHDFP_ *_saveCombatsData;
		struct GameObject *m_LightingInfoUI;
		struct GameObject *m_TreeOverdrawInfoUI;
		struct GameObject *m_QuickRenderMenu;
		bool _inShakeOff;
		struct OKGLPFDFCPK *_challengeConfig;
		struct Coroutine *_blossomBeginCoroutine;
		struct MonoTowerHintText *_hintPage;
		struct Coroutine *fleurFairDungeonStartAnimCoroutine;
		float _curFleurFairDungeonBarValue;
		bool _isInFlightChallenge;
		bool _isShowFlightChallengeHint;
		struct OKGLPFDFCPK *_flightSubChallengeConfig;
		bool _waitStart;
		struct Coroutine *_startCoroutine;
		struct Coroutine *_uidCoroutine;
		bool _playUidOpEnd;
		uint32_t _curStage;
		struct HDMIAHJPLCJ *_combat;
		struct Coroutine *_altPressCoroutine;
		struct Coroutine *_cameraLookEndCoroutine;
		bool _disableSkillInput;
		bool _disableMoveInput;
		bool _disableActionInput;
		bool _mapInfoVisible;
		bool _chatInfoVisible;
		struct Dictionary_2_System_Int32_HashSet_1_System_Int32_ *_uiDisableStateDic;
		struct Dictionary_2_System_Int32_HashSet_1_System_Int32_ *_inputEnableStateDic;
		struct HashSet_1_System_Int32_ *_mainPageDisableSet;
		struct DODHAKHMNDK *zoomSmoother;
		struct KOOFBIDHECP *_virtualDialDialog;
		struct NOIFCOKPBBI *AEKMPNKPJCK;
		int32_t _prevState;
		bool _changeWithSkill;
		struct DINCOJBJLML *_messageDialog;
		bool showHazadousWarning;
		struct List_1_DINCOJBJLML_PGCPDEKPCKM_ *HGLADPDCIEO;
		struct IKECDNKKMJM *_questHintDialog;
		struct FBCIMPOLFEI *_questProgressDialog;
		struct ECDKKGFNMNF *_rewardDialogGeneral;
		struct ECDKKGFNMNF *_rewardDialogQuest;
		struct ECDKKGFNMNF *_rewardDialogDailyTask;
		struct ECDKKGFNMNF *_rewardDialogRandTask;
		struct ECDKKGFNMNF *_rewardDialogGather;
		struct GCMPGGFPHDJ *_deblockingDialog;
		struct OEBIPCONBLK *_taskTitleDialog;
		struct Coroutine *_templateReminderCoroutine;
		struct PCIKGHOIFOO *_reminderDialog;
		bool HICPKFKAOCK;
		struct Nullable_1_UnityEngine_Vector3_ _targetPos;
		int32_t _lastIntDst;
		bool _pushtipsShowed;
		bool BPENOEMPIBP;
		uint32_t APGMBPPFPDH;
		struct PGGJOHPFKCO *HIJIBGFKGAC;
		bool NLNAHEMFIDM;
		struct MonoMiniMap *_miniMap;
		struct MonoMapFogAreaGrp *_miniMapFog;
		bool _mapImgReady;
		uint32_t _mapImageHandle;
		uint32_t _mapFogHandle;
		struct Dictionary_2_System_Int32_Dictionary_2_System_UInt32_MoleMole_MonoMapMark_ *_marks;
		struct HashSet_1_MoleMole_MonoMapMark_ *_activeMarks;
		struct HashSet_1_MoleMole_MonoMapMark_ *_candidateMarks;
		struct Vector2 _searchRegionCenter;
		struct MonoMapMark *_mapMarkPrefab;
		uint32_t _sceneID;
		float _sqrUpdateSearchDistance;
		float _sqrSearchRegionRadius;
		struct GameObject *_mapImageInst;
		float _miniMapScale;
		float _defaultMiniMapScale;
		struct RectTransform *_miniMapBackImg;
		struct MonoLevelMap *_levelMap;
		struct RectTransform *_levelMapTrans;
		struct Vector2 rectSize;
		struct Coroutine *_setScaleCoroutine;
		float _currTime;
		float _tweenTime;
		float _targetScale;
		float _preScale;
		bool _forceUpdateMark;
		struct Vector3 _lastPlayerPos;
		float _lastCameraAngle;
		float _lastAvatarAngle;
		struct BaseEntity *_teamEntity;
		struct Transform *_cameraTrans;
		float _markContainerLocalEulerAngleZ;
		bool updateCamera;
		struct Vector3 newEulerAngle;
		int32_t _lastFixType;
		struct HashSet_1_System_UInt32_ *_fakemarkTobeRemoved;
		bool _mapBackRotateDirty;
		bool _mapContainerDiry;
		bool _isSignalActive;
		float _checkInterval;
		float _checkTime;
		float _lastDistance;
		float _audioTime;
		float _audioPeriod;
		uint32_t _signalAudioID;
		struct String *miniMapQuestMarkPath;
		struct Dictionary_2_System_UInt32_MoleMole_MonoMapMark_ *_fakeMarkDic;
		uint32_t _fakeMarkHandle;
		float _sightWorldRadius_k__BackingField;
		float _markReachToUIRatio_k__BackingField;
		float _worldUnitPerPixel_k__BackingField;
		bool _questEnable;
		struct Coroutine *_spPresstartCoroutine;
		uint64_t _currentAvatarID;
		struct List_1_MoleMole_MonoTeamBtn_ *_buttonList;
		struct List_1_System_UInt64_ *_avatarGuidList;
		bool _showChangeAvatarCDText;
		int32_t _count;
		struct List_1_MoleMole_MonoMPTeamBtn_ *teamBtnList;
		bool _hideTeamBtnName;
		float HFFMDBPJNCL;
		struct Dictionary_2_System_Int32_Queue_1_MoleMole_BaseContext_ *_widgetQueueDic;
		float DELAY_TIME;
		struct Action *_onSetActiveHandler;
	};

	struct InLevelMainPageContext
	{
		struct IGKEDHHIDMA__Class *klass;
		MonitorData *monitor;
		struct IGKEDHHIDMA__Fields fields;
	};

	struct __declspec(align(8)) InLevelMainPageContext_DoTeamCountDown_Iterator__Fields
	{
		int32_t HGCHJINEMCM;
		struct Object *KOBKOALABHL;
		struct InLevelMainPageContext *_levelMainPageContext;
	};

	struct InLevelMainPageContext_DoTeamCountDown_Iterator
	{
		struct InLevelMainPageContext_DoTeamCountDown_Iterator__Class *klass;
		MonitorData *monitor;
		struct InLevelMainPageContext_DoTeamCountDown_Iterator__Fields fields;
	};

	struct MonoMiniMap__Fields
	{
		struct MonoBehaviour__Fields _;
		struct Button *_actionButton;
		struct RectTransform *_grpMap;
		struct RectTransform *_grpMapBack;
		struct RectTransform *_markContainer;
		struct RectTransform *_unusedMarkContainer;
		struct RectTransform *_maskedMarkLayer;
		struct RectTransform__Array *_markContainerLayers;
		struct RectTransform *_localAvatarMark;
		struct RectTransform *_sightFanMark;
		struct RectTransform *_directionMark;
		struct RectTransform *_grpMiniBackRotate;
		struct Image *_imgMiniBack;
		float _areaMinDistance;
		struct Queue_1_MoleMole_MonoMapMark_ *_unusedMarkPool;
		struct MonoMapMark *_markPrefab;
		struct RectTransform *_hazardousArea;
		float _warningCooldown;
		float _warningTime;
		bool _isWarning;
		struct InLevelMainPageContext *context;
	};

	struct MonoMiniMap
	{
		struct MonoMiniMap__Class *klass;
		MonitorData *monitor;
		struct MonoMiniMap__Fields fields;
	};

	struct RectTransform__Fields
	{
		struct Transform__Fields _;
	};

	struct RectTransform
	{
		struct RectTransform__Class *klass;
		MonitorData *monitor;
		struct RectTransform__Fields fields;
	};

	struct Quaternion__Boxed
	{
		struct Quaternion__Class *klass;
		MonitorData *monitor;
		struct Quaternion fields;
	};

	enum class InteractType__Enum : int32_t
	{
		InteractNone = 0x00000000,
		InteractPickItem = 0x00000001,
		InteractGather = 0x00000002,
		InteractOpenChest = 0x00000003,
		InteractOpenStatue = 0x00000004,
		InteractConsum = 0x00000005,
		InteractMpPlayReward = 0x00000006,
		InteractView = 0x00000007,
		InteractGeneralReward = 0x00000008,
		InteractMiracleRing = 0x00000009,
		InteractFoundation = 0x0000000a,
		InteractEchoShell = 0x0000000b,
		InteractHomeGather = 0x0000000c,
		InteractEnvAnimal = 0x0000000d,
		InteractQuestGadget = 0x0000000e,
		LGHNPMNCLLI = 0x0000000f,
	};

	enum InterOpType__Enum
	{
		InterOpType__Enum_InterOpFinish = 0x00000000,
		InterOpType__Enum_InterOpStart = 0x00000001,
	};

	struct GadgetInteractRsp__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		InterOpType__Enum opType_;
		int32_t retcode_;
		uint32_t gadgetId_;
		InteractType__Enum interactType_;
		uint32_t gadgetEntityId_;
	};

	struct GadgetInteractRsp
	{
		struct GadgetInteractRsp__Class *klass;
		MonitorData *monitor;
		struct GadgetInteractRsp__Fields fields;
	};

	struct EntityHandle_1_BaseEntity_
	{
		uint32_t runtimeID;
		struct BaseEntity *_entityRef;
	};

	struct GGGIOOJFONN_CCAMDLAOBAA_
	{
		uint32_t ODBALKCAMHN;
		struct CCAMDLAOBAA *KCIDMFKGBFB;
	};

	struct __declspec(align(8)) FishingManager__Fields
	{
		struct DBEHAHEIEIP__Array *_levelFishBait;
		struct UInt32__Array *_failedReminder;
		struct UInt32__Array *_preSuccessReminder;
		struct UInt32__Array *_star3Reminder;
		struct UInt32__Array *_star4Reminder;
		float _lastPreSuccessTime;
		uint32_t _lastPreSuccessReminder;
		uint32_t baitId;
		uint32_t rodId;
		uint32_t _rodEntityId;
		uint32_t poolId;
		uint32_t poolEntityId;
		uint32_t fishRuntimeId;
		bool _enterPosChecked;
		struct Vector3 _enterPos;
		float _curForce_k__BackingField;
		float _curDmg_k__BackingField;
		float _lastForce;
		float _baseAddForce;
		float _addForceAcce;
		float _addForceMax;
		float _addForceStartTime;
		float _addForceTime;
		float _curAddForce;
		float _baseReduceForce;
		float _reduceForceAcce;
		float _reduceForceMax;
		float _reduceForceStartTime;
		float _reduceForceTime;
		float _curReduceForce;
		float _forceFactorX;
		float _baseAddAtk;
		float _addAtkAcce;
		float _addAtkMax;
		float _curAddAtk;
		float _baseReduceAtk;
		float _dmgFactorX;
		float _triggerInterval;
		float _releaseInterval;
		int32_t _inBonusFlag;
		float _enterBonusTime;
		float _maxBonusTime;
		bool _isEnterFishing_k__BackingField;
		bool _isFishing;
		bool _isCastingAnchorPoint_k__BackingField;
		float _maxDmg;
		float _triggerTime;
		float _releaseTime;
		float _damageZeroTimeStart;
		float _lastWarnningTime;
		uint32_t _strength;
		struct GGGIOOJFONN_CCAMDLAOBAA_ _fishHandle;
		float LEFNBAMIIFA;
		float IAGEFBOLFGL;
		float _bonusCenter;
		float _bonusRadius;
		float _curBonusRadius_k__BackingField;
		float _bonusRadiusSpeed;
		float _bonusRadiusTime;
		float _bonusSpeed;
		float _bonusTarget;
		float _bonusDir;
		float _bonusTime;
		float _bonusDuration;
		struct Vector2 _bonusDurationRange;
		struct Vector2 _bonusOffsetRange;
		struct Vector2 _bonusSpeedRange;
		float _curBonusSpeed;
		float _bonusStartAcc;
		float _bonusEndAcc;
		float _bonusMoveDst;
		struct LJHBAOBBLDE *_fishConfig;
		bool _dmgStart;
		uint64_t _qteStartTime;
		int32_t _tipsFlag;
		struct List_1_HJJINBLMFFC_BDBAIICPIMN_ *_skillList;
		struct HJJINBLMFFC_BDBAIICPIMN *_curForceSkill;
		struct HJJINBLMFFC_BDBAIICPIMN *_curBonusSkill;
		struct PCIKGHOIFOO *_generalDialogContext;
	};

	struct FishingManager
	{
		struct FishingManager__Class *klass;
		MonitorData *monitor;
		struct FishingManager__Fields fields;
	};

	struct FishBiteRsp__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		int32_t retcode_;
	};

	struct FishBiteRsp
	{
		struct FishBiteRsp__Class *klass;
		MonitorData *monitor;
		struct FishBiteRsp__Fields fields;
	};

	struct FishBattleBeginRsp__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		int32_t retcode_;
	};

	struct FishBattleBeginRsp
	{
		struct FishBattleBeginRsp__Class *klass;
		MonitorData *monitor;
		struct FishBattleBeginRsp__Fields fields;
	};

	enum class FishBattleResult__Enum : int32_t
	{
		None = 0x00000000,
		Succ = 0x00000001,
		Fail = 0x00000002,
		Timeout = 0x00000003,
		Cancel = 0x00000004,
		Exit = 0x00000005,
	};

	enum class FishingEvent__Enum : int32_t
	{
		None = 0x00000000,
		QteStart = 0x00000001,
		QteTrigger = 0x00000002,
		RequestQuit = 0x00000003,
		CastAnchorPoint = 0x00000004,
		SelectBait = 0x00000005,
		Pull = 0x00000006,
		NotifyBait = 0x00000007,
	};

	enum class Proto_FishBattleEndRsp_Proto_FishBattleEndRsp_Types_Proto_FishBattleEndRsp_Proto_FishBattleEndRsp_Types_FishNoRewardReason__Enum : int32_t
	{
		FishNoRewardNone = 0x00000000,
		FishNoRewardActivityLimit = 0x00000001,
		FishNoRewardBagLimit = 0x00000002,
		FishNoRewardPoolLimit = 0x00000003,
	};

	struct FishBattleEndRsp__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_ItemParam_ *talentItemList_;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_ItemParam_ *rewardItemList_;
		FishBattleResult__Enum battleResult_;
		Proto_FishBattleEndRsp_Proto_FishBattleEndRsp_Types_Proto_FishBattleEndRsp_Proto_FishBattleEndRsp_Types_FishNoRewardReason__Enum noRewardReason_;
		bool isGotReward_;
		int32_t retcode_;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_ItemParam_ *dropItemList_;
	};

	struct FishBattleEndRsp
	{
		struct FishBattleEndRsp__Class *klass;
		MonitorData *monitor;
		struct FishBattleEndRsp__Fields fields;
	};

	enum class DataPropOp__Enum : int32_t
	{
		Reset = 0x00000000,
		Change = 0x00000001,
	};

	struct __declspec(align(8)) NormalTimer__Fields
	{
		float _timer_k__BackingField;
		float _timespan_k__BackingField;
		bool _isTimeUp_k__BackingField;
		bool _isActive_k__BackingField;
		struct Action *timeupAction;
		bool fromCache;
	};

	struct NormalTimer
	{
		struct NormalTimer__Class *klass;
		MonitorData *monitor;
		struct NormalTimer__Fields fields;
	};

	struct EntityTimer__Fields
	{
		struct NormalTimer__Fields _;
		struct BaseEntity *_timeScaleEntity;
		bool _ignoreTimeScale;
	};

	struct EntityTimer
	{
		struct EntityTimer__Class *klass;
		MonitorData *monitor;
		struct EntityTimer__Fields fields;
	};

	struct LCCharacterCombat__Fields
	{
		struct LCBaseCombat__Fields _;
		struct Dictionary_2_System_UInt32_MoleMole_LCCharacterCombat_NOCCPOEFFII_ *_summonInfos;
	};

	struct LCCharacterCombat
	{
		struct LCCharacterCombat__Class *klass;
		MonitorData *monitor;
		struct LCCharacterCombat__Fields fields;
	};

	enum class Config_MonitorType__Enum : int32_t
	{
		MONITOR_NEVER = 0x00000000,
		MONITOR_OFF_STAGE = 0x00000001,
		MONITOR_ON_STAGE = 0x00000002,
		MONITOR_ALWAYS = 0x00000003,
	};

	struct __declspec(align(8)) MoleMole_LCAvatarCombat_MoleMole_LCAvatarCombat_SkillInfo__Fields
	{
		uint32_t skillID;
		struct Config_AvatarSkillExcelConfig *config;
		struct SafeFloat cdTimer;
		struct SafeInt32 currChargeCount;
		struct SafeFloat costStamina;
		bool canHold;
		bool canTrigger;
		bool useInAir;
		struct HashSet_1_System_Int32_ *canUseSkillStateWhiteList;
		Config_MonitorType__Enum needMonitor;
		bool isLocked;
		bool ignoreCDMinusRatio;
		bool forceCanDoSkill;
		struct SafeFloat maxHoldTime;
		struct SafeFloat curHoldTime;
		struct SafeFloat _costElem;
		struct SafeFloat _costElemDelta;
		struct SafeFloat _costElemRatio;
		int32_t skillIndex;
		int32_t prority;
		float _costElem_k__BackingField;
		int32_t _maxChargeCount_k__BackingField;
	};

	struct LCAvatarCombat_LCAvatarCombat_SkillInfo
	{
		struct MoleMole_LCAvatarCombat_MoleMole_LCAvatarCombat_SkillInfo__Class *klass;
		MonitorData *monitor;
		struct MoleMole_LCAvatarCombat_MoleMole_LCAvatarCombat_SkillInfo__Fields fields;
	};

	struct MoleMole_LCAvatarCombat_OverrideTargetingParams
	{
		float E;
		bool shouldForceSelectAttackTarget;
	};

	struct LCAvatarCombat__Fields
	{
		struct EntityTimer *_targetAtteTimer;
		struct EntityTimer *_targetFixTimer;
		struct Config_AvatarSkillDepotExcelConfig *_skillDepotConfig;
		bool toDoChargeSkill;
		struct LCAvatarCombat_SkillInfo__Array *_currSkills;
		struct Dictionary_2_System_UInt32_SafeFloat_ *_equipAffixCD;
		int32_t _attackModeTriggerID;
		struct Dictionary_2_System_UInt32_LCAvatarCombat_SkillInfo_ *_skillInfoMap;
		struct List_1_System_ValueTuple_2__3 *_affixToAdd;
		struct BaseShape2d *_curLockTargetShape;
		struct SimpleSafeFloat__Array *_curLockTargetWeightParams;
		struct MoleMole_LCAvatarCombat_OverrideTargetingParams _lockTargetOverrideParams;
		struct List_1_LCAvatarCombat_LCAvatarCombat_HitBucketItem_ *meleeBuckets;
		struct List_1_LCAvatarCombat_LCAvatarCombat_HitBucketItem_ *rangedBuckets;
		struct Dictionary_2_System_UInt32_List_1_System_UInt32_ *_curSkillCDSlot;
		struct Dictionary_2_System_UInt32_System_String_ *KFOADKFBBOI;
	};

	struct LCAvatarCombat
	{
		struct LCAvatarCombat__Class *klass;
		MonitorData *monitor;
		struct LCAvatarCombat__Fields fields;
	};

	enum class HumanoidMoveFSM_HumanoidMoveFSM_FSMStateID__Enum : int32_t
	{
		Move = 0x00000000,
		TurnDirection = 0x00000001,
		FallOnGround = 0x00000002,
		GoUpstairs = 0x00000003,
		JumpUpWallReady = 0x00000004,
		Climb = 0x00000005,
		JumpUpWallForStandby = 0x00000006,
		StandbyToClimb = 0x00000007,
		Jump = 0x00000008,
		Drop = 0x00000009,
		Fly = 0x0000000a,
		CombatMove = 0x0000000b,
		CombatFallOnGround = 0x0000000c,
		CombatAir = 0x0000000d,
		Swim = 0x0000000e,
		SwimJump = 0x0000000f,
		Ladder = 0x00000010,
		FlyGateLoading = 0x00000011,
		Crouch = 0x00000012,
		Perform = 0x00000013,
		FlyFollowRoute = 0x00000014,
		Null = 0x00000015,
		Vehicle = 0x00000016,
		Skiff = 0x00000017,
	};

	struct HumanoidMoveFSM__Fields
	{
		struct BaseComponentPlugin__Fields _;
		struct MoleMole_HumanoidMoveFSMBaseMoveState *_curState;
		int32_t fallOnGroundFirstFrame;
		struct Dictionary_2_MoleMole_HumanoidMoveFSM_MoleMole_HumanoidMoveFSM_FSMStateID_MoleMole_HumanoidMoveFSMBaseMoveState_ *stateMapInfo;
		struct VCHumanoidMoveData *_moveData;
		struct MoleMole_VCHumanoidMoveConfig *_moveConfig;
		struct VCHumanoidMove *_ownerMove;
		struct Animator *_animator;
		struct Rigidbody *_rigidbody;
		struct AnimatorController *_animatorController;
		struct Action_1_MoleMole_HumanoidMoveFSMCallBackInfo_ *OnMoveUpdateCallback;
		struct Action_1_MoleMole_HumanoidMoveFSMCallBackInfo_ *OnAirUpdateCallback;
		bool _initSyncWithCurrentTask;
		bool _behaviourSet;
		float _sendCombatNotifyTime;
		bool enterSprintBS;
		bool _positionRotationChanged_k__BackingField;
		struct Transform *_transform;
		struct Vector3 lateTickStartPosition;
		struct Quaternion lateTickStartRotation;
		int32_t _layerMaskScene;
		int32_t _layerMaskDynamicBarrier;
		int32_t layerMaskDynamicBarrierCheckAuthority;
		bool ignoreOverallMoveWallProtectionCurrentFrame;
		bool stopMoveWhenGoupstairs;
		bool lastStopMoveWhenGoupstairs;
		bool IMLLBMBBEJI;
		float climbGlobalRecovery;
		bool autoGoUpstair;
		bool forceDoNotSyncWhenReset;
		float inSprintTime;
		int32_t _lastCurrentStateHash;
		int32_t _lastNextStateHash;
		bool _firstLatetick;
		bool _lastInForbiddenToggleMoveState;
		bool _disableMotion4hiUpdateCurrentFrame;
		bool NGPIBEPBPKA;
		int32_t _flyStateHash;
		struct MoleMole_VCMoveIKController *_ikComp;
		struct Transform *_lCalf;
		struct Transform *_rCalf;
		void *_weaponStandbyIKParams;
		void *_normalStandbyIKParams;
		void *_params;
		float BLLOGGMCMIA;
		float HNOACEPONMF;
		float HDBOJNOFKFN;
		float EGHOEFBGDKA;
		float MCJGBJLKODK;
		float LACOILFNJGC;
		float EKNIHOJIDKN;
		float COEEDFNDFEH;
		float CDCJMAELEKE;
		void *_lastFrameAnimSpeedInfo;
		void *_currentFrameAnimSpeedInfo;
		bool _isInSprintCheckInterval;
		bool _isInMuteSprintInterval;
		float _timeAfterLastSprint;
		uint32_t _lastFrameVelocityCheckBits;
		bool _lastFrameVelocityCheckResult;
		bool _remoteCheckLightCoreMove;
		struct Vector3 _remoteCheckLightCoreMoveTarget;
	};

	struct HumanoidMoveFSM
	{
		struct HumanoidMoveFSM__Class *klass;
		MonitorData *monitor;
		struct HumanoidMoveFSM__Fields fields;
	};

	struct SCameraModuleInitialize__VTable
	{
		VirtualInvokeData Equals;
		VirtualInvokeData Finalize;
		VirtualInvokeData GetHashCode;
		VirtualInvokeData ToString;
		VirtualInvokeData PODDMLNOAIC;
		VirtualInvokeData CJFDOKANFFO;
		VirtualInvokeData MODBDHFJMMK;
		VirtualInvokeData BDEMLMONJLP;
		VirtualInvokeData CEONIHCAFLE;
		VirtualInvokeData EKNGAGLAGDO;
		VirtualInvokeData FEECLIEHIMB;
		VirtualInvokeData BDCBKMLNFBH;
		VirtualInvokeData HHLKFCNMNFF;
		VirtualInvokeData HJIDOMGOCNO;
		VirtualInvokeData HIDLLHBHACG;
	};

	struct SCameraModuleInitialize__StaticFields
	{
		struct DelegateBridge *MGFFCDGAIDM;
		struct DelegateBridge *EMPDBKKFDEH;
		struct DelegateBridge *LJFCBJFECIM;
		struct DelegateBridge *OBDMMEOIDDD;
		struct DelegateBridge *PMLMIEOEAEI;
		struct DelegateBridge *ACDKGBLBOPF;
		struct DelegateBridge *GJGHGIEECBJ;
		struct DelegateBridge *KMNDONNIDOG;
		struct DelegateBridge *EDKBBBAPKNK;
		struct DelegateBridge *LCCJOCOOPNG;
		struct DelegateBridge *DPMMFLGDGIE;
		struct DelegateBridge *CIADAMOHLOO;
		struct DelegateBridge *EJMEFEDPGKO;
		struct DelegateBridge *CGKHIGGPGDI;
		struct DelegateBridge *NHMJOEBDCOO;
		struct DelegateBridge *KKHKGALGNBF;
		struct DelegateBridge *MIBGPOOPJLI;
		struct DelegateBridge *IDKHBEDAJPF;
		struct DelegateBridge *GKJOJNEECDM;
		struct DelegateBridge *ADEPIOCJMPN;
		struct DelegateBridge *LBCLKFHBHIE;
		struct DelegateBridge *HAOKFADIBCF;
		struct DelegateBridge *CNCLDMPOFAJ;
		struct DelegateBridge *DPJPHBIHEFA;
		struct DelegateBridge *KHHAOEIFDAP;
		struct DelegateBridge *POLIPAAFCPA;
		struct DelegateBridge *FPOCACECFCG;
		struct DelegateBridge *IFLPBMPEBCN;
		struct DelegateBridge *MHKCECLNCOD;
		struct DelegateBridge *LIDKADPGCFA;
		struct DelegateBridge *KDCPGFEEFCL;
		struct DelegateBridge *FKAONMCKIBP;
		struct DelegateBridge *FEDMEBPGJFE;
		struct DelegateBridge *IDBHCJFAOHO;
		struct DelegateBridge *IBBBMCNODMJ;
		struct DelegateBridge *HAOKOPOHLHJ;
		struct DelegateBridge *GPABAMGACIH;
	};

	struct SCameraModuleInitialize__Class
	{
		Il2CppClass_0 _0;
		Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
		struct SCameraModuleInitialize__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
		struct SCameraModuleInitialize__VTable vtable;
	};

	struct __declspec(align(8)) SCameraModuleBase__Fields
	{
		struct PipelineCameraModuleConfig *config;
		struct PipelineCameraGlobalConfig *globalConfig;
		struct SCameraBaseState *_state;
	};

	struct SCameraModuleInitialize__Fields
	{
		struct SCameraModuleBase__Fields _;
		bool levelCinemachine;
		struct SimpleVector3Damper *_skfilter;
		bool _isFilterInitialized;
		float JEADCBNIEGD;
		bool _isTrySmoothBetweenNormalAndClimb;
		double _smoothLerpSpeed;
		struct Vector3d_1 _smoothingTransformLookAtPoint;
		struct SimpleKalmanFilter *_dirKfilter;
		bool _isDirectionFilterInitialized;
		struct Vector3d_1__Array *_faceDirectionTrace;
		bool _isFaceDirectionTraceInitialized;
		struct Vector3d_1 _lastFrameSmoothFaceDirection;
		bool _hasEnteredAvatarClimb;
		bool _hasBeenConsistent;
		double _timerForWaitingFacingToWallNoraml;
		HumanoidMoveFSM_HumanoidMoveFSM_FSMStateID__Enum _curFSMState;
		HumanoidMoveFSM_HumanoidMoveFSM_FSMStateID__Enum _lastFSMState;
		struct Vector3d_1 _climbWallNormal;
		bool _climbWallNormalGetted;
		int32_t _LayerIndex;
		int32_t _SceneLayerIndex;
		struct Ray _ray;
		struct RaycastHit _hitInfo;
		double _timerForDropping;
		bool _firstStartFlag;
		bool _isMoving;
		bool _isDropping;
		bool _isCombatHitCamera;
		bool _isInStandby2Climb;
		bool _isWaterFall;
		double _waterHeight;
		struct Vector3d_1 _waterFallNormal;
		struct Vector3d_1 _avatarVelocity;
		bool _isAvatarMoveFollowRefferenceSystem;
		double _inputMoveAngle;
		double _inputMoveMold;
		double _defaultCameraDistanceAdjust;
		float KNJMIPJHINJ;
		float DFGOMAELPBC;
		bool KNHDJFKJJDC;
		struct Dictionary_2_UnityEngine_Vector2_System_Double_ *_animStateChangePair;
		struct Dictionary_2_UnityEngine_Vector2_MoleMole_SCameraModuleInitialize_MoleMole_SCameraModuleInitialize_FilterKeepType_ *_animStateChangeType;
		struct Dictionary_2_UnityEngine_Vector2_System_Double_ *_animStateChangeTime;
		double _preNormalRadiusTarget;
		double _preNormalRadiusStart;
		double _deltaTimeNormal;
		bool _lerpingNormal;
		struct Vector3d_1 heightAdjust;
		struct Vector3d_1 heightAdjustMax;
		struct Vector3d_1 currHeightAdjust;
	};

	struct SCameraModuleInitialize
	{
		struct SCameraModuleInitialize__Class *klass;
		MonitorData *monitor;
		struct SCameraModuleInitialize__Fields fields;
	};

	struct __declspec(align(8)) SimpleVector3Damper__Fields
	{
		struct Vector3d_1 _lastPosition;
		struct Vector3d_1 _lastTargetPosition;
		struct Vector3d_1 _lastVelocity;
		double _dampTime;
	};

#if defined(_CPLUSPLUS_)
	enum class CameraModuleState__Enum : int32_t
	{
		Normal = 0x00000000,
		Parallel = 0x00000001,
		Cinema = 0x00000002,
	};

#else
	enum CameraModuleState__Enum
	{
		CameraModuleState__Enum_Normal = 0x00000000,
		CameraModuleState__Enum_Parallel = 0x00000001,
		CameraModuleState__Enum_Cinema = 0x00000002,
	};

#endif

	enum class HNGOGENCDGD__Enum : int32_t
	{
		None = 0x00000000,
		LerpingIn = 0x00000001,
		Free = 0x00000002,
		LerpingOut = 0x00000003,
	};

	struct CameraShareData
	{
		int32_t targetFrameRate;
		bool isBackground;
		bool isBlending;
		bool disableProtect;
#if defined(_CPLUSPLUS_)
		CameraModuleState__Enum state;
#else
		int32_t state;
#endif
#if defined(_CPLUSPLUS_)
		CameraModuleState__Enum lastFrameState;
#else
		int32_t lastFrameState;
#endif
		double anchorDistance;
		double defaultHalfFov;
		double CameraNearClipPlane;
		double CameraHalfFov;
		double CameraAspect;
		double BoatFov;
		struct Vector3d_1 outCameraPosition;
		struct Vector3d_1 outCameraSpherical;
		struct Vector3d_1 outCameraForward;
		struct Vector3d_1 outCameraUp;
		struct Vector3d_1 cameraPosition;
		struct Vector3d_1 cameraSpherical;
		struct Vector3d_1 cameraForward;
		struct Vector3d_1 cameraUp;
		struct Vector3d_1 refAnchorPosition;
		struct Vector3d_1 lastCameraPosition;
		struct Vector3d_1 lastCameraSpherical;
		struct Vector3d_1 lastCameraForward;
		struct Vector3d_1 lastCameraUp;
		struct Vector3d_1 lastRefAnchorPosition;
		struct Vector3d_1 lastFrameCameraPosition;
		struct Vector3d_1 lastFrameCameraSpherical;
		struct Vector3d_1 lastFrameCameraForward;
		struct Vector3d_1 lastFrameCameraUp;
		struct Vector3d_1 lastFrameRefAnchorPosition;
		double cameraForwardPoleDeltaAngle;
		double cameraForwardElevDeltaAngle;
		double lastFrameCameraForwardPoleDeltaAngle;
		double lastFrameCameraForwardElevDeltaAngle;
		struct Vector3d_1 lastFrameFilterLookAtPosition;
		struct Vector3d_1 lastFrameLookAtPosition;
		struct Vector3d_1 lastFrameTransformLookAtPosition;
		double additionalRadius;
		double globalDefaultCameraLocateRatio;
		double currentManualLocateRatio;
		double currentHeightAdjustRatio;
		double currentWarningLocateRatio;
		double maxRadiusAjustRatio;
		double _defaultRadiusExtraRatio;
		double _maxRadiusExtraRatio;
		double _maxRadiusNormal;
		double _defaultLocateRatioNormal;
		double _maxRadiusCombat;
		double _minCameraRadius;
		double maxRadiusNormalInLerping;
		double maxRadiusCombatInLerping;
		double globalDefaultElevation;
		double globalMinElevation;
		double globalMaxElevation;
		bool CNNNLIMHHKK;
		bool EPCDPKNLHEA;
#if defined(_CPLUSPLUS_)
		HNGOGENCDGD__Enum CJOOGBBKNPM;
#else
		int32_t CJOOGBBKNPM;
#endif
#if defined(_CPLUSPLUS_)
		HNGOGENCDGD__Enum LMKHMGGMCGF;
#else
		int32_t LMKHMGGMCGF;
#endif
		bool DDFJOMJBMEE;
		struct Vector3d_1 DPEJMKOAAKG;
		bool isAvatarFocusing;
		bool isRotating;
		bool isManuallyRotating;
		bool isZooming;
		bool isMoving;
		bool isFlying;
		bool isDropping;
		bool isJumping;
		bool isBeingHit;
		bool isTransfering;
		bool isKeepShotRotation;
		bool isMovingRotatingVertically;
		bool isSkiffDashing;
		bool lastIsRotating;
		bool lastIsZooming;
		bool lastIsMoving;
		bool lastIsFlying;
		bool rotatedDuringCurrentMove;
		bool rotatedDuringCurrentIdle;
		int32_t lastAnimStateInd;
		int32_t curAnimStateInd;
		bool setFilterAnimStateFlag;
		struct Vector2 refAnchorAngularVelocity;
		double zoomVelocity;
		bool needFastGotoIdealDir;
		bool idealClimb2Move;
		bool isSpecifyPoleClockwise;
		bool isCounterClockwise;
		bool isBoatRecovering;
		int32_t lockingEnemyNearbyCount;
		double lockingEnemyHeight;
		bool paraKeepYaw;
		bool shouldKeepElevationRotating;
		bool isInBackUpSlope;
		double idealSlope;
		bool isKeepElevation;
		bool shouldKeepZooming;
		bool isRadiusSqueezing;
		double idealCameraSphZoomRadius;
		double idealCameraSphElevation;
		double radiusBeforeMotion;
		bool isCombatCamera;
		bool isInCombat;
		bool isLocalVehicleInCombat;
		bool isKeepRotation;
		struct Nullable_1_Double_ horizontalRecenteringKeepRotationTriggerTimer;
		struct Nullable_1_Double_ verticalRecenteringKeepRotationTriggerTimer;
		double horizontalRecenteringTriggerTimer;
		double verticalRecenteringTriggerTimer;
		bool isCombatPulling;
		double combatPullingTime;
		struct Nullable_1_Double_ _overrideMinCameraRadius;
		struct Nullable_1_Double_ _overrideMinElevation;
	};

	struct LCIndicatorPlugin__Fields
	{
		struct BaseComponentPlugin__Fields _;
		void *_timeCheckConditionKeys;
		void *allConditions;
		void *_owner;
		bool unknow;
		void *_levelGadget;
		struct GadgetDataItem *_dataItem;
		void *_tempLateData;
		void *_configIndicator;
		void *indicatorDominators;
		bool _isIndicatorShow;
		void *_checkTimer;
	};

	struct LCIndicatorPlugin
	{
		struct LCIndicatorPlugin__Class *klass;
		MonitorData *monitor;
		struct LCIndicatorPlugin__Fields fields;
	};

	struct PlayerCookRsp__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		uint32_t cookCount_;
		int32_t retcode_;
		uint32_t qteQuality_;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_ItemParam_ *itemList_;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_ItemParam_ *extralItemList_;
		struct CookRecipeData_1 *recipeData_;
	};

	struct PlayerCookRsp
	{
		struct PlayerCookRsp__Class *klass;
		MonitorData *monitor;
		struct PlayerCookRsp__Fields fields;
	};

	struct MonoCookingQTEPage__Fields
	{
		struct MonoUIProxy__Fields _;
		struct MonoElementSwitch *_elementSwitch;
		struct Transform *_cookNeedRoot;
		struct GameObject *_addInfo;
		struct Text *_addDescText;
		struct GameObject *_iconState;
		struct Transform__Array *_foodPanel;
		struct MonoUIContainer *_makeBtn;
		struct MonoUIContainer *_autoMakeBtn;
		struct MonoUIContainer *_returnBtn;
		struct GameObject *_qtePanel;
		struct GameObject *_manualQteRoot;
		struct GameObject *_autoQteRoot;
		struct MonoCookGotPanel *_cookGotPanel;
		struct Button *_endBtn;
		struct RectTransform *_goodAreaTrans;
		struct SmoothMask *_goodAreaFill;
		struct RectTransform *_perfectAreaTrans;
		struct SmoothMask *_perfectAreaFill;
		struct RectTransform *_pointerTrans;
		float _qteTime;
		float _autoQteTime;
		float _starQteDelay;
		struct GameObject *_selectNumberRoot;
		struct GameObject *_grpProficiency;
		struct Text *_proficiencyText;
		struct MonoUIContainer *_replaceBtn;
		struct MonoBagProxySlot *_curRecipeItemSlot;
		struct Text *_curRecipeFoodNum;
		struct GameObject *_grpResult;
		struct GameObject *_bonusAdditionalInfoIcon;
		struct Text *_additionalInfoText;
		struct GameObject *_grpJoypadButtons;
		struct GameObject *_bagSlotPrefab;
		struct List_1_MoleMole_MonoItemSlot_ *_cookNeedList;
		struct MonoCookAvatarSelect *_avatarPanel;
		struct MonoAvatarIcon *_avatarIcon;
		struct Transform *_avatarIconRoot;
	};

	struct MonoCookingQTEPage
	{
		struct MonoCookingQTEPage__Class *klass;
		MonitorData *monitor;
		struct MonoCookingQTEPage__Fields fields;
	};

	struct CookingQtePageContext__Fields
	{
		struct BasePageContext__Fields _;
		struct MonoCookingQTEPage *_pageMono;
		uint32_t _recipeId;
		uint32_t _avatarId;
		float _goodRangeStart;
		float _goodRangeEnd;
		float _perfectRangeStart;
		float _perfectRangeEnd;
		bool _qteStart;
		float OGOGOAJEFFI;
		bool _qteTime;
		float _qteBonusRange;
		bool _isAuto;
		int32_t _foodKind;
		uint32_t _oldProficiency;
		uint32_t _newProficiency;
		uint32_t _maxProficiency;
		uint32_t _curProficiency;
		bool _upProficiencyStart;
		float _upProficiencyTime;
		bool _focusOnNeedItem;
		int32_t _needItemIndex;
		bool canAutoCook;
		struct List_1_MoleMole_SimpleItemStruct_ *_itemGotList;
		bool _isAvatarPanelOpen;
		uint32_t _toSelectAvatarId;
		int32_t _toSelectAvatarIndex;
		struct List_1_System_UInt32_ *_avatarList;
	};

	struct CookingQtePageContext
	{
		struct CookingQtePageContext__Class *klass;
		MonitorData *monitor;
		struct CookingQtePageContext__Fields fields;
	};

	struct CookRecipeData_1__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		uint32_t proficiency_;
		uint32_t recipeId_;
	};

	struct CookRecipeData_1
	{
		struct CookRecipeData_1__Class *klass;
		MonitorData *monitor;
		struct CookRecipeData_1__Fields fields;
	};

	struct __declspec(align(8)) CookRecipeExcelConfig__Fields
	{
		struct SimpleSafeUInt32 idRawNum;
		uint32_t _nameTextMapHash;
		struct SimpleSafeUInt32 rankLevelRawNum;
		struct String *_icon;
		uint32_t _descTextMapHash;
		struct UInt32__Array *_effectDesc;
		int32_t _foodType;
		int32_t _cookMethod;
		bool _isDefaultUnlocked;
		SimpleSafeUInt32 maxProficiencyRawNum;
		struct IdCountConfig__Array *_qualityOutputVec;
		struct IdCountConfig__Array *_inputVec;
		struct String *_qteParam;
		struct SimpleSafeUInt32__Array *_qteQualityWeightVec;
	};

	struct CookRecipeExcelConfig
	{
		struct CookRecipeExcelConfig__Class *klass;
		MonitorData *monitor;
		struct CookRecipeExcelConfig__Fields fields;
	};

	struct CriwareMediaPlayer__Fields
	{
		struct MonoBehaviour__Fields _;
		struct FDNEMKPLJJP *_eventCallback_k__BackingField;
		struct AspectRatioFitter *_parentAspectRatioFitter;
		struct AspectRatioFitter *_aspectRatioFitter;
		struct Image_1 *_image;
		struct Text *_text;
		struct CriManaMovieControllerForUI *_controllerForUI;
		struct CriWareInitializer *_criwareInitializer;
		struct CriWareErrorHandler *_criwareErrorHandler;
		struct VideoSubtitles *_videoSubtitles;
		int32_t _lastStatus; // Player_Status__Enum
		struct Action_1_String_ *_onStartPlay;
		struct Action_1_String_ *_onFinishPlay;
		struct Action_1_String_ *_onError;
		struct Action *_onClose;
		struct String *_videoRuntimePath;
		bool _useSubtitle;
		struct String *_subtitleRuntimePath;
		struct String *_stat;
		int32_t _audioTrack;
		int32_t KBIMMFBKMJE; // KIPKAJKIFKJ__Enum
		uint64_t _encryptKey;
		bool _audioEncrypted;
	};

	struct CriwareMediaPlayer
	{
		struct CriwareMediaPlayer__Class *klass;
		MonitorData *monitor;
		struct CriwareMediaPlayer__Fields fields;
	};

	struct Sprite__Fields
	{
		struct Object_1__Fields _;
	};

	struct Sprite
	{
		struct Sprite__Class *klass;
		MonitorData *monitor;
		struct Sprite__Fields fields;
	};

	struct Texture__Fields
	{
		struct Object_1__Fields _;
	};

	struct Texture
	{
		struct Texture__Class *klass;
		MonitorData *monitor;
		struct Texture__Fields fields;
	};

	struct Texture2D__Fields
	{
		struct Texture__Fields _;
	};

	struct Texture2D
	{
		struct Texture2D__Class *klass;
		MonitorData *monitor;
		struct Texture2D__Fields fields;
	};

	struct Image_1__Fields
	{
		struct MaskableGraphic__Fields _;
		struct Sprite *m_CachedSprite;
		struct Sprite *m_Sprite;
		struct Sprite *m_OverrideSprite;
		int32_t m_Type;
		bool m_PreserveAspect;
		bool m_FillCenter;
		int32_t m_FillMethod;
		float m_FillAmount;
		bool m_FillClockwise;
		int32_t m_FillOrigin;
		float m_AlphaHitTestMinimumThreshold;
		bool m_Tracked;
	};

	struct Image_1
	{
		struct Image_1__Class *klass;
		MonitorData *monitor;
		struct Image_1__Fields fields;
	};

	struct MoleMole_BasePageContext__Fields
	{
		struct BaseContext__Fields _;
		struct List_1_MoleMole_BaseDialogContext_ *dialogContextList;
		struct List_1_MoleMole_BaseSubPageContext_ *subPageContextList;
		bool _forceLodOff;
		bool _autoClosePageOnBackEvent;
		bool _disableMainCamera;
		bool _pauseLevelTime;
		bool _asyncLoadRes;
		bool OCGNGMKIFGE;
		struct Coroutine *_cameraCoroutine;
		bool _joyFocusOnParentPage;
	};

	enum class MoleMole_Config_CookFoodType__Enum : int32_t
	{
		COOK_FOOD_NONE = 0x00000000,
		COOK_FOOD_HEAL = 0x00000001,
		COOK_FOOD_ATTACK = 0x00000002,
		COOK_FOOD_FUNCTION = 0x00000003,
		COOK_FOOD_DEFENSE = 0x00000004,
		COOK_RECIPE = 0x00000005,
	};

	enum class MoleMole_CookingPageType__Enum : int32_t
	{
		COOK = 0x00000000,
		COMPOUND = 0x00000001,
		RANDOM_COOK = 0x00000002,
	};

	struct MoleMole_CookingPageContext__Fields
	{
		struct MoleMole_BasePageContext__Fields _;
		struct List_1_System_UInt32_ *_compoundGroupCookList;
		struct Dictionary_2_System_UInt32_MoleMole_CompoundItemData_ *_currCompoundDic;
		int32_t _selectCompoundGroupIndex;
		uint32_t _selectCompoundGroupId;
		struct Coroutine *_refreshCoroutine;
		struct Dictionary_2_MoleMole_Config_CookFoodType_List_1_MoleMole_CookRecipeData_ *_recipeTypeDic;
		struct List_1_MoleMole_BagItemSlot_ *_foodRecipeList;
		int32_t _selectedIndex;
		uint32_t _selectedRecipeId;
		uint32_t _selectRecipeItemId;
		struct List_1_System_UInt32_ *_avatarList;
		uint32_t _selectedAvatarId;
		uint32_t _toSelectAvatarId;
		MoleMole_Config_CookFoodType__Enum _foodType;
		bool _isAsce;
		bool _screenOpen;
		bool _isAvatarPanelOpen;
		MoleMole_CookingPageType__Enum _type;
		struct MonoCookingPage *_pageMono;
		bool _focusedOnItemDetail;
	};

	struct MoleMole_CookingPageContext
	{
		struct MoleMole_CookingPageContext__Class *klass;
		MonitorData *monitor;
		struct MoleMole_CookingPageContext__Fields fields;
	};

	enum class MoleMole_InLevelPlayerProfilePageContext_ProfileType__Enum : int32_t
	{
		Simple = 0x00000000,
		Normal = 0x00000001,
	};

	enum class MoleMole_InLevelPlayerProfilePageContext_ProfileState__Enum : int32_t
	{
		Move = 0x00000000,
		Back = 0x00000001,
	};

	enum MoleMole_LayoutVersion__Enum
	{
		Mobile = 0x00000000,
		PC = 0x00000001,
		PS = 0x00000002,
	};

	enum class MoleMole_UIManager_UIBanType__Enum : int32_t
	{
		None = 0x00000000,
		Team = 0x00000001,
		QuickWidget = 0x00000002,
		Time = 0x00000003,
		Bag = 0x00000004,
		Kick = 0x00000005,
		Dungeon = 0x00000006,
		Friends = 0x00000007,
		Gacha = 0x00000008,
		ChangeAvatar = 0x00000009,
		Photograph = 0x0000000A,
		NewItemGotClick = 0x0000000B,
		QuestHintDialogCheck = 0x0000000C,
		TrackingCompanionMark = 0x0000000D,
		Quest = 0x0000000E,
		AdventureHandBook = 0x0000000F,
		Character = 0x00000010,
		Activity = 0x00000011,
		Paimon = 0x00000012,
		CodexPushTips = 0x00000013,
		BattlePass = 0x00000014,
		AimFocus = 0x00000015,
		AimNormal = 0x00000016,
		MapTransport = 0x00000017,
	};

	enum class RedPointId__Enum : int32_t
	{
		REDPOINT_RELIC_TAB = 0x000003E8,
		REDPOINT_RELIC_BRACER = 0x000003E9,
		REDPOINT_RELIC_DRESS = 0x000003EA,
		REDPOINT_RELIC_SHOES = 0x000003EB,
		REDPOINT_RELIC_RING = 0x000003EC,
		REDPOINT_RELIC_NECKLACE = 0x000003ED,
		REDPOINT_AVATAR_LEVELUP_BTN = 0x000003EE,
		REDPOINT_AVATAR_PROMOTE_BTN = 0x000003EF,
		REDPOINT_AVATAR_TAB_ONE = 0x000003F0,
		REDPOINT_AVATAR_TAB_TWO = 0x000003F1,
		REDPOINT_AVATAR_TAB_THREE = 0x000003F2,
		REDPOINT_AVATAR_TAB_FOUR = 0x000003F3,
		REDPOINT_CHARACTER_ICON = 0x000003F4,
		REDPOINT_PAIMON_ICON = 0x000003F5,
		REDPOINT_GUIDE_ICON = 0x000003F6,
		REDPOINT_HANDBOOK_ICON = 0x000003F7,
		REDPOINT_HANDBOOK_DUNGEON_TAB = 0x000003F8,
		REDPOINT_HANDBOOK_INVESTIGATION_TAB = 0x000003F9,
		REDPOINT_HANDBOOK_DUNGEON_TRIAL_TAB = 0x000003FA,
		REDPOINT_HANDBOOK_TASK_TAB = 0x000003FB,
		REDPOINT_HANDBOOK_QUEST_GUIDE_TAB = 0x000003FC,
		REDPOINT_HANDBOOK_EDUCATION_TAB = 0x000003FD,
		REDPOINT_PLAYER_MAIL = 0x000003FE,
		REDPOINT_PLAYER_FRIEND = 0x000003FF,
		REDPOINT_FRIEND_REQUEST = 0x00000400,
		REDPOINT_PLAYER_COMMUNITY = 0x00000401,
		REDPOINT_PLAYER_BULLETIN = 0x00000402,
		REDPOINT_CODEX_PUSHTIPS_ALL = 0x00000403,
		REDPOINT_PAIMON_EDITPANEL = 0x00000404,
		REDPOINT_PAIMON_EDITPANEL_NAMECARD = 0x00000405,
		REDPOINT_PAIMON_EDITPANEL_BIRTHDAY = 0x00000406,
		REDPOINT_AVATAR_PREVIEW = 0x00000407,
		REDPOINT_FORGE_QUEUE_FINISH = 0x00000408,
		REDPOINT_TALENT_TAB = 0x00000409,
		REDPOINT_AVATAR_PREVIEW_DETAIL = 0x0000040A,
		REDPOINT_CHARACTER_SELECT_BTN = 0x0000040B,
		REDPOINT_COOK_COMPOUND_FINISH = 0x0000040C,
		REDPOINT_BATTLEPASS_ICON = 0x0000040D,
		REDPOINT_BATTLEPASS_REWARD_TAB = 0x0000040E,
		REDPOINT_BATTLEPASS_MISSION_TAB = 0x0000040F,
		REDPOINT_BATTLEPASS_MISSION_TODAY_TAB = 0x00000410,
		REDPOINT_BATTLEPASS_MISSION_WEEK_TAB = 0x00000411,
		REDPOINT_BATTLEPASS_MISSION_SCHEDULE_TAB = 0x00000412,
		REDPOINT_RELICTAB_TYPE1 = 0x00000413,
		REDPOINT_RELICTAB_TYPE2 = 0x00000414,
		REDPOINT_RELICTAB_TYPE3 = 0x00000415,
		REDPOINT_RELICTAB_TYPE4 = 0x00000416,
		REDPOINT_RELICTAB_TYPE5 = 0x00000417,
		REDPOINT_BAG_ICON = 0x00000418,
		REDPOINT_BAG_TAB_1 = 0x00000419,
		REDPOINT_BAG_TAB_2 = 0x0000041A,
		REDPOINT_BAG_TAB_3 = 0x0000041B,
		REDPOINT_BAG_TAB_4 = 0x0000041C,
		REDPOINT_BAG_TAB_5 = 0x0000041D,
		REDPOINT_BAG_TAB_6 = 0x0000041E,
		REDPOINT_BAG_TAB_7 = 0x0000041F,
		REDPOINT_BAG_TAB_8 = 0x00000420,
		REDPOINT_BAG_TAB_9 = 0x00000421,
		REDPOINT_BAG_TAB_10 = 0x00000422,
		REDPOINT_GACHA = 0x00000423,
		REDPOINT_GACHA_TAB = 0x00000424,
		REDPOINT_GACHA_WISH = 0x00000425,
		REDPOINT_PLAYER_BULLETIN_IMPORTANT = 0x00000426,
		REDPOINT_PAIMON_EDITPANEL_NICKNAME = 0x00000427,
		REDPOINT_PAIMON_EDITPANEL_SIGNATURE = 0x00000428,
		REDPOINT_AVATAR_FASHION = 0x0000044C,
		REDPOINT_FETTER_BUTTON = 0x0000044D,
		REDPOINT_PROP_BUTTON = 0x0000044E,
		REDPOINT_FETTER_REWARD = 0x0000044F,
		REDPOINT_FETTER_STORY = 0x00000450,
		REDPOINT_FETTER_VOICE = 0x00000451,
		REDPOINT_AVATAR_FASHION_FLYCLOAK = 0x00000452,
		REDPOINT_AVATAR_FASHION_COSTUME = 0x00000453,
		REDPOINT_MAIL_FAVORITES = 0x00000460,
		REDPOINT_PROMOTE_REWARD = 0x0000047E,
		REDPOINT_PROMOTE_REWARD_BREACH_MATERIAL_STAR_1 = 0x0000047F,
		REDPOINT_PROMOTE_REWARD_BREACH_MATERIAL_STAR_2 = 0x00000480,
		REDPOINT_PROMOTE_REWARD_BREACH_MATERIAL_STAR_3 = 0x00000481,
		REDPOINT_PROMOTE_REWARD_BREACH_MATERIAL_STAR_4 = 0x00000482,
		REDPOINT_PROMOTE_REWARD_BREACH_MATERIAL_STAR_5 = 0x00000483,
		REDPOINT_PROMOTE_REWARD_BREACH_MATERIAL_STAR_6 = 0x00000484,
		REDPOINT_ACTIVITY = 0x000004B0,
		REDPOINT_ACTIVITY_SEAMLAMP_CONTRI = 0x000004B1,
		REDPOINT_ACTIVITY_SEAMLAMP_PHASE = 0x000004B2,
		REDPOINT_ACTIVITY_SEAMLAMP_TAB1 = 0x000004B3,
		REDPOINT_ACTIVITY_SEAMLAMP_TAB2 = 0x000004B4,
		REDPOINT_ACTIVITY_SEAMLAMP_TAB3 = 0x000004B5,
		REDPOINT_ACTIVITY_LANTERNRITE_CONTRACT = 0x000004B6,
		REDPOINT_ACTIVITY_EFFIGY = 0x000004BA,
		REDPOINT_ACTIVITY_EFFIGY_REWARD = 0x000004BB,
		REDPOINT_ACTIVITY_EFFIGY_REWARD_FIRST = 0x000004BC,
		REDPOINT_ACTIVITY_LANTERNRITE = 0x000004BD,
		REDPOINT_ACTIVITY_LANTERNRITE_MAIN_QUEST = 0x000004BE,
		REDPOINT_ACTIVITY_LANTERNRITE_MINI_QUEST = 0x000004BF,
		REDPOINT_ACTIVITY_LANTERNRITE_CHESS = 0x000004C0,
		REDPOINT_ACTIVITY_LANTERNRITE_SHOP = 0x000004C1,
		REDPOINT_ACTIVITY_MECHANICUS_GEAR_MAIN = 0x000004C2,
		REDPOINT_ACTIVITY_MECHANICUS_GEAR_MATCH = 0x000004C3,
		REDPOINT_ACTIVITY_NORMAL = 0x000004C4,
		REDPOINT_ACTIVITY_SIGNIN_START = 0x000004C5,
		REDPOINT_ACTIVITY_BONUS_START = 0x000004CE,
		REDPOINT_ACTIVITY_TOWER_RESET = 0x000004D8,
		REDPOINT_ACTIVITY_CRUCIBLE = 0x00000514,
		REDPOINT_ACTIVITY_CRUCIBLE_BTN = 0x00000515,
		REDPOINT_ACTIVITY_TRIAL_CHARACTER = 0x00000516,
		REDPOINT_ACTIVITY_TRIAL_TAB_CHARACTER = 0x00000517,
		REDPOINT_ACTIVITY_SALESMAN = 0x0000051E,
		REDPOINT_ACTIVITY_NEWBEE_BONUS = 0x00000528,
		REDPOINT_ACTIVITY_PERSONALLINE_START = 0x00000532,
		REDPOINT_ACTIVITY_FOOD_DELIVERY = 0x0000053C,
		REDPOINT_ACTIVITY_ASTER = 0x00000546,
		REDPOINT_ACTIVITY_ASTER_LITTLE_MAINBTN = 0x00000547,
		REDPOINT_ACTIVITY_ASTER_MIDDLE_MAINBTN = 0x00000548,
		REDPOINT_ACTIVITY_ASTER_LARGE_MAINBTN = 0x00000549,
		REDPOINT_ACTIVITY_ASTER_LITTLE_TASK = 0x0000054A,
		REDPOINT_ACTIVITY_ASTER_MIDDLE_TASK = 0x0000054B,
		REDPOINT_ACTIVITY_ASTER_LARGE_TASK = 0x0000054C,
		REDPOINT_ACTIVITY_ASTER_REWARD = 0x0000054D,
		REDPOINT_ACTIVITY_ASTER_SUBPAGE_GOTOBTN = 0x0000054E,
		REDPOINT_ACTIVITY_ASTER_Little_STAGE_2 = 0x0000054F,
		REDPOINT_ACTIVITY_ASTER_Little_STAGE_3 = 0x00000550,
		REDPOINT_REUNION_TASK_DAY_TAB = 0x0000055F,
		REDPOINT_ACTIVITY_REUNION_WEB = 0x00000563,
		REDPOINT_ACTIVITY_REUNION_TAB = 0x00000564,
		REDPOINT_ACTIVITY_REUNION_SIGNIN_BTN = 0x00000565,
		REDPOINT_ACTIVITY_REUNION_TASK_BTN = 0x00000566,
		REDPOINT_ACTIVITY_REUNION_GUIDE_BTN = 0x00000567,
		REDPOINT_REUNION_SIGNIN_TAB = 0x00000569,
		REDPOINT_REUNION_TASK_TAB = 0x0000056A,
		REDPOINT_REUNION_GUIDE_TAB = 0x0000056B,
		REDPOINT_ACTIVITY_BLESSING = 0x0000056E,
		REDPOINT_ACTIVITY_BLESSING_RECEIVEPIC = 0x0000056F,
		REDPOINT_ACTIVITY_BLESSING_FRIEND_RECEIVE = 0x00000570,
		REDPOINT_ACTIVITY_EXPEDITION_TAB = 0x00000578,
		REDPOINT_ACTIVITY_EXPEDITION_CHALLENGE = 0x00000579,
		REDPOINT_ACTIVITY_EXPEDITION_TOPTAB = 0x0000057A,
		REDPOINT_ACTIVITY_EXPEDITION_S_LEVEL = 0x0000057B,
		REDPOINT_AVATAR_TAB = 0x000005DC,
		REDPOINT_AVATAR_TAB_UPPER_LIMIT = 0x00000640,
		REDPOINT_PLAYER_SETTING = 0x000006A4,
		REDPOINT_PLAYER_SETTING_ACCOUNT = 0x000006A5,
		REDPOINT_PLAYER_SETTING_ACCOUNT_BIND_ACCOUNT = 0x000006A6,
		REDPOINT_PLAYER_SETTING_PRESSKEY = 0x000006A7,
		REDPOINT_PLAYER_SETTING_RESOURCE = 0x000006A8,
		REDPOINT_PLAYER_SETTING_RESOURCE_PREDOWNLOAD = 0x000006A9,
		REDPOINT_ACHIEVEMENT_ENTRY = 0x00000708,
		REDPOINT_ACHIEVEMENT_OVERVIEW_PAGE = 0x00000709,
		REDPOINT_ACHIEVEMENT_INSIDE_PAGE = 0x0000070A,
		REDPOINT_PERSONALLINE_QUEST = 0x00000712,
		REDPOINT_PERSONALLINE_ENTRY = 0x00000713,
		REDPOINT_PERSONALLINE_UNLOCK_BTN = 0x00000714,
		REDPOINT_PERSONALLINE_UNLOCK_CHAPTER = 0x00000715,
		REDPOINT_FLIGHTCHALLENGE_DETAIL_BTN = 0x0000076C,
		REDPOINT_FLIGHTCHALLENGE_TAB = 0x0000076D,
		REDPOINT_FLIGHTCHALLENGE_DAY_START = 0x0000076E,
		REDPOINT_FLIGHTCHALLENGE_Medal_START = 0x00000775,
		REDPOINT_REPUTATION_LEVEL_REWARD = 0x000007D0,
		REDPOINT_REPUTATION_HUNTING = 0x000007D1,
		REDPOINT_REPUTATION_REQUEST = 0x000007D2,
		REDPOINT_REPUTATION_QUEST = 0x000007D3,
		REDPOINT_REPUTATION_EXPLORE = 0x000007D4,
		REDPOINT_DRAGONSPINE_TAB = 0x00000834,
		REDPOINT_DRAGONSPINE_ACTIVITY_BTN = 0x00000836,
		REDPOINT_DRAGONSPINE_CHAPTER_START = 0x00000836,
		REDPOINT_PAIMON_MALL = 0x00000898,
		REDPOINT_PAIMON_SURVEY = 0x00000899,
		REDPOINT_PAIMON_MALL_RECOMMEND = 0x000008A2,
		REDPOINT_PAIMON_MALL_RECOMMEND_RESINCARD = 0x000008A3,
		REDPOINT_PAIMON_FEEDBACK = 0x000008A4,
		REDPOINT_PAIMON_HANDBOOK = 0x000008A5,
		REDPOINT_TREASUREHUNT_TAB = 0x000008FC,
		REDPOINT_TREASUREHUNT_DETAIL_BTN = 0x000008FD,
		REDPOINT_TREASUREHUNT_BONUS_BTN = 0x000008FE,
		REDPOINT_MISTTRIAL_TAB = 0x00000910,
		REDPOINT_MISTTRIAL_DUNGEON_PANEL = 0x00000911,
		REDPOINT_PAIMON_EDITPANEL_EDITPROFILE = 0x00000960,
		REDPOINT_PAIMON_CLOUDGAME = 0x00000961,
		REDPOINT_PAIMON_EDITPANEL_NAMECARD_BIND_PAIMON = 0x00000962,
		REDPOINT_PAIMON_EDITPANEL_EDITPROFILE_BIND_PAIMON = 0x00000963,
		REDPOINT_MONSTER_BANNER_DRAKE_PRIMO_ROCK_TAB = 0x000009C4,
		REDPOINT_FLEUR_FAIR_TAB = 0x000009C5,
		REDPOINT_FLEUR_FAIR_TAB_BALLOON = 0x000009C6,
		REDPOINT_FLEUR_FAIR_TAB_FALL = 0x000009C7,
		REDPOINT_FLEUR_FAIR_TAB_MUSIC = 0x000009C8,
		REDPOINT_FLEUR_FAIR_BALLOON_LEVEL_NEW = 0x000009C9,
		REDPOINT_FLEUR_FAIR_FALL_LEVEL_NEW = 0x000009CD,
		REDPOINT_FLEUR_FAIR_MUSIC_LEVEL_NEW = 0x000009D1,
		REDPOINT_FLEUR_FAIR_LEVEL_REWARD = 0x000009D5,
		REDPOINT_FLEUR_FAIR_AVATAR_REWARD = 0x000009D9,
		REDPOINT_FLEUR_FAIR_TAB_MINIGAME_ENTRY = 0x000009DC,
		REDPOINT_FLEUR_FAIR_TAB_ENTRUST_ENTRY = 0x000009DD,
		REDPOINT_FLEUR_FAIR_TAB_DUNGEON_ENTRY = 0x000009DE,
		REDPOINT_COOP_ACTIVITY_TAB = 0x00000A28,
		REDPOINT_COOP_LEGEND_TAB = 0x00000A29,
		REDPOINT_COOP_LEGEND_AVATAR = 0x00000A2A,
		REDPOINT_COOP_LEGEND_CHAPTER = 0x00000A2B,
		REDPOINT_COOP_LEGEND_CHAPTER_REWARD = 0x00000A2C,
		REDPOINT_COOP_POINT_CHAPTER_REWARD = 0x00000A2D,
		REDPOINT_WATER_SPRITE_TAB = 0x00000A8C,
		REDPOINT_WATER_SPRITE_EXPLORE_BUTTON = 0x00000A8D,
		REDPOINT_WATER_SPRITE_FINAL_QUEST_BUTTON = 0x00000A8E,
		REDPOINT_WATER_SPRITE_FINAL_RECORD_BUTTON = 0x00000A8F,
		REDPOINT_WATER_SPRITE_COURSE_BUTTON = 0x00000A90,
		REDPOINT_WATER_SPRITE_NEW_REGION_OPEN = 0x00000A91,
		REDPOINT_SUMMERTIME_TAB = 0x00000AF0,
		REDPOINT_SUMMERTIME_ACTIVITY_DETAIL = 0x00000AF1,
		REDPOINT_SUMMERTIME_ACTIVITY_STAGE_BUTTON_BASE = 0x00000AFA,
		REDPOINT_SUMMERTIME_ACTIVITY_STAGE_BUTTON_PLOT_BASE = 0x00000B04,
		REDPOINT_SUMMERTIME_STAGE2_TAB = 0x00000B0E,
		REDPOINT_SUMMERTIME_STAGE2_MISSION_TOTAL_START = 0x00000B0F,
		REDPOINT_SUMMERTIME_STAGE2_MISSION_TOTAL_END = 0x00000B14,
		REDPOINT_SUMMERTIME_STAGE2_MISSION_MEDAL_START = 0x00000B15,
		REDPOINT_SUMMERTIME_STAGE2_MISSION_MEDAL_END = 0x00000B26,
		REDPOINT_BLITZ_RUSH_TAB = 0x00000B54,
		REDPOINT_BLITZ_RUSH_PARKOUR_LEVEL_BASE = 0x00000B5E,
		REDPOINT_BLITZ_RUSH_OATH = 0x00000B72,
		REDPOINT_BLITZ_RUSH_PREV_STAGE = 0x00000B73,
		REDPOINT_BLITZ_RUSH_NEXT_STAGE = 0x00000B74,
		REDPOINT_BLITZ_RUSH_PREQUEST_GOTO = 0x00000B75,
		REDPOINT_BLITZ_RUSH_STAGE_TAB_BASE = 0x00000B7C,
		REDPOINT_ACTIVITY_OPERATION_BONUS_START = 0x00000BB8,
		REDPOINT_ACTIVITY_OPERATION_BONUS_END = 0x00000F9F,
		REDPOINT_CHANNELLER_SLAB_TAB = 0x00000FA0,
		REDPOINT_CHANNELLER_SLAB_STAGE_START = 0x00000FA1,
		REDPOINT_CHANNELLER_SLAB_CHARACTER = 0x00000FA5,
		REDPOINT_CHANNELLER_SLAB_BUFF_ENTRANCE = 0x00000FA6,
		REDPOINT_CHANNELLER_SLAB_DRIVE_ADD = 0x00000FA8,
		REDPOINT_CHANNELLER_SLAB_DRIVE_FRIEND = 0x00000FA9,
		REDPOINT_CHANNELLER_SLAB_LOOPDUNGEON_GOTO = 0x00000FAA,
		REDPOINT_CHANNELLER_SLAB_BUFF_EQUIP_SINGLE = 0x00000FAB,
		REDPOINT_CHANNELLER_SLAB_BUFF_EQUIP_MULTI = 0x00000FAC,
		REDPOINT_CHANNELLER_SLAB_LOOPDUNGEON_START = 0x00000FAD,
		REDPOINT_CHANNELLER_SLAB_LOOPDUNGEON_REWARD = 0x00000FBE,
		REDPOINT_BOUNCE_CONJURING_TAB = 0x00000FBF,
		REDPOINT_BOUNCE_CONJURING_CHAPTER_START = 0x00000FC0,
		REDPOINT_MINITOMO_HILIWEI_TAB = 0x00000FD2,
		REDPOINT_MINITOMO_HILIWEI_SUBDETAIL = 0x00000FD3,
		REDPOINT_MINITOMO_HILIWEI_DETAIL = 0x00000FD4,
		REDPOINT_MINITOMO_HILIWEI_REWARD = 0x00000FD5,
		REDPOINT_MINITOMO_HILIWEI_GUIDE_QUEST = 0x00000FD6,
		REDPOINT_MINITOMO_HILIWEI_END_QUEST = 0x00000FD7,
		REDPOINT_MONSTER_BANNER_EFFIGY_ICE_TAB = 0x00001004,
		REDPOINT_ACTIVITY_HIDE_AND_SEEK_TAB = 0x00001068,
		REDPOINT_ACTIVITY_HIDE_AND_SEEK_SCORE_REWAR = 0x00001069,
		REDPOINT_ACTIVITY_HIDE_AND_SEEK_WATCHER_REWAR = 0x0000106A,
		REDPOINT_ACTIVITY_HIDE_AND_SEEK_SKILL_BTN = 0x0000106B,
		REDPOINT_ACTIVITY_HIDE_AND_SEEK_SCORE_REWAR_DIALOG = 0x0000106C,
		REDPOINT_ACTIVITY_HIDE_AND_SEEK_WATCHER_REWAR_DIALOG = 0x0000106D,
		REDPOINT_ACTIVITY_HIDE_AND_SEEK_MAP_BTN = 0x0000106E,
		REDPOINT_ACTIVITY_HIDE_AND_SEEK_CHOOSE_MATCH_MAP = 0x0000106F,
		REDPOINT_ACTIVITY_HIDE_AND_SEEK_VIEW_GHOST_SKILL = 0x00001070,
		REDPOINT_ACTIVITY_HOMEWORLD_TAB = 0x000010CC,
		REDPOINT_ACTIVITY_HOMEWORLD_GOTO = 0x000010CD,
		REDPOINT_HOMEWORLD_HANDBOOK = 0x000010D6,
		REDPOINT_HOMEWORLD_HANDBOOK_NEXT_CHAPTER_BTN = 0x000010D7,
		REDPOINT_HOMEWORLD_BUILD_HAVE_FURNITURE_FINISH = 0x00001130,
		REDPOINT_HOMEWORLD_NEW_WOOOD_EXCHANGE_UNLOCK = 0x00001131,
		REDPOINT_HOMEWORLD_MAP_QUEST_TIP = 0x00001194,
		REDPOINT_HOMEWORLD_MAP_ISLAND_FIRST_SHOWN = 0x00001195,
		REDPOINT_ACTIVITY_BUOYANT_COMBAT_TAB = 0x000011C6,
		REDPOINT_ACTIVITY_BUOYANT_COMBAT_DETAIL = 0x000011CE,
		REDPOINT_ACTIVITY_BUOYANT_COMBAT_SUB_TAB = 0x000011CF,
		REDPOINT_ACTIVITY_ECHOSHELL = 0x000011F8,
		REDPOINT_ACTIVITY_ECHOSHELL_REWARD = 0x000011F9,
		REDPOINT_ACTIVITY_ECHOSHELL_VOICE = 0x000011FA,
		REDPOINT_ACTIVITY_H5 = 0x0000125C,
		REDPOINT_ACTIVITY_H5_NOPAIMON = 0x0000125D,
		REDPOINT_ACTIVITY_H5_FOR_SHOW = 0x0000125E,
		REDPOINT_ACTIVITY_DAOQI_ADVERTISEMENT = 0x000012C0,
		REDPOINT_ACTIVITY_CHESS_MAINTAB = 0x000012C1,
		REDPOINT_ACTIVITY_EFFIGY_FIRE_TAB = 0x000012C2,
		REDPOINT_ACTIVITY_PERPETUAL_TAB = 0x000012C3,
		REDPOINT_ACTIVITY_CHESS_REWARD_BTN = 0x000012C4,
		REDPOINT_ACTIVITY_CHESS_DETAIL_BTN = 0x000012C5,
		REDPOINT_ACTIVITY_CHESS_GOTO_CHANLLENGE_BTN = 0x000012C6,
		REDPOINT_ACTIVITY_CHESS_CARD_BTN = 0x000012C7,
		REDPOINT_ACTIVITY_CHESS_CARD_SECTION1 = 0x000012C9,
		REDPOINT_ACTIVITY_CHESS_CARD_SECTION0 = 0x000012C9,
		REDPOINT_ACTIVITY_CHESS_CARD_SECTION2 = 0x000012CA,
		REDPOINT_ACTIVITY_CHESS_CARD_SECTION3 = 0x000012CB,
		REDPOINT_ACTIVITY_CHESS_GEAR_BTN = 0x000012CC,
		REDPOINT_ACTIVITY_CHESS_OPEN_BTN = 0x000012CD,
		REDPOINT_ACTIVITY_TREASUREHUNT_BONUS_FRAGMENT = 0x000012F2,
		REDPOINT_ORAIONOKAMI_REWARD = 0x0000131A,
		REDPOINT_ORAIONOKAMI_NEW_LEVEL = 0x0000131B,
		REDPOINT_ACTIVITY_GENERAL_BANNER_START = 0x00001388,
		REDPOINT_ACTIVIYT_GENERAL_BANNER_END = 0x000013EC,
		REDPOINT_ACTIVIYT_SUMO_TAB = 0x000013ED,
		REDPOINT_ACTIVITY_SUMO_REWARD = 0x000013EE,
		REDPOINT_ACTIVITY_SUMO_GOTO = 0x000013EF,
		REDPOINT_ACTIVITY_SUMO_STAGE_START = 0x000013F0,
		REDPOINT_ACTIVITY_SUMO_DUNGEON_ENTRY_REWARD = 0x000013FB,
		REDPOINT_ACTIVITY_SUMO_TAB_UNLOCKED = 0x000013FC,
		REDPOINT_ACTIVITY_SUMO_STAGE_ENTRY_START = 0x000013FD,
		REDPOINT_ACTIVITY_SUMO_GOTO_QUEST = 0x00001408,
		REDPOINT_ACTIVITY_SUMO_NEW_SKILL_START = 0x00001409,
		REDPOINT_ACTIVITY_LUNARITE_TAB = 0x00001450,
		REDPOINT_ACTIVITY_LUNARITE_SUBPAGE_QUEST = 0x00001451,
		REDPOINT_ACTIVITY_LUNARITE_PLOT = 0x0000145A,
		REDPOINT_ACTIVITY_LUNARITE_PLOT_START = 0x0000145B,
		REDPOINT_ACTIVITY_LUNARITE_EXPLORE = 0x00001464,
		REDPOINT_ACTIVITY_LUNARITE_EXPLORE_START = 0x00001465,
		REDPOINT_ACTIVITY_LUNARITE_EXPLORE_REWARD_START = 0x00001469,
		REDPOINT_ACTIVITY_LUNARITE_CHALLENGE = 0x0000146E,
		REDPOINT_ACTIVITY_LUNARITE_CHALLENGE_START = 0x0000146F,
		REDPOINT_ACTIVITY_LUNARITE_CHALLENGE_REWARD_START = 0x00001473,
		REDPOINT_ACTIVITY_LUNARITE_CHALLENGE_SACRIFICE_START = 0x0000148D,
		REDPOINT_ACTIVITY_MOONFIN_TRIAL_TAB = 0x00001770,
		REDPOINT_ACTIVITY_MOONFIN_TRIAL_GOTO_BTN = 0x00001771,
		REDPOINT_ACTIVITY_MOONFIN_TRIAL_MISSION_TAB = 0x0000177A,
		REDPOINT_ACTIVITY_MOONFIN_TRIAL_MISSION_GOTO_BTN = 0x00001784,
		REDPOINT_ACTIVITY_MOONFIN_BANNER = 0x000017A2,
		REDPOINT_CHAT_NEW_EMOJI_SET = 0x000017D4,
		REDPOINT_ACTIVITY_ROGUELIKE_TAB = 0x00001838,
		REDPOINT_ACTIVITY_ROGUELIKE_INVITE = 0x00001839,
		REDPOINT_ACTIVITY_ROGUELIKE_DETAIL_BTN = 0x0000183A,
		REDPOINT_ACTIVITY_ROGUELIKE_DETAIL_STAGE_TAB = 0x0000183B,
		REDPOINT_ACTIVITY_ROGUELIKE_SHOWROOM_BTN = 0x00001840,
		REDPOINT_ACTIVITY_ROGUELIKE_SHIKI_BTN = 0x00001842,
		REDPOINT_ACTIVITY_ROGUELIKE_SHIKI_TAB = 0x00001843,
		REDPOINT_ACTIVITY_ROGUELIKE_DUNGEON_TAB = 0x00001857,
		REDPOINT_ACTIVITY_ROGUELIKE_NEVER_OPEN_TAB = 0x00001858,
		REDPOINT_DIG_ACTIVITY_TAB = 0x00001E14,
		REDPOINT_DIG_ACTIVITY_DETAIL = 0x00001E15,
		REDPOINT_DIG_ACTIVITY_STAGE_1_PREQUEST = 0x00001E1E,
		REDPOINT_DIG_ACTIVITY_STAGE_1_TAB = 0x00001E32,
		REDPOINT_DIG_ACTIVITY_STAGE_2_TAB = 0x00001E3C,
		REDPOINT_DIG_ACTIVITY_STAGE_2_QUEST = 0x00001E3D,
		REDPOINT_DIG_ACTIVITY_STAGE_3_TAB = 0x00001E46,
		REDPOINT_DIG_ACTIVITY_STAGE_3_QUEST = 0x00001E47,
		REDPOINT_DIG_ACTIVITY_STAGE_3_CHALLENGE = 0x00001E48,
		REDPOINT_DIG_ACTIVITY_CHALLENGE_ACTIVE = 0x00001E50,
		REDPOINT_DIG_ACTIVITY_STAGE_QUEST_FATHER = 0x00001E51,
		REDPOINT_DIG_ACTIVITY_CHALLENGE_ANIMATION_PLAYED = 0x00001E52,
		REDPOINT_DIG_ACTIVITY_END_QUEST = 0x00001E53,
		REDPOINT_DIG_ACTIVITY_CHALLENGE_REWARD = 0x00001E54,
		REDPOINT_MUSICGAME_ACTIVITY_TAB = 0x00001F40,
		REDPOINT_MUSICGAME_ACTIVITY_GOTOQUEST = 0x00001F41,
		REDPOINT_MUSICGAME_ACTIVITY_TAB_REWARD = 0x00001F42,
		REDPOINT_MUSICGAME_ACTIVITY_TAB_MUSIC = 0x00001F43,
		REDPOINT_MUSICGAME_ACTIVITY_MUSICREWARD_START = 0x00001F45,
		REDPOINT_MUSICGAME_ACTIVITY_MUSICREWARD_END = 0x00001F59,
		REDPOINT_MUSICGAME_ACTIVITY_MUSIC_NEW_START = 0x00001F5A,
		REDPOINT_MUSICGAME_ACTIVITY_MUSIC_NEW_END = 0x00001F77,
		REDPOINT_MUSICGAME_ACTIVITY_MUSIC_LIST_START = 0x00001F78,
		REDPOINT_MUSICGAME_ACTIVITY_MUSIC_LIST_END = 0x00001F8C,
		REDPOINT_GROWFLOWER_TAB = 0x00002008,
		REDPOINT_GROWFLOWER_GOTO_BTN = 0x00002009,
		REDPOINT_GROWFLOWER_REWARD_BTN = 0x0000200A,
		REDPOINT_GROWFLOWER_DONATE_BTN = 0x0000200B,
		REDPOINT_GROWFLOWER_RECV_BTN = 0x0000200C,
		REDPOINT_ACTIVITY_HACHI_TAB = 0x000020D0,
		REDPOINT_ACTIVITY_HACHI_SUBPAGE_GOTO_QUEST = 0x000020D1,
		REDPOINT_ACTIVITY_HACHI_SUBPAGE_ACTIVITY_DETAIL = 0x000020D2,
		REDPOINT_ACTIVITY_HACHI_STAGEPAGE_STAGE_TAB = 0x000020D3,
		REDPOINT_ACTIVITY_WINTERCAMP_TAB = 0x00002134,
		REDPOINT_ACTIVITY_WINTERCAMP_CAMP_TAB = 0x0000213E,
		REDPOINT_ACTIVITY_WINTERCAMP_BOSS_TAB = 0x0000213F,
		REDPOINT_ACTIVITY_WINTERCAMP_QUEST01_PRE = 0x00002140,
		REDPOINT_ACTIVITY_WINTERCAMP_QUEST01_SELF = 0x00002141,
		REDPOINT_ACTIVITY_WINTERCAMP_QUEST01 = 0x00002142,
		REDPOINT_ACTIVITY_WINTERCAMP_QUEST02 = 0x00002143,
		REDPOINT_ACTIVITY_WINTERCAMP_QUEST = 0x00002144,
		REDPOINT_ACTIVITY_WINTERCAMP_BOSS = 0x00002145,
		REDPOINT_ACTIVITY_WINTERCAMP_BOSS_REWARD = 0x00002146,
		REDPOINT_ACTIVITY_WINTERCAMP_RACE = 0x00002148,
		REDPOINT_ACTIVITY_WINTERCAMP_EXPLORE = 0x00002152,
		REDPOINT_ACTIVITY_WINTERCAMP_BATTLE = 0x00002166,
		REDPOINT_ACTIVITY_WINTERCAMP_SNOWMAN_TAB = 0x00002184,
		REDPOINT_ACTIVITY_WINTERCAMP_SNOWMAN_DONATE = 0x00002185,
		REDPOINT_ACTIVITY_WINTERCAMP_SNOWMAN_DONATE_RECV = 0x00002186,
		REDPOINT_ACTIVITY_WINTERCAMP_SNOWMAN_TABS = 0x00002187,
		REDPOINT_ACTIVITY_WINTERCAMP_SNOWMAN_TABS_REWARDS = 0x0000218C,
		REDPOINT_CHANNELLER_SLAB_STAGE_START_V2 = 0x00002198,
		REDPOINT_CHANNELLER_SLAB_LOOPDUNGEON_START_V2 = 0x0000219D,
		REDPOINT_ACTIVITY_POTION = 0x000021FC,
		REDPOINT_ACTIVITY_POTION_PREQUEST = 0x000021FD,
		REDPOINT_ACTIVITY_POTION_DETAIL = 0x00002206,
		REDPOINT_ACTIVITY_POTION_STAGE1 = 0x00002207,
		REDPOINT_ACTIVITY_POTION_STAGE1_REWARD = 0x00002208,
		REDPOINT_ACTIVITY_POTION_STAGE2 = 0x00002209,
		REDPOINT_ACTIVITY_POTION_STAGE2_REWARD = 0x0000220A,
		REDPOINT_ACTIVITY_POTION_STAGE3 = 0x0000220B,
		REDPOINT_ACTIVITY_POTION_STAGE3_REWARD = 0x0000220C,
		REDPOINT_ACTIVITY_TANUKITRAVEL = 0x00002260,
		REDPOINT_ACTIVITY_TANUKITRAVEL_GUIDE = 0x00002261,
		REDPOINT_ACTIVITY_TANUKITRAVEL_ROUTE = 0x00002262,
		REDPOINT_ACTIVITY_TANUKITRAVEL_PREORDER = 0x00002263,
		REDPOINT_ACTIVITY_TANUKITRAVEL_ROUTE_TABS = 0x0000226A,
		REDPOINT_ACTIVITY_TANUKITRAVEL_ROUTE_TABS_PREUNLOCK = 0x0000227E,
		REDPOINT_ACTIVITY_TANUKITRAVEL_ROUTE_TABS_UNLOCK = 0x00002288,
		REDPOINT_ACTIVITY_TANUKITRAVEL_ROUTE_TABS_REWARD = 0x00002292,
		REDPOINT_ACTIVITY_LANTERN_RITE_V2_TAB = 0x000022C4,
		REDPOINT_ACTIVITY_LANTERN_RITE_V2_SUBPAGE_DETAIL = 0x000022C5,
		REDPOINT_ACTIVITY_LANTERN_RITE_V2_SUBPAGE_CLOTHES = 0x000022C6,
		REDPOINT_ACTIVITY_LANTERN_RITE_V2_SUBPAGE_AVATAR = 0x000022C7,
		REDPOINT_ACTIVITY_LANTERN_RITE_V2_UI3D_SALVAGE = 0x000022CE,
		REDPOINT_ACTIVITY_LANTERN_RITE_V2_SALVAGE_MAIN_TAB = 0x000022CF,
		REDPOINT_ACTIVITY_LANTERN_RITE_V2_SALVAGE_SUB_TAB = 0x000022D2,
		REDPOINT_ACTIVITY_LANTERN_RITE_V2_UI3D_MINI_ELDRITCH = 0x000022DA,
		REDPOINT_ACTIVITY_LANTERN_RITE_V2_UI3D_PROJECTION = 0x000022E3,
		REDPOINT_ACTIVITY_LANTERN_RITE_V2_PROJECTION_SUB_PAGE_QUEST = 0x000022E4,
		REDPOINT_ACTIVITY_LANTERN_RITE_V2_PROJECTION_SUB_PAGE_STAGE = 0x000022E5,
		REDPOINT_ACTIVITY_LANTERN_RITE_V2_PROJECTION_REWARD = 0x000022E6,
		REDPOINT_ACTIVITY_LANTERN_RITE_V2_PROJECTION_STAGE_TAB = 0x000022E7,
		REDPOINT_ACTIVITY_LANTERN_RITE_V2_UI3D_FIREWORK = 0x00002300,
		REDPOINT_ACTIVITY_LANTERN_RITE_V2_FIREWORK_STAGE_TAB = 0x00002301,
		REDPOINT_ACTIVITY_LANTERN_RITE_V2_FIREWORK_STAGE_TAB_FOR_CHALLENGE = 0x00002305,
		REDPOINT_ACTIVITY_MICHIAE_OFFERING_REWARD = 0x00002328,
		REDPOINT_ACTIVITY_MICHIAE_NEW_BATTLE_SKILL = 0x00002329,
		REDPOINT_ACTIVITY_MICHIAE_TAB = 0x0000232A,
		REDPOINT_ACTIVITY_MICHIAE_PRE_QUEST_SET_BEGIN = 0x0000232B,
		REDPOINT_ACTIVITY_MICHIAE_PRE_ACTIVITY_QUEST_BEGIN = 0x0000232C,
		REDPOINT_ACTIVITY_MICHIAE_ACTIVITY_SUB_PAGE_UNLOCK = 0x0000232D,
		REDPOINT_ACTIVITY_MICHIAE_BOSS_CHALLENGE = 0x0000232E,
		REDPOINT_ACTIVITY_MICHIAE_ACTIVITY_DETAILS = 0x0000232F,
		REDPOINT_ACTIVITY_MICHIAE_ACTIVITY_DETAILS_TAB = 0x00002330,
		REDPOINT_ACTIVITY_MICHIAE_ACTIVITY_DETAILS_OFFERING_REWARD = 0x00002333,
		REDPOINT_ACTIVITY_MICHIAE_ACTIVITY_OPEN = 0x00002334,
		REDPOINT_ACTIVITY_UGC = 0x0000235A,
		REDPOINT_ACTIVITY_UGC_REWARD_ENTRANCE = 0x0000235B,
		REDPOINT_ACTIVITY_UGC_REWARD_OFFICIAL = 0x0000235C,
		REDPOINT_ACTIVITY_UGC_REWARD_DIY = 0x0000235D,
		REDPOINT_ACTIVITY_UGC_OFFICIAL_ENTRANCE = 0x0000235E,
		REDPOINT_ACTIVITY_UGC_OFFICIAL_NEW_ITEM = 0x0000235F,
		REDPOINT_ACTIVITY_UGC_DIY_ENTRANCE = 0x00002360,
		REDPOINT_ACTIVITY_UGC_DIY_EDIT_TAB = 0x00002361,
		REDPOINT_ACTIVITY_UGC_DIY_CREATE_BTN = 0x00002362,
		REDPOINT_ACTIVITY_UGC_SETTING_PAGE = 0x00002363,
		REDPOINT_ACTIVITY_BARTENDER = 0x0000238C,
		REDPOINT_ACTIVITY_BARTENDER_RECIPE = 0x0000238D,
		REDPOINT_ACTIVITY_BARTENDER_STORY = 0x0000238E,
		REDPOINT_ACTIVITY_BARTENDER_CHALLENGE = 0x0000238F,
		REDPOINT_ACTIVITY_BARTENDER_RECIPE_FORMULA_UNLOCK = 0x00002390,
		REDPOINT_ACTIVITY_BARTENDER_RECIPE_MATERIAL_UNLOCK = 0x000023C2,
		REDPOINT_ACTIVITY_BARTENDER_PREQUEST = 0x000023E0,
		REDPOINT_ACTIVITY_BARTENDER_OPENQUEST = 0x000023E1,
		REDPOINT_ACTIVITY_BARTENDER_RECIPE_REWARD = 0x000023E2,
		REDPOINT_ACTIVITY_BARTENDER_RECIPE_TAB_FORMULA = 0x000023E3,
		REDPOINT_ACTIVITY_BARTENDER_RECIPE_TAB_MATERIAL = 0x000023E4,
		REDPOINT_ACTIVITY_BARTENDER_PRESONALQUEST = 0x000023E5,
		REDPOINT_ACTIVITY_BARTENDER_STORY_START = 0x000023E6,
		REDPOINT_ACTIVITY_BARTENDER_STORY_REWARD = 0x000023EF,
		REDPOINT_ACTIVITY_BARTENDER_CHALLENGE_START = 0x000023F0,
		REDPOINT_ACTIVITY_BARTENDER_CHALLENGE_REWARD_START = 0x000023FA,
		REDPOINT_ACTIVITY_BARTENDER_RECIPE_TAB_DRINK_TYPE = 0x00002404,
		REDPOINT_ACTIVITY_BARTENDER_ENDINGQUEST = 0x0000240A,
		REDPOINT_ACTIVITY_IRODORI_TAB = 0x00002454,
		REDPOINT_ACTIVITY_IRODORI_SUBPAGE_DETAIL = 0x00002455,
		REDPOINT_ACTIVITY_IRODORI_SUBPAGE_AVATAR = 0x00002456,
		REDPOINT_ACTIVITY_IRODORI_SUBPAGE_STORY = 0x00002457,
		REDPOINT_ACTIVITY_IRODORI_STORY_TAB = 0x00002458,
		REDPOINT_ACTIVITY_IRODORI_STORY_BUTTON = 0x00002462,
		REDPOINT_ACTIVITY_IRODORI_MAIN_PHOTO = 0x0000246C,
		REDPOINT_ACTIVITY_IRODORI_MAIN_CHESS = 0x0000246D,
		REDPOINT_ACTIVITY_IRODORI_MAIN_MASTER = 0x0000246E,
		REDPOINT_ACTIVITY_IRODORI_MAIN_FLOWER = 0x0000246F,
		REDPOINT_ACTIVITY_IRODORI_FLOWER_STAGE_TAB = 0x00002470,
		REDPOINT_ACTIVITY_IRODORI_FLOWER_NEW_STAGE = 0x00002474,
		REDPOINT_ACTIVITY_IRODORI_FLOWER_NEW_REWARD = 0x00002478,
		REDPOINT_ACTIVITY_IRODORI_FLOWER_MAIN_CODEX = 0x0000247C,
		REDPOINT_ACTIVITY_IRODORI_FLOWER_RIDDLE_CHECK_BUTTON = 0x0000247D,
		REDPOINT_ACTIVITY_IRODORI_MASTER_STAGE_TAB = 0x00002486,
		REDPOINT_ACTIVITY_IRODORI_MASTER_STAGE_OPEN = 0x0000248B,
		REDPOINT_ACTIVITY_IRODORI_PHOTO_STAGE_TAB = 0x00002490,
		REDPOINT_ACTIVITY_IRODORI_PHOTO_STAGE_OPEN = 0x00002495,
		REDPOINT_ACTIVITY_IRODORI_MASTER_GUIDE_OPEN = 0x0000249A,
		REDPOINT_ACTIVITY_IRODORI_PHOTO_GUIDE_OPEN = 0x0000249B,
		REDPOINT_ACTIVITY_IRODORI_FLOWER_GUIDE_OPEN = 0x0000249C,
		REDPOINT_ACTIVITY_IRODORI_CHESS_GUIDE_OPEN = 0x0000249D,
		REDPOINT_ACTIVITY_IRODORI_CHESS_STAGE_TAB = 0x000024B8,
		REDPOINT_ACTIVITY_IRODORI_CHESS_DETAIL_PAGE_MAP_TAB = 0x000024BC,
		REDPOINT_ACTIVITY_IRODORI_CHESS_DETAIL_PAGE_MONSTER_TAB = 0x000024BD,
		REDPOINT_ACTIVITY_IRODORI_CHESS_DETAIL_PAGE_MAP_LEVEL_TAB = 0x000024BE,
		REDPOINT_ACTIVITY_IRODORI_CHESS_DETAIL_PAGE_MAP_LEVEL_SUBTAB = 0x000024C2,
		REDPOINT_ACTIVITY_IRODORI_CHESS_DETAIL_PAGE_MONSTER_LEVEL_TAB = 0x000024CA,
		REDPOINT_ACTIVITY_IRODORI_CHESS_DETAIL_PAGE_MONSTER_LEVEL_SUBTAB = 0x000024CE,
		REDPOINT_ACTIVITY_IRODORI_CHESS_ENTRY_PAGE_LEVEL_TAB = 0x000024D6,
		REDPOINT_ACTIVITY_IRODORI_CHESS_ENTRY_PAGE_LEVEL_SUBTAB = 0x000024DA,
		REDPOINT_ACTIVITY_CRYSTAL_LINK_TAB = 0x0000251C,
		REDPOINT_ACTIVITY_CRYSTAL_LINK_NEVER_OPEN = 0x0000251D,
		REDPOINT_ACTIVITY_CRYSTAL_LINK_PREQUEST_FINISH = 0x0000251E,
		REDPOINT_ACTIVITY_CRYSTAL_LINK_OPENQUEST_FINISH = 0x0000251F,
		REDPOINT_ACTIVITY_CRYSTAL_LINK_LEVEL_WATCHER_PAR = 0x00002520,
		REDPOINT_ACTIVITY_CRYSTAL_LINK_LEVEL_WATCHER = 0x00002521,
		REDPOINT_ACTIVITY_CRYSTAL_LINK_NEW_DUNGEON_PAR = 0x0000253A,
		REDPOINT_ACTIVITY_CRYSTAL_LINK_NEW_DUNGEON = 0x0000253B,
		REDPOINT_ACTIVITY_CRYSTAL_LINK_NEW_DUNGEON_ENTRY = 0x00002549,
		REDPOINT_ACTIVITY_PHOTO_TAB = 0x00002558,
		REDPOINT_ACTIVITY_PHOTO_SUBPAGE_ACTIVITY_DETAIL = 0x00002559,
		REDPOINT_ACTIVITY_PHOTO_SUBPAGE_PHOTO_POS_BASE = 0x00002562,
		REDPOINT_ACTIVITY_PHOTO_SUBPAGE_PHOTO_POS_END = 0x00002576,
		REDPOINT_ACTIVITY_MUSIC_GAME_V3_TAB = 0x00002580,
		REDPOINT_ACTIVITY_MUSIC_GAME_V3_PREQUEST = 0x00002581,
		REDPOINT_ACTIVITY_MUSIC_GAME_V3_INVITATION = 0x00002582,
		REDPOINT_ACTIVITY_MUSIC_GAME_V3_OPENQUEST = 0x00002583,
		REDPOINT_ACTIVITY_MUSIC_GAME_V3_LEVEL_ENTRY = 0x00002584,
		REDPOINT_ACTIVITY_MUSIC_GAME_V3_ALBUM = 0x00002585,
		REDPOINT_ACTIVITY_MUSIC_GAME_V3_REWARD = 0x00002590,
		REDPOINT_ACTIVITY_MUSIC_GAME_V3_BAN = 0x0000259E,
		REDPOINT_ACTIVITY_SPICE_OPEN = 0x000025E3,
		REDPOINT_ACTIVITY_SPICE_TAB = 0x000025E4,
		REDPOINT_ACTIVITY_SPICE_MAKE = 0x000025E5,
		REDPOINT_ACTIVITY_SPICE_REWARD = 0x000025E6,
		REDPOINT_ACTIVITY_SPICE_DETAIL = 0x000025E9,
		REDPOINT_ACTIVITY_ROGUEDIARY = 0x000025F8,
		REDPOINT_ACTIVITY_ROGUEDIARY_QUEST_ENTRY = 0x000025F9,
		REDPOINT_ACTIVITY_ROGUEDIARY_DUNGEON_ENTRY = 0x000025FA,
		REDPOINT_ACTIVITY_ROGUEDIARY_QUEST_TAB_1 = 0x000025FB,
		REDPOINT_ACTIVITY_ROGUEDIARY_QUEST_TAB_2 = 0x000025FC,
		REDPOINT_ACTIVITY_ROGUEDIARY_QUEST_TAB_3 = 0x000025FD,
		REDPOINT_ACTIVITY_ROGUEDIARY_QUEST_TAB_4 = 0x000025FE,
		REDPOINT_ACTIVITY_ROGUEDIARY_STAGE_TAB_1 = 0x000025FF,
		REDPOINT_ACTIVITY_ROGUEDIARY_STAGE_TAB_2 = 0x00002600,
		REDPOINT_ACTIVITY_ROGUEDIARY_STAGE_TAB_3 = 0x00002601,
		REDPOINT_ACTIVITY_ROGUEDIARY_STAGE_TAB_4 = 0x00002602,
		REDPOINT_ACTIVITY_ROGUEDIARY_QUEST_REWARD = 0x00002603,
		REDPOINT_ACTIVITY_ROGUEDIARY_INDUNGEON_MONSTERREFRESH = 0x0000260C,
		REDPOINT_ACTIVITY_GACHA_SUBPAGE_TAB = 0x00002648,
		REDPOINT_ACTIVITY_GACHA_OPENQUEST_BTN = 0x00002649,
		REDPOINT_ACTIVITY_GACHA_TEACHMODE_BTN = 0x0000264A,
		REDPOINT_ACTIVITY_GACHA_FREEMODE_BTN = 0x0000264B,
		REDPOINT_ACTIVITY_GACHA_TEACHMODE_STAGE_1 = 0x0000264C,
		REDPOINT_ACTIVITY_GACHA_TEACHMODE_STAGE_2 = 0x0000264D,
		REDPOINT_ACTIVITY_GACHA_TEACHMODE_STAGE_3 = 0x0000264E,
		REDPOINT_ACTIVITY_GACHA_TEACHMODE_REWARD_1 = 0x0000264F,
		REDPOINT_ACTIVITY_GACHA_TEACHMODE_REWARD_2 = 0x00002650,
		REDPOINT_ACTIVITY_GACHA_TEACHMODE_REWARD_3 = 0x00002651,
		REDPOINT_ACTIVITY_GACHA_TEACHMODE_GOTO = 0x00002652,
		REDPOINT_ACTIVITY_GACHA_FREEMODE_GOTO = 0x00002653,
		REDPOINT_ACTIVITY_GACHA_GIFT_BTN = 0x00002654,
		REDPOINT_ACTIVITY_GACHA_MY_GIFT_BTN = 0x00002655,
		REDPOINT_ACTIVITY_GACHA_FETCH_GIFT_BTN = 0x00002656,
		REDPOINT_ACTIVITY_GACHA_WATCHER_REWARD_BTN = 0x00002657,
		REDPOINT_ACTIVITY_GACHA_TEACHMODE_STAGE_OPEN_1 = 0x00002658,
		REDPOINT_ACTIVITY_GACHA_TEACHMODE_STAGE_OPEN_2 = 0x00002659,
		REDPOINT_ACTIVITY_GACHA_TEACHMODE_STAGE_OPEN_3 = 0x0000265A,
		REDPOINT_ACTIVITY_GACHA_TEACHMODE_QUEST_OPEN_1 = 0x0000265B,
		REDPOINT_ACTIVITY_GACHA_TEACHMODE_QUEST_OPEN_2 = 0x0000265C,
		REDPOINT_ACTIVITY_GACHA_TEACHMODE_QUEST_OPEN_3 = 0x0000265D,
		REDPOINT_ACTIVITY_GACHA_EXCCHANGE_BAG_DAY = 0x0000265E,
		REDPOINT_ACTIVITY__CHASMCHALLENGE_SUBPAGE_TAB = 0x000026AC,
		REDPOINT_ACTIVITY__CHASMCHALLENGE_GO_TO_CHALLENGE = 0x000026AD,
		REDPOINT_ACTIVITY__CHASMCHALLENGE_TAB = 0x000026AE,
		REDPOINT_ACTIVITY__CHASMCHALLENGE_NEW_STAGE = 0x000026B3,
		REDPOINT_ACTIVITY__CHASMCHALLENGE_STAGE_REWARD = 0x000026B8,
		REDPOINT_ACTIVITY__CHASMCHALLENGE_FINAL_STAGE_GALLERY_UNLOCK = 0x000026BD,
		REDPOINT_ACTIVITY_ARENACHALLENGE_TAB = 0x000449A8,
		REDPOINT_ACTIVITY_ARENACHALLENGE_NEVER_OPEN = 0x000449A9,
		REDPOINT_ACTIVITY_ARENACHALLENGE_PREQUEST_FINISH = 0x000449AA,
		REDPOINT_ACTIVITY_ARENACHALLENGE_OPENQUEST_FINISH = 0x000449AB,
		REDPOINT_ACTIVITY_ARENACHALLENGE_LEVEL_WATCHER_ALL = 0x000449AD,
		REDPOINT_ACTIVITY_ARENACHALLENGE_NEW_DUNGEON_PAR = 0x000449C6,
		REDPOINT_ACTIVITY_ARENACHALLENGE_NEW_DUNGEON = 0x000449C7,
		REDPOINT_ACTIVITY_ARENACHALLENGE_NEW_DUNGEON_ENTRY = 0x000449D1,
		REDPOINT_ACTIVITY_ARENACHALLENGE_LEVEL_WATCHER_ENTRY = 0x000449DB,
		REDPOINT_ACTIVITY_ARENACHALLENGE_CRAZY_MODE_ENTRY = 0x000449E5,
		REDPOINT_ACTIVITY_ARENACHALLENGE_NORMAL_MODE_ENTRY = 0x000449EF,
		REDPOINT_ACTIVITY_ISLANDPARTY_TAB = 0x00044D90,
		REDPOINT_ACTIVITY_ISLANDPARTY_SUBPAGE_DETAIL = 0x00044D91,
		REDPOINT_ACTIVITY_ISLANDPARTY_SUBPAGE_MIDDLEQUEST = 0x00044D92,
		REDPOINT_ACTIVITY_ISLANDPARTY_MAINPAGE_NEWTAB = 0x00044DF4,
		REDPOINT_ACTIVITY_ISLANDPARTY_MAINPAGE_TAB = 0x00044E58,
		REDPOINT_ACTIVITY_ISLANDPARTY_MPPAGE_TAB = 0x00044EBC,
		REDPOINT_ACTIVITY_ECHOSHELL_V2_TAB = 0x00045178,
		REDPOINT_ACTIVITY_ECHOSHELL_V2_PREQUEST = 0x00045179,
		REDPOINT_ACTIVITY_ECHOSHELL_V2_REWARD_ENTRY = 0x0004517A,
		REDPOINT_ACTIVITY_ECHOSHELL_V2_KNIGHT_ENTRY = 0x0004517B,
		REDPOINT_ACTIVITY_ECHOSHELL_V2_FATUI_ENTRY = 0x0004517C,
		REDPOINT_ACTIVITY_ECHOSHELL_V2_FATUI_TAB = 0x0004517D,
		REDPOINT_ACTIVITY_ECHOSHELL_V2_SPECIAL_ITEM = 0x00045182,
		REDPOINT_ACTIVITY_ECHOSHELL_V2_ITEM = 0x00045183,
		REDPOINT_ACTIVITY_SUMMERTIME_V2_TAB = 0x00045560,
		REDPOINT_ACTIVITY_SUMMERTIME_V2_DETAIL = 0x00045561,
		REDPOINT_ACTIVITY_SUMMERTIME_V2_AVTAR = 0x00045562,
		REDPOINT_ACTIVITY_SUMMERTIME_V2_PRE_QUEST = 0x00045563,
		REDPOINT_ACTIVITY_SUMMERTIME_V2_MIDDLE_QUEST = 0x00045564,
		REDPOINT_ACTIVITY_SUMMERTIME_V2_TUTORIAL = 0x00045565,
		REDPOINT_ACTIVITY_SUMMERTIME_V2_SUBACTIVITY_BUTTON_START = 0x0004556A,
		REDPOINT_ACTIVITY_SUMMERTIME_V2_SUBACTIVITY_REWARD_START = 0x0004556F,
		REDPOINT_ACTIVITY_SUMMERTIME_V2_BOAT_STAGE_START = 0x00045574,
		REDPOINT_ACTIVITY_SUMMERTIME_V2_BOAT_REWARD_START = 0x0004557E,
		REDPOINT_ACTIVITY_SUMMERTIME_V2_DUNGEON_CIRCLE_START = 0x00045588,
		REDPOINT_ACTIVITY_GEAR_TAB = 0x00045948,
		REDPOINT_ACTIVITY_GEAR_SUBPAGE_ACTIVITY_DETAIL = 0x00045949,
		REDPOINT_ACTIVITY_GEAR_SUBPAGE_JIGSAW_LEVEL = 0x0004594A,
		REDPOINT_ACTIVITY_GEAR_SUBPAGE_REWARD = 0x0004594B,
		REDPOINT_ACTIVITY_GEAR_SUBPAGE_GEAR_LEVEL = 0x00045952,
		REDPOINT_ACTIVITY_GEAR_LEVEL_SELECT_PAGE = 0x0004595C,
		REDPOINT_ACTIVITY_GEAR_LEVEL_SELECT_REWARD = 0x0004595D,
		REDPOINT_ACTIVITY_GEAR_LEVEL_SELECT_GEAR_LEVEL = 0x00045966,
		REDPOINT_ACTIVITY_TREASUREHUNT_TAB = 0x000493E0,
		REDPOINT_ACTIVITY_TREASUREHUNT_NEW_REGION_START = 0x000493E1,
		REDPOINT_ACTIVITY_TREASUREHUNT_NEW_REGION_END = 0x000493E6,
		REDPOINT_ACTIVITY_TREASUREHUNT_DETAIL = 0x000493E7,
		REDPOINT_ACTIVITY_INSTABLEPSRAY_SUBPAGE_TAB = 0x00049445,
		REDPOINT_ACTIVITY_INSTABLEPSRAY_GO_TO_CHALLENGE = 0x00049446,
		REDPOINT_ACTIVITY_INSTABLESPRAY_TAB = 0x00049447,
		REDPOINT_ACTIVITY_INSTABLESPRAY_NEW_STAGE = 0x0004944F,
		REDPOINT_ACTIVITY_INSTABLESPRAY_STAGE_REWARD = 0x00049459,
		REDPOINT_ACTIVITY_INSTABLESPRAY_POST_QUEST = 0x0004946C,
		REDPOINT_ACTIVITY_GRAVEN_INNOCENCE_TAB = 0x000497C8,
		REDPOINT_ACTIVITY_GRAVEN_INNOCENCE_ENTRY_STORY = 0x000497C9,
		REDPOINT_ACTIVITY_GRAVEN_INNOCENCE_ENTRY_INVESTIGATION = 0x000497CA,
		REDPOINT_ACTIVITY_GRAVEN_INNOCENCE_ENTRY_CARVE = 0x000497CB,
		REDPOINT_ACTIVITY_GRAVEN_INNOCENCE_STATE_OPTIONAL_PRE_QUEST = 0x000497CC,
		REDPOINT_ACTIVITY_GRAVEN_INNOCENCE_STATE_GUIDE_QUEST = 0x000497CD,
		REDPOINT_ACTIVITY_GRAVEN_INNOCENCE_CARVE_STAGE_UNLOCK = 0x000497D2,
		REDPOINT_ACTIVITY_GRAVEN_INNOCENCE_TAB_PHOTOGRAPH = 0x0004982C,
		REDPOINT_ACTIVITY_GRAVEN_INNOCENCE_TAB_BOSS = 0x0004982D,
		REDPOINT_ACTIVITY_GRAVEN_INNOCENCE_TAB_RACE = 0x0004982E,
		REDPOINT_ACTIVITY_GRAVEN_INNOCENCE_TAB_CAMP = 0x0004982F,
		REDPOINT_ACTIVITY_GRAVEN_INNOCENCE_PHOTOGRAPH_STAGES_START = 0x00049890,
		REDPOINT_ACTIVITY_GRAVEN_INNOCENCE_PHOTOGRAPH_PHOTOS = 0x0004989A,
		REDPOINT_ACTIVITY_GRAVEN_INNOCENCE_PHOTOGRAPH_QUEST = 0x000498D6,
		REDPOINT_ACTIVITY_GRAVEN_INNOCENCE_RACE_START = 0x000498F4,
		REDPOINT_ACTIVITY_GRAVEN_INNOCENCE_CAMP_START = 0x00049958,
		REDPOINT_ACTIVITY_GRAVEN_INNOCENCE_BOSS_REGION = 0x000499BC,
		REDPOINT_ACTIVITY_GRAVEN_INNOCENCE_BOSS_BOSS = 0x000499C6,
		REDPOINT_ACTIVITY_GRAVEN_INNOCENCE_BOSS_REWARD = 0x000499D0,
		REDPOINT_ACTIVITY_GRAVEN_INNOCENCE_PHOTOGRAPH_UNLOCK_START = 0x00049A20,
		REDPOINT_ACTIVITY_GRAVEN_INNOCENCE_RACE_UNLOCK_START = 0x00049A2A,
		REDPOINT_ACTIVITY_GRAVEN_INNOCENCE_CAMP_UNLOCK_START = 0x00049A34,
		REDPOINT_ACTIVITY_MUQADAS_POTION = 0x00049BB0,
		REDPOINT_ACTIVITY_MUQADAS_POTION_INFO_BTN = 0x00049BB1,
		REDPOINT_ACTIVITY_MUQADAS_POTION_LEVEL_TAB = 0x00049BB2,
		REDPOINT_ACTIVITY_MUQADAS_POTION_ENTRY_TAB = 0x00049BBB,
		REDPOINT_VANASARA_REWARD = 0x00049F98,
		REDPOINT_ACTIVITY_WINDFIELD_TAB = 0x0004BED8,
		REDPOINT_ACTIVITY_WINDFIELD_SUBPAGE_DETAIL = 0x0004BED9,
		REDPOINT_ACTIVITY_WINDFIELD_DETAILPAGE_TAB = 0x0004BF3C,
		REDPOINT_ACTIVITY_WINDFIELD_DETAILPAGE_NEWTAB = 0x0004BFA0,
		REDPOINT_ACTIVITY_WINDFIELD_CHALLENGEPAGE_TAB = 0x0004C004,
		REDPOINT_ACTIVITY_EXPLORE_TAB = 0x0004C2C0,
		REDPOINT_ACTIVITY_EXPLORE_SUBPAGE_ACTIVITY_DETAIL = 0x0004C2C1,
		REDPOINT_ACTIVITY_EXPLORE_STAGE_BASE = 0x0004C2D4,
		REDPOINT_ACTIVITY_VINTAGE_CAMPCHALLENGE_TAB = 0x0004C6A8,
		REDPOINT_ACTIVITY_VINTAGE_CAMPCHALLENGE_STAGE_1 = 0x0004C6A9,
		REDPOINT_ACTIVITY_VINTAGE_CAMPCHALLENGE_STAGE_2 = 0x0004C6AA,
		REDPOINT_ACTIVITY_VINTAGE_CAMPCHALLENGE_STAGE_3 = 0x0004C6AB,
		REDPOINT_ACTIVITY_VINTAGE_CAMPCHALLENGE_STAGE_OPEN_1 = 0x0004C6AC,
		REDPOINT_ACTIVITY_VINTAGE_CAMPCHALLENGE_STAGE_OPEN_2 = 0x0004C6AD,
		REDPOINT_ACTIVITY_VINTAGE_CAMPCHALLENGE_STAGE_OPEN_3 = 0x0004C6AE,
		REDPOINT_ACTIVITY_VINTAGE_CAMPCHALLENGE_STAGE_REWARD_1 = 0x0004C6AF,
		REDPOINT_ACTIVITY_VINTAGE_CAMPCHALLENGE_STAGE_REWARD_2 = 0x0004C6B0,
		REDPOINT_ACTIVITY_VINTAGE_CAMPCHALLENGE_STAGE_REWARD_3 = 0x0004C6B1,
		REDPOINT_ACTIVITY_VINTAGE_CAMPCHALLENGE_GOTOQUEST = 0x0004C6B2,
		REDPOINT_ACTIVITY_VINTAGE_PRESENT_TAB = 0x0004C70C,
		REDPOINT_ACTIVITY_VINTAGE_PRESENT_GOTOQUEST = 0x0004C70D,
		REDPOINT_ACTIVITY_VINTAGE_PRESENT_STAGE_OPEN_1 = 0x0004C70E,
		REDPOINT_ACTIVITY_VINTAGE_PRESENT_STAGE_OPEN_2 = 0x0004C70F,
		REDPOINT_ACTIVITY_VINTAGE_PRESENT_STAGE_OPEN_3 = 0x0004C710,
		REDPOINT_ACTIVITY_VINTAGE_DECORATE_TAB = 0x0004C711,
		REDPOINT_ACTIVITY_VINTAGE_DECORATE_GOTOQUEST = 0x0004C712,
		REDPOINT_ACTIVITY_VINTAGE_DECORATE_REWARD = 0x0004C713,
		REDPOINT_ACTIVITY_VINTAGE_PRESENT_ENTRY_TAB = 0x0004C714,
		REDPOINT_ACTIVITY_VINTAGE_PRESENT_STAGE_FINISH_1 = 0x0004C715,
		REDPOINT_ACTIVITY_VINTAGE_PRESENT_STAGE_FINISH_2 = 0x0004C716,
		REDPOINT_ACTIVITY_VINTAGE_PRESENT_STAGE_FINISH_3 = 0x0004C717,
		REDPOINT_ACTIVITY_VINTAGE_HUNTING_TAB = 0x0004C770,
		REDPOINT_ACTIVITY_VINTAGE_HUNTING_STAGE_BEGIN = 0x0004C771,
		REDPOINT_ACTIVITY_VINTAGE_HUNTING_STAGE_OPEN_BEGIN = 0x0004C77B,
		REDPOINT_ACTIVITY_VINTAGE_HUNTING_STAGE_REWARD_BEGIN = 0x0004C785,
		REDPOINT_ACTIVITY_VINTAGE_HUNTING_QUEST = 0x0004C78F,
		REDPOINT_ACTIVITY_VINTAGE_TAB = 0x0004C7D4,
		REDPOINT_ACTIVITY_VINTAGE_EXCHANGE = 0x0004C7D5,
		REDPOINT_ACTIVITY_VINTAGE_QUEST_ENTRY = 0x0004C7D6,
		REDPOINT_ACTIVITY_VINTAGE_DETAIL_ENTRY = 0x0004C7D7,
		REDPOINT_ACTIVITY_VINTAGE_QUEST_BEGIN = 0x0004C7D8,
		REDPOINT_ACTIVITY_VINTAGE_MARKET_TAB = 0x0004C838,
		REDPOINT_ACTIVITY_VINTAGE_MARKET_OPENQUEST = 0x0004C839,
		REDPOINT_ACTIVITY_VINTAGE_MARKET_RAISE_MONEY = 0x0004C83A,
		REDPOINT_ACTIVITY_VINTAGE_MARKET_MANAGE = 0x0004C83B,
		REDPOINT_ACTIVITY_VINTAGE_MARKET_MANAGE_STAGE1_TAB = 0x0004C83C,
		REDPOINT_ACTIVITY_VINTAGE_MARKET_MANAGE_STAGE2_TAB = 0x0004C83D,
		REDPOINT_ACTIVITY_VINTAGE_MARKET_MANAGE_STAGE2_QUEST = 0x0004C83E,
		REDPOINT_ACTIVITY_VINTAGE_MARKET_RAISE_MONEY_REWARD = 0x0004C83F,
		REDPOINT_ACTIVITY_VINTAGE_MARKET_MANAGE_STAGE1_REWARD = 0x0004C840,
		REDPOINT_ACTIVITY_VINTAGE_MARKET_MANAGE_STAGE2_REWARD = 0x0004C841,
		REDPOINT_ACTIVITY_VINTAGE_MARKET_DETAIL_REPORT = 0x0004C842,
		REDPOINT_ACTIVITY_VINTAGE_MARKET_DETAIL = 0x0004C843,
		REDPOINT_ACTIVITY_VINTAGE_MARKET_MANAGE_STAGE1_QUEST = 0x0004C844,
		REDPOINT_DESHRET_ID_CARD_NEWLEVEL = 0x0004CA90,
		REDPOINT_DESHRET_ID_CARD_BAG = 0x0004CA91,
		REDPOINT_DESHRET_ID_CARD_NEW_POI = 0x0004CAF4,
		REDPOINT_DESHRET_ID_CARD_QUEST = 0x0004CB58,
		REDPOINT_ACTIVITY_PHOTO_TAB_V2 = 0x0004E5E8,
		REDPOINT_ACTIVITY_PHOTO_SUBPAGE_ACTIVITY_DETAIL_V2 = 0x0004E5FC,
		REDPOINT_ACTIVITY_PHOTO_SUBPAGE_PHOTO_POS_BASE_V2 = 0x0004E606,
		REDPOINT_ACTIVITY_PHOTO_SUBPAGE_PHOTO_POS_END_V2 = 0x0004E64B,
		REDPOINT_ACTIVITY_CHAR_AMUSEMENT_TAB = 0x0004E9D0,
		REDPOINT_ACTIVITY_CHAR_AMUSEMENT_DETAIL = 0x0004E9D1,
		REDPOINT_ACTIVITY_CHAR_AMUSEMENT_REWARD = 0x0004E9D2,
		REDPOINT_ACTIVITY_CHAR_AMUSEMENT_STAGE_START = 0x0004E9DA,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_TAB = 0x0004EDB8,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_DETAIL = 0x0004EDB9,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_DETAIL_CAPTURE = 0x0004EDBA,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_DETAIL_DUNGEON = 0x0004EDBB,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_DETAIL_EDUCATION = 0x0004EDBC,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_DETAIL_DUNGEON_ATTACK = 0x0004EDBD,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_DETAIL_DUNGEON_DEFEND = 0x0004EDBE,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_DETAIL_CAPTURE_QUEST = 0x0004EDBF,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_DETAIL_CAPTURE_UNLOCK = 0x0004EDC0,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_DETAIL_DUNGEON_QUEST = 0x0004EDC1,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_DETAIL_DUNGEON_UNLOCK = 0x0004EDC2,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_DETAIL_EDUCATION_QUEST = 0x0004EDC3,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_DETAIL_EDUCATION_UNLOCK = 0x0004EDC4,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_NEW_CAPTURE = 0x0004EDC5,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_CAPTURE_NEW_STAGE = 0x0004EDCC,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_DUNGEON_ATTACK_NEW_STAGE = 0x0004EDE0,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_DUNGEON_DEFEND_NEW_STAGE = 0x0004EDF4,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_EDUCATION_NEW_STAGE = 0x0004EE08,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_CAPTURE_STAGE_REWARD = 0x0004EE1C,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_DUNGEON_ATTACK_STAGE_REWARD = 0x0004EE30,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_DUNGEON_DEFEND_STAGE_REWARD = 0x0004EE44,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_EDUCATION_STAGE_REWARD = 0x0004EE58,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_CODEX_NEW_FUNGUS = 0x0004EE6C,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_NEW_CODEX = 0x0004EE80,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_GET_AVATAR = 0x0004EE81,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_PLOT_ENTRY = 0x0004EE82,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_TAB_FINISH_UNLOCK_QUEST = 0x0004EE83,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_TAB_FINISH_PRE_QUEST = 0x0004EE84,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_TAB_FINISH_GUIDE_QUEST = 0x0004EE85,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_PLOT_NEW_STAGE = 0x0004EE86,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_DETAIL_EDUCATION_STAGE_TAB = 0x0004EE8F,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_EDUCATION_NEW_FUNGUS = 0x0004EE94,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_NEW_EDUCATION = 0x0004EEA3,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_DUNGEON_ENTRY_ATTACK_TAB = 0x0004EEE4,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_DUNGEON_ENTRY_ATTACK = 0x0004EEE5,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_DUNGEON_ENTRY_DEFEND_TAB = 0x0004EF48,
		REDPOINT_ACTIVITY_FUNGUSFIGHTER_DUNGEON_ENTRY_DEFEND = 0x0004EF49,
		REDPOINT_ACTIVITY_EFFIGYV2_TAB = 0x0004F1A0,
		REDPOINT_ACTIVITY_EFFIGYV2_INFO = 0x0004F1A1,
		REDPOINT_ACTIVITY_EFFIGYV2_LEVEL_TAB = 0x0004F1A2,
		REDPOINT_ACTIVITY_EFFIGYV2_INFO_TAB1 = 0x0004F1A6,
		REDPOINT_ACTIVITY_EFFIGYV2_INFO_TAB2 = 0x0004F1AA,
		REDPOINT_ACTIVITY_EFFIGYV2_ENTRY_TAB = 0x0004F1AE,
		REDPOINT_ACTIVITY_EFFIGYV2_TOP_DIFFICULTY = 0x0004F1B2,
		REDPOINT_ACTIVITY_EFFIGYV2_ENTRY_REWARD = 0x0004F1B6,
		REDPOINT_ACTIVITY_EFFIGYV2_CHALLENGE_INFO_BTN = 0x0004F1BA,
		REDPOINT_HOMEWORLD_BLUEPRINT_NEW_TAB = 0x0004F588,
		REDPOINT_HOMEWORLD_HANDBOOK_NEW_TAB = 0x0004F589,
		REDPOINT_ACTIVITY_BRICK_BREAKER_TAB = 0x00050CF8,
		REDPOINT_ACTIVITY_BRICK_BREAKER_TAB_MIDDLE_QUEST = 0x00050CF9,
		REDPOINT_ACTIVITY_BRICK_BREAKER_TAB_QUEST = 0x00050CFA,
		REDPOINT_ACTIVITY_BRICK_BREAKER_TAB_WORLD = 0x00050CFB,
		REDPOINT_ACTIVITY_BRICK_BREAKER_TAB_DUNGEON = 0x00050CFC,
		REDPOINT_ACTIVITY_BRICK_BREAKER_TAB_STAGE = 0x00050CFD,
		REDPOINT_ACTIVITY_BRICK_BREAKER_TUTORIAL = 0x00050D5C,
		REDPOINT_ACTIVITY_BRICK_BREAKER_MECHANISM = 0x00050D5D,
		REDPOINT_ACTIVITY_BRICK_BREAKER_WORLD_STAGE = 0x00050D66,
		REDPOINT_ACTIVITY_BRICK_BREAKER_WORLD_LEVEL = 0x00050D70,
		REDPOINT_ACTIVITY_BRICK_BREAKER_WORLD_LEVEL_NEW = 0x00050D7A,
		REDPOINT_ACTIVITY_BRICK_BREAKER_DUNGEON_STAGE = 0x00050D84,
		REDPOINT_ACTIVITY_BRICK_BREAKER_DUNGEON_STAGE_NEW = 0x00050D8E,
		REDPOINT_ACTIVITY_BRICK_BREAKER_WORLD_STAGE_NEW = 0x00050D98,
		REDPOINT_ACTIVITY_BRICK_BREAKER_MECHANISM_BUFF = 0x00050DC0,
		REDPOINT_ACTIVITY_COIN_COLLECT_TAB = 0x000510E0,
		REDPOINT_ACTIVITY_COIN_COLLECT_TAB_GUIDE_QUEST = 0x000510E1,
		REDPOINT_ACTIVITY_COIN_COLLECT_TAB_DETAIL = 0x000510E2,
		REDPOINT_ACTIVITY_COIN_COLLECT_DETAIL_TAB_NEW = 0x00051144,
		REDPOINT_ACTIVITY_COIN_COLLECT_DETAIL_NEW_LEVEL = 0x00051158,
		REDPOINT_ACTIVITY_COIN_COLLECT_DETAIL_NEW_REWARD = 0x0005116C,
		REDPOINT_ACTIVITY_COIN_COLLECT_ENTRY_SELECT_SKILL = 0x000511A8,
		REDPOINT_ACTIVITY_COIN_COLLECT_SELECT_SKILL_NEW = 0x0005120C,
		REDPOINT_ACTIVITY_HERCULES_BATTLE_TAB = 0x00053408,
		REDPOINT_ACTIVITY_HERCULES_BATTLE_ACTIVITY_DETAIL = 0x00053409,
		REDPOINT_ACTIVITY_HERCULES_BATTLE_END_QUEST = 0x0005340A,
		REDPOINT_ACTIVITY_HERCULES_BATTLE_STAGE_BASE = 0x0005341C,
		REDPOINT_ACTIVITY_DUEL_HEART_TAB = 0x000537F0,
		REDPOINT_ACTIVITY_DUEL_HEART_TAB_MIDDLE_QUEST_NEW = 0x000537F1,
		REDPOINT_ACTIVITY_DUEL_HEART_LEVEL_TAB = 0x000537F2,
		REDPOINT_ACTIVITY_DUEL_HEART_TASK_TAB = 0x000537F3,
		REDPOINT_ACTIVITY_DUEL_HEART_PLOT_TASK_BASE = 0x000537FA,
		REDPOINT_ACTIVITY_DUEL_HEART_LEVEL_PAGE_BASE = 0x0005380E,
		REDPOINT_ACTIVITY_TEAM_CHAIN_TAB = 0x00053BD8,
		REDPOINT_ACTIVITY_TEAM_CHAIN_DETAIL = 0x00053BD9,
		REDPOINT_ACTIVITY_TEAM_CHAIN_EXCHANGE = 0x00053BDA,
		REDPOINT_ACTIVITY_TEAM_CHAIN_EXCHANGE_DIALOG_BUTTON = 0x00053BDB,
		REDPOINT_ACTIVITY_TEAM_CHAIN_DETAIL_TAB = 0x00053BE2,
		REDPOINT_ACTIVITY_TEAM_CHAIN_LEVEL_PAGE_BASE = 0x00053BEC,
		REDPOINT_ACTIVITY_SHADOW_GAME_LEVEL_OPEN_START = 0x00053FC0,
		REDPOINT_ACTIVITY_SHADOW_GAME_NEW_REWARD = 0x00053FD5,
		REDPOINT_ACTIVITY_LANV3_SUBPAGE_TAB = 0x000541B4,
		REDPOINT_ACTIVITY_LANV3_FESTVITAL = 0x000541B5,
		REDPOINT_ACTIVITY_LANV3_STORY = 0x000541B6,
		REDPOINT_ACTIVITY_LANV3_DETAIL = 0x000541B7,
		REDPOINT_ACTIVITY_LANV3_RACE = 0x000541B8,
		REDPOINT_ACTIVITY_LANV3_SHADOW = 0x000541B9,
		REDPOINT_ACTIVITY_LANV3_BOAT = 0x000541BA,
		REDPOINT_ACTIVITY_LANV3_CAMP = 0x000541BB,
		REDPOINT_ACTIVITY_LANV3_FESTIVAL_NEWREWARD = 0x000541BC,
		REDPOINT_ACTIVITY_LANV3_STORY_NEW_STAGE = 0x000541BE,
		REDPOINT_ACTIVITY_LANV3_RACE_PRECONDITION = 0x000541C3,
		REDPOINT_ACTIVITY_LANV3_SHADOW_PRECONDITION = 0x000541C4,
		REDPOINT_ACTIVITY_LANV3_BOAT_PRECONDITION = 0x000541C5,
		REDPOINT_ACTIVITY_LANV3_CAMP_PRECONDITION = 0x000541C6,
		REDPOINT_ACTIVITY_LANV3_RACE_TAB = 0x000541C8,
		REDPOINT_ACTIVITY_LANV3_RACE_NEW_STAGE = 0x000541D2,
		REDPOINT_ACTIVITY_LANV3_RACE_NEW_REWARD = 0x000541DC,
		REDPOINT_ACTIVITY_LANV3_SHADOW_TAB = 0x000541E6,
		REDPOINT_ACTIVITY_LANV3_SHADOW_NEW_STAGE = 0x000541F0,
		REDPOINT_ACTIVITY_LANV3_SHADOW_NEW_REWARD = 0x000541FA,
		REDPOINT_ACTIVITY_LANV3_BOAT_TAB = 0x00054204,
		REDPOINT_ACTIVITY_LANV3_BOAT_NEW_REWARD = 0x00054205,
		REDPOINT_ACTIVITY_LANV3_CAMP_TAB = 0x0005420E,
		REDPOINT_ACTIVITY_LANV3_CAMP_NEW_STAGE = 0x00054218,
		REDPOINT_ACTIVITY_LANV3_CAMP_NEW_REWARD = 0x00054222,
		REDPOINT_ACTIVITY_LANV3_MAIN_PAGE_FIRST_SEEN = 0x0005422C,
		REDPOINT_ACTIVITY_LANV3_SHADOW_POST_QUEST = 0x00054236,
		REDPOINT_ACTIVITY_LANV3_BOAT_PREVIEW_BTN = 0x00054240,
		REDPOINT_ACTIVITY_LANV3_BOAT_MAP_ALL_VIEWED = 0x00054241,
		REDPOINT_ACTIVITY_LANV3_BOAT_NEW_STAGE = 0x0005424A,
		REDPOINT_WEATHER_WIZARD_BAG_NEW_MARK = 0x000543A8,
		REDPOINT_RAVINE_SANDY_LAND_TAB = 0x00054790,
		REDPOINT_GCG_HANDBOOK_ICON = 0x0098BD90,
		REDPOINT_GCG_HANDBOOK_TAB_LEVEL = 0x0098BD91,
		REDPOINT_GCG_HANDBOOK_LEVEL_NEXT_PAGE = 0x0098BD92,
		REDPOINT_GCG_HANDBOOK_LEVEL_PREV_PAGE = 0x0098BD93,
		REDPOINT_GCG_HANDBOOK_TAB_CHALLENGE = 0x0098BD94,
		REDPOINT_GCG_HANDBOOK_CHALLENGE_BASE = 0x0098BD95,
		REDPOINT_GCG_LEVEL_REWARD_BTN = 0x0098BD9B,
		REDPOINT_GCG_MALL_TAB_BASE = 0x0098BDA4,
		REDPOINT_GCG_MALL_SUBTAB_BASE = 0x0098BDAE,
		REDPOINT_GCG_LEVEL_TAB_BASE = 0x0098BDD6,
		REDPOINT_GCG_PROFICIENCY_REWARD_BTN = 0x0098BE09,
		REDPOINT_GCG_ROLE_TAP = 0x0098BE0A,
		REDPOINT_GCG_BAG_DECK_TAB = 0x0098BE13,
	};

	enum class MoleMole_PaimonEntryType__Enum : int32_t
	{
		FeedBack = 0x00000000,
		Bulletin = 0x00000001,
		AvatarList = 0x00000002,
		TimeAcceleration = 0x00000003,
		Setting = 0x00000004,
		Mail = 0x00000005,
		Friends = 0x00000006,
		Shop = 0x00000007,
		Handbook = 0x00000008,
		Team = 0x00000009,
		Mall = 0x0000000A,
		Community = 0x0000000B,
		Character = 0x0000000C,
		Bag = 0x0000000D,
		Quest = 0x0000000E,
		Map = 0x0000000F,
		Activity = 0x00000010,
		AdventureHandbook = 0x00000011,
		Gacha = 0x00000012,
		BattlePass = 0x00000013,
		Multiplayer = 0x00000014,
		Photograph = 0x00000015,
		Achievement = 0x00000016,
		Codex = 0x00000017,
		DerivativeMall = 0x00000018,
		ActivityH5 = 0x00000019,
		Survey = 0x0000001A,
		CloudGame = 0x0000001B,
		HomeworldHandbook = 0x0000001C,
		AdaptiveHandbook = 0x0000001D,
		GcgHandbook = 0x0000001E,
	};

	struct PaimonEntryConfig
	{
		MoleMole_PaimonEntryType__Enum entryType;
		struct String *titleTextMapID;
		struct Sprite *icon;
	};

	struct Nullable_1_PaimonEntryConfig_
	{
		struct PaimonEntryConfig value;
		bool has_value;
	};

	struct __declspec(align(8)) MoleMole_BaseUIEntry__Fields
	{
		MoleMole_InLevelPlayerProfilePageContext_ProfileType__Enum _type;
		MoleMole_PaimonEntryType__Enum entryType;
		struct Action *openedCallback;
		RedPointId__Enum redpointId;
		bool usedInVirtualDial;
		struct Nullable_1_PaimonEntryConfig_ _config;
	};

	struct MoleMole_BaseUIEntry
	{
		struct MoleMole_BaseUIEntry__Class *klass;
		MonitorData *monitor;
		struct MoleMole_BaseUIEntry__Fields fields;
	};

	struct MoleMole_InLevelPlayerProfilePageContext__Fields
	{
		struct MoleMole_BasePageContext__Fields _;
		MoleMole_InLevelPlayerProfilePageContext_ProfileState__Enum curState;
		struct MonoInLevelPlayerProfilePage *_pageMono;
		struct MonoScrollRectExtention *KEPIDNILOAB;
		bool _isSummonPaimon;
		bool _needSummonPaimon;
		struct MoleMole_LCPaimon *lcPaimon;
		struct MoleMole_LogicCamera *_curLogicCamera;
		MoleMole_InLevelPlayerProfilePageContext_ProfileType__Enum _type;
		uint64_t lastClickHandleTime;
		MoleMole_LayoutVersion__Enum _lastLayoutVersion;
		bool _cameraKeep;
		bool FJGKLEJONBE;
		struct List_1_RectTransform_ *LGHPBOHELAF;
		struct Dictionary_2_OBECJKLKDLB__Enum_IIFJODDCCNH_ *KDIKIAMBOKL;
		struct UnityAction *onCloseView;
		int32_t _prevConfirmFrame;
		float _confirmStartTime;
		struct List_1_MoleMole_PaimonEntryType_ *_validEntries;
		struct List_1_MoleMole_MonoPlayerProfileMenuItem_ *_validEntryTrans;
		int32_t _selectedEntryIndex;
		int32_t _entryCountPerRow;
		int32_t _selectLeftEntryIndex;
		int32_t _selectEditBtnIndex;
		bool _inLeftPanel;
		bool _inEditPanel;
	};

	struct MoleMole_InLevelPlayerProfilePageContext
	{
		struct MoleMole_InLevelPlayerProfilePageContext__Class *klass;
		MonitorData *monitor;
		struct MoleMole_InLevelPlayerProfilePageContext__Fields fields;
	};

	struct MonoInLevelPlayerProfilePage__Fields
	{
		struct MonoUIProxy__Fields _;
		struct Text *_playerName;
		struct Text *_playerLv;
		struct Text *_playerExp;
		struct Slider_1 *_playerExpSlider;
		struct Text *_playerID;
		struct Text *_playerCost;
		struct Text *_playerInfo;
		struct Text *_playerNum;
		struct Image_1 *playerIconImage;
		struct Text *_playerWorldLv;
		struct Text *_playerBirthday;
		struct Text *_playerSignature;
		struct Text *_playerNoSignature;
		struct RectTransform *_playerSignatureRect;
		struct Image_1 *_nameCardPic;
		struct Button_1 *_closeButton;
		struct MonoElementSwitch *_elementSwitch;
		struct MihoyoGridLayoutGroup *_menuEntryLayout;
		struct MonoReusableList *_entryList;
		struct List_1_MoleMole_PaimonEntryConfig_ *_entryConfigs;
		struct MonoUIContainer *_playerLevelBtn;
		struct Vector3 _offsetPos;
		float transDuration;
		float transLerpRatio;
		int32_t lerpPattern;
		struct MonoUIContainer *_photographBtn;
		struct MonoUIContainer *_bulletinBtn;
		struct MonoUIContainer *_mailBtn;
		struct MonoUIContainer *_timeBtn;
		struct MonoUIContainer *_settingBtn;
		struct Button_1 *_iconBtn;
		struct MonoUIContainer *_editBtn;
		struct RectTransform *_editPanel;
		struct Button_1 *_editReturnBtn;
		struct MonoUIContainer *_editHeadPortraitBtn;
		struct MonoUIContainer *_editNameCardBtn;
		struct MonoUIContainer *_editSignatureBtn;
		struct MonoUIContainer *_editNameBtn;
		struct MonoUIContainer *_editCopyUidBtn;
		struct MonoUIContainer *_editBirthdayBtn;
		struct MonoUIContainer *_editProfileBtn;
		struct MonoUIContainer *_worldLvInfoBtn;
		struct MonoUIContainer *_playerLvInfoBtn;
		struct Button_1 *_copyBtn;
		struct RectTransform *_copyText;
		struct RectTransform *_ps4OnlineID;
		struct Text *_ps4OnlineIDText;
		struct GameObject *_upArrowIcon;
		struct GameObject *_downArrowIcon;
		float _redpointsCheckUpperOffset;
		float _redpointsCheckLowerOffset;
		struct String *_animStateAllowPaimonResponsePS5MicBlowEvent;
		float _thresholdDiscardPS5MicBlowEvent;
		float _thresholdPaimonResponsePS5MicBlowEventContinuely;
		struct MonoPS5MicBlowEventHandlerBase *_ps5MicBlowEventHandler;
	};

	struct MonoInLevelPlayerProfilePage
	{
		struct MonoInLevelPlayerProfilePage__Class *klass;
		MonitorData *monitor;
		struct MonoInLevelPlayerProfilePage__Fields fields;
	};

	struct MonoFriendInformationDialog__Fields
	{
		struct MonoUIProxy__Fields _;
		struct MonoElementSwitch *_elementSwitch;
		struct Text *_playerUID;
		struct Image_1 *_icon;
		struct Text *_nickname;
		struct Text *_remarkname;
		struct Text *_playerLevel;
		struct Text *_worldLevel;
		struct Text *_signature;
		struct RectTransform *_signatureRect;
		struct Button_1 *_returnBtn;
		struct MonoUIContainer *_ps4ID;
		struct RectTransform *_blockChatImg;
		struct RectTransform *_joypadBtnGroup;
		struct Image_1 *_cardImg;
		struct Button_1 *_signatureBtn;
		struct RectTransform *_editPanel;
		struct Button_1 *_editReturnBtn;
		struct MonoGridScroller *_editScroller;
		struct Text *_achievementTxt;
		struct Text *_towerTxt;
		struct Text *_towerNoDataTxt;
		struct Text *_toggleTxt;
		struct GameObject *_iconHide;
		struct GameObject *_avatarEmptyGrp;
		struct GameObject *_toggleGrp;
		struct MonoGridScroller *_avatarScroller;
		struct MonoUIContainer *_toggle;
		struct MonoUIContainer *_mainPageBtn;
		struct GameObject *_achievementGrp;
		struct GameObject *_avatarGrp;
		struct MonoUIContainer *_nameCardBtn;
		struct GameObject *_nameCardGrp;
		struct MonoGridScroller *_nameCardScroller;
		struct GameObject *_nameCardEmptyGrp;
	};

	struct MonoFriendInformationDialog
	{
		struct MonoFriendInformationDialog__Class *klass;
		MonitorData *monitor;
		struct MonoFriendInformationDialog__Fields fields;
	};

	struct Color32
	{
		int32_t rgba;
		uint8_t r;
		uint8_t g;
		uint8_t b;
		uint8_t a;
	};

	enum class PrimitiveType__Enum : int32_t
	{
		Sphere = 0x00000000,
		Capsule = 0x00000001,
		Cylinder = 0x00000002,
		Cube = 0x00000003,
		Plane = 0x00000004,
		Quad = 0x00000005,
	};

	enum class BrowserNative_ContextMenuOrigin__Enum : int32_t
	{
		Editable = 0x00000002,
		Image = 0x00000004,
		Selection = 0x00000008,
		Other = 0x00000001,
	};

	enum class Browser_NewWindowAction__Enum : int32_t
	{
		Ignore = 0x00000001,
		Redirect = 0x00000002,
		NewBrowser = 0x00000003,
		NewWindow = 0x00000004,
	};

	struct Browser__Fields
	{
		struct MonoBehaviour__Fields _;
		bool offScreen;
		struct IBrowserUI *_uiHandler;
		bool uiHandlerAssigned;
		struct String *_url;
		int32_t _width;
		int32_t _height;
		bool generateMipmap;
		struct Color32 baseColor;
		float _zoom;
		struct Action_2_String_String_ *onConsoleMessage;
		BrowserNative_ContextMenuOrigin__Enum allowContextMenuOn;
		Browser_NewWindowAction__Enum newWindowAction;
		struct INewWindowHandler *_NewWindowHandler_k__BackingField;
		bool _EnableRendering_k__BackingField;
		bool _EnableInput_k__BackingField;
		struct CookieManager *_CookieManager_k__BackingField;
		int32_t browserId;
		int32_t unsafeBrowserId;
		bool browserIdRequested;
		struct Texture2D *texture;
		struct Action_1_UnityEngine_Texture2D_ *afterResize;
		bool textureIsOurs;
		bool forceNextRender;
		bool isPopup;
		struct List_1_System_Action_ *thingsToDo;
		struct List_1_System_Action_ *onloadActions;
		struct List_1_System_Object_ *thingsToRemember;
		int32_t nextCallbackId;
		struct Dictionary_2_System_Int32_ZenFulcrum_EmbeddedBrowser_Browser_JSResultFunc_ *registeredCallbacks;
		struct BrowserNative_ReadyFunc *onNativeReady;
		struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ *onLoad;
		struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ *onFetch;
		struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ *onFetchError;
		struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ *onCertError;
		struct Action *onSadTab;
		struct Action *onTextureUpdated;
		struct Action *onNavStateChange;
		struct Action_2_Int32_ZenFulcrum_EmbeddedBrowser_JSONNode_ *onDownloadStarted;
		struct Action_2_Int32_ZenFulcrum_EmbeddedBrowser_JSONNode_ *onDownloadStatus;
		struct Action_3_String_Boolean_String_ *onNodeFocus;
		struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ *onUniWebviewMsgReceive;
		struct Action_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ *onBeforeNavigationMsgReceive;
		struct Action_2_Boolean_Boolean_ *onBrowserFocus;
		struct BrowserFocusState *focusState;
		struct BrowserInput *browserInput;
		struct Browser *overlay;
		bool skipNextLoad;
		bool loadPending;
		struct BrowserNavState *navState;
		bool newWindowHandlerSet;
		struct INewWindowHandler *newWindowHandler;
		struct DialogHandler *dialogHandler;
		struct Action *pageReplacer;
		float pageReplacerPriority;
		struct List_1_System_Action_ *thingsToDoClone;
		struct Color32__Array *colorBuffer;
	};

	struct Browser
	{
		struct Browser__Class *klass;
		MonitorData *monitor;
		struct Browser__Fields fields;
	};

	struct __declspec(align(8)) BeatMapData__Fields
	{
		struct List_1_MoleMole_MusicGame_TrackData_ *trackDatas;
		struct POLBDGNBFKM *config;
	};

	struct BeatMapData
	{
		struct BeatMapData__Class *klass;
		MonitorData *monitor;
		struct BeatMapData__Fields fields;
	};

	struct __declspec(align(8)) MusicMetaInfo__Fields
	{
		struct BpmInfo *bpmInfo;
		struct List_1_System_Single_ *simpleBeatHintTimeMsList;
		struct List_1_System_Single_ *complexBeatHintTimeMsList;
		struct CGDACGGKKNJ *musicConfig;
		struct PMIELLLMJKA *musicInfoConfig;
		struct POLBDGNBFKM *beatMapConfig;
		struct JNEKHDKOKGL *musicInstrumentConfig;
	};

	struct MusicMetaInfo
	{
		struct MusicMetaInfo__Class *klass;
		MonitorData *monitor;
		struct MusicMetaInfo__Fields fields;
	};

	struct MusicGamePlayComponent__Fields
	{
		void *_;
		uint32_t _combo;
		float _score_k__BackingField;
		uint32_t _maxCombo_k__BackingField;
		uint32_t _perfectCnt_k__BackingField;
		uint32_t _greatCnt_k__BackingField;
		uint32_t _missCnt_k__BackingField;
	};

	struct MusicGamePlayComponent
	{
		struct MusicGamePlayComponent__Class *klass;
		MonitorData *monitor;
		struct MusicGamePlayComponent__Fields fields;
	};

	struct MoleMole_VCBaseSetDitherValue__Fields
	{
		struct VCBase__Fields _;
		bool _usingDitherAlpha;
		float _ditherAlphaValue;
		float _managerDitherAlphaValue;
		float _localDitherAlphaValue;
		bool HCPHLKHJEBI;
		struct MoleMole_VCBaseModel *_modelComponent;
		float _showStartDitherDuration;
		bool _needStartDitherAction;
		float _detectDitherRangeBetweenCameraAndAvatar;
		float _detectDitherRangeNormalBetweenCamera;
		float _detectDitherRangeNormalBetweenCameraInTimeLine;
		bool CDOLKFJPMIP;
		bool KDADEIBKKOE;
		struct List_1_MoleMole_BaseDither_ *_dithers;
		bool _isDitherChangeStarted;
		float _spd;
		float _fromValue;
		float _toValue;
		struct Action *_changeFinishHandler;
		bool _triggerUpdateDitherShow;
		bool _prevUsingDitherAlpha;
		float _prevDitherAlphaValue;
		float _prevTextureBias;
		bool _prevInMotionVectorMode;
		bool _isVisible;
	};

	struct MoleMole_VCBaseSetDitherValue
	{
		struct MoleMole_VCBaseSetDitherValue__Class *klass;
		MonitorData *monitor;
		struct MoleMole_VCBaseSetDitherValue__Fields fields;
	};

	struct Button_1
	{
		struct Button_1__Class *klass;
		MonitorData *monitor;
	};

	struct Slider_1
	{
		struct Slider_1__Class *klass;
		MonitorData *monitor;
	};

	struct Renderer__Fields
	{
		struct Component_1__Fields _;
	};

	struct Renderer
	{
		struct Renderer__Class *klass;
		MonitorData *monitor;
		struct Renderer__Fields fields;
	};

	struct Material__Array
	{
		struct Material__Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct Material *vector[32];
	};

	enum class TextAnchor__Enum : int32_t
	{
		UpperLeft = 0x00000000,
		UpperCenter = 0x00000001,
		UpperRight = 0x00000002,
		MiddleLeft = 0x00000003,
		MiddleCenter = 0x00000004,
		MiddleRight = 0x00000005,
		LowerLeft = 0x00000006,
		LowerCenter = 0x00000007,
		LowerRight = 0x00000008,
	};

	enum class HorizontalWrapMode__Enum : int32_t
	{
		Wrap = 0x00000000,
		Overflow = 0x00000001,
	};

	enum class VerticalWrapMode__Enum : int32_t
	{
		Truncate = 0x00000000,
		Overflow = 0x00000001,
	};

	struct Avatar__Fields
	{
		struct Object_1__Fields _;
	};

	struct Avatar
	{
		struct Avatar__Class *klass;
		MonitorData *monitor;
		struct Avatar__Fields fields;
	};

	struct MoleMole_ActorAbilityPlugin__Fields
	{
		struct BaseComponentPlugin__Fields _;
        struct Action_3_MoleMole_BaseEntity_MoleMole_Config_AddGlobalValue_MoleMole_ActorAbility_ *_addGlobalValueHandlerClosureDelegate;
        struct Action_3_MoleMole_BaseEntity_MoleMole_Config_SetGlobalValue_MoleMole_ActorAbility_ *_setGlobalValueHandlerClosureDelegate;
        struct Action_3_MoleMole_BaseEntity_MoleMole_Config_MultiplyGlobalValue_MoleMole_ActorAbility_ *_multiplyGlobalValueHandlerClosureDelegate;
        struct Action_4_KGAOABMEICO_LNAIJAENPPO_POLCMBIAIEC_Single_ *EABKLHAPNKO;
        struct Action_4_KGAOABMEICO_String_Single_DIKKMKEBENM__Enum_ *NEDEHBHPKOH;
        struct Action_4_KGAOABMEICO_KFJFCJEFANB_POLCMBIAIEC_Single_ *DPOGMELHKKP;
        struct Action_4_KGAOABMEICO_DODDOKFKKDK_POLCMBIAIEC_HEPNAPIDAHN_ *BJKGHNPLPED;
        struct List_1_MoleMole_MonoEffectProxyHandle_ *_effectProxyListCache;
        struct List_1_MoleMole_MonoEffectProxyHandle_ *_effectProxyListCacheForChangFollowDampTime;
        struct List_1_Vector3_ *_pushedPosList;
        struct Action_3_KGAOABMEICO_DHOJGAIEEOP_Vector3_ *BOGFGPMIHPB;
        struct Action_3_KGAOABMEICO_JGGDENEBHPN_POLCMBIAIEC_ *KGOBMJKNKKM;
        struct LCAbility *_owner;
        struct List_1_MoleMole_ActorAbility_ *_appliedAbilities;
        struct Dictionary_2_System_UInt32_System_Int32_ *_appliedAbilitiesIndex;
        struct Dictionary_2_System_String_MoleMole_ActorAbility_ *CKDBIBGCPOB;
        uint32_t nextValidAbilityID;
	};

	struct MoleMole_ActorAbilityPlugin
	{
		struct MoleMole_ActorAbilityPlugin__Class *klass;
		MonitorData *monitor;
		struct MoleMole_ActorAbilityPlugin__Fields fields;
	};

	struct MoleMole_VCAnimatorEvent__Fields
	{
		struct VCBase__Fields _;
		struct Animator *_animator;
		struct Action_1_MoleMole_AnimatorParameterEntry_ *onUserInputControllerChanged;
		struct Action_4_Int32_UnityEngine_AnimatorStateInfo_UnityEngine_AnimatorStateInfo_MoleMole_AnimatorStateChangeExtra_ *onAnimatorStateTransitionFinish;
		struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_List_1_System_Int32_ *_activeAnimatorEventPatterns;
		struct Dictionary_2_System_Int32_System_Int32_ *_filterOldPattern2newPattern;
		void * /*private CBHEIDPFLMA*/ ADPHICHHJCD;
		struct Action_2_Int32_Single_ *processNormalizedTimeActions;
		struct Queue_1_MoleMole_CompensateDiffInfo_ *authorityEventQueue;
		struct Queue_1_MoleMole_CompensateDiffInfo_ *remoteEventQueue;
		struct MoleMole_VCMoveData *_moveData;
		struct MoleMole_VCSyncAnimator *_vcSyncAnimator;
		int32_t ABAEBEEDIEO;
		struct List_1_System_Int32_ *_layerIndexes;
		struct Dictionary_2_System_Int32_MoleMole_VCAnimatorEvent_MoleMole_VCAnimatorEvent_AnimatorLayerItem_ *_layerItems;
	};

	struct MoleMole_VCAnimatorEvent
	{
		struct MoleMole_VCAnimatorEvent__Class *klass;
		MonitorData *monitor;
		struct MoleMole_VCAnimatorEvent__Fields fields;
	};

	struct __declspec(align(8)) MoleMole_VCAnimatorEvent_MoleMole_VCAnimatorEvent_AnimatorEventPatternProcessItem__Fields
	{
		struct List_1_System_Int32_ *patterns;
		struct AnimatorStateInfo stateInfo;
		SafeFloat lastTime;
	};

	struct MoleMole_VCAnimatorEvent_MoleMole_VCAnimatorEvent_AnimatorEventPatternProcessItem
	{
		struct MoleMole_VCAnimatorEvent_MoleMole_VCAnimatorEvent_AnimatorEventPatternProcessItem__Class *klass;
		MonitorData *monitor;
		struct MoleMole_VCAnimatorEvent_MoleMole_VCAnimatorEvent_AnimatorEventPatternProcessItem__Fields fields;
	};

	enum class MoleMole_VCAnimatorEvent_MoleMole_VCAnimatorEvent_TriggerMode__Enum : int32_t
	{
		NormalTrigger = 0x00000000,
		ForceTriggerOnEnter = 0x00000001,
		ForceTriggerOnExitImediately = 0x00000002,
		ForceTriggerOnExitTransition = 0x00000003,
		ForceTriggerOnExitTransitionFinish = 0x00000004,
	};

	struct __declspec(align(8)) MoleMole_ElementDurability__Fields
	{
		float value;
	};

	struct MoleMole_ElementDurability
	{
		struct MoleMole_ElementDurability__Class *klass;
		MonitorData *monitor;
		struct MoleMole_ElementDurability__Fields fields;
	};

	struct ScriptableObject__Fields
	{
		struct Object_1__Fields _;
	};

	struct __declspec(align(8)) ParameterOverride__Fields
	{
		bool overrideState;
	};

	struct ParameterOverride
	{
		struct ParameterOverride__Class *klass;
		MonitorData *monitor;
		struct ParameterOverride__Fields fields;
	};

	struct ParameterOverride_1_System_Boolean___Fields
	{
		struct ParameterOverride__Fields _;
		bool value;
	};

	struct BoolParameter__Fields
	{
		struct ParameterOverride_1_System_Boolean___Fields _;
	};

	struct BoolParameter
	{
		struct BoolParameter__Class *klass;
		MonitorData *monitor;
		struct BoolParameter__Fields fields;
	};

	struct ParameterOverride_1_System_Single___Fields
	{
		struct ParameterOverride__Fields _;
		float value;
	};

	struct FloatParameter__Fields
	{
		struct ParameterOverride_1_System_Single___Fields _;
	};

	struct FloatParameter
	{
		struct FloatParameter__Class *klass;
		MonitorData *monitor;
		struct FloatParameter__Fields fields;
	};

	struct PostProcessEffectSettings__Fields
	{
		struct ScriptableObject__Fields _;
		bool active;
		struct BoolParameter *enabled;
		struct ReadOnlyCollection_1_UnityEngine_Rendering_PostProcessing_ParameterOverride_ *parameters;
	};

	struct MHYDepthOfField__Fields
	{
		struct PostProcessEffectSettings__Fields _;
		struct MHYDepthOfFieldQualityParameter *quality;
		struct FloatParameter *focusDistance;
		struct FloatParameter *fStop;
		struct FloatParameter *maxForegroundRadius;
		struct FloatParameter *maxBackgroundRadius;
		struct BoolParameter *debugTestSomething;
		struct BoolParameter *useMotionBlurParameters;
		struct FloatParameter *mbFocusRange;
		struct FloatParameter *mbDofBlurAmount;
		struct FloatParameter *mbNearFocalDistance;
		struct FloatParameter *mbNearFocalTransitionDistance;
	};

	struct MHYDepthOfField
	{
		struct MHYDepthOfField__Class *klass;
		MonitorData *monitor;
		struct MHYDepthOfField__Fields fields;
	};

	struct Int3
	{
		int32_t x;
		int32_t y;
		int32_t z;
	};

	enum class PropSpace__Enum : int32_t
	{
		None = 0x00000000,
		World = 0x00000001,
		Body = 0x00000002,
		RightHand = 0x00000003,
		LeftHand = 0x00000004,
	};

	struct AnimatorController__Fields
	{
		struct MonoBehaviour__Fields _;
		struct Action_1_motion4hi_AnimatorController_CrossFadeInfo_ *onCrossFadeTransition;
		struct Int3__Array *_transitionProirities;
		struct Dictionary_2_System_Int32_List_1_Int3_ *_transitionProiritiesDict;
		struct Dictionary_2_System_String_System_Boolean_ *_stateLoop;
		float _random;
		bool _disableNoFadeZone;
		struct Dictionary_2_UnityEngine_StateMachineBehaviour_motion4hi_AnimatorController_StateMachineBehaviourInfo_ *_currentBehaviour;
		struct List_1_motion4hi_CrossFadeByParameterConfig_ *_crossfadeConfigs;
		struct Dictionary_2_System_Int32_motion4hi_CrossFadeByParameterConfig_ *_configsDictionary;
		struct String__Array *_curveExtractionKeywords;
		struct String__Array *_stateNames; //all animations
		struct Boolean__Array *_stateLoops;
		struct Int32__Array *_stateHashes;
		struct Boolean__Array *_stateMirros;
		struct Boolean__Array *_stateHasMirrors;
		struct String__Array *_stateMirrorParams;
		struct String__Array *_statePhaseJsonPathes;
		struct AnimationPhaseArray__Array *_statePhaseArrays;
		struct Single__Array *_stateDefaultDurations;
		struct List_1_System_String_ *_serializedParamConstraints;
		struct List_1_motion4hi_ParamConstraint_ *_paramConstraints;
		struct Boolean__Array *_stateTransitionedArray;
		struct Int3 _cfTransition;
		struct Vector3 _cfParams;
		struct Animator *_animator;
		int32_t _frame;
		struct AnimatorControllerParameter__Array *_allParams;
		struct Dictionary_2_System_Int32_UnityEngine_AnimatorControllerParameterType_ *_allParamsTypeDictionary;
		PropSpace__Enum _prop1Space;
		struct Vector3 _crossOverStepBorderNear0;
		struct Vector3 _crossOverStepBorderNear1;
		struct Vector3 _crossOverStepBorderFar0;
		struct Vector3 _crossOverStepBorderFar1;
		struct Vector3 _crossOverJumpBorder0;
		struct Vector3 _crossOverJumpBorder1;
		struct Vector3 _crossOverPredictJumpPos;
		struct Vector3 _crossOverPredictStepInPos;
		struct Vector3 _crossOverDecisionJumpPos;
		int32_t _currentstateHash;
		int32_t _nextstateHash;
		float _currentstateTime;
		float _nextstateTime;
	};

	struct AnimatorController
	{
		struct AnimatorController__Class *klass;
		MonitorData *monitor;
		struct AnimatorController__Fields fields;
	};

	enum class ElementManager_Type__Enum : int32_t
	{
		NONE = -1,
		CLIP = 0x00000000,
		FRAME = 0x00000001,
	};

	struct EmoMgrUser__Fields
	{
		struct MonoBehaviour__Fields _;
		ElementManager_Type__Enum _type;
		struct BaseEmoAnimation *_emoAnim;
		struct EmoStateManager *_emoState;
		bool _isTickable;
	};

	struct __declspec(align(8)) BaseShape__Fields
	{
		struct String *name;
		struct List_1_System_String_ *elements;
	};

	struct BaseShape
	{
		struct BaseShape__Class *klass;
		MonitorData *monitor;
		struct BaseShape__Fields fields;
	};

	struct BaseShape__Array
	{
		struct BaseShape__Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct BaseShape *vector[32];
	};

	struct __declspec(align(8)) List_1_miHoYoEmotion_BaseShape___Fields
	{
		struct BaseShape__Array *_items;
		int32_t _size;
		int32_t _version;
		struct Object *_syncRoot;
	};

	struct List_1_miHoYoEmotion_BaseShape_
	{
		struct List_1_miHoYoEmotion_BaseShape___Class *klass;
		MonitorData *monitor;
		struct List_1_miHoYoEmotion_BaseShape___Fields fields;
	};

	struct EmoSync__Fields
	{
		struct EmoMgrUser__Fields _;
		bool isManekin;
		struct String *defaultEmotion;
		struct String *resetEmotion;
		struct String *resetPhoneme;
		struct EmotionSetData *_setData;
		struct List_1_miHoYoEmotion_BaseShape_ *phonemes;
		struct List_1_miHoYoEmotion_BaseShape_ *emotions;
		struct Dictionary_2_System_String_miHoYoEmotion_BaseShape_ *_phonemeCache;
		struct Dictionary_2_System_String_miHoYoEmotion_BaseShape_ *_emotionCahce;
		struct String *_curEmotion;
		struct String *_preEmotion;
		struct String *_lastEmotion;
		struct String *_curPhoneme;
		struct String *_prePhoneme;
		struct EmoSync_EmoParamCache *_emoParamCache;
		bool _emotionFromTemplate;
	};

	struct EmoSync
	{
		struct EmoSync__Class *klass;
		MonitorData *monitor;
		struct EmoSync__Fields fields;
	};

	enum class Proto_LuaShellType__Enum : int32_t
	{
		LuashellNone = 0x00000000,
		LuashellNormal = 0x00000001,
		LuashellSecurity = 0x00000002,
		LuashellShellCode = 0x00000003,
	};

	struct Proto_PlayerLuaShellNotify__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		uint32_t id_;
		Proto_LuaShellType__Enum shellType_;
		struct Google_Protobuf_ByteString *luaShell_;
		uint32_t useType_;
	};

	struct Proto_PlayerLuaShellNotify
	{
		struct Proto_PlayerLuaShellNotify__Class *klass;
		MonitorData *monitor;
		struct Proto_PlayerLuaShellNotify__Fields fields;
	};

	enum class Proto_WindSeedClientNotify_Proto_WindSeedClientNotify_NotifyOneofCase__Enum : int32_t
	{
		None = 0x00000000,
		RefreshNotify = 0x0000000e,
		AddWindBulletNotify = 0x00000006,
		AreaNotify = 0x00000004,
	};

	struct Proto_WindSeedClientNotify__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		struct Object *notify_;
		Proto_WindSeedClientNotify_Proto_WindSeedClientNotify_NotifyOneofCase__Enum BIICPNABLEO;
	};

	struct Proto_WindSeedClientNotify
	{
		struct Proto_WindSeedClientNotify__Class *klass;
		MonitorData *monitor;
		struct Proto_WindSeedClientNotify__Fields fields;
	};

	struct RuntimeAnimatorController__Fields
	{
		struct Object_1__Fields _;
	};

	struct RuntimeAnimatorController
	{
		struct RuntimeAnimatorController__Class *klass;
		MonitorData *monitor;
		struct RuntimeAnimatorController__Fields fields;
	};

    enum class Proto_AbilityMixinRecoverInfo_Proto_AbilityMixinRecoverInfo_SourceOneofCase__Enum : int32_t
    {
        None = 0x00000000,
        InstancedAbilityId = 0x00000001,
        InstancedModifierId = 0x00000002,
    };

    struct Proto_AbilityMixinRecoverInfo__Fields
    {
        struct Google_Protobuf_MessageBase__Fields _;
        uint32_t localId_;
        struct Google_Protobuf_Collections_RepeatedPrimitiveField_1_System_UInt32_* dataList_;
        bool isServerbuffModifier_;
        struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_MassivePropSyncInfo_* massivePropList_;
        struct Object* source_;
        Proto_AbilityMixinRecoverInfo_Proto_AbilityMixinRecoverInfo_SourceOneofCase__Enum sourceCase_;
    };

    struct Proto_AbilityMixinRecoverInfo
    {
        struct Proto_AbilityMixinRecoverInfo__Class* klass;
        MonitorData* monitor;
        struct Proto_AbilityMixinRecoverInfo__Fields fields;
    };

    struct Proto_AbilityMixinRecoverInfo__Array
    {
        struct Proto_AbilityMixinRecoverInfo__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Proto_AbilityMixinRecoverInfo* vector[32];
    };

    struct __declspec(align(8)) List_1_Proto_AbilityMixinRecoverInfo___Fields
    {
        struct Proto_AbilityMixinRecoverInfo__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Proto_AbilityMixinRecoverInfo_
    {
        struct List_1_Proto_AbilityMixinRecoverInfo___Class* klass;
        MonitorData* monitor;
        struct List_1_Proto_AbilityMixinRecoverInfo___Fields fields;
    };

    struct __declspec(align(8)) Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityMixinRecoverInfo___Fields
    {
        struct List_1_Proto_AbilityMixinRecoverInfo_* values;
        bool _isInPool;
        int32_t _count;
    };

    struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityMixinRecoverInfo_
    {
        struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityMixinRecoverInfo___Class* klass;
        MonitorData* monitor;
        struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityMixinRecoverInfo___Fields fields;
    };

    struct Proto_ModifierDurability__Fields
    {
        struct Google_Protobuf_MessageBase__Fields _;
        float reduceRatio_;
        float remainingDurability_;
    };

    struct Proto_ModifierDurability
    {
        struct Proto_ModifierDurability__Class* klass;
        MonitorData* monitor;
        struct Proto_ModifierDurability__Fields fields;
    };

    struct Proto_AbilityAttachedModifier__Fields
    {
        struct Google_Protobuf_MessageBase__Fields _;
        bool isInvalid_;
        uint32_t ownerEntityId_;
        uint32_t instancedModifierId_;
        bool isServerbuffModifier_;
        int32_t attachNameHash_;
    };

    struct Proto_AbilityAttachedModifier
    {
        struct Proto_AbilityAttachedModifier__Class* klass;
        MonitorData* monitor;
        struct Proto_AbilityAttachedModifier__Fields fields;
    };

    struct Proto_AbilityAppliedModifier__Fields
    {
        struct Google_Protobuf_MessageBase__Fields _;
        int32_t modifierLocalId_;
        uint32_t parentAbilityEntityId_;
        struct Proto_AbilityString* parentAbilityName_;
        struct Proto_AbilityString* parentAbilityOverride_;
        uint32_t instancedAbilityId_;
        uint32_t instancedModifierId_;
        float existDuration_;
        struct Proto_AbilityAttachedModifier* attachedInstancedModifier_;
        uint32_t applyEntityId_;
        bool isAttachedParentAbility_;
        struct Proto_ModifierDurability* modifierDurability_;
        uint32_t sbuffUid_;
        bool isServerbuffModifier_;
    };

    struct Proto_AbilityAppliedModifier
    {
        struct Proto_AbilityAppliedModifier__Class* klass;
        MonitorData* monitor;
        struct Proto_AbilityAppliedModifier__Fields fields;
    };

    struct Proto_AbilityAppliedModifier__Array
    {
        struct Proto_AbilityAppliedModifier__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Proto_AbilityAppliedModifier* vector[32];
    };

    struct __declspec(align(8)) List_1_Proto_AbilityAppliedModifier___Fields
    {
        struct Proto_AbilityAppliedModifier__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Proto_AbilityAppliedModifier_
    {
        struct List_1_Proto_AbilityAppliedModifier___Class* klass;
        MonitorData* monitor;
        struct List_1_Proto_AbilityAppliedModifier___Fields fields;
    };

    struct __declspec(align(8)) Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityAppliedModifier___Fields
    {
        struct List_1_Proto_AbilityAppliedModifier_* values;
        bool _isInPool;
        int32_t _count;
    };

    struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityAppliedModifier_
    {
        struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityAppliedModifier___Class* klass;
        MonitorData* monitor;
        struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityAppliedModifier___Fields fields;
    };

    enum class Proto_AbilityString_Proto_AbilityString_TypeOneofCase__Enum : int32_t
    {
        None = 0x00000000,
        Str = 0x00000001,
        Hash = 0x00000002,
    };

    struct Proto_AbilityString__Fields
    {
        struct Google_Protobuf_MessageBase__Fields _;
        struct Object* type_;
        Proto_AbilityString_Proto_AbilityString_TypeOneofCase__Enum typeCase_;
    };

    struct Proto_AbilityString
    {
        struct Proto_AbilityString__Class* klass;
        MonitorData* monitor;
        struct Proto_AbilityString__Fields fields;
    };

    struct Proto_AbilityAppliedAbility__Fields
    {
        struct Google_Protobuf_MessageBase__Fields _;
        struct Proto_AbilityString* abilityName_;
        struct Proto_AbilityString* abilityOverride_;
        struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityScalarValueEntry_* overrideMap_;
        uint32_t instancedAbilityId_;
    };

    struct Proto_AbilityAppliedAbility
    {
        struct Proto_AbilityAppliedAbility__Class* klass;
        MonitorData* monitor;
        struct Proto_AbilityAppliedAbility__Fields fields;
    };

    struct Proto_AbilityAppliedAbility__Array
    {
        struct Proto_AbilityAppliedAbility__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Proto_AbilityAppliedAbility* vector[64];
    };

    struct __declspec(align(8)) List_1_Proto_AbilityAppliedAbility___Fields
    {
        struct Proto_AbilityAppliedAbility__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Proto_AbilityAppliedAbility_
    {
        struct List_1_Proto_AbilityAppliedAbility___Class* klass;
        MonitorData* monitor;
        struct List_1_Proto_AbilityAppliedAbility___Fields fields;
    };

    struct __declspec(align(8)) Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityAppliedAbility___Fields
    {
        struct List_1_Proto_AbilityAppliedAbility_* values;
        bool _isInPool;
        int32_t _count;
    };

    struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityAppliedAbility_
    {
        struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityAppliedAbility___Class* klass;
        MonitorData* monitor;
        struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityAppliedAbility___Fields fields;
    };

    enum class Proto_AbilityScalarValueEntry_Proto_AbilityScalarValueEntry_ValueOneofCase__Enum : int32_t
    {
        None = 0x00000000,
        FloatValue = 0x00000003,
        StringValue = 0x00000004,
        IntValue = 0x00000005,
        UintValue = 0x00000006,
    };

    enum class Proto_AbilityScalarType__Enum : int32_t
    {
        Unknow = 0x00000000,
        Float = 0x00000001,
        Int = 0x00000002,
        Bool = 0x00000003,
        Trigger = 0x00000004,
        String = 0x00000005,
        Uint = 0x00000006,
    };

    struct Proto_AbilityScalarValueEntry__Fields
    {
        struct Google_Protobuf_MessageBase__Fields _;
        struct Proto_AbilityString* key_;
        Proto_AbilityScalarType__Enum valueType_;
        struct Object* value_;
        Proto_AbilityScalarValueEntry_Proto_AbilityScalarValueEntry_ValueOneofCase__Enum valueCase_;
    };

    struct Proto_AbilityScalarValueEntry
    {
        struct Proto_AbilityScalarValueEntry__Class* klass;
        MonitorData* monitor;
        struct Proto_AbilityScalarValueEntry__Fields fields;
    };

    struct Proto_AbilityScalarValueEntry__Array
    {
        struct Proto_AbilityScalarValueEntry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Proto_AbilityScalarValueEntry* vector[32];
    };

    struct __declspec(align(8)) List_1_Proto_AbilityScalarValueEntry___Fields
    {
        struct Proto_AbilityScalarValueEntry__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Proto_AbilityScalarValueEntry_
    {
        struct List_1_Proto_AbilityScalarValueEntry___Class* klass;
        MonitorData* monitor;
        struct List_1_Proto_AbilityScalarValueEntry___Fields fields;
    };

    struct __declspec(align(8)) Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityScalarValueEntry___Fields
    {
        struct List_1_Proto_AbilityScalarValueEntry_* values;
        bool _isInPool;
        int32_t _count;
    };

    struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityScalarValueEntry_
    {
        struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityScalarValueEntry___Class* klass;
        MonitorData* monitor;
        struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityScalarValueEntry___Fields fields;
    };

	struct Proto_AbilitySyncStateInfo__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		bool isInited_;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityScalarValueEntry_ *dynamicValueMap_;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityAppliedAbility_ *appliedAbilities_;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityAppliedModifier_ *appliedModifiers_;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityMixinRecoverInfo_ *mixinRecoverInfos_;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityScalarValueEntry_ *sgvDynamicValueMap_;
	};

	struct Proto_AbilitySyncStateInfo
	{
		struct Proto_AbilitySyncStateInfo__Class *klass;
		MonitorData *monitor;
		struct Proto_AbilitySyncStateInfo__Fields fields;
	};

	enum class Proto_CheckAddItemExceedLimitNotify_ItemExceedLimitMsgType__Enum : int32_t
	{
		ITEM_EXCEED_LIMIT_MSG_TYPE_DEFAULT = 0x00000000,
		ITEM_EXCEED_LIMIT_MSG_TYPE_TEXT = 0x00000001,
		ITEM_EXCEED_LIMIT_MSG_TYPE_DIALOG = 0x00000002,
		ITEM_EXCEED_LIMIT_MSG_TYPE_DIALOG_NONBLOCK = 0x00000003,
	};

	struct Proto_CheckAddItemExceedLimitNotify__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
        enum Proto_CheckAddItemExceedLimitNotify_ItemExceedLimitMsgType__Enum msgType_;
        struct Google_Protobuf_Collections_RepeatedPrimitiveField_1_System_UInt32_ *exceededItemList_;
        bool is_drop_;
        uint32_t reason_;
        struct Google_Protobuf_Collections_RepeatedPrimitiveField_1_System_UInt32_ *exceededItemTypeList_;
	};

	struct Proto_CheckAddItemExceedLimitNotify
	{
		void *klass;
		MonitorData *monitor;
		struct Proto_CheckAddItemExceedLimitNotify__Fields fields;
	};

	struct __declspec(align(8)) MoleMole_DataItem__Fields
	{
		uint32_t _entityId_k__BackingField;
		struct Dictionary_2_MoleMole_SafeUInt32_MoleMole_SafeDouble_ *_cacheNormalPropValueDic;
		struct Dictionary_2_MoleMole_SafeUInt32_MoleMole_SafeFloat_ *_cacheFightPropValueDic;
		bool _isToBeRemoved;
		bool _unCacheEntity;
		MoleMole_Config_JsonClimateType__Enum climateType;
		uint32_t climateAreaID;
	};

	struct MoleMole_DataItem
	{
		struct MoleMole_DataItem__Class *klass;
		MonitorData *monitor;
		struct MoleMole_DataItem__Fields fields;
	};

	struct MoleMole_MonsterDataItem__Fields
	{
		struct MoleMole_DataItem__Fields _;
		uint32_t configId;
		uint32_t blockId;
		uint32_t blockHash;
		uint32_t groupId;
		uint32_t mapInstId;
		uint32_t randomPoolId;
		uint32_t markFlag;
		uint32_t titleId;
		uint32_t specialNameId;
		struct MoleMole_LCAIBetaData *aiData;
		struct List_1_MoleMole_MonsterDataItem_MoleMole_MonsterDataItem_WeaponInfo_ *weaponList;
		bool isElite;
		struct List_1_System_UInt32_ *affixList;
		uint32_t summonTag;
		struct Dictionary_2_System_UInt32_System_Int32_ *summonTagMap;
		uint32_t fishId;
		uint32_t fishPoolEntityId;
	};

	struct MoleMole_MonsterDataItem
	{
		struct MoleMole_MonsterDataItem__Class *klass;
		MonitorData *monitor;
		struct MoleMole_MonsterDataItem__Fields fields;
	};

	struct __declspec(align(8)) MoleMole_LCAIBetaData__Fields
	{
		struct Nullable_1_UnityEngine_Vector3_ bornPos;
		uint32_t initialPoseID;
		uint32_t currentPoseID;
		float defendAreaRange;
		uint32_t defendAreaID;
		uint32_t wanderAreaID;
		float clearThreatTargetDistance;
		float forceAlertDistanceLimit;
		struct String *nerveSettingName;
		struct String *sensingTemplate;
		bool disableWander;
		uint32_t landingPointID;
		uint32_t extractionPointID;
		struct MoleMole_Config_ConfigLevelMonsterAIPatrol *aiPatrolSetting;
		uint32_t levelRouteID;
		bool forceCombatOnSpawn;
		bool standOnDistantMesh;
		bool overrideUseNavmesh;
		bool useNavmesh;
		struct Proto_SceneEntityAiInfo *_protoAIInfo;
		struct Proto_MonsterRoute *_serverRoute;
		struct Proto_SceneFishInfo *_fishInfo;
		struct Nullable_1_UnityEngine_Vector3_ skillAnchorPosition;
	};

	struct MoleMole_LCAIBetaData
	{
		struct MoleMole_LCAIBetaData__Class *klass;
		MonitorData *monitor;
		struct MoleMole_LCAIBetaData__Fields fields;
	};

	struct __declspec(align(8)) Delegate__Fields
	{
		void *method_ptr;
		void *invoke_impl;
		struct Object *m_target;
		void *method;
		void *delegate_trampoline;
		void *extra_arg;
		void *method_code;
		struct MethodInfo_1 *method_info;
		struct MethodInfo_1 *original_method_info;
		struct DelegateData *data;
		bool method_is_virtual;
	};

	struct Delegate
	{
		struct Delegate__Class *klass;
		MonitorData *monitor;
		struct Delegate__Fields fields;
	};

	struct MulticastDelegate__Fields
	{
		struct Delegate__Fields _;
		struct Delegate__Array *delegates;
	};

	struct Action_1_MoleMole_BaseEntity___Fields
	{
		struct MulticastDelegate__Fields _;
	};

	struct Action_1_MoleMole_BaseEntity_
	{
		struct Action_1_MoleMole_BaseEntity___Class *klass;
		MonitorData *monitor;
		struct Action_1_MoleMole_BaseEntity___Fields fields;
	};

	enum class MoleMole_Config_AvatarUseType__Enum : int32_t
	{
		AVATAR_TEST = 0x00000000,
		AVATAR_SYNC_TEST = 0x00000001,
		AVATAR_FORMAL = 0x00000002,
		AVATAR_ABANDON = 0x00000003,
	};

	enum class MoleMole_Config_BodyType__Enum : int32_t
	{
		BODY_NONE = 0x00000000,
		BODY_BOY = 0x00000001,
		BODY_GIRL = 0x00000002,
		BODY_LADY = 0x00000003,
		BODY_MALE = 0x00000004,
		BODY_LOLI = 0x00000005,
	};

	enum class MoleMole_Config_QualityType__Enum : int32_t
	{
		QUALITY_NONE = 0x00000000,
		QUALITY_WHITE = 0x00000001,
		QUALITY_GREEN = 0x00000002,
		QUALITY_BLUE = 0x00000003,
		QUALITY_PURPLE = 0x00000004,
		QUALITY_ORANGE = 0x00000005,
		QUALITY_ORANGE_SP = 0x00000069,
	};

	enum class MoleMole_Config_WeaponType__Enum : int32_t
	{
		WEAPON_NONE = 0x00000000,
		WEAPON_SWORD_ONE_HAND = 0x00000001,
		WEAPON_CROSSBOW = 0x00000002,
		WEAPON_STAFF = 0x00000003,
		WEAPON_DOUBLE_DAGGER = 0x00000004,
		WEAPON_KATANA = 0x00000005,
		WEAPON_SHURIKEN = 0x00000006,
		WEAPON_STICK = 0x00000007,
		WEAPON_SPEAR = 0x00000008,
		WEAPON_SHIELD_SMALL = 0x00000009,
		WEAPON_CATALYST = 0x0000000a,
		WEAPON_CLAYMORE = 0x0000000b,
		WEAPON_BOW = 0x0000000c,
		WEAPON_POLE = 0x0000000d,
	};

	enum class MoleMole_Config_AvatarIdentityType__Enum : int32_t
	{
		AVATAR_IDENTITY_MASTER = 0x00000000,
		AVATAR_IDENTITY_NORMAL = 0x00000001,
	};

	struct __declspec(align(8)) MoleMole_Config_EntityExcelConfig__Fields
	{
		struct SimpleSafeUInt32 idRawNum;
		uint32_t _nameTextMapHash;
		uint8_t _prefabPathHashPre;
		uint32_t _prefabPathHashSuffix;
		uint8_t _prefabPathRemoteHashPre;
		uint32_t _prefabPathRemoteHashSuffix;
		uint8_t _controllerPathHashPre;
		uint32_t _controllerPathHashSuffix;
		uint8_t _controllerPathRemoteHashPre;
		uint32_t _controllerPathRemoteHashSuffix;
		struct SimpleSafeUInt32 campIDRawNum;
		struct String *_LODPatternName;
	};
	struct MoleMole_Config_CreatureExcelConfig__Fields
	{
		struct MoleMole_Config_EntityExcelConfig__Fields _;
		struct SimpleSafeFloat hp_baseRawNum;
		struct SimpleSafeFloat attack_baseRawNum;
		struct SimpleSafeFloat defense_baseRawNum;
		struct SimpleSafeFloat criticalRawNum;
		struct SimpleSafeFloat antiCriticalRawNum;
		struct SimpleSafeFloat criticalHurtRawNum;
		struct SimpleSafeFloat fireSubHurtRawNum;
		struct SimpleSafeFloat grassSubHurtRawNum;
		struct SimpleSafeFloat waterSubHurtRawNum;
		struct SimpleSafeFloat elecSubHurtRawNum;
		struct SimpleSafeFloat windSubHurtRawNum;
		struct SimpleSafeFloat iceSubHurtRawNum;
		struct SimpleSafeFloat rockSubHurtRawNum;
		struct SimpleSafeFloat fireAddHurtRawNum;
		struct SimpleSafeFloat grassAddHurtRawNum;
		struct SimpleSafeFloat waterAddHurtRawNum;
		struct SimpleSafeFloat elecAddHurtRawNum;
		struct SimpleSafeFloat windAddHurtRawNum;
		struct SimpleSafeFloat iceAddHurtRawNum;
		struct SimpleSafeFloat rockAddHurtRawNum;
		struct MoleMole_Config_FightPropGrowConfig__Array *_propGrowCurves;
		struct SimpleSafeFloat elementMasteryRawNum;
		struct SimpleSafeFloat physicalSubHurtRawNum;
		struct SimpleSafeFloat physicalAddHurtRawNum;
		uint8_t _prefabPathRagdollHashPre;
		uint32_t _prefabPathRagdollHashSuffix;
	};
	struct MoleMole_Config_AvatarExcelConfig__Fields
	{
		struct MoleMole_Config_CreatureExcelConfig__Fields _;
		MoleMole_Config_AvatarUseType__Enum _useType;
		MoleMole_Config_BodyType__Enum _bodyType;
		uint8_t _scriptDataPathHashPre;
		uint32_t _scriptDataPathHashSuffix;
		struct String *_iconName;
		struct String *_sideIconName;
		MoleMole_Config_QualityType__Enum _qualityType;
		struct SimpleSafeFloat chargeEfficiencyRawNum;
		struct SimpleSafeFloat healAddRawNum;
		struct SimpleSafeFloat healedAddRawNum;
		uint8_t _combatConfigHashPre;
		uint32_t _combatConfigHashSuffix;
		bool _isRangeAttack;
		struct SimpleSafeUInt32 initialWeaponRawNum;
		MoleMole_Config_WeaponType__Enum _weaponType;
		uint8_t _manekinPathHashPre;
		uint32_t _manekinPathHashSuffix;
		struct String *_imageName;
		uint8_t _gachaCardNameHashPre;
		uint32_t _gachaCardNameHashSuffix;
		uint8_t _gachaImageNameHashPre;
		uint32_t _gachaImageNameHashSuffix;
		uint8_t _coopPicNameHashPre;
		uint32_t _coopPicNameHashSuffix;
		struct String *_cutsceneShow;
		struct SimpleSafeUInt32 skillDepotIdRawNum;
		struct SimpleSafeFloat staminaRecoverSpeedRawNum;
		struct SimpleSafeUInt32__Array *_candSkillDepotIds;
		uint8_t _manekinJsonConfigHashPre;
		uint32_t _manekinJsonConfigHashSuffix;
		struct SimpleSafeUInt32 manekinMotionConfigRawNum;
		uint32_t _descTextMapHash;
		MoleMole_Config_AvatarIdentityType__Enum _avatarIdentityType;
		struct SimpleSafeUInt32 avatarPromoteIdRawNum;
		struct SimpleSafeUInt32__Array *_avatarPromoteRewardLevelList;
		struct SimpleSafeUInt32__Array *_avatarPromoteRewardIdList;
		struct SimpleSafeUInt32 featureTagGroupIDRawNum;
		uint32_t _infoDescTextMapHash;
		uint8_t _animatorConfigPathHashPre;
		uint32_t _animatorConfigPathHashSuffix;
	};

	struct MoleMole_Config_AvatarExcelConfig
	{
		struct MoleMole_Config_AvatarExcelConfig__Class *klass;
		MonitorData *monitor;
		struct MoleMole_Config_AvatarExcelConfig__Fields fields;
	};
	struct __declspec(align(8)) Dictionary_2_System_UInt32_MoleMole_Config_AvatarExcelConfig___Fields
	{
		struct Int32__Array *buckets;
		struct Dictionary_2_TKey_TValue_Entry_System_UInt32_MoleMole_Config_AvatarExcelConfig___Array *entries;
		int32_t count;
		int32_t version;
		int32_t freeList;
		int32_t freeCount;
		struct IEqualityComparer_1_System_UInt32_ *comparer;
		struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt32_MoleMole_Config_AvatarExcelConfig_ *keys;
		struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt32_MoleMole_Config_AvatarExcelConfig_ *values;
		struct Object *_syncRoot;
	};
	struct Dictionary_2_System_UInt32_MoleMole_Config_AvatarExcelConfig_
	{
		struct Dictionary_2_System_UInt32_MoleMole_Config_AvatarExcelConfig___Class *klass;
		MonitorData *monitor;
		struct Dictionary_2_System_UInt32_MoleMole_Config_AvatarExcelConfig___Fields fields;
	};

	struct MiHoYoLodLoader__Fields
	{
		struct Behaviour__Fields _;
	};
	struct MiHoYoLodLoader
	{
		struct MiHoYoLodLoader__Class *klass;
		MonitorData *monitor;
		struct MiHoYoLodLoader__Fields fields;
	};

	struct MoleMole_ItemParam
	{
		uint32_t item_id;
		uint64_t guid;
		uint32_t cur_count;
		uint32_t expire_time;
		int32_t itemType;
		int32_t lockState;
		struct Proto_Weapon *weapon;
		struct Proto_Reliquary *reliquary;
		struct Proto_Material *material;
		struct Proto_Furniture *furniture;
	};

	struct __declspec(align(8)) MoleMole_BagItem__Fields
	{
		struct MoleMole_ItemParam _itemParam;
		bool KDKCPMCGMPP;
		bool JFFGFOCDKKN;
	};

	struct MoleMole_BagItem
	{
		struct MoleMole_BagItem__Class *klass;
		MonitorData *monitor;
		struct MoleMole_BagItem__Fields fields;
	};

	struct __declspec(align(8)) MoleMole_BagItemSlot__Fields
	{
		int32_t typeIndex;
		struct MoleMole_BagItem *_item;
	};

	struct MoleMole_BagItemSlot
	{
		struct MoleMole_BagItemSlot__Class *klass;
		MonitorData *monitor;
		struct MoleMole_BagItemSlot__Fields fields;
	};

	struct MoleMole_EntityHandle_1_MoleMole_AvatarEntity_
	{
		uint32_t runtimeID;
		struct MoleMole_AvatarEntity *_entityRef;
	};

	struct MoleMole_EntityHandle_1_MoleMole_AvatarEntity___Boxed
	{
		struct MoleMole_EntityHandle_1_MoleMole_AvatarEntity___Class *klass;
		MonitorData *monitor;
		struct MoleMole_EntityHandle_1_MoleMole_AvatarEntity_ fields;
	};

	struct MonoActionBtn__Fields
	{
		struct MonoSpriteProxy__Fields _;
		struct MoleMole_EntityHandle_1_MoleMole_AvatarEntity_ avatarHandle;
		struct Button *_button;
		bool _isPointerHold;
		float _holdTime;
		float _totalHoldTime;
		bool _buttonClickTrigger;
		bool _buttonUpTrigger;
		bool resetButtonOnDisable;
		struct Action *onPressDownCallback;
		struct Action *onPressUpCallback;
	};

	struct MonoQuickUseButton__Fields
	{
		struct MonoActionBtn__Fields _;
		struct Image_1 *_icon;
		struct CanvasGroup *_iconCanvasGroup;
		struct Image_1 *_disableIcon;
		struct Material *_foodWorstMat;
		struct Material *_defaultMat;
		struct GameObject *_numGrp;
		struct CanvasGroup *_numCanvasGroup;
		struct SimpleText *_numText;
		struct Color _numNormalColor;
		struct Color _numNotEnoughColor;
		struct GameObject *_cdGrp;
		struct SimpleText *_cdText;
		struct SmoothMask *_cdMask;
		struct Image_1 *_buffIcon;
		struct GameObject *_foodBestImg;
		struct MonoPrefabPlugin *_prefabPlugin;
		struct MonoUIEffect *_hintEffect;
		float effectCD;
		struct GameObject *_returnGrp;
		struct GameObject *_maxHaloGrp;
		struct Image_1 *_progressFullHalo;
		struct Image_1 *_progressFullHaloBlur;
		struct GameObject *_progressGrp;
		struct GameObject *_energyEffectGrp;
		struct MonoUIEffect *_addEffect;
		struct MonoUIEffect *_maxEffect;
		struct SmoothMask *_progressMask;
		struct Image_1 *_progressImage;
		struct Animator *_energyBarAnimator;
		struct SmoothMask *_energyBarMask;
		struct GameObject *_activityEffctGrp;
		struct MonoUIEffect *_addActivityEffect;
		struct MonoUIEffect *_maxAddActivityEffect;
		struct MoleMole_LCWidget *_lcWidget;
		struct MoleMole_WidgetSystemManager *_widgetSystemManager;
		int32_t _currentActionPanelState;
		int32_t _nextActionPanelState;
		struct MoleMole_ISelfRecordState__Array *_uiStateArray;
		struct ParticleSystem *CCLNLFNIDOM;
		struct GameObject *CIGIKEIABOK;
		struct GameObject *DJANGJCDJJA;
		struct ParticleSystem__Array *_cdEndEffect;
		bool _energyFull;
		float lastCd;
		bool _lastCdState;
		bool _currentCdState;
		bool _inCD_k__BackingField;
		struct String__Array *cdTextStr;
	};

	struct MonoQuickUseButton
	{
		struct MonoQuickUseButton__Class *klass;
		MonitorData *monitor;
		struct MonoQuickUseButton__Fields fields;
	};

	struct __declspec(align(8)) AsymmetricAlgorithm__Fields
	{
		int32_t KeySizeValue;
		struct KeySizes__Array *LegalKeySizesValue;
	};

	struct AsymmetricAlgorithm
	{
		struct AsymmetricAlgorithm__Class *klass;
		MonitorData *monitor;
		struct AsymmetricAlgorithm__Fields fields;
	};

	struct RSA__Fields
	{
		struct AsymmetricAlgorithm__Fields _;
	};

	struct RSA
	{
		struct RSA__Class *klass;
		MonitorData *monitor;
		struct RSA__Fields fields;
	};

	struct MonoTeamBtn__Fields
	{
		struct MonoSpriteProxy__Fields _;
		struct Animator *_animator;
		struct Button_1 *_actionBtn;
		struct Button_1 *_qteButton;
		struct MonoBattleBtn *_energySkillButton;
		struct Image_1 *_avatarIcon;
		struct Material *_deadMaterial;
		struct Text *_nameText;
		struct SmoothMask *_hpBar;
		struct MonoColorExchange *_hpColor;
		struct MonoColorExchange *_hpBgColor;
		struct GameObject *_voiceButton;
		struct SimpleText *_changeAvatarCD;
		struct SmoothMask *_changeAvatarCDMask;
		struct GameObject *_trialInfo;
		struct GameObject *_talentCD;
		struct SmoothMask *_talentCDMask;
		struct Image_1 *_talentCDMaskImage;
		struct Image_1 *_talentCDBgImage;
		struct Transform *_talentCDEffectTrans;
		struct Color _talentCDBgColor;
		struct Color _talentCDFillColor;
		struct Color _talentCDReadyBgColor;
		struct Color _talentCDReadyFillColor;
		struct GameObject *_talentCDEffect;
		struct MonoPrefabPlugin *_prefabPlugin;
		struct Transform *avatarLevelUpTrans;
		struct GameObject *avatarLevelUpGameObject;
		struct Transform *fetterUpTrans;
		struct GameObject *fetterUpGameObject;
		struct RectTransform *_pcKeyGrp;
		struct MonoInLevelBuffInfo *inlevelBuffInfo;
		struct MonoLongPressButton *_longPressBtn;
		struct GameObject *_longPressBarGO;
		struct SmoothMask *_longPressBarFill;
		uint64_t _guid;
		bool _showChangeAvatarCDText;
		struct LCAvatarCombat *_lcCombat;
		struct GameObject *_talentCDEffectIns;
		struct MoleMole_AvatarDataItem *_avatarData;
		struct MoleMole_UIUtil_MoleMole_UIUtil_LevelUpItemQueue *teamLevelUpItemQueue;
		bool needTickBuff;
		struct Image_1 *_skillImage;
		struct CanvasGroup *_actionBtnCanvasGroup;
		struct CanvasGroup *_qteBtnCanvasGroup;
		struct MoleMole_EditableString *_changeAvatarCDStr;
		struct Action_1_MoleMole_EvtEntityReadyPost_ *_onEntityReadyPost;
		float _currHPRatio;
		float _lastChangeAvatarCd;
		struct Animation *_restoreHP;
		struct MonoUIEffect *_restoreHPEffect;
	};

	struct MonoTeamBtn
	{
		struct MonoTeamBtn__Class *klass;
		MonitorData *monitor;
		struct MonoTeamBtn__Fields fields;
	};

	struct __declspec(align(8)) Config_AvatarSkillDepotExcelConfig__Fields
	{
		struct SimpleSafeUInt32 idRawNum;
		struct SimpleSafeUInt32 energySkillRawNum;
		struct SimpleSafeUInt32 talentSkillRawNum;
		struct SimpleSafeUInt32__Array *_skills;
		struct SimpleSafeUInt32__Array *_subSkills;
		struct SimpleSafeUInt32 attackModeSkillRawNum;
		struct SimpleSafeUInt32 leaderTalentRawNum;
		struct String__Array *_extraAbilities;
		struct SimpleSafeUInt32__Array *_talents;
		struct String *_talentStarName;
		struct SimpleSafeUInt32 coreProudSkillGroupIdRawNum;
		struct SimpleSafeUInt32 coreProudAvatarPromoteLevelRawNum;
		struct Config_ProudSkillOpenConfig__Array *_inherentProudSkillOpens;
		struct String *_skillDepotAbilityGroup;
	};

	struct Config_AvatarSkillDepotExcelConfig
	{
		struct Config_AvatarSkillDepotExcelConfig__Class *klass;
		MonitorData *monitor;
		struct Config_AvatarSkillDepotExcelConfig__Fields fields;
	};

	enum class MoleMole_Config_ItemType__Enum : int32_t
	{
		ITEM_NONE = 0x00000000,
		ITEM_VIRTUAL = 0x00000001,
		ITEM_MATERIAL = 0x00000002,
		ITEM_RELIQUARY = 0x00000003,
		ITEM_WEAPON = 0x00000004,
		ITEM_DISPLAY = 0x00000005,
		ITEM_FURNITURE = 0x00000006,
	};

	enum class MoleMole_UIShowPriority__Enum : int32_t
	{
		None = 0x00000000,
		Normal = 0x00000001,
		Pop = 0x00000002,
		Cutscene = 0x00000003,
		Init = 0x00000004,
		Loading = 0x00000005,
		Error = 0x00000006,
	};

	struct MoleMole_BaseDialogContext__Fields
	{
		struct BaseContext__Fields _;
		bool attachToPage;
		bool _autoCloseDialogOnBackEvent;
		struct MoleMole_BasePageContext *_pageContext_k__BackingField;
	};

	struct MoleMole_BaseDialogContext
	{
		struct MoleMole_BaseDialogContext__Class *klass;
		MonitorData *monitor;
		struct MoleMole_BaseDialogContext__Fields fields;
	};

	struct MoleMole_EquipLevelUpDialogContext__Fields
	{
		struct MoleMole_BaseDialogContext__Fields _;
		struct MonoAvatarPropertyItem *_propertyItemPrefab;
		uint32_t _propertyItemPrefabHandle;
		uint32_t _mainPropItemPrefabHandle;
		struct MonoEquipLevelUpDialog *_dialogMono;
		struct MoleMole_BagItem *_equip;
		uint32_t _prevLevel;
		uint32_t _currLevel;
		uint32_t _powerUpRate;
		struct List_1_MoleMole_PropertyChange_ *_propertyChange;
		MoleMole_Config_ItemType__Enum _equipType;
		bool _canClose;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_ItemParam_ *_returnedMaterialList;
	};

	struct MoleMole_EquipLevelUpDialogContext
	{
		struct MoleMole_EquipLevelUpDialogContext__Class *klass;
		MonitorData *monitor;
		struct MoleMole_EquipLevelUpDialogContext__Fields fields;
	};

	enum class MoleMole_QuestModule_MoleMole_QuestModule_NavigationState__Enum : int32_t
	{
		Disabled = 0x00000000,
		AutoEnabled = 0x00000001,
		ManualEnabled = 0x00000002,
	};

	struct __declspec(align(8)) MoleMole_QuestModule__Fields
	{
		struct Queue_1_MoleMole_QuestModule_MoleMole_QuestModule_QuestConfigCheckRequest_ *_configCheckRequestQueue;
		bool _configCheckRequestProcessing;
		struct Dictionary_2_System_UInt32_System_UInt32_ *_rqRuntimeId2ConfigIdDic;
		struct Queue_1_MoleMole_QuestModule_MoleMole_QuestModule_QuestProtoRequest_ *_protoRequestQueue;
		struct Dictionary_2_System_UInt64_MoleMole_QuestModule_MoleMole_QuestModule_LuaPreloadState_ *_cachedPreloadLua;
		struct Dictionary_2_System_UInt32_List_1_MoleMole_QuestModule_MoleMole_QuestModule_LuaPreloadState_ *_mainQuestCachedLua;
		struct MoleMole_SimpleObjectPool_1_MoleMole_QuestModule_MoleMole_QuestModule_LuaPreloadState_ *_luaPreloadStatePool;
		struct Dictionary_2_System_UInt32_MoleMole_QuestModule_MoleMole_QuestModule_AnimePreLoadState_ *_mainQuestCachedAnime;
		struct Queue_1_MoleMole_QuestModule_MoleMole_QuestModule_QuestUpdateRequest_ *_updateRequestQueue;
		struct Queue_1_MoleMole_QuestModule_MoleMole_QuestModule_QuestUpdateRequest_ *_wait2UpdateQueue;
		bool _questUpdateRequestProcessing;
		bool _questUpdateWaiting;
		struct MoleMole_QuestModule_MoleMole_QuestModule_QuestUpdateRequest *_lastQuestUpdateRequest;
		struct List_1_System_UInt32_ *_mainIDList;
		struct List_1_System_UInt32_ *_mainIDFinishedList;
		struct Dictionary_2_System_UInt32_System_Boolean_ *_questRewindDic;
		struct HashSet_1_System_UInt32_ *_questForceRewindDic;
		struct Dictionary_2_System_UInt32_MoleMole_QuestModule_MoleMole_QuestModule_QuestVarLocal_ *_mainQuestVarDic;
		struct HashSet_1_System_UInt32_ *_mainQuestFinishedSet;
		struct Dictionary_2_System_UInt32_List_1_MoleMole_QuestProxy_ *_mainQuestID2SubListDic;
		struct Dictionary_2_System_UInt32_List_1_System_UInt32_ *_mainQuestID2FactorListDic;
		struct Dictionary_2_System_UInt32_System_Boolean_ *_mainQuestID2Preload;
		struct Dictionary_2_System_UInt32_MoleMole_QuestProxy_ *_questID2Dic;
		struct List_1_MoleMole_QuestModule_MoleMole_QuestModule_QuestNotifyCache_ *_questCacheList;
		struct List_1_MoleMole_QuestModule_MoleMole_QuestModule_QuestProtoRequest_ *_questPostCacheList;
		bool _isPostInited;
		struct Dictionary_2_System_UInt32_MoleMole_Config_QuestState_ *_mainQuestID2StateDic;
		bool _delayQuestHint;
		struct Queue_1_System_ValueTuple_2_ *_questHintCache;
		struct StringBuilder *stringBuilder;
		struct Dictionary_2_System_UInt32_System_Single_ *_questGuideAreaRadius;
		struct Dictionary_2_System_UInt32_MoleMole_EntityInfoCacheData_ *_spawnCacheDic;
		struct Queue_1_System_String_ *_unSpawnAliasQueue;
		struct List_1_MoleMole_QuestModule_MoleMole_QuestModule_AliasBindCache_ *_bindCacheList;
		struct HashSet_1_System_UInt32_ *_npcPreQuestTalkIdSet;
		struct Dictionary_2_System_UInt32_System_Int32_ *_questGlobalVarDic;
		struct List_1_System_UInt32_ *_onGoingPersonalLineList;
		struct List_1_System_UInt32_ *_canBeUnlockPersonalLineList;
		struct List_1_System_UInt32_ *_lockedPersonalLineList;
		struct Dictionary_2_System_UInt32_Proto_LockedPersonallineData_ *_lockedLineDic;
		bool _isBanNpcTalk;
		struct Dictionary_2_System_Uint32_List_1_HHIPCLONEPH_ *IIOOPPFDPBD; // 0x150
		struct Dictionary_2_System_Uint32_List_1_System_UInt32_ *PNMDNNENMHE; // 0x158
		struct Dictionary_2_System_Uint32_List_1_System_UInt32_ *ECGHMMFGDJA; // 0x160
		struct Dictionary_2_System_Uint32_BOHLHNJEELN_ *JKLGGDGBJCD; // 0x168
		struct Dictionary_2_System_String_CAOJPAFBIPB_ *CENEJOKJPLE; // 0x170
		struct MoleMole_QuestModule_MoleMole_QuestModule_QuestTrackingMainData *_trackingMainData;
		bool _canSaveQuestData;
		struct Coroutine *curCoroutine;
		bool _lateTrackSome_k__BackingField;
		struct List_1_System_UInt32_ *_suggestTrackMainQuestList;
		bool _suggestTrackOutOfOrder;
		struct List_1_System_UInt32_ *_newMainQuest;
		MoleMole_QuestModule_MoleMole_QuestModule_NavigationState__Enum _navigationState;
		uint32_t _navigatedMainQuestID;
		struct List_1_System_UInt32_ *_navigatedSubQuestIDList;
	};

	struct MoleMole_QuestModule
	{
		struct MoleMole_QuestModule__Class *klass;
		MonitorData *monitor;
		struct MoleMole_QuestModule__Fields fields;
	};

	struct Proto_NpcTalkRsp__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		uint32_t curTalkId_;
		uint32_t npcEntityId_;
		int32_t retcode_;
		uint32_t entityId_;
	};

	struct Proto_NpcTalkRsp
	{
		struct Proto_NpcTalkRsp__Class *klass;
		MonitorData *monitor;
		struct Proto_NpcTalkRsp__Fields fields;
	};

	enum class Proto_PropValue_Proto_PropValue_ValueOneofCase__Enum : int32_t
	{
		None = 0x00000000,
		Ival = 0x00000002,
		Fval = 0x00000003,
	};

	struct Proto_PropValue__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		uint32_t type_;
		int64_t val_;
		struct Object *value_;
		Proto_PropValue_Proto_PropValue_ValueOneofCase__Enum valueCase_;
	};

	struct Proto_PropValue
	{
		struct Proto_PropValue__Class *klass;
		MonitorData *monitor;
		struct Proto_PropValue__Fields fields;
	};

	struct __declspec(align(8)) MoleMole_GlobalElementDurability__Fields
	{
		struct MoleMole_LevelSceneWaterPlugin *waterPlugin;
		int64_t waterId;
		ElementType__Enum elementType;
	};

	struct MoleMole_GlobalElementDurability
	{
		struct MoleMole_GlobalElementDurability__Class *klass;
		MonitorData *monitor;
		struct MoleMole_GlobalElementDurability__Fields fields;
	};

	enum class EyeKey_EyeKeyController__Enum : int32_t
	{
		EmoSync = 0x00000000,
		LookAtEyeCtrl = 0x00000001,
	};

	struct EyeKey__Fields
	{
		struct MonoBehaviour__Fields _;
		EyeKey_EyeKeyController__Enum currentController;
		struct Transform *leftEyeBone;
		struct Transform *rightEyeBone;
		struct Transform *leftEyeBallBone;
		struct Transform *rightEyeBallBone;
		struct Vector3 leftEyeRot;
		struct Vector3 rightEyeRot;
		bool _previewMode_k__BackingField;
		bool _isTickable;
		bool _isScriptEnable;
		struct Vector3 _leftEyeRotTarget;
		struct Vector3 _rightEyeRotTarget;
		float _rotTargetCurrtime;
		float _rotDuration;
		bool ControlledByInteractionManager;
		bool enableApply;
		struct Vector3 leftEyeBallScale;
		struct Vector3 rightEyeBallScale;
		struct Vector3 _leftEyeBallScaleTarget;
		struct Vector3 _rightEyeBallScaleTarget;
		float _scaleTargetCurrtime;
		float _scaleDuration;
		struct Vector3 leftEyeScale;
		struct Vector3 rightEyeScale;
		struct Vector3 leftEyeBallRot;
		struct Vector3 rightEyeBallRot;
		struct Transform *teethUpBone;
		struct Transform *teethDownBone;
		struct Vector3 teethUpRot;
		struct Vector3 teethDownRot;
		struct Vector3 teethUpScale;
		struct Vector3 teethDownScale;
		struct Vector3 teethDownPos;
		int32_t _leftEyeBoneHash;
		int32_t _rightEyeBoneHash;
		int32_t _leftEyeBallBoneHash;
		int32_t _rightEyeBallBoneHash;
		int32_t _teethUpHash;
		int32_t _teethDownHash;
		struct Vector3 _originLeftEyeRot;
		struct Vector3 _originRightEyeRot;
		struct Vector3 _originLeftEyeScale;
		struct Vector3 _originRightEyeScale;
		struct Vector3 _originLeftEyeBallRot;
		struct Vector3 _originRightEyeBallRot;
		struct Vector3 _originLeftEyeBallScale;
		struct Vector3 _originRightEyeBallScale;
		struct Vector3 _originUpTeethRot;
		struct Vector3 _originDownTeethRot;
		struct Vector3 _originUpTeethScale;
		struct Vector3 _originDownTeethScale;
		struct Vector3 _originDownTeethPos;
	};

	struct EyeKey
	{
		struct EyeKey__Class *klass;
		MonitorData *monitor;
		struct EyeKey__Fields fields;
	};

	enum class Proto_EnterType__Enum : int32_t
	{
		EnterNone = 0x00000000,
		EnterSelf = 0x00000001,
		EnterGoto = 0x00000002,
		EnterJump = 0x00000003,
		EnterOther = 0x00000004,
		EnterBack = 0x00000005,
		EnterDungeon = 0x00000006,
		EnterDungeonReplay = 0x00000007,
		EnterGotoByPortal = 0x00000008,
		EnterSelfHome = 0x00000009,
		EnterOtherHome = 0x0000000a,
		EnterGotoRecreate = 0x0000000b,
	};

	struct Proto_Vector__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		float x_;
		float y_;
		float z_;
	};

	struct Proto_Vector
	{
		struct Proto_Vector__Class *klass;
		MonitorData *monitor;
		struct Proto_Vector__Fields fields;
	};

	struct Proto_PlayerEnterSceneNotify__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		uint32_t sceneId_;
		uint32_t enterReason_;
		struct Google_Protobuf_Collections_RepeatedPrimitiveField_1_System_UInt32_ *sceneTagIdList_;
		struct String *sceneTransaction_;
		struct Proto_Vector *prevPos_;
		uint32_t targetUid_;
		uint32_t worldType_;
		bool isSkipUi_;
		Proto_EnterType__Enum type_;
		bool isFirstLoginEnterScene_;
		uint32_t worldLevel_;
		uint32_t dungeonId_;
		struct Proto_Vector *pos_;
		uint32_t prevSceneId_;
		uint32_t enterSceneToken_;
		uint64_t sceneBeginTime_;
	};

	struct Proto_PlayerEnterSceneNotify
	{
		struct Proto_PlayerEnterSceneNotify__Class *klass;
		MonitorData *monitor;
		struct Proto_PlayerEnterSceneNotify__Fields fields;
	};

	enum class Proto_PlayerDieType__Enum : int32_t
	{
		PlayerDieNone = 0x00000000,
		PlayerDieKillByMonster = 0x00000001,
		PlayerDieKillByGear = 0x00000002,
		PlayerDieFall = 0x00000003,
		PlayerDieDrawn = 0x00000004,
		PlayerDieAbyss = 0x00000005,
		PlayerDieGm = 0x00000006,
		PlayerDieClimateCold = 0x00000007,
		PlayerDieStormLighting = 0x00000008,
	};

	struct Proto_AvatarLifeStateChangeNotify__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		uint32_t lifeState_;
		uint32_t moveReliableSeq_;
		Proto_PlayerDieType__Enum dieType_;
		struct String *attackTag_;
		uint64_t avatarGuid_;
		uint32_t sourceEntityId_;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_ServerBuff_ *serverBuffList_;
	};

	struct Proto_AvatarLifeStateChangeNotify
	{
		struct Proto_AvatarLifeStateChangeNotify__Class *klass;
		MonitorData *monitor;
		struct Proto_AvatarLifeStateChangeNotify__Fields fields;
	};

	struct Proto_LifeStateChangeNotify__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		uint32_t entityId_;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_ServerBuff_ *serverBuffList_;
		uint32_t moveReliableSeq_;
		struct String *attackTag_;
		uint32_t lifeState_;
		uint32_t sourceEntityId_;
		Proto_PlayerDieType__Enum dieType_;
	};

	struct Proto_LifeStateChangeNotify
	{
		struct Proto_LifeStateChangeNotify__Class *klass;
		MonitorData *monitor;
		struct Proto_LifeStateChangeNotify__Fields fields;
	};

	struct MoleMole_MapModule_NNAMJGPBKBB
	{
		bool AJFLOFKBHLL;
		struct String__Array *JNLKCFFFCFG;
		bool IKHMGFGFACG;
		struct UInt32__Array *EFJOJHCMCBM;
		float HHGKMEAPNGK;
		uint32_t NAINKPCHJAI;
	};

	struct Nullable_1_MoleMole_MapModule_NNAMJGPBKBB_
	{
		struct MoleMole_MapModule_NNAMJGPBKBB value;
		bool has_value;
	};

	struct GcgGrpSettle__Fields
	{
		bool _SettleReceived_k__BackingField; // 0x18
		bool _SettlePageShowed_k__BackingField; // 0x19
		uint32_t _GameId_k__BackingField; // 0x1C
		struct FFCGFKMGLKB *_EndReason_k__BackingField; // 0x20
		struct HHELPIDMIPK *_BusinessType_k__BackingField; // 0x24
		bool _IsSelfWinGame_k__BackingField; // 0x28
		bool _IsOppoWinGame_k__BackingField; // 0x29
		struct List_1_GcgGrpSettle_RewardPair_ *_RewardList_k__BackingField; // 0x30
		struct List_1_UInt32_ *_FinishedList_k__BackingField; // 0x38
		struct List_1_UInt32_ *_CanNotFinishList_k__BackingField; // 0x40
		bool _HavePlayerLevelUpdate_k__BackingField; // 0x48
		uint32_t _PlayerUpdatePrevLevel_k__BackingField; // 0x4C
		uint32_t _PlayerUpdateNewLevel_k__BackingField; // 0x50
		uint32_t _PlayerUpdatePrevExp_k__BackingField; // 0x54
		uint32_t _PlayerUpdateNewExp_k__BackingField; // 0x58
		struct List_1_GcgGrpSettle_CachedAchievement_ *_CachedAchievements_k__BackingField; // 0x60
	};

	struct GcgGrpSettle
	{
		struct GcgGrpSettle__Class *klass;
		MonitorData *monitor;
		struct GcgGrpSettle__Fields fields;
	};

	enum class UIShowPriority__Enum : int32_t
	{
		Cutscene = 0x00000003,
		Error = 0x00000006,
		Init = 0x00000004,
		Loading = 0x00000005,
		None = 0x00000000,
		Normal = 0x00000001,
		Pop = 0x00000002,
	};

	enum class GeneralDialogContext_GeneralDialogType__Enum : int32_t
	{
		DOUBLE_BUTTON = 0x00000000,
		SINGLE_BUTTON = 0x00000001,
	};

	enum class SystemLanguage__Enum : int32_t
	{
		Afrikaans = 0x00000000,
		Arabic = 0x00000001,
		Basque = 0x00000002,
		Belarusian = 0x00000003,
		Bulgarian = 0x00000004,
		Catalan = 0x00000005,
		Chinese = 0x00000006,
		ChineseSimplified = 0x00000028,
		ChineseTraditional = 0x00000029,
		Czech = 0x00000007,
		Danish = 0x00000008,
		Dutch = 0x00000009,
		English = 0x0000000A,
		Estonian = 0x0000000B,
		Faroese = 0x0000000C,
		Finnish = 0x0000000D,
		French = 0x0000000E,
		German = 0x0000000F,
		Greek = 0x00000010,
		Hebrew = 0x00000011,
		Hungarian = 0x00000012,
		Icelandic = 0x00000013,
		Indonesian = 0x00000014,
		Italian = 0x00000015,
		Japanese = 0x00000016,
		Korean = 0x00000017,
		Latvian = 0x00000018,
		Lithuanian = 0x00000019,
		Norwegian = 0x0000001A,
		Polish = 0x0000001B,
		Portuguese = 0x0000001C,
		Romanian = 0x0000001D,
		Russian = 0x0000001E,
		SerboCroatian = 0x0000001F,
		Slovak = 0x00000020,
		Slovenian = 0x00000021,
		Spanish = 0x00000022,
		Swedish = 0x00000023,
		Thai = 0x00000024,
		Turkish = 0x00000025,
		Ukrainian = 0x00000026,
		Unknown = 0x0000002A,
		Vietnamese = 0x00000027,
	};

	struct __declspec(align(8)) List_1_System_UInt32___Fields
	{
		struct System_UInt32__Array *_items;
		int32_t _size;
		int32_t _version;
		struct Object *_syncRoot;
	};

	struct List_1_System_UInt32_
	{
		struct List_1_System_UInt32___Class *klass;
		MonitorData *monitor;
		struct List_1_System_UInt32___Fields fields;
	};

	struct System_UInt32__Array
	{
		struct System_UInt32__Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		uint32_t vector[32];
	};

	struct __declspec(align(8)) List_1_System_Int32___Fields
	{
		struct System_Int32__Array *_items;
		int32_t _size;
		int32_t _version;
		struct Object *_syncRoot;
	};

	struct List_1_System_Int32_
	{
		struct List_1_System_Int32___Class *klass;
		MonitorData *monitor;
		struct List_1_System_Int32___Fields fields;
	};

	struct System_Int32__Array
	{
		struct System_Int32__Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		int32_t vector[32];
	};

	enum class GcgDiceType__Enum : int32_t
	{
		NONE = 0x00000000,
		CRYO = 0x00000001,
		HYDRO = 0x00000002,
		PYRO = 0x00000003,
		ELECTRO = 0x00000004,
		GEO = 0x00000005,
		DENDRO = 0x00000006,
		ANEMO = 0x00000007,
		ANY = 0x00000008
	};

	enum class GcgCost__Enum : int32_t
	{
		Equal = 0,
		Increase = 1,
		Reduce = 2
	};

	struct __declspec(align(8)) List_1_GcgCost___Fields
	{
		struct GcgCost__Array *_items;
		int32_t _size;
		int32_t _version;
		struct Object *_syncRoot;
	};

	struct List_1_GcgCost_
	{
		struct List_1_GcgCost___Class *klass;
		MonitorData *monitor;
		struct List_1_GcgCost___Fields fields;
	};

	struct GcgCost__Array
	{
		struct GcgCost__Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		GcgCost__Enum vector[32];
	};

	enum class CostDiceOperationType__Enum : int32_t
	{
		UseSkill = 0,
		UseCard = 1,
		OnStageCharChange = 2,
		Reboot = 3
	};

	enum class GcgCostCheckLevel__Enum : int32_t
	{
		Precisely = 0,
		Roughly = 1
	};

	enum class CostDiceOperationCheckState__Enum : int32_t
	{
		Invalid = 0,
		DiceNotMatchEnergyLess = 1,
		DiceNotMatchTooLess = 2,
		DiceNotMatch = 3,
		DiceNotMatchTooMuch = 4,
		DiceMatch = 5,
		DiceMatchTooMuch = 6,
		ConditionDenied = 7
	};

	enum class GcgCardInfoMessagePriority__Enum : int64_t
	{
		None = 0,
		Normal = 1,
		Pop = 2,
		Cutscene = 3,
		Init = 4,
		Loading = 5,
		Error = 6
	};

	struct __declspec(align(8)) OperationCostCheckDesc__Fields
	{
		CostDiceOperationType__Enum inputOperationType;
		uint32_t inputOperationParameter;
		struct List_1_System_UInt32_ *inputPtrDiceIndexList;
		GcgCostCheckLevel__Enum inputCheckLevel;
		bool outputIsPass;
		CostDiceOperationCheckState__Enum outputCheckState;
		String *outputHintMsgIfNotPass;
		struct List_1_System_Int32_ *outputPtrBestMatchDiceIndex;
	};

	struct OperationCostCheckDesc
	{
		struct OperationCostCheckDesc__Fields fields;
	};

	struct GcgLevelMinistry__Fields
	{
		struct GcgLevel *_level;
	};

	struct GcgGroup__Fields
	{
		GcgLevelMinistry__Fields _;
	};

	enum class GcgLevelPhaseType__Enum : int32_t
	{
		ILIOMJIILGE = 0,
		MCGONJAEMCF = 1,
		OFENBLPADLI = 2,
		LBFOICKNNIK = 3,
		LPIOPPFOLCG = 4,
		BPFHLNOAKOI = 5,
		GCOCGIKGBJI = 6,
		DPHIBPOFILC = 7,
		OHFHKCJJNIA = 8,
		GJOJLDFKPLN = 9,
		IMLJAEGLHFA = 10
	};

	struct __declspec(align(8)) GcgLevelPhaseController__Fields
	{
		GcgLevelMinistry__Fields _;
		struct GcgPhase *_phase;
		GcgLevelPhaseType__Enum _lastPhase;
		GcgLevelPhaseType__Enum _currentPhase;
		struct Dictionary_2_System_Uint32_System_Uint32_ *_controllerActionChanceMap;
		bool _PhaseChanging_k__BackingField;
	};

	struct GcgLevelPhaseController
	{
		struct GcgLevelPhaseController__Class *klass;
		MonitorData *monitor;
		struct GcgLevelPhaseController__Fields fields;
	};

	struct GcgGrpOperationCost__Fields
	{
		struct GcgCostRepo *_costMap; // 0x18
		struct List_1_GcgGrpOperationCost_DicePriorityInfo_ *_dicePriorityInfoList; // 0x20
	};

	struct GcgGrpOperationCost
	{
		struct GcgGrpOperationCost__Class *klass;
		MonitorData *monitor;
		struct GcgGrpOperationCost__Fields fields;
	};

	struct __declspec(align(8)) List_1_GcgDiceType___Fields
	{
		struct GcgDiceType__Array *_items;
		int32_t _size;
		int32_t _version;
		struct Object *_syncRoot;
	};

	struct List_1_GcgDiceType_
	{
		struct List_1_FPMFOPCJDJP___Class *klass;
		MonitorData *monitor;
		struct List_1_GcgDiceType___Fields fields;
	};

	struct GcgDiceType__Array
	{
		struct FPMFOPCJDJP__Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		GcgDiceType__Enum vector[32];
	};

	struct GcgPlayerDice__Fields
	{
		struct List_1_GcgDiceType_ *_diceList;
		uint32_t _diceNum;
	};

	struct GcgPlayerDice
	{
		struct GcgPlayerDice__Class *klass;
		MonitorData *monitor;
		struct GcgPlayerDice__Fields fields;
	};

	enum class LFADJECDHHB__Enum : int32_t
	{
		GCG_ELEMENT_PHYSIC = 0x00000000,
		GCG_ELEMENT_CRYO = 0x00000001,
		GCG_ELEMENT_HYDRO = 0x00000002,
		GCG_ELEMENT_PYRO = 0x00000003,
		GCG_ELEMENT_ELECTRO = 0x00000004,
		GCG_ELEMENT_GEO = 0x00000005,
		GCG_ELEMENT_DENDRO = 0x00000006,
		GCG_ELEMENT_ANEMO = 0x00000007,
		GCG_ELEMENT_ANY = 0x00000008
	};

	enum class GcgCardCostType__Enum : int32_t
	{
		GCG_COST_INVALID = 0,
		GCG_COST_ENERGY = 1,
		GCG_COST_DICE_SAME = 3,
		GCG_COST_DICE_PAIMON = 5,
		GCG_COST_DICE_VOID = 10,
		GCG_COST_DICE_CRYO = 11,
		GCG_COST_DICE_HYDRO = 12,
		GCG_COST_DICE_PYRO = 13,
		GCG_COST_DICE_ELECTRO = 14,
		GCG_COST_DICE_GEO = 15,
		GCG_COST_DICE_DENDRO = 16,
		GCG_COST_DICE_ANEMO = 17
	};

	enum class GcgCardSkinFaceType__Enum : uint64_t
	{
		GCG_CARD_FACE_NORMAL = 0x00000000,
		GCG_CARD_FACE_GOLD = 0x00000001
	};

	struct MonoBaseCard__Fields
	{
		MonoBehaviour__Fields _;
		struct Renderer__Array *renderers;
		struct Transform *goldenGrp;
		struct Transform *normalGrp;
		GcgCardSkinFaceType__Enum _Skin_k__BackingField;
		struct List_1_Renderer_ *_listRenderers;
	};

	struct __declspec(align(8)) Object__Fields
	{
		void *m_CachedPtr;
	};

	struct MonoGcgUICard__Fields
	{
		struct MonoSpriteProxy__Fields _;
		struct Animator *_animator;
		struct RawImage *_cardRawImage;
		struct Image *_cardImage;
		struct GameObject *_cardFrameNormal;
		struct GameObject *_cardFrameGold;
		struct MonoUIContainer *_cardInfoContainer;
		struct MonoUIContainer *_cardDetailContainer;
		struct MonoRightClickButton *_actionBtn;
		struct MonoLongPressButton *_longPressBtn;
		struct MonoUIContainer *_PS4InputBtn;
	};
	struct MonoGcgUICard
	{
		struct MonoGcgUICard__Class *klass;
		MonitorData *monitor;
		struct MonoGcgUICard__Fields fields;
	};

	struct MonoBaseCard
	{
		struct MonoBaseCard__Class *klass;
		MonitorData *monitor;
		struct MonoBaseCard__Fields fields;
	};

	struct GcgClientMsgSkillResult__Fields
	{
		bool _isNoDamage; // 0x18
		uint32_t _skillId; // 0x1C
		uint32_t _sourceCardGuid; // 0x20
		uint32_t _targetCardGuid; // 0x24
		LFADJECDHHB__Enum _elementType; // 0x28
		struct List_1_GcgDamageDetail_ *_detailList; // 0x30
		uint32_t _resultSeq; // 0x38
		uint32_t _fromResultSeq; // 0x3C
		uint32_t _damage; // 0x40
		uint32_t _lastHp; // 0x44
	};

	struct GcgClientMsgSkillResult
	{
		struct GcgClientMsgSkillResult__Class *klass;
		MonitorData *monitor;
		struct GcgClientMsgSkillResult__Fields fields;
	};

	struct __declspec(align(8)) MoleMole_RuntimeIDManager__Fields
	{
		uint32_t _networkedNextSeqID;
		uint32_t _localNextSeqID;
		uint32_t _peerID;
	};

	struct MoleMole_RuntimeIDManager
	{
		struct MoleMole_RuntimeIDManager__Class *klass;
		MonitorData *monitor;
		struct MoleMole_RuntimeIDManager__Fields fields;
	};

	struct Nullable_1_TargetType__Enum_
	{
		TargetType__Enum value;
		bool has_value;
	};

	struct AbilitySyncStateInfo__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		bool isInited_;
		struct CLKGICEOBCP_HECJOFLAFJH_ *dynamicValueMap_;
		struct CLKGICEOBCP_CDCNILCLDIM_ *appliedAbilities_;
		struct CLKGICEOBCP_MLPBOBHABLA_ *appliedModifiers_;
		struct CLKGICEOBCP_HJFIFGEAFNA_ *mixinRecoverInfos_;
		struct CLKGICEOBCP_HECJOFLAFJH_ *sgvDynamicValueMap_;
	};
	struct AbilitySyncStateInfo
	{
		struct AbilitySyncStateInfo__Class *klass;
		MonitorData *monitor;
		struct AbilitySyncStateInfo__Fields fields;
	};

	struct __declspec(align(8)) List_1_UInt32___Fields
	{
		struct UInt32__Array *_items;
		int32_t _size;
		int32_t _version;
		struct Object *_syncRoot;
	};
	struct List_1_UInt32_
	{
		struct List_1_UInt32___Class *klass;
		MonitorData *monitor;
		struct List_1_UInt32___Fields fields;
	};

	struct __declspec(align(8)) MoleMole_FightModule__Fields
	{
		bool _disableAvatarSkillByServer;
		bool _disableAvatarSkillByClient;
		struct HashSet_1_System_UInt32_ *skillIdsNeedHide;
		struct MoleMole_LevelSyncAbilityPlugin *_abilitySyncPlugin;
		struct MoleMole_LevelSyncCombatPlugin *_combatSyncPlugin;
		struct List_1_MoleMole_CollisionResult_ *_massiveEntityOpList;
		struct Action_2_Google_Protobuf_MessageBase_MoleMole_DualClientSequenceId_ *entityServerEvtBeingHealedNotifyHandler;
		struct Action_2_MoleMole_BaseEntity_Proto_EvtBeingHealedNotify_ *_onServerEvtBeingHealedNotify;
		struct Action_2_MoleMole_BaseEntity_Proto_EvtBeingHitInfo_ *_onServerEvtBeingHit;
		struct Action_2_MoleMole_BaseEntity_Proto_EvtSyncEntityPositionInfo_ *_onServerEvtSyncEntityPosition;
		struct Action_2_MoleMole_BaseEntity_Proto_EvtAnimatorStateChangedInfo_ *_onServerEvtAnimatorStateChanged;
		struct Action_2_MoleMole_BaseEntity_Proto_EvtAnimatorParameterInfo_ *_onServerEvtAnimatorParameterChanged;
		struct Action_1_Google_Protobuf_MessageBase_ *onServerEvtEntityRenderersChangedHandler;
		struct Action_2_MoleMole_BaseEntity_Proto_EvtFaceToDirInfo_ *_onServerEvtFaceToDir;
		struct Action_2_MoleMole_BaseEntity_Proto_EvtSyncTransform_ *_onServerEvtSyncTransform;
		struct Action_2_MoleMole_BaseEntity_Proto_EvtSetAttackTargetInfo_ *_onServerEvtSetAttackTarget;
		struct Action_4_FJCIDHDHCBD_UInt32_BBNLDDJNGIH_Action_2_GFEKLPPHGCP_FJCIDHDHCBD__ *LFGJMLJNIPF;
		struct Action_2_Google_Protobuf_MessageBase_UInt32_ *_onMonsterForceAlertAfterAppear;
		struct Action_2_MoleMole_BaseEntity_Proto_EvtRushMoveInfo_ *_onServerEvtRushMove;
		struct Action_2_MoleMole_BaseEntity_Proto_EvtCombatSteerMotionInfo_ *_onServerEvtCombatSteerMotionInfo;
		struct Action_2_MoleMole_BaseEntity_Proto_EvtCombatForceSetPosInfo_ *_onServerEvtCombatForceSetPosInfo;
		struct Action_2_MoleMole_BaseEntity_Proto_EvtCompensatePosDiffInfo_ *_onServerEvtCompensatePosDiffInfo;
		struct Action_2_MoleMole_BaseEntity_Proto_EvtFixedRushMove_ *_onServerEvtFixedRushMove;
		struct Action_2_MoleMole_BaseEntity_Proto_EvtLightCoreMove_ *_onServerEvtLightCoreMove;
		struct Action_2_MoleMole_BaseEntity_Proto_EvtMonsterDoBlink_ *_onServerEvtMonsterDoBlink;
		struct Action_2_GFEKLPPHGCP_JBEDKPCOIHC_ *CBEAAFLCBJO;
		struct Action_1_Google_Protobuf_MessageBase_ *entityAuthorityChangeNotifyHandler;
		bool isDuringBeingHitCalculate;
		struct List_1_MoleMole_SendPacketData_ *delaySendList;
		struct Stack_1_MoleMole_MPActorAbilityPlugin_ *currentInitiatingAbilityPluginStack;
		struct Action_1_Google_Protobuf_MessageBase_ *entityServerGlobalValueChangeNotifyHandler;
		struct Action_1_Google_Protobuf_MessageBase_ *_onMonsterPointArrayRouteUpdateNotify;
		struct Action_1_Google_Protobuf_MessageBase_ *evtLocalGadgetOwnerLeaveSceneNotifyHandler;
	};

	struct MoleMole_FightModule
	{
		struct MoleMole_FightModule__Class *klass;
		MonitorData *monitor;
		struct MoleMole_FightModule__Fields fields;
	};

	struct __declspec(align(8)) BaseContextComponent__Fields
	{
		struct BaseContext *_parent;
		struct List_1_NotifyTypes__Enum_ *_registerNotifyList;
		struct List_1_Int32_ *_registerPacketList;
		struct List_1_Config_InputEventType__Enum_ *_registerActionList;
		bool _handleAnyNotify_k__BackingField;
	};

	struct MoleMole_SimpleSafeInt32__Array
	{
		struct MoleMole_SimpleSafeInt32__Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct SimpleSafeInt32 vector[32];
	};

	struct MoleMole_InLevelMusicPage_XumiMusicPageComponent__Fields
	{
		struct BaseContextComponent__Fields _;
		bool _IBIMNEGNHOG_k__BackingField;
		bool _APJDGKCGOBN_k__BackingField;
		bool _CCBGGCKCJAN_k__BackingField;
		struct MonoInLevelMusicPage *LMAMGJFNIMI;
		struct MonoMusicRiddle *AMNHLEIDIGI;
		struct List_1_MonoMusicFreeButton_ *GCCGHAICOBO;
		uint32_t KDJFOKPHFIE;
		struct AHCDMNEEIKP *HKPBLDCINDD;
		struct LEGPOPECGNN *FHHLAGMHNJI;
		struct MoleMole_SimpleSafeInt32__Array *_correctIndexs;
		struct Int32__Array *MODKLENNFEI;
		bool MODJMCAJEOK;
		int32_t _currentIndex;
		int32_t OCDJGDCIHAB;
		struct Coroutine *DJIEMEELDMC;
	};

	struct MoleMole_InLevelMusicPage_XumiMusicPageComponent
	{
		struct MoleMole_InLevelMusicPage_XumiMusicPageComponent__Class *klass;
		MonitorData *monitor;
		struct MoleMole_InLevelMusicPage_XumiMusicPageComponent__Fields fields;
	};

	struct MoleMole_InLevelData__StaticFields
	{
		struct Transform *KNPJIJKGHGB;
		struct Transform *DKECCOHEAEE;
		struct String *JPALDEJCPIL;
		struct Transform *NFKPDNFGGML;
		struct String *PCJMNEEPFKJ;
		struct Transform *FEIFCFOPLJH;
		struct String *EMCEBEGCCIM;
		struct Transform *DCLAIKHGIAG;
		struct String *MIOJFGKCKDP;
		struct String *GFOMFAOEIGM;
		struct Transform *BILCCBLBEMN;
		struct String *DHEEBLMDHPF;
		struct String *FECMFFCEGCM;
		struct Transform *EKLKIEJFFBO;
		struct String *LJKBGJKHCEO;
		struct String *JPAAGNEKGDH;
		struct Transform *BGIBEFLKJBB;
		struct Transform *LJEJCBGNKPK;
		struct String *OFCPCBMFDGG;
		struct String *KGKMNLPIPJE;
		struct Transform *NJLLCMLLHMF;
		struct String *BIFOMCDPGGD;
		struct Transform *HGPAEDMIDNF;
		struct String *LEBJOCMBPMB;
		struct String *DPLAGKNBAHC;
		struct String *HDEMAHNPIMN;
		struct String *GCPPLAPIBDI;
		struct Transform *NCFCCKAAABF;
		struct String *BHIMLLCDAIK;
		struct String *NCIMBLIDFKD;
		struct Transform *BCGOAJONKBB;
		struct String *ANCLJOPOMIP;
		struct String *JPIMBDINFJA;
		struct String *IOOHFGHBKKD;
		struct String *EAOHJMLMGJO;
		struct String *MDJNJEJIJHK;
		struct String *JNKGCGANIJH;
		int32_t KBICBDNOJAI;
		float CBLMMNNBDGA;
		float ICFIMMFCJEM;
		struct Vector3 LNBIPALEMDM;
		float PBGBHJBDKFM;
		uint32_t EADFOJPAMDN;
		float MPKJFIFJHPK;
		int32_t LEEPCGAMEFK;
		uint32_t BBGFAHPFGKH;
		uint32_t ENHNHHALBMB;
		uint32_t LKEKJIIEEOO;
		int32_t JEGDHLDILDF;
		uint32_t DKPLMMNBABF;
		int32_t NDDOEBGBLCB;
		int32_t KLAEOHNAOML;
		int32_t LHBCFDJHBLI;
		uint32_t EOCHIJDPCCD;
		uint32_t DCJNOOEPNLF;
		float ABNLIPGMJLN;
		float AVATAR_FORCE_DRAG_COUNT;
		int32_t LJHECJDIMOL;
		float LLLDDCGNGPD;
		int32_t AEJBOHCACAK;
		struct Vector3 HGLPBHIFCDE;
		float BDJCOMNLLBO;
		uint32_t MPDEDBPOBDI;
		int32_t KDOFMICKFGP;
		float ECDMLLPAJFD;
		int32_t HDAEGDJGHJC;
		float KAEDHAKAPOE;
		int32_t KGLKCFOEMCB;
		float LKJFOHICILB;
		uint32_t PGLPBCHBGOG;
		float IKIANDOEFNB;
		uint32_t BHNPEOCFNCA;
		int32_t NICLPOLEGIJ;
		int32_t GBKACFFEMDD;
		uint32_t CHBAMBDALPK;
		float DHMIDIBKJHM;
		int32_t KDBKCIMPGFI;
		float DMICAGCIGGJ;
		int32_t BIBFAGNAIBJ;
		float CCPJJKJPPNJ;
		uint32_t DPLFNDFCHLD;
		float NIHLHOLIJJO;
		bool PFJOMDAKFMI;
		bool FJJMCJILGII;
		int32_t LGDADJDKPBA;
		int32_t FBMFMACBBGI;
		float PGCGMMBAMJA;
		uint32_t DNHOEHADHKF;
		float BKMPDNHNHOA;
		int32_t MDLGFJHDHBG;
		uint64_t OOOIFMCELBE;
		uint32_t NGNBEEAGPHB;
		uint32_t EHEPMKFGINJ;
		uint32_t KOKONLMKCPE;
		float HDNIKHKOFDJ;
		uint32_t GAGMFHPAJHG;
		int32_t NFBINODLGDI;
		float JJNECKNMPII;
		int32_t CIDHJMOFDGC;
		uint64_t LPFJCFGIKEB;
		float LAMEOIFONLD;
		float AVATAR_FORCE_DRAG_DIST;
		float CPHCAHAALCA;
		float DKJIILACBMA;
		float ICPJIAEGMFE;
		int32_t NKPABDFBJPE;
		float IGFJGHGCFJE;
		uint32_t MLOAELOFIPL;
		int32_t AEFFGJMBMOJ;
		int32_t BHELDHCIEGG;
		uint32_t BDKCFBEHFGB;
	};

	struct MoleMole_InLevelData__Class
	{
		char headerData[0x90];
		struct MoleMole_InLevelData__StaticFields *static_fields;
		const Il2CppRGCTXData *rgctx_data;
		Il2CppClass_1 _1;
	};

	struct MoleMole_InLevelData
	{
		struct MoleMole_InLevelData__Class *klass;
		MonitorData *monitor;
	};

	enum class MoleMole_MallPageContext_MoleMole_MallPageContext_OpenSource__Enum : int32_t
	{
		Default = 0x00000000,
		ItemTips = 0x00000001,
	};

	enum class MoleMole_Config_ShopType__Enum : int32_t
	{
		SHOP_TYPE_NONE = 0x00000000,
		SHOP_TYPE_RECOMMEND = 0x00000384,
		SHOP_TYPE_HCOIN = 0x00000385,
		SHOP_TYPE_PACKAGE = 0x00000386,
		SHOP_TYPE_MCOIN = 0x00000387,
		SHOP_TYPE_PAIMON = 0x000003e9,
		SHOP_TYPE_CITY = 0x000003ea,
		SHOP_TYPE_BLACKSMITH = 0x000003eb,
		SHOP_TYPE_GROCERY = 0x000003ec,
		SHOP_TYPE_FOOD = 0x000003ed,
		SHOP_TYPE_SEA_LAMP = 0x000003ee,
		SHOP_TYPE_VIRTUAL_SHOP = 0x000003ef,
		SHOP_TYPE_LIYUE_GROCERY = 0x000003f0,
		SHOP_TYPE_LIYUE_SOUVENIR = 0x000003f1,
		SHOP_TYPE_LIYUE_RESTAURANT = 0x000003f2,
		SHOP_TYPE_NPC_Flora = 0x000003f3,
		SHOP_TYPE_NPC_Charles = 0x000003f4,
		SHOP_TYPE_NPC_Shiliu = 0x000003f5,
		SHOP_TYPE_NPC_Schulz = 0x000003f6,
		SHOP_TYPE_NPC_Brook = 0x000003f7,
		SHOP_TYPE_NPC_Hopkins = 0x000003f8,
		SHOP_TYPE_NPC_Draff = 0x000003f9,
		SHOP_TYPE_NPC_Chloris = 0x000003fa,
		SHOP_TYPE_NPC_Licai = 0x000003fb,
		SHOP_TYPE_NPC_Yueshu = 0x000003fc,
		SHOP_TYPE_NPC_Gui = 0x000003fd,
		SHOP_TYPE_NPC_Gao = 0x000003fe,
		SHOP_TYPE_NPC_Sun = 0x000003ff,
		SHOP_TYPE_NPC_Qiming = 0x00000400,
		SHOP_TYPE_NPC_Zhangshun = 0x00000401,
		SHOP_TYPE_NPC_Chen = 0x00000402,
		SHOP_TYPE_NPC_ErNiang = 0x00000403,
		SHOP_TYPE_NPC_Shitou = 0x00000404,
		SHOP_TYPE_NPC_Jifang = 0x00000405,
		SHOP_TYPE_NPC_Zhu = 0x00000406,
		SHOP_TYPE_NPC_Bai = 0x00000407,
		SHOP_TYPE_NPC_Kai = 0x00000408,
		SHOP_TYPE_NPC_Linglang = 0x00000409,
		SHOP_TYPE_NPC_VerrGoldet = 0x0000040a,
		SHOP_TYPE_NPC_Zhou = 0x0000040b,
		SHOP_TYPE_TASK_Ekaterina = 0x0000040c,
		SHOP_TYPE_ACTIVITY_ASTER = 0x0000040d,
		SHOP_TYPE_TASK_Tartaglia = 0x0000040e,
		SHOP_TYPE_NPC_Harris = 0x0000040f,
		SHOP_TYPE_ACTIVITY_DRAGON_SPINE = 0x00000410,
		SHOP_TYPE_ACTIVITY_TREASURE_MAP = 0x00000411,
		SHOP_TYPE_NPC_Yinian = 0x00000412,
		SHOP_TYPE_ACTIVITY_SEA_LAMP = 0x00000413,
		SHOP_TYPE_ACTIVITY_FLEUR_FAIR = 0x00000414,
		SHOP_TYPE_NPC_Changshun = 0x00000415,
		SHOP_TYPE_NPC_Bolai = 0x00000416,
		SHOP_TYPE_NPC_Ashanpo = 0x00000417,
		SHOP_TYPE_HOME = 0x00000418,
		SHOP_TYPE_HOME_LIMIT = 0x00000419,
		SHOP_TYPE_NPC_MasterLu = 0x0000041a,
		SHOP_TYPE_NPC_Goth = 0x0000041b,
		SHOP_TYPE_COSTUME = 0x0000041c,
		SHOP_TYPE_NPC_Obata = 0x0000041d,
		SHOP_TYPE_NPC_Qiuyue = 0x0000041e,
		SHOP_TYPE_NPC_Ryouko = 0x0000041f,
		SHOP_TYPE_INAZUMA_GROCERY = 0x00000420,
		SHOP_TYPE_INAZUMA_SOUVENIR = 0x00000421,
		SHOP_TYPE_INAZUMA_RESTAURANT = 0x00000422,
		SHOP_TYPE_NPC_Kuroda = 0x00000423,
		SHOP_TYPE_NPC_KiminamiAnna = 0x00000424,
		SHOP_TYPE_NPC_Tomoki = 0x00000425,
		SHOP_TYPE_NPC_Karpillia = 0x00000426,
		SHOP_TYPE_BLACKSMITH_INAZUMA = 0x00000427,
		SHOP_TYPE_FISH = 0x00000428,
		SHOP_TYPE_FISH_LIYUE = 0x00000429,
		SHOP_TYPE_FISH_INAZUMA = 0x0000042a,
		SHOP_TYPE_NPC_Kiyoko = 0x0000042b,
		SHOP_TYPE_EXPIRED_WIDGET_MENGDE = 0x0000042c,
		SHOP_TYPE_CAPTURE_ANIMAL_SHOP = 0x0000042d,
		SHOP_TYPE_NPC_YamashiroKenta = 0x0000042e,
		SHOP_TYPE_ACTIVITY_CHANNELLER_SLAB = 0x00003a99,
		SHOP_TYPE_ACTIVITY_SUMMER_TIME = 0x00003e81,
		SHOP_TYPE_ACTIVITY_BOUNCE_CONJURING = 0x00003e82,
		SHOP_TYPE_ACTIVITY_BLITZ_RUSH = 0x00004e21,
		SHOP_TYPE_ACTIVITY_CHESS = 0x00004e22,
		SHOP_TYPE_ACTIVITY_ROGUELIKE_DUNGEON = 0x00004e23,
		SHOP_TYPE_ACTIVITY_WINTER_CAMP = 0x00004e24,
		SHOP_TYPE_ACTIVITY_LANTERN_RITE = 0x00004e25,
		SHOP_TYPE_ACTIVITY_ROGUE_DIARY = 0x00006979,
		SHOP_TYPE_ACTIVITY_SUMMER_TIME_V2 = 0x00006d61,
		SHOP_TYPE_ACTIVITY_GRAVEN_INNOCENCE = 0x00007531,
		SHOP_TYPE_ACTIVITY_TREASURE_SEELIE = 0x00007532,
		SHOP_TYPE_ACTIVITY_VINTAGE_ANGEL_S_SHARE = 0x00007919,
		SHOP_TYPE_ACTIVITY_FUNGUS_FIGHTER = 0x00007D01,
		SHOP_TYPE_ACTIVITY_EFFIGY_V2 = 0x00007D02,
		SHOP_TYPE_ACTIVITY_BRICK_BREAKER = 0x000080E9,
		SHOP_TYPE_ACTIVITY_FLEURFAIR_V2 = 0x000088B9,
	};

	struct MoleMole_ShopModule_MoleMole_ShopModule_PayData
	{
		struct String *productID;
		struct String *productName;
		struct String *priceTier;
		MoleMole_Config_ShopType__Enum shopType;
		bool isCard;
	};

	struct Proto_CardProductRewardNotify__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		uint32_t hcoin_;
		uint32_t remainDays_;
		struct String *productId_;
	};

	struct Proto_CardProductRewardNotify
	{
		struct Proto_CardProductRewardNotify__Class *klass;
		MonitorData *monitor;
		struct Proto_CardProductRewardNotify__Fields fields;
	};

	struct __declspec(align(8)) MoleMole_ShopModule__Fields
	{
		struct Dictionary_2_System_UInt32_MoleMole_ShopData_ *_shopDataDic;
		MoleMole_Config_ShopType__Enum _curMallShopType;
		uint32_t _initMallSubTabId;
		uint32_t _initGoodsId;
		MoleMole_MallPageContext_MoleMole_MallPageContext_OpenSource__Enum _openSource;
		struct List_1_System_UInt32_ *_curShopTypeList;
		struct MoleMole_ShopModule_MoleMole_ShopModule_PayData _curPayData;
		struct Dictionary_2_System_UInt32_System_UInt32_ *recommendId2BeginTimeDic;
		struct MoleMole_InLevelGachaGroupContext *_curGachaGroup;
		uint32_t lastSelectGachaSchedule;
		uint32_t _WishItemID_k__BackingField;
		uint32_t _WishProgress_k__BackingField;
		uint32_t _WishMaxProgress_k__BackingField;
		bool _IsNewWish_k__BackingField;
		bool _AEJFBLCFGPK_k__BackingField;
		bool _IsUnderMinorsRestrict_k__BackingField;
		bool _showMonthlyCard;
		uint32_t _monthlyCardRemainDays_k__BackingField;
		uint32_t _monthlyCardHcoinCount_k__BackingField;
		struct Proto_ResinCardDataUpdateNotify *_cardData;
		struct MoleMole_ShopData *homeworldShopDataCache;
	};

	struct MoleMole_ShopModule
	{
		struct MoleMole_ShopModule__Class *klass;
		MonitorData *monitor;
		struct MoleMole_ShopModule__Fields fields;
	};

    struct __declspec(align(8)) Google_Protobuf_ByteString__Fields
    {
        bool _isReadOnly;
        struct Byte__Array* bytes;
    };

    struct Google_Protobuf_ByteString
    {
        struct Google_Protobuf_ByteString__Class* klass;
        MonitorData* monitor;
        struct Google_Protobuf_ByteString__Fields fields;
    };

    struct Proto_PlayerLoginReq__Fields
    {
        struct Google_Protobuf_MessageBase__Fields _;
        uint32_t channelId_;
        struct String* CKEODHDMPHJ;
        struct Google_Protobuf_ByteString* extraBinData_;
        struct String* deviceInfo_;
        uint32_t languageType_;
        struct String* psnId_;
        uint64_t loginRand_;
        struct String* deviceUuid_;
        uint32_t gmUid_;
        uint32_t platformType_;
        struct Google_Protobuf_ByteString* securityCmdReply_;
        uint32_t targetUid_;
        struct String* clientVersion_;
        struct String* token_;
        uint32_t subChannelId_;
        struct String* birthday_;
        struct Proto_AdjustTrackingInfo* adjustTrackingInfo_;
        struct String* MKGNPKJHIGM;
        uint32_t regPlatform_;
        bool isEditor_;
        struct String* LNFEIKEPIKC;
        struct String* clientVerisonHash_;
        uint32_t OICIOIHLBBL;
        uint32_t BLNCNAHNBHI;
        struct String* OBAKDAPJMLC;
        struct String* countryCode_;
        uint32_t NHDDEPFOMFJ;
        bool isTransfer_;
        uint32_t tag_;
        struct String* accountUid_;
        bool isGuest_;
        struct String* platform_;
        struct Google_Protobuf_ByteString* environmentErrorCode_;
        uint32_t targetHomeOwnerUid_;
        uint32_t EIKJGAGPAOH;
        struct String* checksum_;
        struct Proto_TrackingIOInfo* trackingIoInfo_;
        struct String* onlineId_;
        struct String* checksumClientVersion_;
        uint32_t clientDataVersion_;
        struct String* systemVersion_;
        uint32_t accountType_;
        struct String* deviceName_;
    };

    struct Proto_PlayerLoginReq
    {
        struct Proto_PlayerLoginReq__Class* klass;
        MonitorData* monitor;
        struct Proto_PlayerLoginReq__Fields fields;
    };

    enum class RealNameOperation__Enum : int32_t
    {
        None = 0x00000000,
        BindRealname = 0x00000001,
        ModifyRealname = 0x00000002,
        BindRealperson = 0x00000003,
        VerifyRealperson = 0x00000004,
    };

    struct __declspec(align(8)) MoleMole_DataItemManager__Fields
    {
        struct Dictionary_2_System_UInt32_MoleMole_DataItem_ *_entityIdDataMap;
        struct Dictionary_2_System_UInt64_MoleMole_UniqueDataItem_ *_guidDataMap;
        struct Dictionary_2_System_UInt32_Dictionary_2_System_Int32_Dictionary_2_System_UInt32_MoleMole_DataItem_ *_groupDataMap;
    };
    
    struct MoleMole_DataItemManager {
        struct MoleMole_DataItemManager__Class *klass;
        MonitorData *monitor;
        struct MoleMole_DataItemManager__Fields fields;
    };

    enum class Proto_AvatarType__Enum : int32_t
    {
        None = 0x00000000,
        Formal = 0x00000001,
        Trial = 0x00000002,
        Mirror = 0x00000003,
    };
    
    enum class Config_LifeState__Enum : int32_t {
        LIFE_NONE = 0x00000000,
        LIFE_ALIVE = 0x00000001,
        LIFE_DEAD = 0x00000002,
        LIFE_REVIVE = 0x00000003,
    };

    struct DualClientSequenceId
    {
		uint32_t clientSequenceId;
		uint32_t subSequenceId;
	};
    
    struct UniqueDataItem__Fields {
        struct DataItem__Fields _;
        uint64_t _guid_k__BackingField;
    };
    
    struct UniqueDataItem {
        struct UniqueDataItem__Class *klass;
        MonitorData *monitor;
        struct UniqueDataItem__Fields fields;
    };
	
	struct AvatarDataItem__Fields {
        struct UniqueDataItem__Fields _;
        uint32_t uid;
        struct SafeUInt32 configId;
        struct SafeUInt32 skillDepotId;
        bool hideTrialIcon;
        uint32_t trialId;
        bool isUpgradeable;
        bool isAuthority;
        uint32_t moveReliableSeq;
        struct DualClientSequenceId clientSequenceId;
        bool isFocus;
        Proto_AvatarType__Enum avatarType;
        Proto_AvatarType__Enum BEKEIACCGDE;
        uint32_t flycloakId;
        uint32_t costumeID;
        struct HashSet_1_System_UInt32_ *pendingPromoteRewardList;
        uint32_t sceneId;
        bool isAppearred;
        bool preAppeared;
        bool isClientFakeData;
        uint32_t bornTime;
        bool entityReadyPost;
        uint32_t vehicleEntityID;
        uint32_t vehicleSeatPos;
        uint32_t MFKNMLCMLLP;
        uint32_t CFMJNFBFIFA;
        struct Nullable_1_Vector3_ IDJJEFIKILO;
        struct Nullable_1_Vector3_ LHGMCLIHHLP;
        int32_t animHash;
        struct HashSet_1_MoleMole_Config_AnimeGroupType_ *overrideAnimGroups;
        struct Dictionary_2_MoleMole_SafeUInt32_MoleMole_AvatarDataItem_MoleMole_AvatarDataItem_SafeAvatarSkillCDInfo_ *_cacheSkillCDValueDic;
        Config_LifeState__Enum _state;
        uint32_t _entityId;
        uint64_t _curEquipGuid;
        struct List_1_System_UInt64_ *equipGuidList;
        struct SortedDictionary_2_MoleMole_SafeUInt32_MoleMole_Config_AvatarTalentExcelConfig_ *avatarTalentDic;
        struct MoleMole_Config_ProudSkillList *proudCombatSkillList;
        struct MoleMole_Config_ProudSkillList *proudInheritSkillList;
        struct MoleMole_Config_ProudSkillExcelConfig *_proudCoreSkill;
        struct List_1_MoleMole_Config_BaseTalentConfig_ *teamResonanceTalentList;
        struct List_1_MoleMole_Config_BaseTalentConfig_ *weaponTalentList;
        struct List_1_MoleMole_Config_BaseTalentConfig_ *reliquaryTalentList;
        struct Dictionary_2_MoleMole_SafeUInt32_MoleMole_SafeUInt32_ *_proudSkillLevelMap;
        struct Dictionary_2_MoleMole_SafeUInt32_MoleMole_SafeUInt32_ *_proudSkillExtraLevelMap;
        struct Proto_AvatarExpeditionInfo *expeditionInfo;
        struct Proto_AvatarFetterInfo *_avatarFetterInfo;
        struct List_1_System_ValueTuple_3_ *newAvatarAllAbilities;
        struct MoveSyncTask initSyncTask;
        bool hasNewInitSyncTask;
        struct Dictionary_2_MoleMole_SafeUInt32_MoleMole_SafeUInt32_ *_equipAffixCDs;
        float _satiationZeroTimestamp;
        struct Proto_AbilitySyncStateInfo *_abilitySyncInfo;
        struct Dictionary_2_System_UInt32_MoleMole_AvatarDataItem_MoleMole_AvatarDataItem_ServerBuffInfo_ *_sBuffDict;
        uint32_t _fetterDataInfoId;
        uint64_t prefabPathHash;
        uint64_t prefabPathRemoteHash;
        uint64_t controllerPathHash;
        uint64_t controllerPathRemoteHash;
        uint64_t combatConfigHash;
    };
    
    struct AvatarDataItem {
        struct AvatarDataItem__Class *klass;
        MonitorData *monitor;
        struct AvatarDataItem__Fields fields;
    };

    enum class FightPropType__Enum : int32_t
    {
	    NONE = 0x00000000,
	    BASE_HP = 0x00000001,
	    HP = 0x00000002,
	    HP_PERCENT = 0x00000003,
	    BASE_ATTACK = 0x00000004,
	    ATTACK = 0x00000005,
	    ATTACK_PERCENT = 0x00000006,
	    BASE_DEFENSE = 0x00000007,
	    DEFENSE = 0x00000008,
	    DEFENSE_PERCENT = 0x00000009,
	    BASE_SPEED = 0x0000000a,
	    SPEED_PERCENT = 0x0000000b,
	    HP_MP_PERCENT = 0x0000000c,
	    ATTACK_MP_PERCENT = 0x0000000d,
	    CRITICAL = 0x00000014,
	    ANTI_CRITICAL = 0x00000015,
	    CRITICAL_HURT = 0x00000016,
	    CHARGE_EFFICIENCY = 0x00000017,
	    ADD_HURT = 0x00000018,
	    SUB_HURT = 0x00000019,
	    HEAL_ADD = 0x0000001a,
	    HEALED_ADD = 0x0000001b,
	    ELEMENT_MASTERY = 0x0000001c,
	    PHYSICAL_SUB_HURT = 0x0000001d,
	    PHYSICAL_ADD_HURT = 0x0000001e,
	    DEFENCE_IGNORE_RATIO = 0x0000001f,
	    DEFENCE_IGNORE_DELTA = 0x00000020,
	    FIRE_ADD_HURT = 0x00000028,
	    ELEC_ADD_HURT = 0x00000029,
	    WATER_ADD_HURT = 0x0000002a,
	    GRASS_ADD_HURT = 0x0000002b,
	    WIND_ADD_HURT = 0x0000002c,
	    ROCK_ADD_HURT = 0x0000002d,
	    ICE_ADD_HURT = 0x0000002e,
	    HIT_HEAD_ADD_HURT = 0x0000002f,
	    FIRE_SUB_HURT = 0x00000032,
	    ELEC_SUB_HURT = 0x00000033,
	    WATER_SUB_HURT = 0x00000034,
	    GRASS_SUB_HURT = 0x00000035,
	    WIND_SUB_HURT = 0x00000036,
	    ROCK_SUB_HURT = 0x00000037,
	    ICE_SUB_HURT = 0x00000038,
	    EFFECT_HIT = 0x0000003c,
	    EFFECT_RESIST = 0x0000003d,
	    FREEZE_RESIST = 0x0000003e,
	    DIZZY_RESIST = 0x00000040,
	    FREEZE_SHORTEN = 0x00000041,
	    DIZZY_SHORTEN = 0x00000043,
	    MAX_FIRE_ENERGY = 0x00000046,
	    MAX_ELEC_ENERGY = 0x00000047,
	    MAX_WATER_ENERGY = 0x00000048,
	    MAX_GRASS_ENERGY = 0x00000049,
	    MAX_WIND_ENERGY = 0x0000004a,
	    MAX_ICE_ENERGY = 0x0000004b,
	    MAX_ROCK_ENERGY = 0x0000004c,
	    SKILL_CD_MINUS_RATIO = 0x00000050,
	    SHIELD_COST_MINUS_RATIO = 0x00000051,
	    CUR_FIRE_ENERGY = 0x000003e8,
	    CUR_ELEC_ENERGY = 0x000003e9,
	    CUR_WATER_ENERGY = 0x000003ea,
	    CUR_GRASS_ENERGY = 0x000003eb,
	    CUR_WIND_ENERGY = 0x000003ec,
	    CUR_ICE_ENERGY = 0x000003ed,
	    CUR_ROCK_ENERGY = 0x000003ee,
	    CUR_HP = 0x000003f2,
	    MAX_HP = 0x000007d0,
	    CUR_ATTACK = 0x000007d1,
	    CUR_DEFENSE = 0x000007d2,
	    CUR_SPEED = 0x000007d3,
	    NONEXTRA_ATTACK = 0x00000bb8,
	    NONEXTRA_DEFENSE = 0x00000bb9,
	    NONEXTRA_CRITICAL = 0x00000bba,
	    NONEXTRA_ANTI_CRITICAL = 0x00000bbb,
	    NONEXTRA_CRITICAL_HURT = 0x00000bbc,
	    NONEXTRA_CHARGE_EFFICIENCY = 0x00000bbd,
	    NONEXTRA_ELEMENT_MASTERY = 0x00000bbe,
	    NONEXTRA_PHYSICAL_SUB_HURT = 0x00000bbf,
	    NONEXTRA_FIRE_ADD_HURT = 0x00000bc0,
	    NONEXTRA_ELEC_ADD_HURT = 0x00000bc1,
	    NONEXTRA_WATER_ADD_HURT = 0x00000bc2,
	    NONEXTRA_GRASS_ADD_HURT = 0x00000bc3,
	    NONEXTRA_WIND_ADD_HURT = 0x00000bc4,
	    NONEXTRA_ROCK_ADD_HURT = 0x00000bc5,
	    NONEXTRA_ICE_ADD_HURT = 0x00000bc6,
	    NONEXTRA_FIRE_SUB_HURT = 0x00000bc7,
	    NONEXTRA_ELEC_SUB_HURT = 0x00000bc8,
	    NONEXTRA_WATER_SUB_HURT = 0x00000bc9,
	    NONEXTRA_GRASS_SUB_HURT = 0x00000bca,
	    NONEXTRA_WIND_SUB_HURT = 0x00000bcb,
	    NONEXTRA_ROCK_SUB_HURT = 0x00000bcc,
	    NONEXTRA_ICE_SUB_HURT = 0x00000bcd,
	    NONEXTRA_SKILL_CD_MINUS_RATIO = 0x00000bce,
	    NONEXTRA_SHIELD_COST_MINUS_RATIO = 0x00000bcf,
	    NONEXTRA_PHYSICAL_ADD_HURT = 0x00000bd0,
		ELEM_REACT_CRITICAL = 0x00000bd1,
		ELEM_REACT_CRITICAL_HURT = 0x00000bd2,
		ELEM_REACT_EXPLODE_CRITICAL = 0x00000bd3,
		ELEM_REACT_EXPLODE_CRITICAL_HURT = 0x00000bd4,
		ELEM_REACT_SWIRL_CRITICAL = 0x00000bd5,
		ELEM_REACT_SWIRL_CRITICAL_HURT = 0x00000bd6,
		ELEM_REACT_ELECTRIC_CRITICAL = 0x00000bd7,
		ELEM_REACT_ELECTRIC_CRITICAL_HURT = 0x00000bd8,
		ELEM_REACT_SCONDUCT_CRITICAL = 0x00000bd9,
		ELEM_REACT_SCONDUCT_CRITICAL_HURT = 0x00000bda,
		ELEM_REACT_BURN_CRITICAL = 0x00000bdb,
		ELEM_REACT_BURN_CRITICAL_HURT = 0x00000bdc,
		ELEM_REACT_FROZENBROKEN_CRITICAL = 0x00000bdd,
		ELEM_REACT_FROZENBROKEN_CRITICAL_HURT = 0x00000bde,
		ELEM_REACT_OVERGROW_CRITICAL = 0x00000bdf,
		ELEM_REACT_OVERGROW_CRITICAL_HURT = 0x00000be0,
		ELEM_REACT_OVERGROW_FIRE_CRITICAL = 0x00000be1,
		ELEM_REACT_OVERGROW_FIRE_CRITICAL_HURT = 0x00000be2,
		ELEM_REACT_OVERGROW_ELECTRIC_CRITICAL = 0x00000be3,
		ELEM_REACT_OVERGROW_ELECTRIC_CRITICAL_HURT = 0x00000be4,
		BASE_ELEM_REACT_CRITICAL = 0x00000be5,
		BASE_ELEM_REACT_CRITICAL_HURT = 0x00000be6
	};

    struct Proto_AbilityEmbryo__Fields
    {
		struct Google_Protobuf_MessageBase__Fields _;
		uint32_t abilityId_;
		uint32_t abilityNameHash_;
		uint32_t abilityOverrideNameHash_;
	};

    struct Proto_AbilityEmbryo
    {
		struct Proto_AbilityEmbryo__Class *klass;
		MonitorData *monitor;
		struct Proto_AbilityEmbryo__Fields fields;
	};

    struct Proto_AbilityEmbryo__Array
    {
		struct Proto_AbilityEmbryo__Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct Proto_AbilityEmbryo *vector[32];
	};

    struct __declspec(align(8)) List_1_Proto_AbilityEmbryo___Fields
    {
		struct Proto_AbilityEmbryo__Array *_items;
		int32_t _size;
		int32_t _version;
		struct Object *_syncRoot;
	};

    struct List_1_Proto_AbilityEmbryo_
    {
		struct List_1_Proto_AbilityEmbryo___Class *klass;
		MonitorData *monitor;
		struct List_1_Proto_AbilityEmbryo___Fields fields;
	};

    struct __declspec(align(8)) Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityEmbryo___Fields
    {
		struct List_1_Proto_AbilityEmbryo_ *values;
		bool _isInPool;
		int32_t _count;
	};

    struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityEmbryo_
    {
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityEmbryo___Class *klass;
		MonitorData *monitor;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityEmbryo___Fields fields;
	};

    struct Proto_AbilityControlBlock__Fields
    {
		struct Google_Protobuf_MessageBase__Fields _;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AbilityEmbryo_ *abilityEmbryoList_;
	};

    struct Proto_AbilityControlBlock
    {
		struct Proto_AbilityControlBlock__Class *klass;
		MonitorData *monitor;
		struct Proto_AbilityControlBlock__Fields fields;
	};

    struct Proto_SceneTeamAvatar__Fields
    {
		struct Google_Protobuf_MessageBase__Fields _;
		uint32_t weaponEntityId_;
		uint32_t playerUid_;
		bool isReconnect_;
		uint64_t weaponGuid_;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_ServerBuff_ *serverBuffList_;
		bool isPlayerCurAvatar_;
		uint32_t entityId_;
		struct Proto_AbilitySyncStateInfo *weaponAbilityInfo_;
		struct Proto_AbilityControlBlock *abilityControlBlock_;
		struct Proto_AvatarInfo *avatarInfo_;
		struct Proto_AbilitySyncStateInfo *avatarAbilityInfo_;
		bool isOnScene_;
		struct Proto_SceneAvatarInfo *sceneAvatarInfo_;
		struct Proto_SceneEntityInfo *sceneEntityInfo_;
		uint32_t sceneId_;
		uint64_t avatarGuid_;
	};

    struct Proto_SceneTeamAvatar
    {
		struct Proto_SceneTeamAvatar__Class *klass;
		MonitorData *monitor;
		struct Proto_SceneTeamAvatar__Fields fields;
		};

    struct Proto_SceneTeamAvatar__Array
    {
		struct Proto_SceneTeamAvatar__Array__Class *klass;
		MonitorData *monitor;
		Il2CppArrayBounds *bounds;
		il2cpp_array_size_t max_length;
		struct Proto_SceneTeamAvatar *vector[32];
	};

    struct __declspec(align(8)) List_1_Proto_SceneTeamAvatar___Fields
    {
		struct Proto_SceneTeamAvatar__Array *_items;
		int32_t _size;
		int32_t _version;
		struct Object *_syncRoot;
	};

    struct List_1_Proto_SceneTeamAvatar_
    {
		struct List_1_Proto_SceneTeamAvatar___Class *klass;
		MonitorData *monitor;
		struct List_1_Proto_SceneTeamAvatar___Fields fields;
	};

    struct __declspec(align(8)) Google_Protobuf_Collections_RepeatedMessageField_1_Proto_SceneTeamAvatar___Fields
    {
		struct List_1_Proto_SceneTeamAvatar_ *values;
		bool _isInPool;
		int32_t _count;
	};

    struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_SceneTeamAvatar_
    {
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_SceneTeamAvatar___Class *klass;
		MonitorData *monitor;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_SceneTeamAvatar___Fields fields;
	};

    struct MoleMole_LCScenePoint__Fields
    {
		struct LCBase__Fields _;
		bool useLocalEntity;
		uint32_t _sceneID;
		uint32_t _pointID;
		void* _config;
		bool _unlocked;
		uint32_t _level;
		float _openTime;
		float _closeTime;
		bool _isGroupLimit;
		float _lastVehicleSummonInteractTime;
	};

	struct MoleMole_LCScenePoint {
		void* klass;
		void* monitor;
		struct MoleMole_LCScenePoint__Fields fields;
	};

    struct Proto_SceneTeamUpdateNotify__Fields
    {
		struct Google_Protobuf_MessageBase__Fields _;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_SceneTeamAvatar_ *sceneTeamAvatarList_;
		bool isInMp_;
	};

    struct Proto_SceneTeamUpdateNotify
    {
		struct Proto_SceneTeamUpdateNotify__Class *klass;
		MonitorData *monitor;
		struct Proto_SceneTeamUpdateNotify__Fields fields;
	};

    enum class Proto_AvatarExpeditionState__Enum : int32_t
    {
        AvatarExpeditionNone = 0x00000000,
        AvatarExpeditionDoing = 0x00000001,
        AvatarExpeditionFinishWaitReward = 0x00000002,
        AvatarExpeditionCallbackWaitReward = 0x00000003,
        AvatarExpeditionLocked = 0x00000004,
    };

	struct Proto_AvatarInfo__Fields
	{
		struct Google_Protobuf_MessageBase__Fields _;
		uint32_t avatarId_;
		uint64_t guid_;
		struct Google_Protobuf_Collections_MessageMapField_2_System_UInt32_Proto_PropValue_* propMap_;
		uint32_t lifeState_;
		struct Google_Protobuf_Collections_RepeatedPrimitiveField_1_System_UInt64_* equipGuidList_;
		struct Google_Protobuf_Collections_RepeatedPrimitiveField_1_System_UInt32_* talentIdList_;
		struct Google_Protobuf_Collections_MapField_2_System_UInt32_System_Single_* fightPropMap_;
		struct Proto_TrialAvatarInfo* trialAvatarInfo_;
		struct Google_Protobuf_Collections_MessageMapField_2_System_UInt32_Proto_AvatarSkillInfo_* skillMap_;
		uint32_t skillDepotId_;
		struct Proto_AvatarFetterInfo* fetterInfo_;
		uint32_t coreProudSkillLevel_;
		struct Google_Protobuf_Collections_RepeatedPrimitiveField_1_System_UInt32_* inherentProudSkillList_;
		struct Google_Protobuf_Collections_MapField_2_System_UInt32_System_UInt32_* skillLevelMap_;
		Proto_AvatarExpeditionState__Enum expeditionState_;
		struct Google_Protobuf_Collections_MapField_2_System_UInt32_System_UInt32_* proudSkillExtraLevelMap_;
		bool isFocus_;
		uint32_t avatarType_;
		struct Google_Protobuf_Collections_RepeatedPrimitiveField_1_System_UInt32_* teamResonanceList_;
		uint32_t wearingFlycloakId_;
		struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AvatarEquipAffixInfo_* equipAffixList_;
		uint32_t bornTime_;
		struct Google_Protobuf_Collections_RepeatedPrimitiveField_1_System_UInt32_* pendingPromoteRewardList_;
		uint32_t costumeId_;
		struct Proto_AvatarExcelInfo* excelInfo_;
		uint32_t animHash_;
		struct GKIJDMOCNDH* NLANIHBINMC;
	};

    struct Proto_AvatarInfo
    {
        struct Proto_AvatarInfo__Class* klass;
        MonitorData* monitor;
        struct Proto_AvatarInfo__Fields fields;
    };

    struct Proto_AvatarInfo__Array
    {
        struct Proto_AvatarInfo__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Proto_AvatarInfo* vector[64];
    };

    struct __declspec(align(8)) List_1_Proto_AvatarInfo___Fields
    {
        struct Proto_AvatarInfo__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Proto_AvatarInfo_
    {
        struct List_1_Proto_AvatarInfo___Class* klass;
        MonitorData* monitor;
        struct List_1_Proto_AvatarInfo___Fields fields;
    };

    struct __declspec(align(8)) Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AvatarInfo___Fields
    {
        struct List_1_Proto_AvatarInfo_* values;
        bool _isInPool;
        int32_t _count;
    };

    struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AvatarInfo_
    {
        struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AvatarInfo___Class* klass;
        MonitorData* monitor;
        struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AvatarInfo___Fields fields;
    };

    struct Proto_AvatarDataNotify__Fields
    {
        struct Google_Protobuf_MessageBase__Fields _;
        struct LGGGCDCAKLP_PONFDKGBPMB_* avatar_rename_list;
        struct Google_Protobuf_Collections_RepeatedMessageField_1_Proto_AvatarInfo_* avatarList_;
        struct Google_Protobuf_Collections_RepeatedPrimitiveField_1_System_UInt64_* tempAvatarGuidList_;
        uint32_t curAvatarTeamId_;
        struct Google_Protobuf_Collections_MessageMapField_2_System_UInt32_Proto_AvatarTeam_* avatarTeamMap_;
        struct Google_Protobuf_Collections_RepeatedPrimitiveField_1_System_UInt32_* ownedCostumeList_;
        uint64_t chooseAvatarGuid_;
        struct Google_Protobuf_Collections_RepeatedPrimitiveField_1_System_UInt32_* backupAvatarTeamOrderList_;
        struct Google_Protobuf_Collections_RepeatedPrimitiveField_1_System_UInt32_* ownedFlycloakList_;
    };

    struct Proto_AvatarDataNotify
    {
        struct Proto_AvatarDataNotify__Class* klass;
        MonitorData* monitor;
        struct Proto_AvatarDataNotify__Fields fields;
    };

    enum class NodeColor__Enum : uint8_t
    {
        Black = 0x00,
        Red = 0x01,
    };

    struct __declspec(align(8)) MoleMole_Config_BaseTalentConfig__Fields
    {
        struct String* _openConfig;
        struct MoleMole_Config_PropValConfig__Array* _addProps;
        struct MoleMole_SimpleSafeFloat__Array* _paramList;
    };

    struct MoleMole_Config_AvatarTalentExcelConfig__Fields
    {
        struct MoleMole_Config_BaseTalentConfig__Fields _;
        struct SimpleSafeUInt32 talentIdRawNum;
        uint32_t _nameTextMapHash;
        uint32_t _descTextMapHash;
        struct String* _icon;
        struct SimpleSafeUInt32 prevTalentRawNum;
        struct SimpleSafeUInt32 mainCostItemIdRawNum;
        struct SimpleSafeUInt32 mainCostItemCountRawNum;
        struct SimpleSafeUInt32 viceCostItemIdRawNum;
        struct SimpleSafeUInt32 viceCostItemCountRawNum;
    };

    struct MoleMole_Config_AvatarTalentExcelConfig
    {
        struct MoleMole_Config_AvatarTalentExcelConfig__Class* klass;
        MonitorData* monitor;
        struct MoleMole_Config_AvatarTalentExcelConfig__Fields fields;
    };

    struct KeyValuePair_2_MoleMole_SafeUInt32_MoleMole_Config_AvatarTalentExcelConfig_
    {
        struct SafeUInt32 key;
        struct MoleMole_Config_AvatarTalentExcelConfig* value;
    };

    struct __declspec(align(8)) SortedSet_1_T_Node_KeyValuePair_2_MoleMole_SafeUInt32_MoleMole_Config_AvatarTalentExcelConfig___Fields
    {
        struct KeyValuePair_2_MoleMole_SafeUInt32_MoleMole_Config_AvatarTalentExcelConfig_ _Item_k__BackingField;
        struct SortedSet_1_T_Node_KeyValuePair_2_MoleMole_SafeUInt32_MoleMole_Config_AvatarTalentExcelConfig_* _Left_k__BackingField;
        struct SortedSet_1_T_Node_KeyValuePair_2_MoleMole_SafeUInt32_MoleMole_Config_AvatarTalentExcelConfig_* _Right_k__BackingField;
        NodeColor__Enum _Color_k__BackingField;
    };

    struct SortedSet_1_T_Node_KeyValuePair_2_MoleMole_SafeUInt32_MoleMole_Config_AvatarTalentExcelConfig_
    {
        struct SortedSet_1_T_Node_KeyValuePair_2_MoleMole_SafeUInt32_MoleMole_Config_AvatarTalentExcelConfig___Class* klass;
        MonitorData* monitor;
        struct SortedSet_1_T_Node_KeyValuePair_2_MoleMole_SafeUInt32_MoleMole_Config_AvatarTalentExcelConfig___Fields fields;
    };

    struct __declspec(align(8)) SortedSet_1_KeyValuePair_2_MoleMole_SafeUInt32_MoleMole_Config_AvatarTalentExcelConfig___Fields
    {
        struct SortedSet_1_T_Node_KeyValuePair_2_MoleMole_SafeUInt32_MoleMole_Config_AvatarTalentExcelConfig_* root;
        struct IComparer_1_KeyValuePair_2_MoleMole_SafeUInt32_MoleMole_Config_AvatarTalentExcelConfig_* comparer;
        int32_t count;
        int32_t version;
        struct Object* _syncRoot;
        struct SerializationInfo* siInfo;
    };

    struct TreeSet_1_KeyValuePair_2_MoleMole_SafeUInt32_MoleMole_Config_AvatarTalentExcelConfig___Fields
    {
        struct SortedSet_1_KeyValuePair_2_MoleMole_SafeUInt32_MoleMole_Config_AvatarTalentExcelConfig___Fields _;
    };

    struct TreeSet_1_KeyValuePair_2_MoleMole_SafeUInt32_MoleMole_Config_AvatarTalentExcelConfig_
    {
        struct TreeSet_1_KeyValuePair_2_MoleMole_SafeUInt32_MoleMole_Config_AvatarTalentExcelConfig___Class* klass;
        MonitorData* monitor;
        struct TreeSet_1_KeyValuePair_2_MoleMole_SafeUInt32_MoleMole_Config_AvatarTalentExcelConfig___Fields fields;
    };

    struct __declspec(align(8)) SortedDictionary_2_MoleMole_SafeUInt32_MoleMole_Config_AvatarTalentExcelConfig___Fields
    {
        struct SortedDictionary_2_TKey_TValue_KeyCollection_MoleMole_SafeUInt32_MoleMole_Config_AvatarTalentExcelConfig_* _keys;
        struct SortedDictionary_2_TKey_TValue_ValueCollection_MoleMole_SafeUInt32_MoleMole_Config_AvatarTalentExcelConfig_* _values;
        struct TreeSet_1_KeyValuePair_2_MoleMole_SafeUInt32_MoleMole_Config_AvatarTalentExcelConfig_* _set;
    };

    struct SortedDictionary_2_MoleMole_SafeUInt32_MoleMole_Config_AvatarTalentExcelConfig_
    {
        struct SortedDictionary_2_MoleMole_SafeUInt32_MoleMole_Config_AvatarTalentExcelConfig___Class* klass;
        MonitorData* monitor;
        struct SortedDictionary_2_MoleMole_SafeUInt32_MoleMole_Config_AvatarTalentExcelConfig___Fields fields;
    };

    struct __declspec(align(8)) MoleMole_OverrideMap__Fields
    {
        struct Dictionary_2_MoleMole_EncryptedString_MoleMole_SafeFloat_* _floats_k__BackingField;
        struct Dictionary_2_MoleMole_EncryptedString_System_String_* _strings_k__BackingField;
    };

    struct MoleMole_OverrideMap
    {
        struct MoleMole_OverrideMap__Class* klass;
        MonitorData* monitor;
        struct MoleMole_OverrideMap__Fields fields;
    };

    struct MoleMole_ActorAbility__Fields
    {
        struct MoleMole_BaseActorActionContext__Fields _;
        struct MoleMole_LCAbility* _caster_k__BackingField;
        uint32_t casterRuntimeID;
        uint32_t originCasterRuntimeID;
        struct MoleMole_Config_ConfigAbility* _config;
        struct MoleMole_OverrideMap* _overrideMap;
        struct List_1_MoleMole_ActorModifier_* ownedModifiers;
        bool _isValid_k__BackingField;
        bool _isLevelElementAbility_k__BackingField;
        struct String* overrideName;
        uint32_t _instancedAbilityID;
        int32_t referenceCount;
        bool _checkLowMemoryDismisssDynamicPreload;
    };

    struct MoleMole_ActorAbility
    {
        struct MoleMole_ActorAbility__Class* klass;
        MonitorData* monitor;
        struct MoleMole_ActorAbility__Fields fields;
    };

    struct __declspec(align(8)) MoleMole_Config_ConfigGadgetTriggerAbility__Fields
    {
        struct String* _abilityName;
    };

    struct MoleMole_Config_ConfigGadgetTriggerAbility
    {
        struct MoleMole_Config_ConfigGadgetTriggerAbility__Class* klass;
        MonitorData* monitor;
        struct MoleMole_Config_ConfigGadgetTriggerAbility__Fields fields;
    };

    struct MoleMole_LCGadgetCombat__Fields
    {
        struct LCBaseCombat__Fields _;
        struct MoleMole_Config_ConfigGadgetPattern* _configPattern_k__BackingField;
        struct MoleMole_LCTimer* _lcTimer;
    };

    struct MoleMole_LCGadgetCombat
    {
        struct MoleMole_LCGadgetCombat__Class* klass;
        MonitorData* monitor;
        struct MoleMole_LCGadgetCombat__Fields fields;
    };

    struct Proto_EntityForceSyncReq__Fields
    {
        struct Google_Protobuf_MessageBase__Fields _;
        uint32_t roomId_;
        uint32_t entityId_;
        uint32_t sceneTime_;
        struct MotionInfo *motionInfo_;
    };

    struct Proto_EntityForceSyncReq
    {
        struct Proto_EntityForceSyncReq__Class* klass;
        MonitorData* monitor;
        struct Proto_EntityForceSyncReq__Fields fields;
    };

    enum class MoleMole_Config_ProudLifeEffectType__Enum : int32_t
    {
        PROUD_EFFECT_NONE = 0x00000000,
        PROUD_EFFECT_COMBINE_RETURN_MATERIAL = 0x00000001,
        PROUD_EFFECT_COMBINE_MULTIPLY_OUTPUT = 0x00000002,
        PROUD_EFFECT_COMBINE_EXTRA_OUTPUT = 0x00000003,
        PROUD_EFFECT_COMBINE_ADD_EXTRA_PROB = 0x00000004,
        PROUD_EFFECT_COMBINE_RETURN_SPECIAL_MATERIAL = 0x00000005,
        PROUD_EFFECT_COOK_EXTRA_PROFICIENCY = 0x00000065,
        PROUD_EFFECT_COOK_WIDEN_JUDGE_AREA = 0x00000066,
        PROUD_EFFECT_COOK_ADD_BONUS_PROB = 0x00000067,
        PROUD_EFFECT_COOK_PERFECT_MULTI_OUTPUT = 0x00000068,
        PROUD_EFFECT_COOK_PROB_MULTI_OUTPUT = 0x00000069,
        PROUD_EFFECT_COOK_CAN_NOT_COOK = 0x0000006a,
        PROUD_EFFECT_FORGE_REDUCE_TIME = 0x000000cb,
        PROUD_EFFECT_FORGE_ADD_EXTRA_PROB = 0x000000cc,
        PROUD_EFFECT_FORGE_RETURN_MATERIAL = 0x000000cd,
        PROUD_EFFECT_EXPEDITION_SHORTEN_TIME = 0x0000012d,
        PROUD_EFFECT_EXPEDITION_EXTRA_OUTPUT = 0x0000012e,
        PROUD_EFFECT_FURNITURE_MAKE_RETURN_MATERIAL = 0x00000191,
        PROUD_EFFECT_WEAPON_PROMOTE_REDUCE_SCOIN = 0x000001f5,
        PROUD_EFFECT_FISHING_EXTRA_OUTPUT = 0x00000259,
        PROUD_EFFECT_HIT_TREE_EXTRA_OUTPUT = 0x000002bd,
    };

    enum class MoleMole_Config_TalentFilterCond__Enum : int32_t
    {
        TALENT_FILTER_NONE = 0x00000000,
        TALENT_FILTER_FIRE_AVATAR = 0x00000001,
        TALENT_FILTER_ELEC_AVATAR = 0x00000002,
        TALENT_FILTER_WATER_AVATAR = 0x00000003,
        TALENT_FILTER_GRASS_AVATAR = 0x00000004,
        TALENT_FILTER_WIND_AVATAR = 0x00000005,
        TALENT_FILTER_ICE_AVATAR = 0x00000006,
        TALENT_FILTER_ROCK_AVATAR = 0x00000007,
    };

    struct MoleMole_Config_TalentFilterCond__Enum__Array
    {
        struct MoleMole_Config_TalentFilterCond__Enum__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        MoleMole_Config_TalentFilterCond__Enum vector[32];
    };

    struct MoleMole_Config_ProudSkillExcelConfig__Fields
    {
        struct MoleMole_Config_BaseTalentConfig__Fields _;
        struct SimpleSafeUInt32 proudSkillIdRawNum;
        struct SimpleSafeUInt32 proudSkillGroupIdRawNum;
        struct SimpleSafeUInt32 levelRawNum;
        struct SimpleSafeUInt32 proudSkillTypeRawNum;
        uint32_t _nameTextMapHash;
        uint32_t _descTextMapHash;
        uint32_t _unlockDescTextMapHash;
        struct String* _icon;
        struct SimpleSafeUInt32 coinCostRawNum;
        struct MoleMole_Config_IdCountConfig__Array* _costItems;
        struct MoleMole_Config_TalentFilterCond__Enum__Array* _filterConds;
        struct SimpleSafeUInt32 breakLevelRawNum;
        struct UInt32__Array* _paramDescList;
        MoleMole_Config_ProudLifeEffectType__Enum _lifeEffectType;
        struct String__Array* _lifeEffectParams;
        struct SimpleSafeUInt8 effectiveForTeamRawNum;
        bool _isHideLifeProudSkill;
    };

    struct MoleMole_Config_ProudSkillExcelConfig
    {
        struct MoleMole_Config_ProudSkillExcelConfig__Class* klass;
        MonitorData* monitor;
        struct MoleMole_Config_ProudSkillExcelConfig__Fields fields;
    };

    struct MoleMole_Config_ProudSkillExcelConfig__Array
    {
        struct MoleMole_Config_ProudSkillExcelConfig__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MoleMole_Config_ProudSkillExcelConfig* vector[32];
    };

    struct __declspec(align(8)) List_1_MoleMole_Config_ProudSkillExcelConfig___Fields
    {
        struct MoleMole_Config_ProudSkillExcelConfig__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct MoleMole_Config_ListWithReference_1_MoleMole_Config_ProudSkillExcelConfig___Fields
    {
        struct List_1_MoleMole_Config_ProudSkillExcelConfig___Fields _;
    };

    struct MoleMole_Config_ProudSkillList__Fields
    {
        struct MoleMole_Config_ListWithReference_1_MoleMole_Config_ProudSkillExcelConfig___Fields _;
    };

    struct ValueTuple_3_UInt32_String_String_
    {
        uint32_t Item1;
        struct String* Item2;
        struct String* Item3;
    };

    struct MoleMole_Config_ProudSkillList
    {
        struct MoleMole_Config_ProudSkillList__Class* klass;
        MonitorData* monitor;
        struct MoleMole_Config_ProudSkillList__Fields fields;
    };

    struct ValueTuple_3_UInt32_String_String___Array
    {
        struct ValueTuple_3_UInt32_String_String___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ValueTuple_3_UInt32_String_String_ vector[64];
    };

    struct __declspec(align(8)) List_1_System_ValueTuple_3___Fields
    {
        struct ValueTuple_3_UInt32_String_String___Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_System_ValueTuple_3_
    {
        struct List_1_System_ValueTuple_3___Class* klass;
        MonitorData* monitor;
        struct List_1_System_ValueTuple_3___Fields fields;
    };

    enum class MoleMole_RemoveAbilityReason__Enum : int32_t
    {
        Default = 0x00000000,
        EntityDestroy = 0x00000001,
        Reconnect = 0x00000002,
        EntityClear = 0x00000003,
        EntityMiss = 0x00000004,
        AttacherEntityDestroy = 0x00000005,
        AttacherEntityMiss = 0x00000006,
    };

    struct Dictionary_2_TKey_TValue_Entry_MoleMole_SafeUInt32_MoleMole_SafeUInt32_
    {
        int32_t hashCode;
        int32_t next;
        struct SafeUInt32 key;
        struct SafeUInt32 value;
    };

    struct Dictionary_2_TKey_TValue_Entry_MoleMole_SafeUInt32_MoleMole_SafeUInt32___Array
    {
        struct Dictionary_2_TKey_TValue_Entry_MoleMole_SafeUInt32_MoleMole_SafeUInt32___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_MoleMole_SafeUInt32_MoleMole_SafeUInt32_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_MoleMole_SafeUInt32_MoleMole_SafeUInt32___Fields
    {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_MoleMole_SafeUInt32_MoleMole_SafeUInt32___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_MoleMole_SafeUInt32_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_MoleMole_SafeUInt32_MoleMole_SafeUInt32_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_MoleMole_SafeUInt32_MoleMole_SafeUInt32_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_MoleMole_SafeUInt32_MoleMole_SafeUInt32_
    {
        struct Dictionary_2_MoleMole_SafeUInt32_MoleMole_SafeUInt32___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_MoleMole_SafeUInt32_MoleMole_SafeUInt32___Fields fields;
    };

    struct __declspec(align(8)) List_1_MoleMole_ActorAbility___Fields
    {
        struct MoleMole_ActorAbility__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_MoleMole_ActorAbility_
    {
        struct List_1_MoleMole_ActorAbility___Class* klass;
        MonitorData* monitor;
        struct List_1_MoleMole_ActorAbility___Fields fields;
    };

    struct MoleMole_ActorAbility__Array
    {
        struct MoleMole_ActorAbility__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MoleMole_ActorAbility* vector[32];
    };

	enum class GameModeType__Enum : int32_t
	{
		Unknown = 0,
		Town = 1,
		Maze = 2,
		Train = 3,
		Challenge = 4,
		RogueExplore = 5,
		RogueChallenge = 6,
		TownRoom = 7,
		Raid = 8,
		FarmRelic = 9,
		Client = 10,
		ChallengeActivity = 11,
		ActivityPunkLord = 12,
		RogueAeonRoom = 13,
		TrialActivity = 14,
	};

	struct CIBOFLBFAJJ
	{
		void* ptr;
	};

	enum class TeamType : int32_t
	{
		Unknown = 0
	};

	enum class EntityType : int32_t
	{
		Unknown = 0
	};

	struct GameEntity__Fields
	{
		bool _Tickable;
		bool IsLoaded;
		uint64_t LastTickFrame;
		float TickLodBoundSize;
		float MaxTickDistance;
		uint32_t ForceIgnoreTickLodBistSet; 
		bool ForceIgnoreTickLod;
		struct PBNEAIGAEMA *_TickLodProxy; 
		uint32_t _TickDelayFrameCount; 
		bool _ShouldLateUpdate; 
		struct DCDJIFJOJAN *_CurTickListRef; 
		struct String *Name;
		uint32_t RuntimeID;
		bool HasDisposed;
		bool Disposing;
		bool IsStoryMode;
		bool KillImmediately; 
		struct String* OnStageStateChange;
		TeamType OnTeamChange; 
		struct TimeScaleStack *TimeScaleStack; 
		EntityType EntityType; 
		bool IsHero;
		bool IsFakeAvatar;
		CIBOFLBFAJJ CampID;
		bool Visible; 
		GameWorld _OwnerWorldRef; 
		struct GameComponentList *_ComponentList;
		struct GameTickComponentList *_TickComponentList; 
		struct GameLateUpdateComponentList *_LateUpdateComponentList;
		struct GameComponentArray *_ComponentArrayRef; 
		struct OELCGBCMGPC* _ComponentArray[32]; 
		struct MGPOKMJAHDO* _AliveState; 
		bool _IsOnStage; 
		String* _UnstageReasonKey; 
		TeamType _Team; 
		GameObject _UnityGO; 
		struct ComponentDelayedTickDataList* _ComponentDelayedTickDataList; 
		struct ComponentDelayedTickDataList* _ComponentDelayedLateUpdateDataList; 
	};

	struct GameEntity
	{
		struct GameEntity___Class* klass;
		MonitorData* monitor;
		struct GameEntity__Fields fields;
	};

#if !defined(_GHIDRA_) && !defined(_IDA_)
}
#endif

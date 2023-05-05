#include <pch-il2cpp.h>

enum THREADINFOCLASS { ThreadHideFromDebugger = 0x11 };

typedef NTSTATUS(WINAPI* NtQueryInformationThread_t)(HANDLE, THREADINFOCLASS, PVOID, ULONG, LPVOID);
typedef NTSTATUS(WINAPI* NtSetInformationThread_t)(HANDLE, THREADINFOCLASS, PVOID, ULONG);
typedef void(WINAPI* DbgUiRemoteBreakin_t)();

NtQueryInformationThread_t fnNtQueryInformationThread = nullptr;
NtSetInformationThread_t fnNtSetInformationThread = nullptr;
DbgUiRemoteBreakin_t fnDbgUiRemoteBreakin = nullptr;

static void RunVEH();
static void FindAPI();
static void DisableVMP();
static bool Patch_NtSetInformationThread();
static bool Patch_DbgUiRemoteBreakin();

static long WINAPI DebugHandler(PEXCEPTION_POINTERS exception);
static void WINAPI DbgUiRemoteBreakin_Hook();
static NTSTATUS WINAPI NtSetInformationThread_Hook(HANDLE handle, THREADINFOCLASS infoClass, PVOID pValue, ULONG pSize);

void DebuggerBypassPre()
{
#ifdef _DEBUG
    if (!Patch_NtSetInformationThread())
        LOG_ERROR("Failed to patch NtSetInformationThread, so main thread will be hidden from debugger. ^(");
#endif
}

void DebuggerBypassPost()
{
#ifdef _DEBUG
    if (!Patch_DbgUiRemoteBreakin())
        LOG_ERROR("Failed to patch DbgUiRemoteBreakin, so when debugger will try to attach, game crash. ^(");
	
	RunVEH();
#endif
	//DisableVMP();
}

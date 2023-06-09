#include <Windows.h>
#include <iostream>
#include <sstream>
#include <filesystem>

#include <SimpleIni.h>
#include <cheat-base/Logger.h>

#include "injector.h"
#include "util.h"

#include <WinReg.hpp>
#include <regex>

const std::string GlobalGenshinProcName = "GenshinImpact.exe";
const std::string ChinaGenshinProcName = "YuanShen.exe";
std::string ae_Name;
std::string ae_Region;
std::string DllPath;
bool ADll;
bool IgnoreInstance = false;
bool isGlobal;

static CSimpleIni ini;

bool OpenGenshinProcess(HANDLE* phProcess, HANDLE* phThread);

int main(int argc, char* argv[])
{
	Logger::SetLevel(Logger::Level::Debug, Logger::LoggerType::ConsoleLogger);

	auto path = std::filesystem::path(argv[0]).parent_path();
	current_path(path);

	for (int count{ 0 }; count < argc; ++count)
	{
		if (std::string_view(argv[count]) == "-account")
			ae_Name = argv[++count];
		if (std::string_view(argv[count]) == "-region")
			ae_Region = argv[++count];
		if (std::string_view(argv[count]) == "-i")
			IgnoreInstance = true;
	}

	if (!IgnoreInstance)
	{
		WaitForCloseProcess("StarRail.exe");
	}

	Sleep(1000); // Wait for unloading all dlls.

	ini.SetUnicode();
	ini.LoadFile("cfg.ini");

	HANDLE hProcess, hThread;
	if (!OpenGenshinProcess(&hProcess, &hThread))
	{
		std::cout << "Failed to open GenshinImpact process." << std::endl;
		system("pause");
		return 1;
	}

	current_path(path);
	std::string gamepath = ini.GetValue("Inject", "SrPath");

	ini.SaveFile("cfg.ini");
	ini.Reset();

	std::string filename = "CLibrary.dll";
	std::string bypassname = "star_rail.dll";
	std::filesystem::path currentDllPath = std::filesystem::current_path() / filename;
	std::filesystem::path currentBypassDllPath = std::filesystem::current_path() / bypassname;

	InjectDLL(hProcess, currentDllPath.string());
	InjectDLL(hProcess, currentBypassDllPath.string());

	if (ADll && !DllPath.empty())
		InjectDLL(hProcess, DllPath);
	Sleep(2000);
	ResumeThread(hThread);

	CloseHandle(hProcess);
}

bool OpenGenshinProcess(HANDLE* phProcess, HANDLE* phThread)
{
	HANDLE hToken;
	BOOL TokenRet = OpenProcessToken(GetCurrentProcess(), TOKEN_ALL_ACCESS, &hToken);
	if (!TokenRet)
	{
		LOG_LAST_ERROR("Privilege escalation failed!");
		return false;
	}

	auto filePath = util::GetOrSelectPath(ini, "Inject", "SrPath", "sr path", "Executable\0StarRail.exe\0");
	auto commandline = ini.GetValue("Inject", "SrCommandLine");
	auto runAsIs = ini.GetBoolValue("System", "RunAsIs", false);
	if (ini.GetBoolValue("Inject", "ADll"))
		ADll = ini.GetBoolValue("Inject", "ADll");
	if (ini.GetValue("Inject", "DllPath"))
	{
		DllPath = ini.GetValue("Inject", "DllPath");
		std::replace(DllPath.begin(), DllPath.end(), '\\', '/');
	}

	if (!filePath)
		return false;

	std::string CurrentDirectory = filePath.value();
	size_t pos = CurrentDirectory.rfind("\\", CurrentDirectory.length());
	CurrentDirectory = CurrentDirectory.substr(0, pos);

	LPSTR lpstr = commandline == nullptr ? nullptr : const_cast<LPSTR>(commandline);

	BOOL result = false;
	PROCESS_INFORMATION pi{};
	STARTUPINFOEXA si{};
	si.StartupInfo.cb = sizeof(si);

	if (runAsIs)
	{
		result = CreateProcessAsUserA(hToken, const_cast<LPSTR>(filePath->data()), lpstr,
			0, 0, 0, EXTENDED_STARTUPINFO_PRESENT | CREATE_SUSPENDED, 0,
			(LPSTR)CurrentDirectory.data(), (LPSTARTUPINFOA)&si, &pi);
	}
	else
	{
		DWORD pid = FindProcessId("explorer.exe");
		if (pid == 0)
		{
			LOG_ERROR("Can't find 'explorer' pid!");
			return false;
		}

		HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);

		SIZE_T lpsize = 0;
		InitializeProcThreadAttributeList(NULL, 1, 0, &lpsize);

		char* temp = new char[lpsize];
		LPPROC_THREAD_ATTRIBUTE_LIST AttributeList = (LPPROC_THREAD_ATTRIBUTE_LIST)temp;
		InitializeProcThreadAttributeList(AttributeList, 1, 0, &lpsize);
		if (!UpdateProcThreadAttribute(AttributeList, 0, PROC_THREAD_ATTRIBUTE_PARENT_PROCESS,
			&handle, sizeof(HANDLE), NULL, NULL))
		{
			LOG_WARNING("UpdateProcThreadAttribute failed ! (%d).\n", GetLastError());
		}
		si.lpAttributeList = AttributeList;

		result = CreateProcessAsUserA(hToken, const_cast<LPSTR>(filePath->data()), lpstr,
			0, 0, 0, EXTENDED_STARTUPINFO_PRESENT | CREATE_SUSPENDED, 0,
			(LPSTR)CurrentDirectory.data(), (LPSTARTUPINFOA)&si, &pi);

		DeleteProcThreadAttributeList(AttributeList);
		delete[] temp;
	}

	bool isOpened = result;
	if (isOpened)
	{
		ini.SaveFile("cfg.ini");
		*phThread = pi.hThread;
		*phProcess = pi.hProcess;
	}
	else
	{
		LOG_LAST_ERROR("Failed to create game process.");
		LOG_ERROR("If you have problem with GenshinImpact.exe path. You can change it manually in cfg.ini.");
	}

	return isOpened;
}

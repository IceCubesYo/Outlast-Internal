#pragma once

// DEFINES
#define WIND32_LEAN_AND_MEAN
#define Nullcheck(x) if (x == NULL || x == nullptr || !x) {return;}
#define NullcheckC(x) if (x == NULL || x == nullptr || !x) {continue;}
#define M_PI		3.14159265358979323846
#define M_PI_F		((float)(M_PI))
#define DEG2RAD(x)  ((float)(x) * (float)(M_PI_F / 180.f))
#define RAD2DEG(x)  ((float)(x) * (float)(180.f / M_PI_F))

// SDK
#include "../Outlast_Trials/SDK.h"
#include "../Outlast_Trials/SDK/BasicTypes_Package.cpp"
#include "../Outlast_Trials/SDK/CoreUObject_Package.cpp"
#include "../Outlast_Trials/SDK/Engine_Package.cpp"
#include "../Outlast_Trials/SDK/OPP_Package.cpp"

// STANDARD LIBRARIES
#include <wchar.h>
#include <cwchar>
#include <map>
#include <string_view>
#include <windows.h>
#include <ShellAPI.h>
#include <string>
#include <cstdio>
#include <sstream>
#include <iomanip>
#include <thread>
#include <chrono>
#include <conio.h>
#include <locale>
#include <codecvt>
#include <stdexcept>
#include <dinput.h>
#include <tchar.h>

// Directx 11
#include <d3d11.h>
#include <dxgi.h>
#pragma comment (lib, "d3d11.lib")

// MinHook
#include "libs/MinHook/include/MinHook.h"
#include "libs/HookLib/HookLib.h"
#pragma comment(lib, "libs/HookLib/Hooklib.lib")
#pragma comment(lib, "libs/HookLib/Zydis.lib")

// IMGUI
#include "libs/kiero/kiero.h"
#include "libs//ImGui/imgui.h"
#include "libs/ImGui/imgui_impl_dx11.h"
#include "libs/ImGui/imgui_impl_win32.h"
#include "libs/ImGui/imgui_internal.h"
#include "globals.h"
#include "byte.h"
#define DIRECTINPUT_VERSION 0x0800

static LRESULT WINAPI WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

typedef HRESULT(__stdcall* Present) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);
typedef uintptr_t PTR;

typedef HCURSOR(WINAPI* fnSetCursor)(HCURSOR hCursor);
typedef BOOL(WINAPI* fnSetCursorPos)(int x, int y);
fnSetCursor oSetCursor = nullptr;
fnSetCursorPos oSetCursorPos = nullptr;

using namespace CG;

std::wstring ConvertStringToWide(const std::string& input)
{
    int size = MultiByteToWideChar(CP_UTF8, 0, input.c_str(), -1, nullptr, 0);
    std::wstring wideString(size, L'\0');
    MultiByteToWideChar(CP_UTF8, 0, input.c_str(), -1, &wideString[0], size);

    return wideString;
}
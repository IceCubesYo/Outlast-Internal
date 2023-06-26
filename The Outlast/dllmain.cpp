#include "includes.h"
#include "initialize.hpp"

float dpi_scale = 1.f;
static int barsize = 60;

ImFont* gilroybold = nullptr;
ImFont* gilroy_mini = nullptr;
ImFont* iconfont = nullptr;

static int tabs = 0;
static int subtabs = 0;

ImVec2 pos;
ImDrawList* draw;

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

Present oPresent;
HWND window = NULL;
WNDPROC oWndProc;
ID3D11Device* pDevice = NULL;
ID3D11DeviceContext* pContext = NULL;
ID3D11RenderTargetView* mainRenderTargetView;

void InitImGui()
{
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO(); 
    (void)io;
	ImGui_ImplWin32_Init(window);
	ImGui_ImplDX11_Init(pDevice, pContext);
    ImGuiStyle* style = &ImGui::GetStyle();

    ImGui::StyleColorsDark();

    style->Alpha = 1.f;
    style->WindowRounding = 8;
    style->FramePadding = ImVec2(4, 0);
    style->WindowPadding = ImVec2(0, 0);
    style->ItemInnerSpacing = ImVec2(4, 4);
    style->ItemSpacing = ImVec2(15, 15);
    style->FrameRounding = 12;
    style->ScrollbarSize = 2.f;
    style->ScrollbarRounding = 12.f;
    style->PopupRounding = 4.f;
    style->Rounding = 11.f;


    ImVec4* colors = ImGui::GetStyle().Colors;

    colors[ImGuiCol_ChildBg] = ImColor(26, 30, 35, 0);
    colors[ImGuiCol_Border] = ImVec4(255, 255, 255, 0);
    colors[ImGuiCol_FrameBg] = ImColor(18, 19, 23, 255);
    colors[ImGuiCol_FrameBgActive] = ImColor(25, 25, 33, 255);
    colors[ImGuiCol_FrameBgHovered] = ImColor(25, 25, 33, 255);
    colors[ImGuiCol_Header] = ImColor(141, 142, 144, 255);
    colors[ImGuiCol_HeaderActive] = ImColor(141, 142, 144, 255);
    colors[ImGuiCol_HeaderHovered] = ImColor(141, 142, 144, 255);
    colors[ImGuiCol_PopupBg] = ImColor(141, 142, 144, 255);
    colors[ImGuiCol_Button] = ImColor(160, 30, 30, 255);
    colors[ImGuiCol_ButtonHovered] = ImColor(190, 45, 35, 255);
    colors[ImGuiCol_ButtonActive] = ImColor(220, 60, 40, 255);
    colors[ImGuiCol_ScrollbarGrab] = ImVec4(110 / 255.f, 122 / 255.f, 200 / 255.f, 1.f);
    colors[ImGuiCol_SliderGrab] = ImVec4(255 / 255.f, 255 / 255.f, 255 / 255.f, 1.f);
    colors[ImGuiCol_CheckMark] = ImVec4(255 / 255.f, 255 / 255.f, 255 / 255.f, 1.f);

    ImFontConfig font_config;
    font_config.OversampleH = 1;
    font_config.OversampleV = 1;
    font_config.PixelSnapH = 1;

    static const ImWchar ranges[] =
    {
        0x0020, 0x00FF,
        0x0400, 0x044F,
        0,
    };

    gilroy_mini = io.Fonts->AddFontFromMemoryTTF((void*)gilroyfont, sizeof(gilroyfont), 13, &font_config, ranges);
    iconfont = io.Fonts->AddFontFromMemoryTTF((void*)icon, sizeof(icon), 30, &font_config, ranges);

    ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 0.00f);
}

void VisualsTab()
{
    if (subtabs == 0)
    {
        ImGui::SetCursorPos(ImVec2(20 + barsize, 80));
        ImGui::BeginChild("##Visuals", ImVec2(760 - barsize, 420), false, ImGuiWindowFlags_Background);
        {
            ImGui::SetCursorPos(ImVec2(15, 15));
            ImGui::BeginGroup();
            {
                ImGui::Checkbox("Player ESP Enable", &globals::PlayerESPVisual);
                if (globals::PlayerESPVisual)
                {
                    ImGui::Checkbox("Show Player Names", &globals::PlayerNames);
                    ImGui::Checkbox("Show Player Boxes", &globals::PlayerBoxes);
                    ImGui::Checkbox("Show Player Bones", &globals::PlayerBones);
                }
            }
            ImGui::EndGroup();
        }
        ImGui::EndChild();
    }

    if (subtabs == 1)
    {
        ImGui::SetCursorPos(ImVec2(20 + barsize, 80));
        ImGui::BeginChild("##Visuals", ImVec2(760 - barsize, 420), false, ImGuiWindowFlags_Background);
        {
            ImGui::SetCursorPos(ImVec2(15, 15));
            ImGui::BeginGroup();
            {
                ImGui::Checkbox("Enemy ESP Enable", &globals::EnemyESPVisual);
                if (globals::EnemyESPVisual)
                {
                    ImGui::Checkbox("Show Enemy Names", &globals::EnemyNames);
                    ImGui::Checkbox("Show Enemy Boxes", &globals::EnemyBoxes);
                    ImGui::Checkbox("Show Enemy Bones", &globals::EnemyBones);
                }
            }
            ImGui::EndGroup();
        }
        ImGui::EndChild();
    }

    if (subtabs == 2)
    {
        ImGui::SetCursorPos(ImVec2(20 + barsize, 80));
        ImGui::BeginChild("##Visuals", ImVec2(760 - barsize, 420), false, ImGuiWindowFlags_Background);
        {
            ImGui::SetCursorPos(ImVec2(15, 15));
            ImGui::BeginGroup();
            {
                ImGui::Checkbox("Item ESP Enable", &globals::ItemESPVisual);
                if (globals::EnemyESPVisual)
                {
                    ImGui::Checkbox("Show Items", &globals::EnemyNames);
                    ImGui::Checkbox("Show Generators", &globals::EnemyBoxes);
                    ImGui::Checkbox("Show The Snitch", &globals::EnemyBones);
                }
            }
            ImGui::EndGroup();
        }
        ImGui::EndChild();
    }
}

void MiscTab()
{
    if (subtabs == 0)
    {
        ImGui::SetCursorPos(ImVec2(20 + barsize, 80));
        ImGui::BeginChild("##Visuals", ImVec2(760 - barsize, 420), false, ImGuiWindowFlags_Background);
        {
            ImGui::SetCursorPos(ImVec2(15, 15));
            ImGui::BeginGroup();
            {
                ImGui::Checkbox("Player ESP Enable", &globals::PlayerESPVisual);
                if (globals::PlayerESPVisual)
                {
                    ImGui::Checkbox("Player Names", &globals::PlayerNames);
                    ImGui::Checkbox("Player Boxes", &globals::PlayerBoxes);
                    ImGui::Checkbox("Player Bones", &globals::PlayerBones);
                }
            }
            ImGui::EndGroup();
        }
        ImGui::EndChild();
    }
}

void ConfigTab()
{

}

LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

    if (globals::show)
    {
        if (ImGui::GetCurrentContext() != NULL)
        {
            ImGuiIO& io = ImGui::GetIO();
            switch (uMsg)
            {
            case WM_LBUTTONDOWN: case WM_LBUTTONDBLCLK:
            case WM_RBUTTONDOWN: case WM_RBUTTONDBLCLK:
            case WM_MBUTTONDOWN: case WM_MBUTTONDBLCLK:
            case WM_XBUTTONDOWN: case WM_XBUTTONDBLCLK:
            {
                int button = 0;
                if (uMsg == WM_LBUTTONDOWN || uMsg == WM_LBUTTONDBLCLK) { button = 0; }
                if (uMsg == WM_RBUTTONDOWN || uMsg == WM_RBUTTONDBLCLK) { button = 1; }
                if (uMsg == WM_MBUTTONDOWN || uMsg == WM_MBUTTONDBLCLK) { button = 2; }
                if (uMsg == WM_XBUTTONDOWN || uMsg == WM_XBUTTONDBLCLK) { button = (GET_XBUTTON_WPARAM(wParam) == XBUTTON1) ? 3 : 4; }
                if (!ImGui::IsAnyMouseDown() && GetCapture() == NULL)
                    SetCapture(hWnd);
                io.MouseDown[button] = true;
                break;
            }
            case WM_LBUTTONUP:
            case WM_RBUTTONUP:
            case WM_MBUTTONUP:
            case WM_XBUTTONUP:
            {
                int button = 0;
                if (uMsg == WM_LBUTTONUP) { button = 0; }
                if (uMsg == WM_RBUTTONUP) { button = 1; }
                if (uMsg == WM_MBUTTONUP) { button = 2; }
                if (uMsg == WM_XBUTTONUP) { button = (GET_XBUTTON_WPARAM(wParam) == XBUTTON1) ? 3 : 4; }
                io.MouseDown[button] = false;
                if (!ImGui::IsAnyMouseDown() && GetCapture() == hWnd)
                    ReleaseCapture();
                break;
            }
            case WM_MOUSEWHEEL:
                io.MouseWheel += (float)GET_WHEEL_DELTA_WPARAM(wParam) / (float)WHEEL_DELTA;
                break;
            case WM_MOUSEHWHEEL:
                io.MouseWheelH += (float)GET_WHEEL_DELTA_WPARAM(wParam) / (float)WHEEL_DELTA;
                break;
            case WM_KEYDOWN:
            case WM_SYSKEYDOWN:
                if (wParam < 256)
                    io.KeysDown[wParam] = 1;
                break;
            case WM_KEYUP:
            case WM_SYSKEYUP:
                if (wParam < 256)
                    io.KeysDown[wParam] = 0;
                break;
            case WM_CHAR:
                if (wParam > 0 && wParam < 0x10000)
                    io.AddInputCharacterUTF16((unsigned short)wParam);
                break;
            }

        }
        ImGuiMouseCursor imgui_cursor = ImGui::GetMouseCursor();
        LPTSTR win32_cursor = IDC_ARROW;
        switch (imgui_cursor)
        {
        case ImGuiMouseCursor_Arrow:        win32_cursor = IDC_ARROW; break;
        case ImGuiMouseCursor_TextInput:    win32_cursor = IDC_IBEAM; break;
        case ImGuiMouseCursor_ResizeAll:    win32_cursor = IDC_SIZEALL; break;
        case ImGuiMouseCursor_ResizeEW:     win32_cursor = IDC_SIZEWE; break;
        case ImGuiMouseCursor_ResizeNS:     win32_cursor = IDC_SIZENS; break;
        case ImGuiMouseCursor_ResizeNESW:   win32_cursor = IDC_SIZENESW; break;
        case ImGuiMouseCursor_ResizeNWSE:   win32_cursor = IDC_SIZENWSE; break;
        case ImGuiMouseCursor_Hand:         win32_cursor = IDC_HAND; break;
        case ImGuiMouseCursor_NotAllowed:   win32_cursor = IDC_NO; break;
        }
        oSetCursor(::LoadCursor(NULL, win32_cursor));
        if (uMsg == WM_KEYUP) return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
        return DefWindowProc(hWnd, uMsg, wParam, lParam);
    }

    return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}

bool init = false;
HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	if (!init)
	{
		if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice)))
		{
			pDevice->GetImmediateContext(&pContext);
			DXGI_SWAP_CHAIN_DESC sd;
			pSwapChain->GetDesc(&sd);
			window = sd.OutputWindow;
			ID3D11Texture2D* pBackBuffer;
			pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
			pDevice->CreateRenderTargetView(pBackBuffer, NULL, &mainRenderTargetView);
			pBackBuffer->Release();
			oWndProc = (WNDPROC)SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)WndProc);
			InitImGui();
			init = true;
		}

		else
			return oPresent(pSwapChain, SyncInterval, Flags);
	}

    ImGui_ImplDX11_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();
    ImGuiIO& io = ImGui::GetIO();

	if (GetAsyncKeyState(VK_INSERT) & 1)
	{
		globals::show = !globals::show;
	}

	if (globals::show)
	{
        ImGui::Begin("Menu", nullptr, ImGuiWindowFlags_NoScrollWithMouse | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_HorizontalScrollbar | ImGuiWindowFlags_NoBringToFrontOnFocus);
        {
            pos = ImGui::GetWindowPos();
            draw = ImGui::GetWindowDrawList();
            ImGui::SetWindowSize(ImVec2(800, 520));

            draw->AddRectFilled(pos, ImVec2(pos.x + 800, pos.y + 520), ImColor(36, 40, 49), 8);
            draw->AddRectFilled(pos, ImVec2(pos.x + barsize, pos.y + 520), ImColor(56, 62, 74), 8, 5);
            draw->AddRectFilled(ImVec2(pos.x + 60, pos.y), ImVec2(pos.x + 800, pos.y + 60), ImColor(56, 62, 74), 8, 2);
            ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(0, 0));
            ImGui::BeginChild("##TABS", ImVec2(barsize, 520));
            {
                ImGui::BeginChild("##Logo", ImVec2(barsize, 60));
                {
                    ImGui::GetCurrentWindow()->DrawList->AddRectFilled(pos, ImVec2(pos.x + barsize, pos.y + 60), ImColor(81, 87, 101), 8, 1);
                    ImGui::GetCurrentWindow()->DrawList->AddRect(ImVec2(pos.x + barsize / 2 - 10, pos.y + 20), ImVec2(pos.x + barsize / 2 + 10, pos.y + 40), ImColor(255, 255, 255), 36, 7, 3);
                }
                ImGui::EndChild();

                ImGui::BeginGroup();
                {
                    if (ImGui::tab("Visuals", "A", 0 == tabs)) tabs = 0;
                    if (ImGui::tab("Misc", "B", 1 == tabs)) tabs = 1;
                    if (ImGui::tab("Config", "C", 2 == tabs)) tabs = 2;
                }
                ImGui::EndGroup();
            }
            ImGui::EndChild();
            if (ImGui::IsItemHovered())
            {
                if (barsize < 200)
                    barsize += 10;
            }
            else
            {
                if (barsize > 60)
                    barsize -= 10;
            }
            ImGui::SameLine();
            ImGui::BeginChild("##SUBTABS", ImVec2(800 - barsize, 60));
            {
                if (tabs == 0)
                {
                    ImGui::BeginGroup();
                    {
                        if (ImGui::sub("Player ESP", 0 == subtabs)) subtabs = 0;
                        ImGui::SameLine();
                        if (ImGui::sub("Enemy ESP", 1 == subtabs)) subtabs = 1;
                        ImGui::SameLine();
                        if (ImGui::sub("Item ESP", 2 == subtabs)) subtabs = 2;
                    }
                    ImGui::EndGroup();
                }

                if (tabs == 1)
                {
                    ImGui::BeginGroup();
                    {
                        if (ImGui::sub("SpeedHacks", 0 == subtabs)) subtabs = 0;
                        ImGui::SameLine();
                        if (ImGui::sub("Item Throwing", 1 == subtabs)) subtabs = 1;
                        ImGui::SameLine();
                        if (ImGui::sub("Item ESP", 2 == subtabs)) subtabs = 2;
                    }
                    ImGui::EndGroup();
                }
            }
            ImGui::EndChild();
            ImGui::PopStyleVar();
            switch (tabs)
            {
            case 0: VisualsTab();   break;
            case 1: MiscTab();   break;
            case 2: ConfigTab();   break;
            }
        }
        ImGui::End();
	}

    ImGui::Render();

    pContext->OMSetRenderTargets(1, &mainRenderTargetView, NULL);
    ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

	return oPresent(pSwapChain, SyncInterval, Flags);
}

DWORD WINAPI MainThread(LPVOID lpReserved)
{
	InitializeCheeze();

	bool init_hook = false;
	do
	{
		if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
		{
			kiero::bind(8, (void**)&oPresent, hkPresent);
			init_hook = true;
		}
	} while (!init_hook);
	return TRUE;
}

BOOL WINAPI DllMain(HMODULE hMod, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hMod);
		CreateThread(nullptr, 0, MainThread, hMod, 0, nullptr);
		break;
	case DLL_PROCESS_DETACH:
		kiero::shutdown();
		break;
	}
	return TRUE;
}
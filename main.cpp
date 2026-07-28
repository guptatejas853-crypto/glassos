#include <iostream>

#include "Kernel.h"
#include "desktop.h"
#include "window_manager.h"
#include "renderer.h"
#include "explorer.h"
#include "glass_effect.h"
#include "taskbar.h"
#include "start_menu.h"
#include "terminal.h"

using namespace GlassOS;

int main()
{
    std::cout << "=================================\n";
    std::cout << "        GlassOS Alpha\n";
    std::cout << "=================================\n";

    std::cout << "[GlassOS] Starting...\n";

    if (!Kernel::Initialize()) return 1;
    if (!Desktop::Initialize()) return 1;
    if (!WindowManager::Initialize()) return 1;
    if (!Renderer::Initialize()) return 1;
    if (!Explorer::Initialize()) return 1;
    if (!GlassEffect::Initialize()) return 1;
    if (!Taskbar::Initialize()) return 1;
    if (!StartMenu::Initialize()) return 1;
    if (!Terminal::Initialize()) return 1;

    Renderer::BeginFrame();

    Taskbar::Draw();
    StartMenu::Open();
    Explorer::Open();
    Terminal::Open();

    Terminal::Execute("help");

    Renderer::EndFrame();

    std::cout << "[GlassOS] System Ready.\n";

    return 0;
}

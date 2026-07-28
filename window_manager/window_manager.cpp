#include "window_manager.h"

#include "../renderer/renderer.h"

#include <iostream>

using namespace GlassOS;

bool WindowManager::Initialize()
{
    std::cout << "[WindowManager] Started.\n";

    CreateDesktop();

    return true;
}

bool WindowManager::CreateDesktop()
{
    std::cout << "[WindowManager] Creating Desktop Window.\n";

    Renderer::DrawWindow(
        "Glass Desktop",
        0,
        0,
        1280,
        720
    );

    Renderer::DrawWindow(
        "Taskbar",
        0,
        680,
        1280,
        40
    );

    return true;
}

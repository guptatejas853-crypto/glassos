#include "taskbar.h"

#include "../renderer/renderer.h"

#include <iostream>

using namespace GlassOS;

bool Taskbar::Initialize()
{
    std::cout << "[Taskbar] Initialized.\n";
    return true;
}

bool Taskbar::Draw()
{
    std::cout << "[Taskbar] Drawing Taskbar.\n";

    Renderer::DrawWindow(
        "Taskbar",
        0,
        680,
        1280,
        40
    );

    return true;
}

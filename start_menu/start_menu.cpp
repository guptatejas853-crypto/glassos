#include "start_menu.h"

#include "../renderer/renderer.h"

#include <iostream>

using namespace GlassOS;

bool StartMenu::Initialize()
{
    std::cout << "[StartMenu] Initialized.\n";
    return true;
}

bool StartMenu::Open()
{
    std::cout << "[StartMenu] Opening Start Menu.\n";

    Renderer::DrawWindow(
        "Start Menu",
        10,
        420,
        350,
        250
    );

    std::cout << "  • Explorer\n";
    std::cout << "  • Terminal\n";
    std::cout << "  • Settings\n";

    return true;
}

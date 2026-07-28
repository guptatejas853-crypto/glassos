#include "settings.h"

#include "../renderer/renderer.h"

#include <iostream>

using namespace GlassOS;

bool Settings::Initialize()
{
    std::cout << "[Settings] Initialized.\n";
    return true;
}

bool Settings::Open()
{
    std::cout << "[Settings] Opening Settings.\n";

    Renderer::DrawWindow(
        "Glass Settings",
        320,
        140,
        700,
        500
    );

    std::cout << "---------------------------------\n";
    std::cout << " Appearance\n";
    std::cout << " Wallpaper\n";
    std::cout << " Theme\n";
    std::cout << " Network\n";
    std::cout << " About GlassOS\n";
    std::cout << "---------------------------------\n";

    return true;
}

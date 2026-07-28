#include "explorer.h"

#include "../renderer/renderer.h"

#include <iostream>

using namespace GlassOS;

bool Explorer::Initialize()
{
    std::cout << "[Explorer] Glass Explorer Initialized.\n";
    return true;
}

bool Explorer::Open()
{
    std::cout << "[Explorer] Opening File Manager Window.\n";

    Renderer::DrawWindow(
        "Glass Explorer",
        150,
        100,
        800,
        500
    );

    return true;
}

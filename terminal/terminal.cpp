#include "terminal.h"

#include "../renderer/renderer.h"

#include <iostream>

using namespace GlassOS;

bool Terminal::Initialize()
{
    std::cout << "[Terminal] Initialized.\n";
    return true;
}

bool Terminal::Open()
{
    std::cout << "[Terminal] Opening Terminal.\n";

    Renderer::DrawWindow(
        "Glass Terminal",
        220,
        120,
        850,
        550
    );

    return true;
}

bool Terminal::Execute(const char* command)
{
    std::cout << "[Terminal] $ " << command << std::endl;
    return true;
}

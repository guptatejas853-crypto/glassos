#include "renderer.h"

#include <iostream>

using namespace GlassOS;

bool Renderer::Initialize()
{
    std::cout << "[Renderer] Graphics Initialized.\n";
    return true;
}

bool Renderer::BeginFrame()
{
    std::cout << "[Renderer] Begin Frame.\n";
    return true;
}

bool Renderer::EndFrame()
{
    std::cout << "[Renderer] End Frame.\n";
    return true;
}

bool Renderer::DrawWindow(
    const char* title,
    int x,
    int y,
    int width,
    int height)
{
    std::cout
        << "[Renderer] Drawing Window: "
        << title
        << " Position("
        << x << "," << y << ") "
        << "Size("
        << width << "x" << height
        << ")"
        << std::endl;

    return true;
}

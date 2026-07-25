#include "renderer.h"

#include <iostream>

using namespace GlassOS;

namespace
{
    bool frameActive = false;
}

bool Renderer::Initialize()
{
    std::cout << "[Renderer] Initialized\n";
    return true;
}

bool Renderer::BeginFrame()
{
    frameActive = true;

    std::cout << "[Renderer] Begin Frame\n";

    return true;
}

bool Renderer::EndFrame()
{
    frameActive = false;

    std::cout << "[Renderer] End Frame\n";

    return true;
}

bool Renderer::DrawRectangle(
    int x,
    int y,
    int width,
    int height)
{
    if (!frameActive)
        return false;

    std::cout
        << "[Renderer] Rectangle "
        << x << "," << y
        << " "
        << width << "x" << height
        << std::endl;

    return true;
}

bool Renderer::DrawRoundedRectangle(
    int x,
    int y,
    int width,
    int height,
    int radius)
{
    if (!frameActive)
        return false;

    std::cout
        << "[Renderer] Rounded Rectangle "
        << x << "," << y
        << " "
        << width << "x" << height
        << " Radius:" << radius
        << std::endl;

    return true;
}

bool Renderer::DrawText(
    int x,
    int y,
    const std::string& text)
{
    if (!frameActive)
        return false;

    std::cout
        << "[Renderer] Text: "
        << text
        << std::endl;

    return true;
}

bool Renderer::DrawImage(
    int x,
    int y,
    const std::string& imagePath)
{
    if (!frameActive)
        return false;

    std::cout
        << "[Renderer] Image: "
        << imagePath
        << std::endl;

    return true;
}

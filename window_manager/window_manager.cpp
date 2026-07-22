#include "window_manager.h"

#include <algorithm>

using namespace GlassOS;

std::vector<
    std::shared_ptr<Window>>
WindowManager::windows;


bool WindowManager::Initialize()
{
    windows.clear();

    return true;
}


std::shared_ptr<Window>
WindowManager::CreateWindow(
    const std::string& title,
    int width,
    int height)
{
    auto window =
        std::make_shared<Window>(
            title,
            width,
            height);

    windows.push_back(window);

    return window;
}


void WindowManager::DestroyWindow(
    std::shared_ptr<Window> window)
{
    windows.erase(
        std::remove(
            windows.begin(),
            windows.end(),
            window),
        windows.end());
}


const std::vector<
    std::shared_ptr<Window>>&
WindowManager::GetWindows()
{
    return windows;
}

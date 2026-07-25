#include "window_manager.h"

using namespace GlassOS;

std::vector<Window> WindowManager::windows;

bool WindowManager::Initialize()
{
    windows.clear();
    return true;
}

bool WindowManager::Start()
{
    return true;
}

bool WindowManager::Refresh()
{
    return true;
}

bool WindowManager::Lock()
{
    return true;
}

bool WindowManager::Shutdown()
{
    windows.clear();
    return true;
}

bool WindowManager::CreateWindow(int id, const std::string& title)
{
    Window window;

    window.id = id;
    window.title = title;
    window.visible = true;

    windows.push_back(window);

    return true;
}

bool WindowManager::CloseWindow(int id)
{
    for (auto it = windows.begin(); it != windows.end(); ++it)
    {
        if (it->id == id)
        {
            windows.erase(it);
            return true;
        }
    }

    return false;
}

Window* WindowManager::GetWindow(int id)
{
    for (auto& window : windows)
    {
        if (window.id == id)
            return &window;
    }

    return nullptr;
}

int WindowManager::WindowCount()
{
    return static_cast<int>(windows.size());
}

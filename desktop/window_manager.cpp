#include "window_manager.h"

#include <vector>
#include <algorithm>

using namespace GlassOS;

namespace
{
    std::vector<int> windows;
    bool running = false;
}

bool WindowManager::Initialize()
{
    windows.clear();
    running = false;
    return true;
}

bool WindowManager::Start()
{
    running = true;
    return true;
}

bool WindowManager::Refresh()
{
    return running;
}

bool WindowManager::Lock()
{
    running = false;
    return true;
}

bool WindowManager::Shutdown()
{
    windows.clear();
    running = false;
    return true;
}

bool WindowManager::RegisterWindow(int id)
{
    windows.push_back(id);
    return true;
}

bool WindowManager::CloseWindow(int id)
{
    windows.erase(
        std::remove(windows.begin(), windows.end(), id),
        windows.end());

    return true;
}

int WindowManager::WindowCount()
{
    return static_cast<int>(windows.size());
}

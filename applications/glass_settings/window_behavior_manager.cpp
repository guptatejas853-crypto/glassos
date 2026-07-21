#include "window_behavior_manager.h"

using namespace GlassOS;

bool WindowBehaviorManager::snapWindows = true;

bool WindowBehaviorManager::alwaysOnTop = false;

bool WindowBehaviorManager::floatingWindows = true;


bool WindowBehaviorManager::Initialize()
{
    snapWindows = true;

    alwaysOnTop = false;

    floatingWindows = true;

    return true;
}


bool WindowBehaviorManager::EnableSnapWindows()
{
    snapWindows = true;

    return true;
}


bool WindowBehaviorManager::DisableSnapWindows()
{
    snapWindows = false;

    return true;
}


bool WindowBehaviorManager::IsSnapEnabled()
{
    return snapWindows;
}


bool WindowBehaviorManager::EnableAlwaysOnTop()
{
    alwaysOnTop = true;

    return true;
}


bool WindowBehaviorManager::DisableAlwaysOnTop()
{
    alwaysOnTop = false;

    return true;
}


bool WindowBehaviorManager::IsAlwaysOnTopEnabled()
{
    return alwaysOnTop;
}


bool WindowBehaviorManager::EnableFloatingWindows()
{
    floatingWindows = true;

    return true;
}


bool WindowBehaviorManager::DisableFloatingWindows()
{
    floatingWindows = false;

    return true;
}


bool WindowBehaviorManager::FloatingWindowsEnabled()
{
    return floatingWindows;
}

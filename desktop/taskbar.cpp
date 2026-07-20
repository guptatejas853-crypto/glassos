#include "taskbar.h"

#include <iostream>

using namespace GlassOS;

bool Taskbar::Initialize()
{
    std::cout << "[Taskbar] Initializing...\n";

    RegisterStartMenu();
    RegisterPinnedApps();
    RegisterSystemTray();
    RegisterClock();

    return true;
}

bool Taskbar::Show()
{
    std::cout << "[Taskbar] Visible\n";
    return true;
}

bool Taskbar::Hide()
{
    std::cout << "[Taskbar] Hidden\n";
    return true;
}

bool Taskbar::Refresh()
{
    std::cout << "[Taskbar] Refreshed\n";
    return true;
}

bool Taskbar::RegisterStartMenu()
{
    std::cout << "[Taskbar] Start Menu Registered\n";
    return true;
}

bool Taskbar::RegisterPinnedApps()
{
    std::cout << "[Taskbar] Pinned Apps Loaded\n";
    return true;
}

bool Taskbar::RegisterSystemTray()
{
    std::cout << "[Taskbar] System Tray Loaded\n";
    return true;
}

bool Taskbar::RegisterClock()
{
    std::cout << "[Taskbar] Clock Loaded\n";
    return true;
}

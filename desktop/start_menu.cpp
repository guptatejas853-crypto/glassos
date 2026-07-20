#include "start_menu.h"

#include <iostream>

using namespace GlassOS;

bool StartMenu::visible = false;

bool StartMenu::Initialize()
{
    visible = false;
    return true;
}

bool StartMenu::Show()
{
    visible = true;

    DrawHeader();
    DrawPinnedApps();
    DrawAllApps();
    DrawPowerMenu();
    DrawUserProfile();

    std::cout << "[StartMenu] Opened\n";

    return true;
}

bool StartMenu::Hide()
{
    visible = false;

    std::cout << "[StartMenu] Closed\n";

    return true;
}

bool StartMenu::Toggle()
{
    if (visible)
        return Hide();

    return Show();
}

bool StartMenu::Refresh()
{
    if (!visible)
        return true;

    DrawPinnedApps();
    DrawAllApps();

    return true;
}

bool StartMenu::DrawHeader()
{
    std::cout << "[StartMenu] Header Loaded\n";
    return true;
}

bool StartMenu::DrawPinnedApps()
{
    std::cout << "[StartMenu] Pinned Apps Loaded\n";
    return true;
}

bool StartMenu::DrawAllApps()
{
    std::cout << "[StartMenu] All Apps Loaded\n";
    return true;
}

bool StartMenu::DrawPowerMenu()
{
    std::cout << "[StartMenu] Power Menu Loaded\n";
    return true;
}

bool StartMenu::DrawUserProfile()
{
    std::cout << "[StartMenu] User Profile Loaded\n";
    return true;
}

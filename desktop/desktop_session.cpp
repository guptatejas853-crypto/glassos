#include "desktop_session.h"

#include <iostream>

using namespace GlassOS;

bool DesktopSession::Initialize()
{
    std::cout << "[Desktop] Initializing Desktop Session...\n";
    return true;
}

bool DesktopSession::StartSession()
{
    std::cout << "[Desktop] Starting Desktop Session...\n";

    LoadWallpaper();
    LoadTaskbar();
    LoadDesktopIcons();
    LoadShortcuts();
    RestoreLayout();

    return true;
}

bool DesktopSession::EndSession()
{
    std::cout << "[Desktop] Closing Desktop Session...\n";
    return true;
}

bool DesktopSession::RestoreSession()
{
    std::cout << "[Desktop] Restoring Desktop Session...\n";

    RestoreLayout();

    return true;
}

bool DesktopSession::LoadWallpaper()
{
    std::cout << "[Desktop] Wallpaper Loaded\n";
    return true;
}

bool DesktopSession::LoadTaskbar()
{
    std::cout << "[Desktop] Taskbar Loaded\n";
    return true;
}

bool DesktopSession::LoadDesktopIcons()
{
    std::cout << "[Desktop] Desktop Icons Loaded\n";
    return true;
}

bool DesktopSession::LoadShortcuts()
{
    std::cout << "[Desktop] Shortcuts Loaded\n";
    return true;
}

bool DesktopSession::RestoreLayout()
{
    std::cout << "[Desktop] Layout Restored\n";
    return true;
}

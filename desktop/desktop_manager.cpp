#include "desktop_manager.h"

#include "wallpaper_manager.h"
#include "taskbar.h"
#include "start_menu.h"
#include "quick_center.h"
#include "notification_center.h"

using namespace GlassOS;


bool DesktopManager::Initialize()
{
    WallpaperManager::Initialize();
    Taskbar::Initialize();
    StartMenu::Initialize();
    QuickCenter::Initialize();
    NotificationCenter::Initialize();

    return true;
}


bool DesktopManager::StartDesktop()
{
    WallpaperManager::Show();
    Taskbar::Show();
    StartMenu::Hide();

    return true;
}


bool DesktopManager::ShutdownDesktop()
{
    Taskbar::Hide();
    QuickCenter::Hide();
    NotificationCenter::Hide();

    return true;
}


bool DesktopManager::RefreshDesktop()
{
    WallpaperManager::Refresh();

    return true;
}


bool DesktopManager::LockDesktop()
{
    Taskbar::Hide();
    QuickCenter::Hide();

    return true;
}

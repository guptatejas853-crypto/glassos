#include "desktop_manager.h"

#include "wallpaper_manager.h"
#include "taskbar.h"
#include "start_menu.h"
#include "quick_center.h"
#include "notification_center.h"
#include "window_manager.h"

using namespace GlassOS;

bool DesktopManager::Initialize()
{
    WallpaperManager::Initialize();
    Taskbar::Initialize();
    StartMenu::Initialize();
    QuickCenter::Initialize();
    NotificationCenter::Initialize();
    WindowManager::Initialize();

    return true;
}

bool DesktopManager::StartDesktop()
{
    WallpaperManager::LoadWallpaper();

    Taskbar::Show();

    StartMenu::Show();

    WindowManager::Start();

    return true;
}

bool DesktopManager::ShutdownDesktop()
{
    WindowManager::Shutdown();

    Taskbar::Hide();

    return true;
}

bool DesktopManager::RefreshDesktop()
{
    WallpaperManager::Refresh();

    Taskbar::Refresh();

    WindowManager::Refresh();

    return true;
}

bool DesktopManager::LockDesktop()
{
    WindowManager::Lock();

    Taskbar::Hide();

    return true;
}

#include "wallpaper_manager.h"

using namespace GlassOS;

std::string WallpaperManager::wallpaperPath =
    "wallpapers/default.glass";

std::string WallpaperManager::displayMode =
    "Fill";

bool WallpaperManager::Initialize()
{
    wallpaperPath =
        "wallpapers/default.glass";

    displayMode = "Fill";

    return true;
}

bool WallpaperManager::SetWallpaper(
    const std::string& path)
{
    wallpaperPath = path;

    return true;
}

std::string WallpaperManager::GetWallpaper()
{
    return wallpaperPath;
}

bool WallpaperManager::SetMode(
    const std::string& mode)
{
    displayMode = mode;

    return true;
}

std::string WallpaperManager::GetMode()
{
    return displayMode;
}

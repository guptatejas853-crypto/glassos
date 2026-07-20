#include "wallpaper_manager.h"

#include <iostream>

using namespace GlassOS;

std::string WallpaperManager::currentWallpaper = "";

bool WallpaperManager::Initialize()
{
    currentWallpaper = "assets/wallpapers/default.png";

    return true;
}

bool WallpaperManager::LoadWallpaper(const std::string& wallpaperPath)
{
    currentWallpaper = wallpaperPath;

    std::cout << "[Wallpaper] Loaded: "
              << currentWallpaper
              << std::endl;

    return true;
}

bool WallpaperManager::SetWallpaper(const std::string& wallpaperPath)
{
    currentWallpaper = wallpaperPath;

    std::cout << "[Wallpaper] Changed: "
              << currentWallpaper
              << std::endl;

    return true;
}

std::string WallpaperManager::CurrentWallpaper()
{
    return currentWallpaper;
}

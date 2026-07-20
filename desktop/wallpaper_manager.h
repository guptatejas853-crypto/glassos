#pragma once

#include <string>

namespace GlassOS
{
    class WallpaperManager
    {
    public:
        static bool Initialize();

        static bool LoadWallpaper(const std::string& wallpaperPath);

        static bool SetWallpaper(const std::string& wallpaperPath);

        static std::string CurrentWallpaper();

    private:
        static std::string currentWallpaper;
    };
}

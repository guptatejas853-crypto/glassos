#pragma once

#include <string>

namespace GlassOS
{
    class WallpaperManager
    {
    public:
        static bool Initialize();

        static bool SetWallpaper(
            const std::string& path);

        static std::string GetWallpaper();

        static bool SetMode(
            const std::string& mode);

        static std::string GetMode();

    private:
        static std::string wallpaperPath;

        static std::string displayMode;
    };
}

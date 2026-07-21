#pragma once

#include <string>

namespace GlassOS
{
    class DisplayManager
    {
    public:
        static bool Initialize();

        static bool SetResolution(
            const std::string& resolution);

        static std::string GetResolution();

        static bool SetRefreshRate(
            int rate);

        static int GetRefreshRate();

        static bool SetScaling(
            int scale);

        static int GetScaling();

        static bool SetOrientation(
            const std::string& orientation);

        static std::string GetOrientation();

    private:
        static std::string resolution;

        static int refreshRate;

        static int scaling;

        static std::string orientation;
    };
}

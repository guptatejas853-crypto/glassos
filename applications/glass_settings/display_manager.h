#pragma once

#include <string>

namespace GlassOS
{
    class DisplayManager
    {
    public:

        static bool Initialize();

        static void SetResolution(
            const std::string& resolution);

        static std::string GetResolution();

        static void SetBrightness(
            int brightness);

        static int GetBrightness();
    };
}

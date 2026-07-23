#pragma once

#include <string>

namespace GlassOS
{
    class ThemeSettings
    {
    public:

        static bool Initialize();

        static void SetTheme(
            const std::string& theme);

        static std::string GetTheme();
    };
}

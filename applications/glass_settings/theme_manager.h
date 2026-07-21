#pragma once

#include <string>

namespace GlassOS
{
    class ThemeManager
    {
    public:
        static bool Initialize();

        static bool SetTheme(
            const std::string& theme);

        static std::string GetTheme();

        static bool SetAccentColor(
            const std::string& color);

        static std::string GetAccentColor();

        static bool EnableTransparency(
            bool enabled);

        static bool TransparencyEnabled();

    private:
        static std::string currentTheme;

        static std::string accentColor;

        static bool transparency;
    };
}

#pragma once

#include <string>

namespace GlassOS
{
    class FontManager
    {
    public:
        static bool Initialize();

        static bool SetSystemFont(
            const std::string& font);

        static std::string GetSystemFont();

        static bool SetFontSize(
            int size);

        static int GetFontSize();

        static bool EnableSmoothFonts();

        static bool DisableSmoothFonts();

        static bool SmoothFontsEnabled();

    private:
        static std::string systemFont;

        static int fontSize;

        static bool smoothFonts;
    };
}

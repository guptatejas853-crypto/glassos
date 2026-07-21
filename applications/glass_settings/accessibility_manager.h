#pragma once

namespace GlassOS
{
    class AccessibilityManager
    {
    public:
        static bool Initialize();

        static bool EnableHighContrast();

        static bool DisableHighContrast();

        static bool IsHighContrastEnabled();

        static bool SetTextScale(
            int scale);

        static int GetTextScale();

        static bool EnableScreenReader();

        static bool DisableScreenReader();

        static bool IsScreenReaderEnabled();

    private:
        static bool highContrast;

        static bool screenReader;

        static int textScale;
    };
}

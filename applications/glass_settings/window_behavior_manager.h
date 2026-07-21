#pragma once

namespace GlassOS
{
    class WindowBehaviorManager
    {
    public:
        static bool Initialize();

        static bool EnableSnapWindows();

        static bool DisableSnapWindows();

        static bool IsSnapEnabled();

        static bool EnableAlwaysOnTop();

        static bool DisableAlwaysOnTop();

        static bool IsAlwaysOnTopEnabled();

        static bool EnableFloatingWindows();

        static bool DisableFloatingWindows();

        static bool FloatingWindowsEnabled();

    private:
        static bool snapWindows;

        static bool alwaysOnTop;

        static bool floatingWindows;
    };
}

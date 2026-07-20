#pragma once

namespace GlassOS
{
    class DesktopSession
    {
    public:
        static bool Initialize();

        static bool StartSession();

        static bool EndSession();

        static bool RestoreSession();

    private:
        static bool LoadWallpaper();

        static bool LoadTaskbar();

        static bool LoadDesktopIcons();

        static bool LoadShortcuts();

        static bool RestoreLayout();
    };
}

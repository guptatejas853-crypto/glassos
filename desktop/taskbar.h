#pragma once

namespace GlassOS
{
    class Taskbar
    {
    public:
        static bool Initialize();

        static bool Show();

        static bool Hide();

        static bool Refresh();

        static bool RegisterStartMenu();

        static bool RegisterPinnedApps();

        static bool RegisterSystemTray();

        static bool RegisterClock();
    };
}

#pragma once

namespace GlassOS
{
    class StartMenu
    {
    public:
        static bool Initialize();

        static bool Show();

        static bool Hide();

        static bool Toggle();

        static bool Refresh();

    private:
        static bool visible;

        static bool DrawHeader();

        static bool DrawPinnedApps();

        static bool DrawAllApps();

        static bool DrawPowerMenu();

        static bool DrawUserProfile();
    };
}

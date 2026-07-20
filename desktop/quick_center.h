#pragma once

namespace GlassOS
{
    class QuickCenter
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

        static bool DrawTiles();

        static bool DrawBatteryCard();
    };
}

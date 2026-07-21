#pragma once

namespace GlassOS
{
    class SettingsWindow
    {
    public:
        static bool Initialize();

        static bool Create();

        static bool Show();

        static bool Hide();

        static bool Close();

        static bool Refresh();
    };
}

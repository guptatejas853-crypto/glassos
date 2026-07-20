#pragma once

namespace GlassOS
{
    class DesktopManager
    {
    public:
        static bool Initialize();

        static bool StartDesktop();

        static bool ShutdownDesktop();

        static bool RefreshDesktop();

        static bool LockDesktop();
    };
}

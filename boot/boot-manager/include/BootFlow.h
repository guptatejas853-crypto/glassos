#pragma once

namespace GlassOS
{
    class BootFlow
    {
    public:
        static bool InitializeHardware();

        static bool LoadKernel();

        static bool LoadDrivers();

        static bool StartServices();

        static bool LaunchDesktop();
    };
}

#pragma once

namespace GlassOS
{
    class ServiceManager
    {
    public:
        static bool Initialize();

        static bool StartServices();

        static bool StopServices();

        static bool RestartServices();

    private:
        static bool StartSessionService();

        static bool StartIdentityService();

        static bool StartNotificationService();

        static bool StartUpdateService();

        static bool StartNetworkService();
    };
}

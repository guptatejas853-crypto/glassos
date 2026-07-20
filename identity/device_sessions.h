#pragma once

#include <string>
#include <vector>

namespace GlassOS
{
    struct DeviceSession
    {
        std::string deviceId;
        std::string deviceName;
        std::string loginTime;
        bool currentDevice;
    };

    class DeviceSessions
    {
    public:
        static bool Initialize();

        static bool AddDevice(const DeviceSession& device);

        static bool RemoveDevice(const std::string& deviceId);

        static std::vector<DeviceSession> GetDevices();

        static bool LogoutDevice(const std::string& deviceId);

    private:
        static std::vector<DeviceSession> devices;
    };
}

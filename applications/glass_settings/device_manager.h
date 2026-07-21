#pragma once

#include <string>
#include <vector>

namespace GlassOS
{
    struct DeviceInfo
    {
        std::string name;
        std::string type;
        std::string status;
    };

    class DeviceManager
    {
    public:
        static bool Initialize();

        static bool ScanDevices();

        static const std::vector<DeviceInfo>&
            GetDevices();

        static bool EnableDevice(
            const std::string& name);

        static bool DisableDevice(
            const std::string& name);

        static bool DeviceExists(
            const std::string& name);

    private:
        static std::vector<DeviceInfo> devices;
    };
}

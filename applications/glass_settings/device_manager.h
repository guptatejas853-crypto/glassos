#pragma once

#include <string>
#include <vector>

namespace GlassOS
{
    
#include "core/hardware/hardware_types.h"

class DriverManager
{
    ...
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

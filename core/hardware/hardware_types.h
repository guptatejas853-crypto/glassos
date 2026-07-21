#pragma once

#include <string>

namespace GlassOS
{
    struct DeviceInfo
    {
        std::string name;
        std::string type;
        std::string status;
    };

    struct DriverInfo
    {
        std::string name;
        std::string version;
        std::string status;
    };
}

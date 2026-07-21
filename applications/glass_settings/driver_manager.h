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
    {
    public:
        static bool Initialize();

        static bool ScanDrivers();

        static const std::vector<DriverInfo>&
            GetDrivers();

        static bool UpdateDriver(
            const std::string& name);

        static bool ReinstallDriver(
            const std::string& name);

        static bool DriverExists(
            const std::string& name);

    private:
        static std::vector<DriverInfo> drivers;
    };
}

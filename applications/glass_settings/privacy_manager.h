#pragma once

#include <string>

namespace GlassOS
{
    class PrivacyManager
    {
    public:
        static bool Initialize();

        static bool SetPermission(
            const std::string& app,
            const std::string& permission,
            bool enabled);

        static bool GetPermission(
            const std::string& app,
            const std::string& permission);

        static bool EnableTrackingProtection();

        static bool DisableTrackingProtection();

        static bool IsTrackingProtectionEnabled();
    };
}

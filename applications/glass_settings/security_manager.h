#pragma once

#include <string>

namespace GlassOS
{
    class SecurityManager
    {
    public:
        static bool Initialize();

        static bool SetPassword(
            const std::string& password);

        static bool VerifyPassword(
            const std::string& password);

        static bool EnableLockScreen();

        static bool DisableLockScreen();

        static bool IsLockScreenEnabled();

        static bool SetFirewall(
            bool enabled);

        static bool FirewallEnabled();

    private:
        static std::string userPassword;

        static bool lockScreen;

        static bool firewall;
    };
}

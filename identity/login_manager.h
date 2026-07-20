#pragma once

#include <string>

namespace GlassOS
{
    class LoginManager
    {
    public:
        static bool Initialize();

        static bool Login(
            const std::string& email,
            const std::string& password);

        static bool Logout();

        static bool IsUserLoggedIn();
    };
}

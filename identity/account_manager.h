#pragma once

#include <string>

namespace GlassOS
{
    class AccountManager
    {
    public:
        static bool Initialize();

        static bool Login(
            const std::string& email,
            const std::string& password);

        static bool Logout();

        static bool IsLoggedIn();

        static std::string CurrentUser();

    private:
        static bool loggedIn;
        static std::string currentUser;
    };
}

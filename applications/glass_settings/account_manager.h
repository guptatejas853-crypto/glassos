#pragma once

#include <string>

namespace GlassOS
{
    class AccountManager
    {
    public:
        static bool Initialize();

        static bool CreateAccount(
            const std::string& username);

        static bool SetUsername(
            const std::string& username);

        static std::string GetUsername();

        static bool DeleteAccount();

        static bool Exists();

    private:
        static std::string username;

        static bool accountExists;
    };
}

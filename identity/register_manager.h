#pragma once

#include <string>

namespace GlassOS
{
    class RegisterManager
    {
    public:
        static bool Initialize();

        static bool Register(
            const std::string& username,
            const std::string& email,
            const std::string& password);

        static bool UsernameExists(
            const std::string& username);

        static bool EmailExists(
            const std::string& email);
    };
}

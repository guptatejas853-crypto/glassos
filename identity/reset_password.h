#pragma once

#include <string>

namespace GlassOS
{
    class ResetPassword
    {
    public:
        static bool Initialize();

        static bool Reset(
            const std::string& email,
            const std::string& verificationCode,
            const std::string& newPassword);

        static bool ValidatePassword(
            const std::string& password);
    };
}

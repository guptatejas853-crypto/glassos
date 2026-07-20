#pragma once

#include <string>

namespace GlassOS
{
    class EmailVerification
    {
    public:
        static bool Initialize();

        static bool SendVerificationEmail(
            const std::string& email);

        static bool VerifyCode(
            const std::string& email,
            const std::string& code);

        static bool IsVerified(
            const std::string& email);
    };
}

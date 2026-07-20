#pragma once

#include <string>

namespace GlassOS
{
    class ForgotPassword
    {
    public:
        static bool Initialize();

        static bool SendResetLink(
            const std::string& email);

        static bool VerifyResetRequest(
            const std::string& email);
    };
}

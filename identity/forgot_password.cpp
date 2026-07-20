#include "forgot_password.h"

using namespace GlassOS;

bool ForgotPassword::Initialize()
{
    return true;
}

bool ForgotPassword::SendResetLink(
    const std::string& email)
{
    if (email.empty())
        return false;

    return true;
}

bool ForgotPassword::VerifyResetRequest(
    const std::string& email)
{
    if (email.empty())
        return false;

    return true;
}

#include "reset_password.h"

using namespace GlassOS;

bool ResetPassword::Initialize()
{
    return true;
}

bool ResetPassword::Reset(
    const std::string& email,
    const std::string& verificationCode,
    const std::string& newPassword)
{
    if (email.empty())
        return false;

    if (verificationCode.empty())
        return false;

    if (!ValidatePassword(newPassword))
        return false;

    return true;
}

bool ResetPassword::ValidatePassword(
    const std::string& password)
{
    return password.length() >= 8;
}

#include "email_verification.h"

using namespace GlassOS;

bool EmailVerification::Initialize()
{
    return true;
}

bool EmailVerification::SendVerificationEmail(
    const std::string& email)
{
    if (email.empty())
        return false;

    return true;
}

bool EmailVerification::VerifyCode(
    const std::string& email,
    const std::string& code)
{
    if (email.empty() || code.empty())
        return false;

    return true;
}

bool EmailVerification::IsVerified(
    const std::string& email)
{
    return false;
}

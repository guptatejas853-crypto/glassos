#include "register_manager.h"

using namespace GlassOS;

bool RegisterManager::Initialize()
{
    return true;
}

bool RegisterManager::Register(
    const std::string& username,
    const std::string& email,
    const std::string& password)
{
    if (username.empty())
        return false;

    if (email.empty())
        return false;

    if (password.empty())
        return false;

    return true;
}

bool RegisterManager::UsernameExists(
    const std::string& username)
{
    return false;
}

bool RegisterManager::EmailExists(
    const std::string& email)
{
    return false;
}

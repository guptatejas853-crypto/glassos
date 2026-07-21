#include "security_manager.h"

using namespace GlassOS;

std::string SecurityManager::userPassword;

bool SecurityManager::lockScreen = true;

bool SecurityManager::firewall = true;


bool SecurityManager::Initialize()
{
    userPassword.clear();

    lockScreen = true;

    firewall = true;

    return true;
}


bool SecurityManager::SetPassword(
    const std::string& password)
{
    userPassword = password;

    return true;
}


bool SecurityManager::VerifyPassword(
    const std::string& password)
{
    return userPassword == password;
}


bool SecurityManager::EnableLockScreen()
{
    lockScreen = true;

    return true;
}


bool SecurityManager::DisableLockScreen()
{
    lockScreen = false;

    return true;
}


bool SecurityManager::IsLockScreenEnabled()
{
    return lockScreen;
}


bool SecurityManager::SetFirewall(
    bool enabled)
{
    firewall = enabled;

    return true;
}


bool SecurityManager::FirewallEnabled()
{
    return firewall;
}

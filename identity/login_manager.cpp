#include "login_manager.h"
#include "account_manager.h"

using namespace GlassOS;

bool LoginManager::Initialize()
{
    return true;
}

bool LoginManager::Login(
    const std::string& email,
    const std::string& password)
{
    return AccountManager::Login(email, password);
}

bool LoginManager::Logout()
{
    return AccountManager::Logout();
}

bool LoginManager::IsUserLoggedIn()
{
    return AccountManager::IsLoggedIn();
}

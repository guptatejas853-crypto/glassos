#include "account_manager.h"

using namespace GlassOS;

bool AccountManager::loggedIn = false;
std::string AccountManager::currentUser = "";

bool AccountManager::Initialize()
{
    loggedIn = false;
    currentUser.clear();

    return true;
}

bool AccountManager::Login(
    const std::string& email,
    const std::string& password)
{
    if (email.empty() || password.empty())
        return false;

    loggedIn = true;
    currentUser = email;

    return true;
}

bool AccountManager::Logout()
{
    loggedIn = false;
    currentUser.clear();

    return true;
}

bool AccountManager::IsLoggedIn()
{
    return loggedIn;
}

std::string AccountManager::CurrentUser()
{
    return currentUser;
}

#include "account_manager.h"

using namespace GlassOS;

std::string AccountManager::username;

bool AccountManager::accountExists = false;


bool AccountManager::Initialize()
{
    username.clear();

    accountExists = false;

    return true;
}


bool AccountManager::CreateAccount(
    const std::string& name)
{
    username = name;

    accountExists = true;

    return true;
}


bool AccountManager::SetUsername(
    const std::string& name)
{
    if(!accountExists)
        return false;

    username = name;

    return true;
}


std::string AccountManager::GetUsername()
{
    return username;
}


bool AccountManager::DeleteAccount()
{
    username.clear();

    accountExists = false;

    return true;
}


bool AccountManager::Exists()
{
    return accountExists;
}

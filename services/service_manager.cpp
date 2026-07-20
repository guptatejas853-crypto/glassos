#include "service_manager.h"

#include "session_engine.h"
#include "account_manager.h"

using namespace GlassOS;

bool ServiceManager::Initialize()
{
    return true;
}

bool ServiceManager::StartServices()
{
    if (!StartSessionService())
        return false;

    if (!StartIdentityService())
        return false;

    StartNotificationService();

    StartUpdateService();

    StartNetworkService();

    return true;
}

bool ServiceManager::StopServices()
{
    return true;
}

bool ServiceManager::RestartServices()
{
    StopServices();

    return StartServices();
}

bool ServiceManager::StartSessionService()
{
    return SessionEngine::Initialize();
}

bool ServiceManager::StartIdentityService()
{
    return AccountManager::Initialize();
}

bool ServiceManager::StartNotificationService()
{
    return true;
}

bool ServiceManager::StartUpdateService()
{
    return true;
}

bool ServiceManager::StartNetworkService()
{
    return true;
}

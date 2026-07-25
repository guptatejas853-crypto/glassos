#include "session_manager.h"

using namespace GlassOS;

namespace
{
    bool sessionRunning = false;
}

bool SessionManager::Initialize()
{
    sessionRunning = false;
    return true;
}

bool SessionManager::StartSession()
{
    sessionRunning = true;
    return true;
}

bool SessionManager::EndSession()
{
    sessionRunning = false;
    return true;
}

bool SessionManager::LockSession()
{
    return sessionRunning;
}

bool SessionManager::IsRunning()
{
    return sessionRunning;
}

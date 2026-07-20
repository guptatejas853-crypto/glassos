#include "session_manager.h"

using namespace GlassOS;

RecoverySession SessionManager::currentSession;

bool SessionManager::CreateSession(const std::string& userId)
{
    currentSession.sessionId = "SESSION_001";
    currentSession.userId = userId;

    return RecoveryDatabase::Save(currentSession);
}

bool SessionManager::LoadSession()
{
    return RecoveryDatabase::Load(currentSession);
}

bool SessionManager::SaveSession()
{
    return RecoveryDatabase::Save(currentSession);
}

bool SessionManager::CloseSession()
{
    return RecoveryDatabase::Save(currentSession);
}

bool SessionManager::DeleteSession()
{
    return RecoveryDatabase::Delete();
}

RecoverySession& SessionManager::CurrentSession()
{
    return currentSession;
}

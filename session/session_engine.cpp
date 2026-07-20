#include "session_engine.h"

#include "autosave_manager.h"
#include "crash_detector.h"
#include "session_manager.h"
#include "workspace_recovery.h"

using namespace GlassOS;

bool SessionEngine::Initialize()
{
    if (!AutoSaveManager::Initialize())
        return false;

    return true;
}

bool SessionEngine::Start()
{
    if (CrashDetector::IsUnexpectedShutdown())
    {
        if (!SessionManager::LoadSession())
            return false;

        if (!WorkspaceRecovery::RecoverWorkspace())
            return false;
    }

    return true;
}

bool SessionEngine::Shutdown()
{
    AutoSaveManager::SaveNow();

    SessionManager::CloseSession();

    CrashDetector::MarkBootCompleted();

    return true;
}

bool SessionEngine::Recover()
{
    if (!SessionManager::LoadSession())
        return false;

    return WorkspaceRecovery::RecoverWorkspace();
}

bool SessionEngine::Save()
{
    return SessionManager::SaveSession();
}

bool SessionEngine::AutoSave()
{
    return AutoSaveManager::SaveNow();
}

#include "autosave_manager.h"
#include "session_manager.h"

using namespace GlassOS;

bool AutoSaveManager::Initialize()
{
    return true;
}

bool AutoSaveManager::Start()
{
    return true;
}

bool AutoSaveManager::Stop()
{
    return true;
}

bool AutoSaveManager::SaveNow()
{
    SaveApplications();
    SaveOpenFiles();
    SaveBrowserTabs();
    SaveWindowPositions();
    SaveClipboard();
    SaveDownloads();
    SaveTerminalSessions();
    SaveNotebook();
    SaveDesktopLayout();
    SaveOfflineGames();

    return SessionManager::SaveSession();
}

bool AutoSaveManager::SaveApplications()
{
    return true;
}

bool AutoSaveManager::SaveOpenFiles()
{
    return true;
}

bool AutoSaveManager::SaveBrowserTabs()
{
    return true;
}

bool AutoSaveManager::SaveWindowPositions()
{
    return true;
}

bool AutoSaveManager::SaveClipboard()
{
    return true;
}

bool AutoSaveManager::SaveDownloads()
{
    return true;
}

bool AutoSaveManager::SaveTerminalSessions()
{
    return true;
}

bool AutoSaveManager::SaveNotebook()
{
    return true;
}

bool AutoSaveManager::SaveDesktopLayout()
{
    return true;
}

bool AutoSaveManager::SaveOfflineGames()
{
    return true;
}

#include "autosave_manager.h"
#include "document_manager.h"

using namespace GlassOS;

bool AutoSaveManager::enabled = true;

int AutoSaveManager::intervalSeconds = 60;

bool AutoSaveManager::Initialize()
{
    enabled = true;
    intervalSeconds = 60;

    return true;
}

bool AutoSaveManager::Enable()
{
    enabled = true;

    return true;
}

bool AutoSaveManager::Disable()
{
    enabled = false;

    return true;
}

bool AutoSaveManager::SaveNow()
{
    if(!enabled)
        return false;

    if(!DocumentManager::IsOpened())
        return false;

    return DocumentManager::Save(
        DocumentManager::CurrentFile());
}

bool AutoSaveManager::SetInterval(
    int seconds)
{
    intervalSeconds = seconds;

    return true;
}

bool AutoSaveManager::IsEnabled()
{
    return enabled;
}

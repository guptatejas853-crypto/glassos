#include "backup_manager.h"

using namespace GlassOS;

std::string BackupManager::lastBackup;


bool BackupManager::Initialize()
{
    lastBackup.clear();

    return true;
}


bool BackupManager::CreateBackup(
    const std::string& location)
{
    lastBackup = location;

    return true;
}


bool BackupManager::RestoreBackup(
    const std::string& location)
{
    lastBackup = location;

    return true;
}


bool BackupManager::DeleteBackup(
    const std::string& location)
{
    if(lastBackup == location)
        lastBackup.clear();

    return true;
}


std::string BackupManager::LastBackup()
{
    return lastBackup;
}

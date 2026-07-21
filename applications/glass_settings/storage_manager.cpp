#include "storage_manager.h"

using namespace GlassOS;

std::string StorageManager::storagePath =
    "/glassos/storage";

bool StorageManager::protectedMode = true;


bool StorageManager::Initialize()
{
    storagePath =
        "/glassos/storage";

    protectedMode = true;

    return true;
}


bool StorageManager::SetStoragePath(
    const std::string& path)
{
    storagePath = path;

    return true;
}


std::string StorageManager::GetStoragePath()
{
    return storagePath;
}


bool StorageManager::ClearCache()
{
    return true;
}


bool StorageManager::EnableStorageProtection()
{
    protectedMode = true;

    return true;
}


bool StorageManager::IsStorageProtected()
{
    return protectedMode;
}

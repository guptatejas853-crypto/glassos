#include "display_manager.h"

#include "storage_manager.h"

using namespace GlassOS;

bool DisplayManager::Initialize()
{
    if(StorageManager::GetValue("resolution").empty())
    {
        StorageManager::SetValue(
            "resolution",
            "1920x1080");
    }

    if(StorageManager::GetValue("brightness").empty())
    {
        StorageManager::SetValue(
            "brightness",
            "100");
    }

    StorageManager::Save();

    return true;
}

void DisplayManager::SetResolution(
    const std::string& resolution)
{
    StorageManager::SetValue(
        "resolution",
        resolution);

    StorageManager::Save();
}

std::string DisplayManager::GetResolution()
{
    return StorageManager::GetValue(
        "resolution");
}

void DisplayManager::SetBrightness(
    int brightness)
{
    StorageManager::SetValue(
        "brightness",
        std::to_string(brightness));

    StorageManager::Save();
}

int DisplayManager::GetBrightness()
{
    auto value =
        StorageManager::GetValue(
            "brightness");

    return value.empty() ? 100 : std::stoi(value);
}

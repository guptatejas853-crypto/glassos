#include "audio_manager.h"

#include "storage_manager.h"

using namespace GlassOS;

bool AudioManager::Initialize()
{
    if(StorageManager::GetValue("volume").empty())
    {
        StorageManager::SetValue(
            "volume",
            "100");
    }

    if(StorageManager::GetValue("mute").empty())
    {
        StorageManager::SetValue(
            "mute",
            "false");
    }

    StorageManager::Save();

    return true;
}

void AudioManager::SetVolume(
    int volume)
{
    StorageManager::SetValue(
        "volume",
        std::to_string(volume));

    StorageManager::Save();
}

int AudioManager::GetVolume()
{
    auto value =
        StorageManager::GetValue(
            "volume");

    return value.empty() ? 100 : std::stoi(value);
}

void AudioManager::SetMute(
    bool mute)
{
    StorageManager::SetValue(
        "mute",
        mute ? "true" : "false");

    StorageManager::Save();
}

bool AudioManager::IsMuted()
{
    return StorageManager::GetValue("mute") == "true";
}

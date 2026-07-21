#include "sound_manager.h"

#include <unordered_map>

using namespace GlassOS;

int SoundManager::volume = 80;

bool SoundManager::muted = false;

static std::unordered_map<
    std::string,
    std::string> sounds;


bool SoundManager::Initialize()
{
    volume = 80;
    muted = false;

    sounds.clear();

    sounds["startup"] =
        "sounds/startup.glass";

    sounds["notification"] =
        "sounds/notification.glass";

    sounds["error"] =
        "sounds/error.glass";

    return true;
}

bool SoundManager::SetVolume(
    int value)
{
    if(value < 0)
        value = 0;

    if(value > 100)
        value = 100;

    volume = value;

    return true;
}

int SoundManager::GetVolume()
{
    return volume;
}

bool SoundManager::Mute()
{
    muted = true;

    return true;
}

bool SoundManager::Unmute()
{
    muted = false;

    return true;
}

bool SoundManager::IsMuted()
{
    return muted;
}

bool SoundManager::SetSystemSound(
    const std::string& name,
    const std::string& path)
{
    sounds[name] = path;

    return true;
}

std::string SoundManager::GetSystemSound(
    const std::string& name)
{
    auto it = sounds.find(name);

    if(it == sounds.end())
        return "";

    return it->second;
}

#pragma once

#include <string>

namespace GlassOS
{
    class SoundManager
    {
    public:
        static bool Initialize();

        static bool SetVolume(
            int volume);

        static int GetVolume();

        static bool Mute();

        static bool Unmute();

        static bool IsMuted();

        static bool SetSystemSound(
            const std::string& name,
            const std::string& path);

        static std::string GetSystemSound(
            const std::string& name);

    private:
        static int volume;

        static bool muted;
    };
}

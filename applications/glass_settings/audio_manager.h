#pragma once

namespace GlassOS
{
    class AudioManager
    {
    public:

        static bool Initialize();

        static void SetVolume(
            int volume);

        static int GetVolume();

        static void SetMute(
            bool mute);

        static bool IsMuted();
    };
}

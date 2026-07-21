#pragma once

namespace GlassOS
{
    class BrightnessManager
    {
    public:
        static bool Initialize();

        static bool SetBrightness(
            int level);

        static int GetBrightness();

        static bool Increase();

        static bool Decrease();

    private:
        static int brightnessLevel;
    };
}

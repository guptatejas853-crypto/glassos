#pragma once

namespace GlassOS
{
    class MouseManager
    {
    public:
        static bool Initialize();

        static bool SetSensitivity(
            int value);

        static int GetSensitivity();

        static bool EnableAcceleration();

        static bool DisableAcceleration();

        static bool IsAccelerationEnabled();

        static bool SetScrollSpeed(
            int speed);

        static int GetScrollSpeed();

    private:
        static int sensitivity;

        static int scrollSpeed;

        static bool acceleration;
    };
}

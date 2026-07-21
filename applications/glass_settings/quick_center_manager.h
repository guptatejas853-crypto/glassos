#pragma once

namespace GlassOS
{
    class QuickCenterManager
    {
    public:
        static bool Initialize();

        static bool ToggleNetwork();

        static bool ToggleBluetooth();

        static bool ToggleBrightness();

        static bool ToggleGlassShare();

        static bool ToggleGlassCast();

        static bool IsNetworkActive();

        static bool IsBluetoothActive();

        static bool IsBrightnessActive();

        static bool IsGlassShareActive();

        static bool IsGlassCastActive();

    private:
        static bool network;

        static bool bluetooth;

        static bool brightness;

        static bool glassShare;

        static bool glassCast;
    };
}

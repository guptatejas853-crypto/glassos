#pragma once

namespace GlassOS
{
    class BatteryManager
    {
    public:
        static bool Initialize();

        static int GetBatteryLevel();

        static bool IsCharging();

        static bool EnableBatterySaver();

        static bool DisableBatterySaver();

        static bool IsBatterySaverEnabled();

        static bool SetChargingLimit(
            int limit);

        static int GetChargingLimit();

    private:
        static int batteryLevel;

        static bool charging;

        static bool batterySaver;

        static int chargingLimit;
    };
}

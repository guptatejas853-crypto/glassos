#pragma once

#include <string>

namespace GlassOS
{
    class NetworkManager
    {
    public:
        static bool Initialize();

        static bool EnableWiFi();

        static bool DisableWiFi();

        static bool IsWiFiEnabled();

        static bool Connect(
            const std::string& network);

        static bool Disconnect();

        static std::string CurrentNetwork();

        static bool EnableBluetooth();

        static bool DisableBluetooth();

        static bool IsBluetoothEnabled();

    private:
        static bool wifiEnabled;

        static bool bluetoothEnabled;

        static std::string connectedNetwork;
    };
}

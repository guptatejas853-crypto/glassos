#include "network_manager.h"

using namespace GlassOS;

bool NetworkManager::wifiEnabled = false;

bool NetworkManager::bluetoothEnabled = false;

std::string NetworkManager::connectedNetwork;


bool NetworkManager::Initialize()
{
    wifiEnabled = true;

    bluetoothEnabled = false;

    connectedNetwork.clear();

    return true;
}

bool NetworkManager::EnableWiFi()
{
    wifiEnabled = true;

    return true;
}

bool NetworkManager::DisableWiFi()
{
    wifiEnabled = false;

    connectedNetwork.clear();

    return true;
}

bool NetworkManager::IsWiFiEnabled()
{
    return wifiEnabled;
}

bool NetworkManager::Connect(
    const std::string& network)
{
    if(!wifiEnabled)
        return false;

    connectedNetwork = network;

    return true;
}

bool NetworkManager::Disconnect()
{
    connectedNetwork.clear();

    return true;
}

std::string NetworkManager::CurrentNetwork()
{
    return connectedNetwork;
}

bool NetworkManager::EnableBluetooth()
{
    bluetoothEnabled = true;

    return true;
}

bool NetworkManager::DisableBluetooth()
{
    bluetoothEnabled = false;

    return true;
}

bool NetworkManager::IsBluetoothEnabled()
{
    return bluetoothEnabled;
}

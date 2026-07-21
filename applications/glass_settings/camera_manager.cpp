#include "camera_manager.h"

using namespace GlassOS;

bool CameraManager::cameraEnabled = false;

bool CameraManager::microphoneEnabled = true;


bool CameraManager::Initialize()
{
    cameraEnabled = false;

    microphoneEnabled = true;

    return true;
}


bool CameraManager::EnableCamera()
{
    cameraEnabled = true;

    return true;
}


bool CameraManager::DisableCamera()
{
    cameraEnabled = false;

    return true;
}


bool CameraManager::IsCameraEnabled()
{
    return cameraEnabled;
}


bool CameraManager::EnableMicrophone()
{
    microphoneEnabled = true;

    return true;
}


bool CameraManager::DisableMicrophone()
{
    microphoneEnabled = false;

    return true;
}


bool CameraManager::IsMicrophoneEnabled()
{
    return microphoneEnabled;
}

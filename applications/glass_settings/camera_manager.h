#pragma once

namespace GlassOS
{
    class CameraManager
    {
    public:
        static bool Initialize();

        static bool EnableCamera();

        static bool DisableCamera();

        static bool IsCameraEnabled();

        static bool EnableMicrophone();

        static bool DisableMicrophone();

        static bool IsMicrophoneEnabled();

    private:
        static bool cameraEnabled;

        static bool microphoneEnabled;
    };
}

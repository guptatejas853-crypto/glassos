#pragma once

#include <string>

namespace GlassOS
{
    class GPUManager
    {
    public:
        static bool Initialize();

        static std::string GetGPUType();

        static std::string GetGPUName();

        static bool HasDedicatedGPU();

        static bool HasIntegratedGPU();

        static bool EnableAcceleration();

        static bool DisableAcceleration();

        static bool IsAccelerationEnabled();

        static bool SetRenderingMode(
            const std::string& mode);

        static std::string GetRenderingMode();

    private:
        static std::string gpuType;

        static std::string gpuName;

        static std::string renderingMode;

        static bool acceleration;
    };
}

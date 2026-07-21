#include "gpu_manager.h"

using namespace GlassOS;


std::string GPUManager::gpuType =
    "Integrated";


std::string GPUManager::gpuName =
    "Generic Graphics";


std::string GPUManager::renderingMode =
    "Auto";


bool GPUManager::acceleration = true;



bool GPUManager::Initialize()
{
    /*
        Future hardware detection:

        Integrated:
        - Intel UHD
        - AMD Radeon iGPU

        Dedicated:
        - NVIDIA RTX
        - AMD Radeon RX

        Hybrid:
        - Integrated + Dedicated
    */

    // TODO:
// Detect GPU from GlassOS HAL / operating system.

gpuType = "Unknown";
gpuName = "Unknown GPU";


    renderingMode =
        "Auto";


    acceleration = true;


    return true;
}



std::string GPUManager::GetGPUType()
{
    return gpuType;
}



std::string GPUManager::GetGPUName()
{
    return gpuName;
}



bool GPUManager::HasDedicatedGPU()
{
    return gpuType == "Dedicated"
        || gpuType == "Hybrid";
}



bool GPUManager::HasIntegratedGPU()
{
    return gpuType == "Integrated"
        || gpuType == "Hybrid";
}



bool GPUManager::EnableAcceleration()
{
    acceleration = true;

    return true;
}



bool GPUManager::DisableAcceleration()
{
    acceleration = false;

    return true;
}



bool GPUManager::IsAccelerationEnabled()
{
    return acceleration;
}



bool GPUManager::SetRenderingMode(
    const std::string& mode)
{
    renderingMode = mode;

    return true;
}



std::string GPUManager::GetRenderingMode()
{
    return renderingMode;
}

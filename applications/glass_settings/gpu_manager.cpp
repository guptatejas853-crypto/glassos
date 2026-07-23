#include "gpu_manager.h"

using namespace GlassOS;

bool GPUManager::Initialize()
{
    return true;
}

std::string GPUManager::GPUName()
{
    return "Unknown GPU";
}

bool GPUManager::DedicatedGPU()
{
    return false;
}

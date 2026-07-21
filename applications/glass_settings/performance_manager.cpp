#include "performance_manager.h"

using namespace GlassOS;

std::string PerformanceManager::performanceMode =
    "Balanced";

bool PerformanceManager::backgroundOptimization =
    true;

bool PerformanceManager::powerSaving =
    false;


bool PerformanceManager::Initialize()
{
    performanceMode = "Balanced";

    backgroundOptimization = true;

    powerSaving = false;

    return true;
}


bool PerformanceManager::SetPerformanceMode(
    const std::string& mode)
{
    performanceMode = mode;

    return true;
}


std::string PerformanceManager::GetPerformanceMode()
{
    return performanceMode;
}


bool PerformanceManager::EnableBackgroundOptimization()
{
    backgroundOptimization = true;

    return true;
}


bool PerformanceManager::DisableBackgroundOptimization()
{
    backgroundOptimization = false;

    return true;
}


bool PerformanceManager::IsBackgroundOptimizationEnabled()
{
    return backgroundOptimization;
}


bool PerformanceManager::EnablePowerSaving()
{
    powerSaving = true;

    return true;
}


bool PerformanceManager::DisablePowerSaving()
{
    powerSaving = false;

    return true;
}


bool PerformanceManager::IsPowerSavingEnabled()
{
    return powerSaving;
}

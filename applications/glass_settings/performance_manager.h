#pragma once

#include <string>

namespace GlassOS
{
    class PerformanceManager
    {
    public:
        static bool Initialize();

        static bool SetPerformanceMode(
            const std::string& mode);

        static std::string GetPerformanceMode();

        static bool EnableBackgroundOptimization();

        static bool DisableBackgroundOptimization();

        static bool IsBackgroundOptimizationEnabled();

        static bool EnablePowerSaving();

        static bool DisablePowerSaving();

        static bool IsPowerSavingEnabled();

    private:
        static std::string performanceMode;

        static bool backgroundOptimization;

        static bool powerSaving;
    };
}

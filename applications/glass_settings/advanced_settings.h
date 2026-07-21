#pragma once

namespace GlassOS
{
    class AdvancedSettings
    {
    public:
        static bool Initialize();

        static bool EnableDeveloperMode();

        static bool DisableDeveloperMode();

        static bool IsDeveloperModeEnabled();

        static bool EnableExperimentalFeatures();

        static bool DisableExperimentalFeatures();

        static bool ExperimentalFeaturesEnabled();

        static bool RestoreFactoryDefaults();

    private:
        static bool developerMode;

        static bool experimentalFeatures;
    };
}

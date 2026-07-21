#include "advanced_settings.h"

using namespace GlassOS;

bool AdvancedSettings::developerMode = false;

bool AdvancedSettings::experimentalFeatures = false;


bool AdvancedSettings::Initialize()
{
    developerMode = false;

    experimentalFeatures = false;

    return true;
}


bool AdvancedSettings::EnableDeveloperMode()
{
    developerMode = true;

    return true;
}


bool AdvancedSettings::DisableDeveloperMode()
{
    developerMode = false;

    return true;
}


bool AdvancedSettings::IsDeveloperModeEnabled()
{
    return developerMode;
}


bool AdvancedSettings::EnableExperimentalFeatures()
{
    experimentalFeatures = true;

    return true;
}


bool AdvancedSettings::DisableExperimentalFeatures()
{
    experimentalFeatures = false;

    return true;
}


bool AdvancedSettings::ExperimentalFeaturesEnabled()
{
    return experimentalFeatures;
}


bool AdvancedSettings::RestoreFactoryDefaults()
{
    developerMode = false;

    experimentalFeatures = false;

    return true;
}

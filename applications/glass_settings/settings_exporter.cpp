#include "settings_exporter.h"

using namespace GlassOS;


bool SettingsExporter::Initialize()
{
    return true;
}


bool SettingsExporter::ExportSettings(
    const std::string& file)
{
    (void)file;

    /*
        Future:

        Export all Glass Settings
        as JSON

        Theme

        Wallpaper

        Fonts

        AI

        Network

        Drivers

        Devices

        etc.
    */

    return true;
}


bool SettingsExporter::ImportSettings(
    const std::string& file)
{
    (void)file;

    /*
        Future:

        Import JSON

        Restore all settings
    */

    return true;
}


bool SettingsExporter::ResetSettings()
{
    /*
        Future

        Restore defaults
    */

    return true;
}

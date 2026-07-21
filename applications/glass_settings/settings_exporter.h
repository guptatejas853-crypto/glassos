#pragma once

#include <string>

namespace GlassOS
{
    class SettingsExporter
    {
    public:
        static bool Initialize();

        static bool ExportSettings(
            const std::string& file);

        static bool ImportSettings(
            const std::string& file);

        static bool ResetSettings();
    };
}

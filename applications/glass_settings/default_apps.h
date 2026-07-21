#pragma once

#include <string>

namespace GlassOS
{
    class DefaultApps
    {
    public:
        static bool Initialize();

        static bool SetDefault(
            const std::string& type,
            const std::string& app);

        static std::string GetDefault(
            const std::string& type);

        static bool Reset();

    private:
        static std::string browser;

        static std::string fileManager;

        static std::string terminal;

        static std::string textEditor;
    };
}

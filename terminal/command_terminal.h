#pragma once

#include <string>

namespace GlassOS
{
    class CommandTerminal
    {
    public:
        static bool Initialize();

        static bool Start();

        static bool Stop();

        static bool Execute(const std::string& command);

    private:
        static bool VerifySystem();

        static bool RepairSystem();

        static bool ScanSystem();

        static bool UpdateSystem();

        static bool ShowHelp();

        static bool UnknownCommand(const std::string& command);
    };
}

#pragma once

#include <string>

namespace GlassOS
{
    class CommandExecutor
    {
    public:
        static bool Initialize();

        static bool Execute(
            const std::string& command);

        static bool ExecuteSystemCommand(
            const std::string& command);

        static bool ExecuteUserCommand(
            const std::string& command);

        static bool ExecuteAICommand(
            const std::string& command);
    };
}

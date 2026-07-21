#pragma once

#include <functional>
#include <string>
#include <unordered_map>
#include <vector>

namespace GlassOS
{
    class CommandRegistry
    {
    public:
        using CommandFunction = std::function<bool()>;

        static bool Initialize();

        static bool RegisterSystemCommand(
            const std::string& command,
            CommandFunction function);

        static bool RegisterUserCommand(
            const std::string& command,
            CommandFunction function);

        static bool RegisterAICommand(
            const std::string& command,
            CommandFunction function);

        static bool Execute(
            const std::string& command);

        static bool Exists(
            const std::string& command);

        static std::vector<std::string> GetAllCommands();

    private:
        static std::unordered_map<
            std::string,
            CommandFunction> systemCommands;

        static std::unordered_map<
            std::string,
            CommandFunction> userCommands;

        static std::unordered_map<
            std::string,
            CommandFunction> aiCommands;
    };
}

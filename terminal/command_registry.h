#pragma once

#include <functional>
#include <string>
#include <unordered_map>

namespace GlassOS
{
    class CommandRegistry
    {
    public:
        using CommandFunction = std::function<bool()>;

        static bool Initialize();

        static bool Register(
            const std::string& command,
            CommandFunction function);

        static bool Execute(
            const std::string& command);

        static bool Exists(
            const std::string& command);

    private:
        static std::unordered_map<
            std::string,
            CommandFunction> commands;
    };
}

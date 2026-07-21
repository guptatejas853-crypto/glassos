#pragma once

#include <string>

namespace GlassOS
{
    class UserCommandManager
    {
    public:
        static bool Initialize();

        static bool Load();

        static bool Save();

        static bool RegisterCommand(
            const std::string& command,
            const std::string& description);

        static bool RemoveCommand(
            const std::string& command);

        static bool Exists(
            const std::string& command);

    private:
        static const std::string commandDatabase;
    };
}

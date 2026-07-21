#pragma once

#include <string>
#include <vector>

namespace GlassOS
{
    struct CommandMetadata
    {
        std::string name;

        std::string description;

        std::string category;

        std::vector<std::string> aliases;

        std::string createdBy;

        bool administratorOnly;

        bool permanent;
    };

    class CommandMetadataManager
    {
    public:
        static bool Initialize();

        static bool Register(
            const CommandMetadata& metadata);

        static bool Exists(
            const std::string& command);

        static CommandMetadata Get(
            const std::string& command);

    private:
        static std::vector<CommandMetadata> database;
    };
}

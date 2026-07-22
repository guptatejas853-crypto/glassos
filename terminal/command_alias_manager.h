#pragma once

#include <string>
#include <unordered_map>

namespace GlassOS
{
    class CommandAliasManager
    {
    public:

        static bool Initialize();

        static bool AddAlias(
            const std::string& alias,
            const std::string& command);

        static bool RemoveAlias(
            const std::string& alias);

        static bool AliasExists(
            const std::string& alias);

        static std::string Resolve(
            const std::string& alias);

    private:

        static std::unordered_map<
            std::string,
            std::string> aliases;
    };
}

#pragma once

#include <string>

namespace GlassOS
{
    class CommandParser
    {
    public:
        static bool Initialize();

        static bool IsCommand(
            const std::string& input);

        static std::string Parse(
            const std::string& input);

        static std::string GetArguments(
            const std::string& input);

    private:
        static std::string Trim(
            const std::string& text);
    };
}

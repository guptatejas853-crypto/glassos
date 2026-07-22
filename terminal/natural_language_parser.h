#pragma once

#include <string>

namespace GlassOS
{
    class NaturalLanguageParser
    {
    public:

        static bool Initialize();

        static bool CanParse(
            const std::string& sentence);

        static std::string Parse(
            const std::string& sentence);

    private:

        static std::string ToLower(
            const std::string& value);
    };
}

#pragma once

#include <string>

namespace GlassOS
{
    class FindReplace
    {
    public:
        static bool Initialize();

        static int Find(
            const std::string& text,
            const std::string& keyword);

        static std::string ReplaceFirst(
            const std::string& text,
            const std::string& find,
            const std::string& replace);

        static std::string ReplaceAll(
            const std::string& text,
            const std::string& find,
            const std::string& replace);
    };
}

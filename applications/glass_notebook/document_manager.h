#pragma once

#include <string>

namespace GlassOS
{
    class DocumentManager
    {
    public:

        static bool Save(
            const std::string& file,
            const std::string& text);

        static std::string Load(
            const std::string& file);
    };
}

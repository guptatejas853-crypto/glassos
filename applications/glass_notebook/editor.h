#pragma once

#include <string>

namespace GlassOS
{
    class Editor
    {
    public:

        static bool Initialize();

        static void SetText(
            const std::string& text);

        static std::string GetText();

        static void Clear();

    private:

        static std::string text;
    };
}

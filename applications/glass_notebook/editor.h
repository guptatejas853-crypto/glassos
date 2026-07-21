#pragma once

#include <string>

namespace GlassOS
{
    class Editor
    {
    public:
        static bool Initialize();

        static bool NewDocument();

        static bool SetText(
            const std::string& text);

        static std::string GetText();

        static bool InsertText(
            const std::string& text);

        static bool Clear();

        static bool IsModified();

    private:
        static std::string documentText;

        static bool modified;
    };
}

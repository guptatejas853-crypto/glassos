#pragma once

#include <string>

namespace GlassOS
{
    class ClipboardManager
    {
    public:
        static bool Initialize();

        static bool Copy(
            const std::string& text);

        static bool Cut(
            const std::string& text);

        static std::string Paste();

        static bool Clear();

    private:
        static std::string clipboardText;
    };
}

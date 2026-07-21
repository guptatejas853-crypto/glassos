#pragma once

#include <string>
#include <vector>

namespace GlassOS
{
    struct HighlightToken
    {
        std::string word;
        std::string color;
    };

    class SyntaxHighlighter
    {
    public:
        static bool Initialize();

        static bool RegisterKeyword(
            const std::string& keyword,
            const std::string& color);

        static const std::vector<HighlightToken>&
            GetKeywords();

        static void Clear();

    private:
        static std::vector<HighlightToken> keywords;
    };
}

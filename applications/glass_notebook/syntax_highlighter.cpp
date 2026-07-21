#include "syntax_highlighter.h"

using namespace GlassOS;

std::vector<HighlightToken>
SyntaxHighlighter::keywords;

bool SyntaxHighlighter::Initialize()
{
    keywords.clear();

    RegisterKeyword("if","blue");
    RegisterKeyword("else","blue");
    RegisterKeyword("for","blue");
    RegisterKeyword("while","blue");
    RegisterKeyword("return","green");
    RegisterKeyword("class","orange");
    RegisterKeyword("struct","orange");
    RegisterKeyword("namespace","purple");

    return true;
}

bool SyntaxHighlighter::RegisterKeyword(
    const std::string& keyword,
    const std::string& color)
{
    keywords.push_back(
    {
        keyword,
        color
    });

    return true;
}

const std::vector<HighlightToken>&
SyntaxHighlighter::GetKeywords()
{
    return keywords;
}

void SyntaxHighlighter::Clear()
{
    keywords.clear();
}

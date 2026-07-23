#include "editor.h"

using namespace GlassOS;

std::string Editor::text;

bool Editor::Initialize()
{
    text.clear();

    return true;
}

void Editor::SetText(
    const std::string& value)
{
    text = value;
}

std::string Editor::GetText()
{
    return text;
}

void Editor::Clear()
{
    text.clear();
}

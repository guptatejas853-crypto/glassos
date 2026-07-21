#include "editor.h"

using namespace GlassOS;

std::string Editor::documentText;

bool Editor::modified = false;

bool Editor::Initialize()
{
    documentText.clear();
    modified = false;

    return true;
}

bool Editor::NewDocument()
{
    documentText.clear();
    modified = false;

    return true;
}

bool Editor::SetText(
    const std::string& text)
{
    documentText = text;
    modified = true;

    return true;
}

std::string Editor::GetText()
{
    return documentText;
}

bool Editor::InsertText(
    const std::string& text)
{
    documentText += text;
    modified = true;

    return true;
}

bool Editor::Clear()
{
    documentText.clear();
    modified = false;

    return true;
}

bool Editor::IsModified()
{
    return modified;
}

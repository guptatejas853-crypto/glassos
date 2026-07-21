#include "clipboard_manager.h"

using namespace GlassOS;

std::string ClipboardManager::clipboardText;

bool ClipboardManager::Initialize()
{
    clipboardText.clear();

    return true;
}

bool ClipboardManager::Copy(
    const std::string& text)
{
    clipboardText = text;

    return true;
}

bool ClipboardManager::Cut(
    const std::string& text)
{
    clipboardText = text;

    return true;
}

std::string ClipboardManager::Paste()
{
    return clipboardText;
}

bool ClipboardManager::Clear()
{
    clipboardText.clear();

    return true;
}

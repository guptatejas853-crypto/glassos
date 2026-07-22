#include "preview_pane.h"

using namespace GlassOS;

std::string PreviewPane::currentFile = "";

bool PreviewPane::Initialize()
{
    currentFile = "";

    return true;
}

void PreviewPane::ShowFile(
    const std::string& path)
{
    currentFile = path;
}

std::string PreviewPane::CurrentFile()
{
    return currentFile;
}

void PreviewPane::Clear()
{
    currentFile.clear();
}

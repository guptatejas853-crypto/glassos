#include "preview_pane.h"

#include <iostream>

using namespace GlassOS;

std::string PreviewPane::currentFile;

bool PreviewPane::Initialize()
{
    currentFile.clear();
    return true;
}

bool PreviewPane::ShowPreview(
    const std::string& filePath)
{
    currentFile = filePath;

    std::cout
        << "[Preview] "
        << filePath
        << std::endl;

    return true;
}

bool PreviewPane::Clear()
{
    currentFile.clear();
    return true;
}

std::string PreviewPane::CurrentFile()
{
    return currentFile;
}

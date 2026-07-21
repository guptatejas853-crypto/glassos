#include "document_manager.h"
#include "editor.h"

#include <fstream>
#include <sstream>

using namespace GlassOS;

std::string DocumentManager::currentFile;

bool DocumentManager::opened = false;

bool DocumentManager::Initialize()
{
    currentFile.clear();
    opened = false;

    return true;
}

bool DocumentManager::New()
{
    Editor::NewDocument();

    currentFile.clear();
    opened = false;

    return true;
}

bool DocumentManager::Open(
    const std::string& filePath)
{
    std::ifstream file(filePath);

    if(!file.is_open())
        return false;

    std::stringstream buffer;

    buffer << file.rdbuf();

    Editor::SetText(buffer.str());

    currentFile = filePath;
    opened = true;

    return true;
}

bool DocumentManager::Save(
    const std::string& filePath)
{
    std::ofstream file(filePath);

    if(!file.is_open())
        return false;

    file << Editor::GetText();

    currentFile = filePath;
    opened = true;

    return true;
}

bool DocumentManager::SaveAs(
    const std::string& filePath)
{
    return Save(filePath);
}

std::string DocumentManager::CurrentFile()
{
    return currentFile;
}

bool DocumentManager::IsOpened()
{
    return opened;
}

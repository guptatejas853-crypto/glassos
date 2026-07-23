#include "notebook_window.h"

#include "editor.h"
#include "document_manager.h"

using namespace GlassOS;

bool NotebookWindow::Initialize()
{
    return Editor::Initialize();
}

bool NotebookWindow::NewDocument()
{
    Editor::Clear();

    return true;
}

bool NotebookWindow::OpenDocument(
    const std::string& file)
{
    Editor::SetText(
        DocumentManager::Load(file));

    return true;
}

bool NotebookWindow::SaveDocument(
    const std::string& file)
{
    return DocumentManager::Save(
        file,
        Editor::GetText());
}

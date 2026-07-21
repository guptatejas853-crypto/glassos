#include "status_bar.h"

using namespace GlassOS;

int StatusBar::currentLine = 1;
int StatusBar::currentColumn = 1;
bool StatusBar::documentModified = false;
std::string StatusBar::statusMessage;

bool StatusBar::Initialize()
{
    currentLine = 1;
    currentColumn = 1;
    documentModified = false;
    statusMessage.clear();

    return true;
}

void StatusBar::SetLine(
    int line)
{
    currentLine = line;
}

void StatusBar::SetColumn(
    int column)
{
    currentColumn = column;
}

void StatusBar::SetModified(
    bool modified)
{
    documentModified = modified;
}

void StatusBar::SetMessage(
    const std::string& message)
{
    statusMessage = message;
}

int StatusBar::CurrentLine()
{
    return currentLine;
}

int StatusBar::CurrentColumn()
{
    return currentColumn;
}

bool StatusBar::IsModified()
{
    return documentModified;
}

std::string StatusBar::Message()
{
    return statusMessage;
}

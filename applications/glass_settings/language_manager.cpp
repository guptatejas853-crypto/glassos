#include "language_manager.h"

#include <vector>
#include <algorithm>

using namespace GlassOS;

std::string LanguageManager::currentLanguage =
    "English";

static std::vector<std::string> languages =
{
    "English",
    "Hindi",
    "Spanish",
    "French",
    "German"
};


bool LanguageManager::Initialize()
{
    currentLanguage = "English";

    return true;
}


bool LanguageManager::SetLanguage(
    const std::string& language)
{
    if(!IsSupported(language))
        return false;

    currentLanguage = language;

    return true;
}


std::string LanguageManager::GetLanguage()
{
    return currentLanguage;
}


bool LanguageManager::AddLanguage(
    const std::string& language)
{
    if(IsSupported(language))
        return false;

    languages.push_back(language);

    return true;
}


bool LanguageManager::IsSupported(
    const std::string& language)
{
    return std::find(
        languages.begin(),
        languages.end(),
        language)
        != languages.end();
}

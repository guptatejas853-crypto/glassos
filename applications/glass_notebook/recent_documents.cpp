#include "recent_documents.h"

#include <algorithm>

using namespace GlassOS;

std::vector<std::string>
RecentDocuments::documents;

bool RecentDocuments::Initialize()
{
    documents.clear();

    return true;
}

bool RecentDocuments::Add(
    const std::string& filePath)
{
    auto it = std::find(
        documents.begin(),
        documents.end(),
        filePath);

    if(it != documents.end())
        documents.erase(it);

    documents.insert(
        documents.begin(),
        filePath);

    if(documents.size() > 15)
        documents.pop_back();

    return true;
}

bool RecentDocuments::Remove(
    const std::string& filePath)
{
    auto it = std::find(
        documents.begin(),
        documents.end(),
        filePath);

    if(it != documents.end())
        documents.erase(it);

    return true;
}

void RecentDocuments::Clear()
{
    documents.clear();
}

const std::vector<std::string>&
RecentDocuments::GetList()
{
    return documents;
}

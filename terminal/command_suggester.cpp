#include "command_suggester.h"
#include "command_registry.h"

#include <algorithm>
#include <unordered_map>

using namespace GlassOS;

std::vector<std::string>
CommandSuggester::commands;

static std::unordered_map<
    std::string,
    std::string> aliases;

bool CommandSuggester::Initialize()
{
    commands.clear();

    return true;
}

void CommandSuggester::RegisterAlias(
    const std::string& alias,
    const std::string& command)
{
    aliases[alias] = command;
}

std::vector<std::string>
CommandSuggester::Suggest(
    const std::string& command)
{
    std::vector<std::string> result;

    auto alias = aliases.find(command);

    if(alias != aliases.end())
    {
        result.push_back(alias->second);
        return result;
    }

    std::vector<std::string> registered =
        CommandRegistry::GetAllCommands();

    for(const auto& item : registered)
    {
        if(EditDistance(command,item)<=3)
            result.push_back(item);
    }

    std::sort(result.begin(),result.end());

    return result;
}

int CommandSuggester::EditDistance(
    const std::string& first,
    const std::string& second)
{
    const size_t m = first.size();
    const size_t n = second.size();

    std::vector<std::vector<int>> dp(
        m+1,
        std::vector<int>(n+1));

    for(size_t i=0;i<=m;i++)
        dp[i][0]=i;

    for(size_t j=0;j<=n;j++)
        dp[0][j]=j;

    for(size_t i=1;i<=m;i++)
    {
        for(size_t j=1;j<=n;j++)
        {
            int cost =
                (first[i-1]==second[j-1])?0:1;

            dp[i][j]=std::min(
            {
                dp[i-1][j]+1,
                dp[i][j-1]+1,
                dp[i-1][j-1]+cost
            });
        }
    }

    return dp[m][n];
}

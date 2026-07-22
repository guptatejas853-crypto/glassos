#include "command_similarity.h"

#include <algorithm>

using namespace GlassOS;


bool CommandSimilarity::Initialize()
{
    return true;
}


// Simple Levenshtein Distance
int CommandSimilarity::Distance(
    const std::string& left,
    const std::string& right)
{
    const size_t m = left.size();
    const size_t n = right.size();

    std::vector<std::vector<int>> dp(
        m + 1,
        std::vector<int>(n + 1));

    for(size_t i = 0; i <= m; i++)
        dp[i][0] = static_cast<int>(i);

    for(size_t j = 0; j <= n; j++)
        dp[0][j] = static_cast<int>(j);

    for(size_t i = 1; i <= m; i++)
    {
        for(size_t j = 1; j <= n; j++)
        {
            int cost =
                (left[i - 1] == right[j - 1]) ? 0 : 1;

            dp[i][j] =
                std::min({
                    dp[i - 1][j] + 1,
                    dp[i][j - 1] + 1,
                    dp[i - 1][j - 1] + cost
                });
        }
    }

    return dp[m][n];
}


std::vector<std::string>
CommandSimilarity::FindClosest(
    const std::string& input,
    const std::vector<std::string>& commands)
{
    std::vector<std::string> result;

    for(const auto& command : commands)
    {
        if(Distance(input, command) <= 3)
            result.push_back(command);
    }

    return result;
}

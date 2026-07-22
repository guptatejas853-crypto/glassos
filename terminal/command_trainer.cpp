#include "command_trainer.h"

#include <unordered_map>

using namespace GlassOS;

static std::unordered_map<
    std::string,
    std::unordered_map<
        std::string,
        int>> transitions;


bool CommandTrainer::Initialize()
{
    transitions.clear();

    return true;
}


void CommandTrainer::Learn(
    const std::string&)
{
}


void CommandTrainer::LearnTransition(
    const std::string& previous,
    const std::string& current)
{
    transitions[previous][current]++;
}


std::string CommandTrainer::PredictNext(
    const std::string& current)
{
    auto it = transitions.find(current);

    if(it == transitions.end())
        return "";

    int best = -1;

    std::string next;

    for(const auto& item : it->second)
    {
        if(item.second > best)
        {
            best = item.second;
            next = item.first;
        }
    }

    return next;
}


void CommandTrainer::Reset()
{
    transitions.clear();
}

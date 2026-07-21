#include "ai_settings.h"

using namespace GlassOS;

bool AISettings::enabled = true;

std::string AISettings::model =
    "GlassAI";

std::string AISettings::assistantName =
    "Glass Assistant";


bool AISettings::Initialize()
{
    enabled = true;

    model = "GlassAI";

    assistantName = "Glass Assistant";

    return true;
}


bool AISettings::EnableAI()
{
    enabled = true;

    return true;
}


bool AISettings::DisableAI()
{
    enabled = false;

    return true;
}


bool AISettings::IsAIEnabled()
{
    return enabled;
}


bool AISettings::SetModel(
    const std::string& value)
{
    model = value;

    return true;
}


std::string AISettings::GetModel()
{
    return model;
}


bool AISettings::SetAssistantName(
    const std::string& name)
{
    assistantName = name;

    return true;
}


std::string AISettings::GetAssistantName()
{
    return assistantName;
}

#include "glass_effect.h"

#include <iostream>

using namespace GlassOS;

bool GlassEffect::Initialize()
{
    std::cout << "[GlassEffect] Glass UI Engine Initialized.\n";

    ApplyBlur();
    ApplyTransparency();
    ApplyRoundedCorners();

    return true;
}

void GlassEffect::ApplyBlur()
{
    std::cout << "[GlassEffect] Blur Effect Enabled.\n";
}

void GlassEffect::ApplyTransparency()
{
    std::cout << "[GlassEffect] Transparency Enabled.\n";
}

void GlassEffect::ApplyRoundedCorners()
{
    std::cout << "[GlassEffect] Rounded Corners Enabled.\n";
}

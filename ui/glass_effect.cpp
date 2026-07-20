#include "glass_effect.h"

#include <iostream>

using namespace GlassOS;

float GlassEffect::blurRadius = 20.0f;
float GlassEffect::opacity = 0.82f;
float GlassEffect::cornerRadius = 18.0f;

bool GlassEffect::shadowEnabled = true;
bool GlassEffect::glowEnabled = true;

bool GlassEffect::Initialize()
{
    std::cout << "[GlassEffect] Initialized\n";
    return true;
}

bool GlassEffect::EnableBlur()
{
    std::cout << "[GlassEffect] Blur Enabled\n";
    return true;
}

bool GlassEffect::DisableBlur()
{
    std::cout << "[GlassEffect] Blur Disabled\n";
    return true;
}

bool GlassEffect::SetBlurRadius(float radius)
{
    blurRadius = radius;
    return true;
}

bool GlassEffect::SetOpacity(float value)
{
    opacity = value;
    return true;
}

bool GlassEffect::SetCornerRadius(float radius)
{
    cornerRadius = radius;
    return true;
}

bool GlassEffect::SetShadow(bool enabled)
{
    shadowEnabled = enabled;
    return true;
}

bool GlassEffect::SetGlow(bool enabled)
{
    glowEnabled = enabled;
    return true;
}

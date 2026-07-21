#include "animation_manager.h"

using namespace GlassOS;

bool AnimationManager::animations = true;

bool AnimationManager::blur = true;

int AnimationManager::animationSpeed = 50;


bool AnimationManager::Initialize()
{
    animations = true;

    blur = true;

    animationSpeed = 50;

    return true;
}


bool AnimationManager::EnableAnimations()
{
    animations = true;

    return true;
}


bool AnimationManager::DisableAnimations()
{
    animations = false;

    return true;
}


bool AnimationManager::AreAnimationsEnabled()
{
    return animations;
}


bool AnimationManager::SetAnimationSpeed(
    int speed)
{
    if(speed < 0)
        speed = 0;

    if(speed > 100)
        speed = 100;

    animationSpeed = speed;

    return true;
}


int AnimationManager::GetAnimationSpeed()
{
    return animationSpeed;
}


bool AnimationManager::EnableBlurEffects()
{
    blur = true;

    return true;
}


bool AnimationManager::DisableBlurEffects()
{
    blur = false;

    return true;
}


bool AnimationManager::BlurEffectsEnabled()
{
    return blur;
}

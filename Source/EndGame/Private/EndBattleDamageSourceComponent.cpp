#include "EndBattleDamageSourceComponent.h"

FVector UEndBattleDamageSourceComponent::GetDir() const {
    return FVector{};
}

UEndBattleDamageSourceComponent::UEndBattleDamageSourceComponent() {
    this->PushCollisionActor = NULL;
}

void UEndBattleDamageSourceComponent::SetRVOAvoidanceUID(int32 UID)
{
}

int32 UEndBattleDamageSourceComponent::GetRVOAvoidanceUID()
{
    return 0;
}

void UEndBattleDamageSourceComponent::SetRVOAvoidanceWeight(float Weight)
{
}

float UEndBattleDamageSourceComponent::GetRVOAvoidanceWeight()
{
    return 0.f;
}
	
FVector UEndBattleDamageSourceComponent::GetRVOAvoidanceOrigin()
{
    return FVector(0);
}
	
float UEndBattleDamageSourceComponent::GetRVOAvoidanceRadius()
{
    return 0.f;
}
	
float UEndBattleDamageSourceComponent::GetRVOAvoidanceHeight()
{
    return 0.f;
}
	
float UEndBattleDamageSourceComponent::GetRVOAvoidanceConsiderationRadius()
{
    return 0.f;
}
	
FVector UEndBattleDamageSourceComponent::GetVelocityForRVOConsideration()
{
    return FVector(0);
}
	
int32 UEndBattleDamageSourceComponent::GetAvoidanceGroupMask()
{
    return 0;
}
	
int32 UEndBattleDamageSourceComponent::GetGroupsToAvoidMask()
{
    return 0;
}
	
int32 UEndBattleDamageSourceComponent::GetGroupsToIgnoreMask()
{
    return 0;
}
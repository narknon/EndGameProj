#include "EndInstancedLightweightPhysicsComponent.h"

void UEndInstancedLightweightPhysicsComponent::AddPhysicsInstance(const FTransform& Transform, const FVector& Impulse, float DelayTime, float LifeTime) {
}

UEndInstancedLightweightPhysicsComponent::UEndInstancedLightweightPhysicsComponent() {
    this->Radius = 1;
    this->ReserveCount = 0;
    this->BoundTraceIntervalFrame = 0;
    this->BoundAttenuationMin = 1;
    this->BoundAttenuationMax = 1;
    this->BoundCountMax = 0;
    this->MaxBoundedDelayDestroyTime = 1;
    this->GroundedStopSecnods = 1;
    this->GroundedAdjustRotationSpeed = 1;
    this->TraceIntervalSecondMin = 1;
    this->DisableGravityHeightVelocityThreshold = 1;
    this->HitSound = NULL;
}


#include "EndFeelerBarrierActor.h"
#include "Components/SplineComponent.h"
#include "Components/InstancedStaticMeshComponent.h"

void AEndFeelerBarrierActor::Stop(float BlendTime) {
}

void AEndFeelerBarrierActor::Play(float BlendTime) {
}

AEndFeelerBarrierActor::AEndFeelerBarrierActor() {
    this->InstanceCount = 0;
    this->LineCount = 0;
    this->EffectCount = 0;
    this->EffectTemplate = NULL;
    this->bRefreshInstance = true;
    this->VerticalHeightOffsetSize = 1;
    this->VerticalHeightOffsetPow = 1;
    this->ExtrusionDistanceMax = 1;
    this->ExtrusionMoveDeltaMax = 1;
    this->ExtrusionDistanceInterpSpeed = 1;
    this->bInverseMovement = false;
    this->FadeInWaitTime = 1;
    this->OverrideFadeInTime = 1;
    this->OverrideFadeOutTime = 1;
    this->SplinePointCount = 0;
    this->SplinePointRadius = 1;
    this->bRefreshSpline = true;
    this->bIsFaceGuardActive = false;
    this->minFaceGuardDistance = 1;
    this->BeginAnimationFrame = 0;
    this->EndAnimationFrame = 0;
    this->AnimationFrameRate = 1;
    this->AnimationPlayRate = 1;
    this->bIsWindActive = false;
    this->WindMaxForce = 1;
    this->WindMaxDistance = 1;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->InstancedMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Mesh"));
}


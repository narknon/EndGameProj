#include "EndFeelerBarrierActor.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/SplineComponent.h"

void AEndFeelerBarrierActor::Stop(float BlendTime) {
}

void AEndFeelerBarrierActor::Play(float BlendTime) {
}

AEndFeelerBarrierActor::AEndFeelerBarrierActor() {
    this->InstanceCount = 30;
    this->LineCount = 3;
    this->EffectCount = 6;
    this->EffectTemplate = NULL;
    this->bRefreshInstance = true;
    this->VerticalHeightOffsetSize = 0.00f;
    this->VerticalHeightOffsetPow = 1.00f;
    this->ExtrusionDistanceMax = 400.00f;
    this->ExtrusionMoveDeltaMax = 100.00f;
    this->ExtrusionDistanceInterpSpeed = 0.10f;
    this->bInverseMovement = false;
    this->FadeInWaitTime = 0.00f;
    this->OverrideFadeInTime = -1.00f;
    this->OverrideFadeOutTime = -1.00f;
    this->SplinePointCount = 8;
    this->SplinePointRadius = 1500.00f;
    this->bRefreshSpline = true;
    this->bIsFaceGuardActive = false;
    this->minFaceGuardDistance = 0.00f;
    this->BeginAnimationFrame = 1;
    this->EndAnimationFrame = 101;
    this->AnimationFrameRate = 30.00f;
    this->AnimationPlayRate = 1.00f;
    this->bIsWindActive = false;
    this->WindMaxForce = 4000.00f;
    this->WindMaxDistance = 400.00f;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->InstancedMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Mesh"));
}


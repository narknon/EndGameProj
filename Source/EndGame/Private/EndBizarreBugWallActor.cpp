#include "EndBizarreBugWallActor.h"
#include "Components/SplineComponent.h"
#include "Components/InstancedStaticMeshComponent.h"

void AEndBizarreBugWallActor::Stop(float BlendTime) {
}

void AEndBizarreBugWallActor::Play(float BlendTime) {
}

AEndBizarreBugWallActor::AEndBizarreBugWallActor() {
    this->SpawnCycle = 1;
    this->SplineMoveSpeed = 1;
    this->OverrideFadeInTime = 1;
    this->OverrideFadeOutTime = 1;
    this->MoveType = EEndBizarreBugWallMoveType::Direction;
    this->BeginAnimationFrame = 0;
    this->EndAnimationFrame = 0;
    this->AnimationFrameRate = 1;
    this->AnimationPlayRate = 1;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->InstancedMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Mesh"));
}


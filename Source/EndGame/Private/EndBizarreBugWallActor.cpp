#include "EndBizarreBugWallActor.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/SplineComponent.h"

void AEndBizarreBugWallActor::Stop(float BlendTime) {
}

void AEndBizarreBugWallActor::Play(float BlendTime) {
}

AEndBizarreBugWallActor::AEndBizarreBugWallActor() {
    this->SpawnCycle = 1.00f;
    this->SplineMoveSpeed = 100.00f;
    this->OverrideFadeInTime = -1.00f;
    this->OverrideFadeOutTime = -1.00f;
    this->MoveType = EEndBizarreBugWallMoveType::Direction;
    this->BeginAnimationFrame = 1;
    this->EndAnimationFrame = 101;
    this->AnimationFrameRate = 30.00f;
    this->AnimationPlayRate = 1.00f;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->InstancedMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Mesh"));
}


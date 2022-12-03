#include "EndEnvironmentInstancedStaticMeshActor.h"
#include "Components/InstancedStaticMeshComponent.h"

AEndEnvironmentInstancedStaticMeshActor::AEndEnvironmentInstancedStaticMeshActor() {
    this->InstancedMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("InstancedStaticMesh"));
    this->bUseAnimation = false;
    this->AnimateTime = 0.00f;
    this->AnimateTimeRate = 1.00f;
    this->AnimateTimeMax = 1000000.00f;
}


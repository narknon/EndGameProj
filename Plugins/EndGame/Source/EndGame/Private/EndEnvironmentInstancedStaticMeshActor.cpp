#include "EndEnvironmentInstancedStaticMeshActor.h"
#include "Components/InstancedStaticMeshComponent.h"

AEndEnvironmentInstancedStaticMeshActor::AEndEnvironmentInstancedStaticMeshActor() {
    this->InstancedMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("InstancedStaticMesh"));
    this->bUseAnimation = false;
    this->AnimateTime = 1;
    this->AnimateTimeRate = 1;
    this->AnimateTimeMax = 1;
}


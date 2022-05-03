#include "EndFA0150ContainerCharacter.h"

#include "EndSkeletalMeshComponent.h"

AEndFA0150ContainerCharacter::AEndFA0150ContainerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UEndSkeletalMeshComponent>(ACharacter::MeshComponentName)) {
    this->PutOnFloorSoundAsset = NULL;
    this->PutOnContainerSoundAsset = NULL;
    this->EnvironmentHitSoundAsset = NULL;
    this->ContainerHitSoundAsset = NULL;
}


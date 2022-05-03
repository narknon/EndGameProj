#include "EndFA0122RobotArmCharacter.h"

#include "EndSkeletalMeshComponent.h"

AEndFA0122RobotArmCharacter::AEndFA0122RobotArmCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UEndSkeletalMeshComponent>(ACharacter::MeshComponentName)) {
    this->TurningSoundAsset = NULL;
    this->StopTurningSoundAsset = NULL;
    this->ElevatingSoundAsset = NULL;
    this->StopElevatingSoundAsset = NULL;
    this->EnvironmentHitSoundAsset = NULL;
    this->ContainerHitSoundAsset = NULL;
}


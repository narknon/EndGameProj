#include "EndSwitchableMeshCharacter.h"

#include "EndSkeletalMeshComponent.h"

AEndSwitchableMeshCharacter::AEndSwitchableMeshCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UEndSkeletalMeshComponent>(ACharacter::MeshComponentName)) {
}


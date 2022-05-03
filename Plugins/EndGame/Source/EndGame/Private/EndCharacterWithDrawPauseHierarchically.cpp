#include "EndCharacterWithDrawPauseHierarchically.h"

#include "EndSkeletalMeshComponent.h"

AEndCharacterWithDrawPauseHierarchically::AEndCharacterWithDrawPauseHierarchically(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UEndSkeletalMeshComponent>(ACharacter::MeshComponentName)) {
}


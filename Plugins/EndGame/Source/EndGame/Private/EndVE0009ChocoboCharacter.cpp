#include "EndVE0009ChocoboCharacter.h"
#include "EndBoneAttachComponent.h"

AEndVE0009ChocoboCharacter::AEndVE0009ChocoboCharacter() {
    this->BoneAttach = CreateDefaultSubobject<UEndBoneAttachComponent>(TEXT("BoneAttach"));
    this->Carriage = NULL;
}


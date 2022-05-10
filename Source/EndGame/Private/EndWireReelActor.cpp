#include "EndWireReelActor.h"
#include "EndBoneAttachComponent.h"

void AEndWireReelActor::SetWireState(EEndWireReelState InState) {
}

AEndWireReelActor::AEndWireReelActor() {
    this->BoneAttach = CreateDefaultSubobject<UEndBoneAttachComponent>(TEXT("BoneAttach"));
}


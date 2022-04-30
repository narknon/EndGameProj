#include "EndBattleLevelSequenceActor.h"

void AEndBattleLevelSequenceActor::OnStop() {
}

AEndBattleLevelSequenceActor::AEndBattleLevelSequenceActor(const FObjectInitializer& ObjectInitializer) : ALevelSequenceActor(ObjectInitializer){
    this->CameraActor = NULL;
}


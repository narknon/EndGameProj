#include "EndBikeManagerActor.h"
#include "EndBikeNormalPopupComponent.h"
#include "EndBikeCutSceneComponent.h"
#include "EndBikeScoreComponent.h"

AEndBikeManagerActor::AEndBikeManagerActor() {
    this->pNormalPopupComponent = CreateDefaultSubobject<UEndBikeNormalPopupComponent>(TEXT("Normal"));
    this->pCutSceneComponent = CreateDefaultSubobject<UEndBikeCutSceneComponent>(TEXT("CutScene"));
    this->pScoreComponent = CreateDefaultSubobject<UEndBikeScoreComponent>(TEXT("Score"));
    this->pPlayerController = NULL;
}


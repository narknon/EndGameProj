#include "EndBattleAIPCRecognitionVolume.h"
#include "Components/BoxComponent.h"

AEndBattleAIPCRecognitionVolume::AEndBattleAIPCRecognitionVolume() {
    this->VolumeType = EAIPCRecognitionVolumeType::eCombatZone;
    this->GroupID = 0;
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
}


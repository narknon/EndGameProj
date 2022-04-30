#include "EndFieldActionActorAutoDoor.h"
#include "EndFieldActionTriggerComponent.h"
#include "Components/StaticMeshComponent.h"
#include "EndSwitchAreaBoxComponent.h"
#include "EndNavModifierComponent.h"

AEndFieldActionActorAutoDoor::AEndFieldActionActorAutoDoor() {
    this->AutoDoorActiveEffectType = EAutoDoorActiveEffectType::AutoDoorActiveNone;
    this->OpenVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("OpenVolume"));
    this->CloseVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("CloseVolume"));
    this->DividedVersatileVolume = CreateDefaultSubobject<UEndSwitchAreaBoxComponent>(TEXT("DividedVersatileVolume"));
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
    this->PcWallComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PcWallComponent"));
    this->PartyWallComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PartyWallComponent"));
    this->EnemyWallComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EnemyWallComponent"));
    this->AutoClosingTime = 1;
    this->DisablePartyWall = false;
    this->DisableEnemyWall = false;
    this->Type = EEndOneWayType::RightToLeft;
}


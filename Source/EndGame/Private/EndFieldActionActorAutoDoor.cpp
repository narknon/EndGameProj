#include "EndFieldActionActorAutoDoor.h"
#include "EndSwitchAreaBoxComponent.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndNavModifierComponent.h"
#include "Components/StaticMeshComponent.h"

AEndFieldActionActorAutoDoor::AEndFieldActionActorAutoDoor() {
    this->AutoDoorActiveEffectType = EAutoDoorActiveEffectType::AutoDoorActiveNone;
    this->OpenVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("OpenVolume"));
    this->CloseVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("CloseVolume"));
    this->DividedVersatileVolume = CreateDefaultSubobject<UEndSwitchAreaBoxComponent>(TEXT("DividedVersatileVolume"));
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
    this->PcWallComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PcWallComponent"));
    this->PartyWallComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PartyWallComponent"));
    this->EnemyWallComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EnemyWallComponent"));
    this->AutoClosingTime = 3.00f;
    this->DisablePartyWall = false;
    this->DisableEnemyWall = false;
    this->Type = EEndOneWayType::RightToLeft;
}


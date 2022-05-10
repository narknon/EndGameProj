#include "EndCharacterMovementActor.h"
#include "EndDuringCharacterMovementComponent.h"

AEndCharacterMovementActor::AEndCharacterMovementActor() {
    this->DuringCharacterMovementComponentList[0] = CreateDefaultSubobject<UEndDuringCharacterMovementComponent>(TEXT("DuringCharacterMovementComponent_1"));
    this->DuringCharacterMovementComponentList[1] = CreateDefaultSubobject<UEndDuringCharacterMovementComponent>(TEXT("DuringCharacterMovementComponent_2"));
    this->DuringCharacterMovementComponentList[2] = CreateDefaultSubobject<UEndDuringCharacterMovementComponent>(TEXT("DuringCharacterMovementComponent_3"));
    this->DuringCharacterMovementComponentList[3] = CreateDefaultSubobject<UEndDuringCharacterMovementComponent>(TEXT("DuringCharacterMovementComponent_4"));
    this->DuringCharacterMovementComponentList[4] = CreateDefaultSubobject<UEndDuringCharacterMovementComponent>(TEXT("DuringCharacterMovementComponent_5"));
    this->DuringCharacterMovementComponentList[5] = CreateDefaultSubobject<UEndDuringCharacterMovementComponent>(TEXT("DuringCharacterMovementComponent_6"));
    this->DuringCharacterMovementComponentList[6] = CreateDefaultSubobject<UEndDuringCharacterMovementComponent>(TEXT("DuringCharacterMovementComponent_7"));
    this->DuringCharacterMovementComponentList[7] = CreateDefaultSubobject<UEndDuringCharacterMovementComponent>(TEXT("DuringCharacterMovementComponent_8"));
    this->DuringCharacterMovementComponentList[8] = CreateDefaultSubobject<UEndDuringCharacterMovementComponent>(TEXT("DuringCharacterMovementComponent_9"));
    this->DuringCharacterMovementComponentList[9] = CreateDefaultSubobject<UEndDuringCharacterMovementComponent>(TEXT("DuringCharacterMovementComponent_10"));
    this->DuringCharacterMovementComponentList[10] = CreateDefaultSubobject<UEndDuringCharacterMovementComponent>(TEXT("DuringCharacterMovementComponent_11"));
    this->DuringCharacterMovementComponentList[11] = CreateDefaultSubobject<UEndDuringCharacterMovementComponent>(TEXT("DuringCharacterMovementComponent_12"));
}


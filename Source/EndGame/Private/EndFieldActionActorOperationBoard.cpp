#include "EndFieldActionActorOperationBoard.h"
#include "EndFieldActionTriggerComponent.h"
#include "EndNavModifierComponent.h"

AEndFieldActionActorOperationBoard::AEndFieldActionActorOperationBoard() {
    this->OperationType = EOperationType::DownButton;
    this->ElevatorButtonType = EElevatorButtonType::Up;
    this->EnableHandIK = false;
    this->HandIKOffsetZ = 0.00f;
    this->ForceDisableInputCancel = false;
    this->PressVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("PressVolume"));
    this->TargetIconVolume = CreateDefaultSubobject<UEndFieldActionTriggerComponent>(TEXT("TargetIconVolume"));
    this->ModifierVolume = CreateDefaultSubobject<UEndNavModifierComponent>(TEXT("Modifier"));
}


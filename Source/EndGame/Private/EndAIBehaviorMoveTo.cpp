#include "EndAIBehaviorMoveTo.h"

FEndAIBehaviorMoveTo::FEndAIBehaviorMoveTo() {
    this->WalkTolerance = 1;
    this->StopTolerance = 1;
    this->bInterpolationMove = false;
    this->MoveType = EEndAiMoveType::RUN;
    this->PathType = EFieldAiPathWayType::None;
    this->bCanOutSideMove = false;
}


#include "EndAIBehaviorMoveTo.h"

FEndAIBehaviorMoveTo::FEndAIBehaviorMoveTo() {
    this->WalkTolerance = 0.00f;
    this->StopTolerance = 0.00f;
    this->bInterpolationMove = false;
    this->MoveType = EEndAiMoveType::RUN;
    this->PathType = EFieldAiPathWayType::None;
    this->bCanOutSideMove = false;
}


#include "WireMovePointData.h"

FWireMovePointData::FWireMovePointData() {
    this->Index = 0;
    this->StartType = EEndWireMeshMoveStartType::Left;
    this->IsGoalPoint = false;
    this->bBottom = false;
}


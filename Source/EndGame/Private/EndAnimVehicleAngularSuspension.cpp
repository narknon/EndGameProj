#include "EndAnimVehicleAngularSuspension.h"

FEndAnimVehicleAngularSuspension::FEndAnimVehicleAngularSuspension() {
    this->bRestrictSuspensionLength = false;
    this->Mass = 1;
    this->Stiffness = 1;
    this->bKeepWheelRotation = false;
    this->KeepWheelLerpAlpha = 1;
    this->Length = 1;
    this->KeepWheelLength = 1;
}


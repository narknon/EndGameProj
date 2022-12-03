#include "EndAnimVehicleAngularSuspension.h"

FEndAnimVehicleAngularSuspension::FEndAnimVehicleAngularSuspension() {
    this->bRestrictSuspensionLength = false;
    this->Mass = 0.00f;
    this->Stiffness = 0.00f;
    this->bKeepWheelRotation = false;
    this->KeepWheelLerpAlpha = 0.00f;
    this->Length = 0.00f;
    this->KeepWheelLength = 0.00f;
}


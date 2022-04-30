#include "GravityAndAirResistanceControl.h"

FGravityAndAirResistanceControl::FGravityAndAirResistanceControl() {
    this->EnableGravityControl = false;
    this->GravityControlStartTime = 1;
    this->GravityControlRampUpTime = 1;
    this->GravityControlEndTime = 1;
    this->ExtraGravityMultiplier = 1;
    this->EnableAirResistanceControl = false;
    this->AirResistanceOnlyPlanar = false;
    this->AirResistanceControlStartTime = 1;
    this->AirResistanceControlRampUpTime = 1;
    this->AirResistanceControlEndTime = 1;
    this->AirResistanceMaxSpeed = 1;
    this->AirResistanceStrength = 1;
    this->AngularDamping = 1;
    this->CleanupTime = 1;
    this->DisableCollision = false;
    this->DisableCollisionStartTime = 1;
}


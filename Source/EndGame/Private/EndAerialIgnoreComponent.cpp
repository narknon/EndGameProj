#include "EndAerialIgnoreComponent.h"

UEndAerialIgnoreComponent::UEndAerialIgnoreComponent() {
    this->MeshShapeType = EAerialIgnoreShapeType::Box;
    this->SphereRadius = 50.00f;
}


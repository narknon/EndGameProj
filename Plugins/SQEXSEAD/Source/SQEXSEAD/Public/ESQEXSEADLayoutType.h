#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADLayoutType.generated.h"

UENUM()
namespace ESQEXSEADLayoutType {
    enum Type {
        Point,
        Line,
        Box,
        Polyline,
        Quadrilateral,
        TriangleStrip,
        TriangleFan,
        SphericalWedge,
        CylindricalSector,
    };
}


#pragma once
#include "CoreMinimal.h"
#include "EEndFootAttributeTypes.generated.h"

UENUM(BlueprintType)
enum class EEndFootAttributeTypes : uint8 {
    None,
    Metal_Parts,
    Metal_Floor,
    Metal_Ami,
    Con_Clean,
    Con_Sandmix,
    Con_Water,
    Wood_Floor,
    Wood_Parts,
    Wood_Old,
    Soil,
    Stone,
    Gravel,
    Grass,
    Carpet,
    Glass,
    Sand,
    Crap_Con,
    Crap_Pla,
    Crap_Tra,
    Woodchip,
    Water_Shallow,
    Water_Deep,
    Rubber,
    Metal_Totan,
    Metal_Cavity,
    Metal_Frame,
    Wood_Piller,
    Tarp,
    Slimy,
    MAX,
};


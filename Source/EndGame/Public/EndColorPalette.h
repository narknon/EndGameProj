#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EndColorPaletteMaterial.h"
#include "EEndEmissiveCurveType.h"
#include "EndColorPalette.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UEndColorPalette : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEndColorPaletteMaterial> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndEmissiveCurveType DefaultCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultDuration;
    
    UEndColorPalette();
};


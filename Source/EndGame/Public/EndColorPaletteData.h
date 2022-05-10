#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EndColorPaletteData.generated.h"

USTRUCT(BlueprintType)
struct FEndColorPaletteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor VelocityColor;
    
    UPROPERTY(EditAnywhere)
    float Intensity;
    
    UPROPERTY(EditAnywhere)
    float VelocityIntensity;
    
    UPROPERTY(EditAnywhere)
    float AnimateTimeFrequency;
    
    ENDGAME_API FEndColorPaletteData();
};


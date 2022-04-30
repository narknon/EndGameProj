#pragma once
#include "CoreMinimal.h"
#include "EndColorPaletteData.h"
#include "EndColorPaletteMaterial.generated.h"

USTRUCT(BlueprintType)
struct FEndColorPaletteMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndColorPaletteData Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEndColorPaletteData> Override;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseVelocity;
    
    ENDGAME_API FEndColorPaletteMaterial();
};


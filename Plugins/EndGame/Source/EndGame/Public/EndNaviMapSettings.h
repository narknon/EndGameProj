#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EndNaviMapSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=DefaultGame)
class ENDGAME_API UEndNaviMapSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float PixelPerCm;
    
    UPROPERTY(Config, EditAnywhere)
    float StartWallTraceZOffset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FirstWallTraceHalfExtent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SecondWallTraceHalfExtent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDrawCollideCache;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDrawCollideCacheLine;
    
    UEndNaviMapSettings();
};


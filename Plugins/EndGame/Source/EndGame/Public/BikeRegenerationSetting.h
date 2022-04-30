#pragma once
#include "CoreMinimal.h"
#include "BikeEffectInfo.h"
#include "BikeRegenerationSetting.generated.h"

USTRUCT(BlueprintType)
struct FBikeRegenerationSetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float HitPointRate_BeginRegeneration;
    
    UPROPERTY(EditAnywhere)
    float HitPointRate_EndRegeneration;
    
    UPROPERTY(EditAnywhere)
    float HitPointRate_RegenerationPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBikeEffectInfo Effect_Regeneration;
    
    ENDGAME_API FBikeRegenerationSetting();
};


#pragma once
#include "CoreMinimal.h"
#include "EndBattleSummonMinRangeLimitAbility.generated.h"

USTRUCT(BlueprintType)
struct FEndBattleSummonMinRangeLimitAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilityID;
    
    UPROPERTY(EditAnywhere)
    float MinRange;
    
    ENDGAME_API FEndBattleSummonMinRangeLimitAbility();
};


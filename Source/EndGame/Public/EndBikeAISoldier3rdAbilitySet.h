#pragma once
#include "CoreMinimal.h"
#include "EndBikeAISoldier3rdAbilitySet.generated.h"

USTRUCT(BlueprintType)
struct FEndBikeAISoldier3rdAbilitySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetNear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetFar;
    
    ENDGAME_API FEndBikeAISoldier3rdAbilitySet();
};


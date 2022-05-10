#pragma once
#include "CoreMinimal.h"
#include "BikeAllyAbilityList.generated.h"

USTRUCT(BlueprintType)
struct FBikeAllyAbilityList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> AbilityList;
    
    ENDGAME_API FBikeAllyAbilityList();
};


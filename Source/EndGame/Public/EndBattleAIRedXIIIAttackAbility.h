#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIRedXIIIAttackAbility.generated.h"

USTRUCT(BlueprintType)
struct FEndBattleAIRedXIIIAttackAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    ENDGAME_API FEndBattleAIRedXIIIAttackAbility();
};


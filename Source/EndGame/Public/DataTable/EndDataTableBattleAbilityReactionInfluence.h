#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleAbilityReactionInfluence.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleAbilityReactionInfluence : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 ReactionInfluenceType;
    
    UPROPERTY(EditAnywhere)
    uint8 AttackDirection;
    
    UPROPERTY(EditAnywhere)
    uint8 OnTakeAbilityInvoke;
    
    FEndDataTableBattleAbilityReactionInfluence();
};


#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleAbilityReactionInfluence.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleAbilityReactionInfluence : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ReactionInfluenceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AttackDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 OnTakeAbilityInvoke;
    
    FEndDataTableBattleAbilityReactionInfluence();
};


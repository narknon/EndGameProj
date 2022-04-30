#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleDamageSourceHitReaction.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleDamageSourceHitReaction : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 HitReactionType;
    
    UPROPERTY(EditAnywhere)
    TArray<float> HitReactionParam_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitReactionParamID;
    
    UPROPERTY(EditAnywhere)
    TArray<float> AerialHitReactionParam_Array;
    
    FEndDataTableBattleDamageSourceHitReaction();
};


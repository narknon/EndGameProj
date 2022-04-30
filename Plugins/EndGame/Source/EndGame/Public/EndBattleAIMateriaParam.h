#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIMateriaParam.generated.h"

USTRUCT(BlueprintType)
struct FEndBattleAIMateriaParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Linked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LinkedSlot;
    
    ENDGAME_API FEndBattleAIMateriaParam();
};


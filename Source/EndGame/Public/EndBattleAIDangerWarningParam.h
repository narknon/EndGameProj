#pragma once
#include "CoreMinimal.h"
#include "EndBattleAIDangerArea.h"
#include "EndBattleAIDangerWarningParam.generated.h"

class AEndCharacter;

USTRUCT(BlueprintType)
struct FEndBattleAIDangerWarningParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndCharacter* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndBattleAIDangerArea> AreaList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugDraw;
    
    ENDGAME_API FEndBattleAIDangerWarningParam();
};


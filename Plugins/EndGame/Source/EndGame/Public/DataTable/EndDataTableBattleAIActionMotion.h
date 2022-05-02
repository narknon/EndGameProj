#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleAIActionMotion.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleAIActionMotion : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharaSpec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActionName;
    
    UPROPERTY(EditAnywhere)
    float InTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InOverrideKeep;
    
    FEndDataTableBattleAIActionMotion();
};


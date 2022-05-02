#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleReportCondition.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleReportCondition : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 CheckType;
    
    UPROPERTY(EditAnywhere)
    uint8 ConditionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConditionTableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConditionValue;
    
    UPROPERTY(EditAnywhere)
    uint8 OperatorSymbol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AddCheckConditionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ViewString;
    
    FEndDataTableBattleReportCondition();
};


#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTablePushButtonAction.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTablePushButtonAction : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 PlayerPosType;
    
    UPROPERTY(EditAnywhere)
    float PlayerPosLength;
    
    UPROPERTY(EditAnywhere)
    float PushTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActorName_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Action_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> FinishAnimationStop_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StateTrigger_Array;
    
    FEndDataTablePushButtonAction();
};


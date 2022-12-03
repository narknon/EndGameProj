#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableAutoCameraShotLogic.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableAutoCameraShotLogic : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Condition_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Param_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ShotID_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> FailNextID_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SuccessNextID_Array;
    
    FEndDataTableAutoCameraShotLogic();
};


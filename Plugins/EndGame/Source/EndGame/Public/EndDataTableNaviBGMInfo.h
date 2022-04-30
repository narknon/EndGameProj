#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableNaviBGMInfo.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableNaviBGMInfo : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> FootBGMSetIDList_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SlotNumberList_Array;
    
    FEndDataTableNaviBGMInfo();
};


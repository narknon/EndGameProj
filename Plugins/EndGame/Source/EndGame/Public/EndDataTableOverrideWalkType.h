#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableOverrideWalkType.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableOverrideWalkType : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> OverrideWalkType_Array;
    
    FEndDataTableOverrideWalkType();
};


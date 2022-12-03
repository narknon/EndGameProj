#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableTalkGroup.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableTalkGroup : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TalkStateID_Array;
    
    FEndDataTableTalkGroup();
};


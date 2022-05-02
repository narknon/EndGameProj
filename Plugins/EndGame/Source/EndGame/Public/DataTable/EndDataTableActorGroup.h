#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableActorGroup.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableActorGroup : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActorList_Array;
    
    FEndDataTableActorGroup();
};


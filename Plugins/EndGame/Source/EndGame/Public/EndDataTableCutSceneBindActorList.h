#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableCutSceneBindActorList.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableCutSceneBindActorList : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BindActorName_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BindStateTriggerName_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> BindStateTriggerTime_Array;
    
    FEndDataTableCutSceneBindActorList();
};


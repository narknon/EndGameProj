#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleCameraSequence.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleCameraSequence : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 PriorityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ResourceName_Array;
    
    UPROPERTY(EditAnywhere)
    uint8 EndPitchType;
    
    FEndDataTableBattleCameraSequence();
};


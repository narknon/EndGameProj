#pragma once
#include "CoreMinimal.h"
#include "EndMenuColorCorrectionSelection.generated.h"

USTRUCT(BlueprintType)
struct FEndMenuColorCorrectionSelection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LUTIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NameTextID;
    
    ENDGAME_API FEndMenuColorCorrectionSelection();
};


#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBikeCombo.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBikeCombo : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ComboID_Array;
    
    FEndDataTableBikeCombo();
};


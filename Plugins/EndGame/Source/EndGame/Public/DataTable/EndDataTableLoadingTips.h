#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableLoadingTips.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableLoadingTips : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 IsUseLayerIndex;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> LayerIndex_Array;
    
    UPROPERTY(EditAnywhere)
    uint8 ReferenceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ViewTitle_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ViewText_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ImagePath_Array;
    
    FEndDataTableLoadingTips();
};


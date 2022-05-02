#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableNaviMapInfo.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableNaviMapInfo : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LayerNumber;
    
    UPROPERTY(EditAnywhere)
    float PixcelPerCm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TextureName_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> LayerToTexOriginX_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> LayerToTexOriginY_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> LayerToTexOriginZ_Array;
    
    FEndDataTableNaviMapInfo();
};


#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableAutoCameraLightGroup.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableAutoCameraLightGroup : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Light_Array;
    
    UPROPERTY(EditAnywhere)
    float EnvBakedLightIntensity;
    
    UPROPERTY(EditAnywhere)
    float CameraFValue;
    
    UPROPERTY(EditAnywhere)
    float ExposureBias;
    
    FEndDataTableAutoCameraLightGroup();
};


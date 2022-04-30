#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableSceneChanger.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableSceneChanger : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ShowTime;
    
    UPROPERTY(EditAnywhere)
    float ChangeBGMDelayTime;
    
    UPROPERTY(EditAnywhere)
    float ChangeBGMTime;
    
    UPROPERTY(EditAnywhere)
    uint8 ChangeBGMType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChangeBGMNameA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChangeBGMNameB;
    
    UPROPERTY(EditAnywhere)
    float ChangeFadeDelayTime;
    
    UPROPERTY(EditAnywhere)
    float ChangeFadeTime;
    
    UPROPERTY(EditAnywhere)
    uint8 ChangeFadeType;
    
    UPROPERTY(EditAnywhere)
    uint8 FadeTargetA;
    
    UPROPERTY(EditAnywhere)
    uint8 FadeTargetB;
    
    FEndDataTableSceneChanger();
};


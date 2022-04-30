#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EEndAIPersonalType.h"
#include "EEndAIUpdatePriority.h"
#include "UObject/NoExportTypes.h"
#include "EndAIModelPersonalityData.generated.h"

UCLASS(Blueprintable)
class ENDGAME_API UEndAIModelPersonalityData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndAIUpdatePriority InitialUpdatePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndAIPersonalType PersonalType;
    
    UPROPERTY(EditAnywhere)
    float ExperienceSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ExperienceSpeedRandomBias;
    
    UPROPERTY(EditAnywhere)
    float CautionCalmSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CautionCalmSpeedRandomBias;
    
    UPROPERTY(EditAnywhere)
    float RemoveRecognitionTime;
    
    UEndAIModelPersonalityData();
};


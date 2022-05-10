#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EndAIIntentionIdleBaseSetting.generated.h"

UCLASS(Blueprintable)
class ENDGAME_API UEndAIIntentionIdleBaseSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LookAtWaitTimeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LookAtRandomRotationMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LookAtRandomRotationMax;
    
    UPROPERTY(EditAnywhere)
    float LookAtWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SaccadeWaitTimeRange;
    
    UPROPERTY(EditAnywhere)
    float SaccadeWaitTimeAfterLookAt;
    
    UPROPERTY(EditAnywhere)
    float SaccadeUpdateCycle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SaccadeRandomRotationMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SaccadeRandomRotationMax;
    
    UPROPERTY(EditAnywhere)
    float SaccadeUpRate;
    
    UEndAIIntentionIdleBaseSetting();
};


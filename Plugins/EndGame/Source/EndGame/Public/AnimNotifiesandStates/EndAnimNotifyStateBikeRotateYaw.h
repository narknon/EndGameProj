#pragma once
#include "CoreMinimal.h"
#include "EEndBikeRotateYawType.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EndAnimNotifyStateBikeRotateYaw.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBikeRotateYaw : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndBikeRotateYawType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAcceleration;
    
    UPROPERTY(EditAnywhere)
    float RotateSpeed;
    
    UPROPERTY(EditAnywhere)
    float RotateMaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float RotateAcceleration;
    
    UPROPERTY(EditAnywhere)
    float RotateArrivalTime;
    
    UPROPERTY(EditAnywhere)
    float FloatParam1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IdParam1;
    
    UEndAnimNotifyStateBikeRotateYaw();
};


#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EndAnimNotifyStateBikePositioning.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBikePositioning : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable_Forward;
    
    UPROPERTY(EditAnywhere)
    float PositionOffset_Forward;
    
    UPROPERTY(EditAnywhere)
    float PositioningSpeed_Forward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable_Right;
    
    UPROPERTY(EditAnywhere)
    float PositionOffset_Right;
    
    UPROPERTY(EditAnywhere)
    float PositioningSpeed_Right;
    
public:
    UEndAnimNotifyStateBikePositioning();
};


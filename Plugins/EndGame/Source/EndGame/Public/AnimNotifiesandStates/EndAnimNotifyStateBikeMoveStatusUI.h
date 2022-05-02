#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EndAnimNotifyStateBikeMoveStatusUI.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBikeMoveStatusUI : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    float ZOffset;
    
    UPROPERTY(EditAnywhere)
    float MoveInTime;
    
    UPROPERTY(EditAnywhere)
    float MoveOutTime;
    
    UEndAnimNotifyStateBikeMoveStatusUI();
};


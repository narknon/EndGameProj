#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EBattleNotifyState.h"
#include "EndBattleNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UEndBattleNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBattleNotifyState::Type> State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StringArgment;
    
    UEndBattleNotifyState();
};


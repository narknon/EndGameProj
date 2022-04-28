#pragma once
#include "CoreMinimal.h"
#include "EndAnimNotifyStatePlaySound.h"
#include "EndAnimNotifyStatePlayCharacterSound.generated.h"

class USoundBase;

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStatePlayCharacterSound : public UEndAnimNotifyStatePlaySound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDedicatedAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* DedicatedActionSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* DedicatedActionOnEndSound;
    
    UEndAnimNotifyStatePlayCharacterSound();
};


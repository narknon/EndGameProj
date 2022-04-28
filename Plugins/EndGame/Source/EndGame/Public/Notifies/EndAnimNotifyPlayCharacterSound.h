#pragma once
#include "CoreMinimal.h"
#include "EndAnimNotifyPlaySound.h"
#include "EndAnimNotifyPlayCharacterSound.generated.h"

class USoundBase;

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyPlayCharacterSound : public UEndAnimNotifyPlaySound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAutoSE;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDedicatedAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* DedicatedActionSound;
    
    UEndAnimNotifyPlayCharacterSound();
};


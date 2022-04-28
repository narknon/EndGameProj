#pragma once
#include "CoreMinimal.h"
#include "EndAnimNotifyBattleDamage.h"
#include "EndAnimNotifyBattleDamageRandom.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyBattleDamageRandom : public UEndAnimNotifyBattleDamage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 Probability;
    
    UPROPERTY(EditAnywhere)
    FString TextLabel;
    
    UPROPERTY(EditAnywhere)
    float Time;
    
    UEndAnimNotifyBattleDamageRandom();
};


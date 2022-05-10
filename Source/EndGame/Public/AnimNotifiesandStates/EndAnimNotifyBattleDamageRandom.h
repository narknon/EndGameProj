#pragma once
#include "CoreMinimal.h"
#include "EndAnimNotifyBattleDamage.h"
#include "EndAnimNotifyBattleDamageRandom.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ENDGAME_API UEndAnimNotifyBattleDamageRandom : public UEndAnimNotifyBattleDamage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 Probability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextLabel;
    
    UPROPERTY(EditAnywhere)
    float Time;
    
    UEndAnimNotifyBattleDamageRandom();
};


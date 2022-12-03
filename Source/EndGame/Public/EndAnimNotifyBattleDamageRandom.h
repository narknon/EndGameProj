#pragma once
#include "CoreMinimal.h"
#include "EndAnimNotifyBattleDamage.h"
#include "EndAnimNotifyBattleDamageRandom.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ENDGAME_API UEndAnimNotifyBattleDamageRandom : public UEndAnimNotifyBattleDamage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Probability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UEndAnimNotifyBattleDamageRandom();
};


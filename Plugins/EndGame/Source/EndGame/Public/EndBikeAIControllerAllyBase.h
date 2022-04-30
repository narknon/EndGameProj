#pragma once
#include "CoreMinimal.h"
#include "EndBikeAIController.h"
#include "EBikeDirection.h"
#include "BikeAllyAbilityList.h"
#include "EBikeAllyCharacterType.h"
#include "EndBikeAIControllerAllyBase.generated.h"

UCLASS(Abstract, Blueprintable)
class AEndBikeAIControllerAllyBase : public AEndBikeAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBikeDirection, FBikeAllyAbilityList> AbilitySetting;
    
    UPROPERTY(EditAnywhere)
    TMap<float, FName> CrisisTalkSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DyingMotionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBikeAllyCharacterType Attacker;
    
public:
    AEndBikeAIControllerAllyBase();
};


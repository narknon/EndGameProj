#pragma once
#include "CoreMinimal.h"
#include "EndBikeAIControllerEnemyBase.h"
#include "EndBikeAISoldier3rdParameter.h"
#include "EndBikeAISoldier3rdAbilitySet.h"
#include "EndBikeAISoldier3rdController.generated.h"

class AEndBikeAISoldier3rdController;

UCLASS(Blueprintable)
class AEndBikeAISoldier3rdController : public AEndBikeAIControllerEnemyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBikeAISoldier3rdParameter mParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBikeAISoldier3rdAbilitySet AbilitySetForPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBikeAISoldier3rdAbilitySet AbilitySetForAlly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AEndBikeAISoldier3rdController*> mFriends;
    
public:
    AEndBikeAISoldier3rdController();
};


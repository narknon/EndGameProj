#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include "EndAIModelControllerInterface.h"
#include "EndPlayerController.generated.h"

class AActor;
class AEndCharacter;
class UEndPlayerExistNavAreaComponent;
class UEndCapsuleOverlapComponent;
class AEndBattleTalkOnEndBattleActor;

UCLASS(Blueprintable)
class ENDGAME_API AEndPlayerController : public APlayerController, public IEndAIModelControllerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PlayerTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndCapsuleOverlapComponent* EndCapsuleOverlapComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndPlayerExistNavAreaComponent* PlayerExistNavAreaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndCharacter* LeaderCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AEndBattleTalkOnEndBattleActor> BattleTalkOnEndBattleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndBattleTalkOnEndBattleActor* BattleTalkOnEndBattle;
    
private:
    UPROPERTY(Config, EditAnywhere)
    float MaxMouseSensitivity;
    
    UPROPERTY(Config, EditAnywhere)
    float MinMouseSensitivity;
    
public:
    AEndPlayerController();
    
    // Fix for true pure virtual functions not being implemented
};


#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include "EndAIModelControllerInterface.h"
#include "EndPlayerController.generated.h"

class AActor;
class AEndCharacter;
class UEndCapsuleOverlapComponent;
class UEndPlayerExistNavAreaComponent;
class AEndBattleTalkOnEndBattleActor;

UCLASS(Blueprintable)
class ENDGAME_API AEndPlayerController : public APlayerController, public IEndAIModelControllerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PlayerTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndCapsuleOverlapComponent* EndCapsuleOverlapComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndPlayerExistNavAreaComponent* PlayerExistNavAreaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndCharacter* LeaderCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AEndBattleTalkOnEndBattleActor> BattleTalkOnEndBattleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndBattleTalkOnEndBattleActor* BattleTalkOnEndBattle;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMouseSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinMouseSensitivity;
    
public:
    AEndPlayerController();
    
    // Fix for true pure virtual functions not being implemented
};


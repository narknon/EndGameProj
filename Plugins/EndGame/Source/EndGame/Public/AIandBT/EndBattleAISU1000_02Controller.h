#pragma once
#include "CoreMinimal.h"
#include "EEndBattleDamageSourceHitReactionType.h"
#include "EndBattleAIController.h"
#include "EndRamuhCoreKnockbackParam.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleAISU1000_02Controller.generated.h"

class AEndCharacter;

UCLASS(Blueprintable)
class AEndBattleAISU1000_02Controller : public AEndBattleAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float CoreMaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float CoreSnapSpeed;
    
    UPROPERTY(EditAnywhere)
    float CoreSnapEndQuantity;
    
    UPROPERTY(EditAnywhere)
    float RamuhDistance;
    
    UPROPERTY(EditAnywhere)
    float UcpcDistance;
    
    UPROPERTY(EditAnywhere)
    float RepulsiveDistance;
    
    UPROPERTY(EditAnywhere)
    float RepulsiveAccQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IgnoreRepulsiveActgions;
    
    UPROPERTY(EditAnywhere)
    float CoreMoveInterval;
    
    UPROPERTY(EditAnywhere)
    float RepulsiveOriginInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IgnoreStopFollowAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IgnoreStopReturnAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanFollow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ReturnLocation;
    
    UPROPERTY(EditAnywhere)
    float ReturnSpeed;
    
    UPROPERTY(EditAnywhere)
    float TurnSpeed;
    
    UPROPERTY(EditAnywhere)
    TMap<EEndBattleDamageSourceHitReactionType, float> OverrideKnockbackDistance;
    
    UPROPERTY(EditAnywhere)
    float FixedFieldLocationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndRamuhCoreKnockbackParam> KnockbackParam;
    
public:
    AEndBattleAISU1000_02Controller();
    UFUNCTION(BlueprintCallable)
    void SetOverrideFollowTarget(AEndCharacter* InChara);
    
    UFUNCTION(BlueprintCallable)
    void SetFollow(bool InFollow, FVector InLocation);
    
    UFUNCTION(BlueprintCallable)
    void ResetConditionAfterThrown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCheckFollow(bool OutBattleArea, bool NotOwnerTrace, bool NotUcpcTrace);
    
};


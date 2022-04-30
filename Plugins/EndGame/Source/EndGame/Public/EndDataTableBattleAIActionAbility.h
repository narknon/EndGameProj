#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleAIActionAbility.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleAIActionAbility : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharaSpec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InAbilityID;
    
    UPROPERTY(EditAnywhere)
    uint8 InID;
    
    UPROPERTY(EditAnywhere)
    float InTime;
    
    UPROPERTY(EditAnywhere)
    float InTimeout;
    
    UPROPERTY(EditAnywhere)
    float InATB;
    
    UPROPERTY(EditAnywhere)
    float InRandomATB;
    
    UPROPERTY(EditAnywhere)
    float InMinRange;
    
    UPROPERTY(EditAnywhere)
    float InMaxRange;
    
    UPROPERTY(EditAnywhere)
    float InActionMin;
    
    UPROPERTY(EditAnywhere)
    float InActionMax;
    
    UPROPERTY(EditAnywhere)
    float InActionHeightMin;
    
    UPROPERTY(EditAnywhere)
    float InActionHeightMax;
    
    UPROPERTY(EditAnywhere)
    float InViewRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ViewReverse;
    
    UPROPERTY(EditAnywhere)
    float InDelayMove;
    
    UPROPERTY(EditAnywhere)
    float InDelayAbility;
    
    UPROPERTY(EditAnywhere)
    float InRandomDelayAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InNeedMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InNeedBetterMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InAerialNeedMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InCancelLostTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideLeftAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideRightAbility;
    
    UPROPERTY(EditAnywhere)
    uint8 Purpose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InNeedSee;
    
    FEndDataTableBattleAIActionAbility();
};


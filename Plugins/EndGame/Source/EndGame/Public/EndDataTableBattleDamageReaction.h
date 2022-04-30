#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBattleDamageReaction.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBattleDamageReaction : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float KnockBackDistance;
    
    UPROPERTY(EditAnywhere)
    float KnockBackDistanceMin;
    
    UPROPERTY(EditAnywhere)
    float KnockBackDistanceMax;
    
    UPROPERTY(EditAnywhere)
    float KnockBackTime;
    
    UPROPERTY(EditAnywhere)
    float KnockBackRagidTime;
    
    UPROPERTY(EditAnywhere)
    float KnockBackRagidTimeMin;
    
    UPROPERTY(EditAnywhere)
    float KnockBackRagidTimeMax;
    
    UPROPERTY(EditAnywhere)
    float LaunchHeight;
    
    UPROPERTY(EditAnywhere)
    float LaunchHeightMin;
    
    UPROPERTY(EditAnywhere)
    float LaunchHeightMax;
    
    UPROPERTY(EditAnywhere)
    float RiseGravityScale;
    
    UPROPERTY(EditAnywhere)
    float FallGravityScale;
    
    UPROPERTY(EditAnywhere)
    float AirKnockBackDistance;
    
    UPROPERTY(EditAnywhere)
    float AirKnockBackDistanceMin;
    
    UPROPERTY(EditAnywhere)
    float AirKnockBackDistanceMax;
    
    UPROPERTY(EditAnywhere)
    float AirLaunchHeight;
    
    UPROPERTY(EditAnywhere)
    float AirLaunchHeightMin;
    
    UPROPERTY(EditAnywhere)
    float AirLaunchHeightMax;
    
    UPROPERTY(EditAnywhere)
    float AirRiseGravityScale;
    
    UPROPERTY(EditAnywhere)
    float AirFallGravityScale;
    
    UPROPERTY(EditAnywhere)
    float AirStrikeSpeed;
    
    UPROPERTY(EditAnywhere)
    float AirStrikeSpeedMin;
    
    UPROPERTY(EditAnywhere)
    float AirStrikeSpeedMax;
    
    UPROPERTY(EditAnywhere)
    float CutKeepAddReactionKnockBackDistance;
    
    UPROPERTY(EditAnywhere)
    float FieldKnockBackDistance;
    
    FEndDataTableBattleDamageReaction();
};


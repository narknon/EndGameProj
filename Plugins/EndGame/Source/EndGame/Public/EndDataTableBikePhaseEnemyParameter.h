#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBikePhaseEnemyParameter.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBikePhaseEnemyParameter : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float PopupOffset;
    
    UPROPERTY(EditAnywhere)
    float EntryRelativePosition;
    
    UPROPERTY(EditAnywhere)
    float OvertookRelativePosition;
    
    UPROPERTY(EditAnywhere)
    float FollowingPosition;
    
    UPROPERTY(EditAnywhere)
    float RelativeSpeedAtPlayerAccel;
    
    UPROPERTY(EditAnywhere)
    float RelativeSpeedAtPlayerBrake;
    
    UPROPERTY(EditAnywhere)
    uint8 EnableTriggerBox;
    
    UPROPERTY(EditAnywhere)
    uint8 SlalomLastPosition;
    
    FEndDataTableBikePhaseEnemyParameter();
};


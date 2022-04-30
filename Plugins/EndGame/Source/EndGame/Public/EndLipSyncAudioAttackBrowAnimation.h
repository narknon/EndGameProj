#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EndLipSyncAudioAttackBrowAnimation.generated.h"

USTRUCT(BlueprintType)
struct FEndLipSyncAudioAttackBrowAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Offset;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    ENDGAME_API FEndLipSyncAudioAttackBrowAnimation();
};


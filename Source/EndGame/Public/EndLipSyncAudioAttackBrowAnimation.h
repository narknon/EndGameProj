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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOutTime;
    
    ENDGAME_API FEndLipSyncAudioAttackBrowAnimation();
};


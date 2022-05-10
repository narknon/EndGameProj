#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EndAnimSet.generated.h"

class UEndLocomotionData;
class UAnimationAsset;

UCLASS(Blueprintable)
class ENDGAME_API UEndAnimSet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndLocomotionData* OverrideLocomotionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAnimationAsset*> AnimationAssets;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeInCluster;
    
    UEndAnimSet();
};


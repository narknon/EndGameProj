#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EndAnimSet.generated.h"

class UEndLocomotionData;
class UAnimationAsset;

UCLASS()
class ENDGAME_API UEndAnimSet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UEndLocomotionData* OverrideLocomotionData;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, UAnimationAsset*> AnimationAssets;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bCanBeInCluster;
    
    UEndAnimSet();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifyRunEnvironmentPhysSpawner.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyRunEnvironmentPhysSpawner : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName EnvironmentPhysSpawnerName;
    
    UEndAnimNotifyRunEnvironmentPhysSpawner();
};

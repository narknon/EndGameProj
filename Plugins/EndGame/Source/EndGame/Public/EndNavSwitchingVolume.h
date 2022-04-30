#pragma once
#include "CoreMinimal.h"
#include "EndNavModifierVolumeBase.h"
#include "ECollisionProfileType.h"
#include "EndNavSwitchingVolume.generated.h"

UCLASS(Blueprintable)
class AEndNavSwitchingVolume : public AEndNavModifierVolumeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollisionProfileType CollisionProfileType;
    
public:
    AEndNavSwitchingVolume(const FObjectInitializer& ObjectInitializer);
};


#pragma once
#include "CoreMinimal.h"
#include "EndFieldActionActorBase.h"
#include "MonkeyBarPoint.h"
#include "MonkeyBarLinkPoint.h"
#include "EndFieldActionActorMonkeyBars.generated.h"

class UEndNavModifierComponent;

UCLASS(Blueprintable, Placeable)
class AEndFieldActionActorMonkeyBars : public AEndFieldActionActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndNavModifierComponent* ModifierVolume;
    
    UPROPERTY(EditAnywhere)
    TMap<uint16, FMonkeyBarPoint> MonkeyBarPointList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MonkeyBarsCollisionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMonkeyBarLinkPoint> GoalPointList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRefreshParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRefreshGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLimitCameraPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LimitCameraPitchCustomFlavorName;
    
    AEndFieldActionActorMonkeyBars();
};


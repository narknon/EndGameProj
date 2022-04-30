#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AI/RVOAvoidanceInterface.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleDamageSourceComponent.generated.h"

class AEndCollisionActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndBattleDamageSourceComponent : public UActorComponent, public IRVOAvoidanceInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndCollisionActor* PushCollisionActor;
    
public:
    UEndBattleDamageSourceComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDir() const;
    
    
    // Fix for true pure virtual functions not being implemented
};


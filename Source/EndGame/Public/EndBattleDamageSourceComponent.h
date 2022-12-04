#pragma once
#include "CoreMinimal.h"
#include "AI/RVOAvoidanceInterface.h"
#include "Components/ActorComponent.h"
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

    void SetRVOAvoidanceUID(int32 UID);

    int32 GetRVOAvoidanceUID();

    void SetRVOAvoidanceWeight(float Weight);

    float GetRVOAvoidanceWeight();

    FVector GetRVOAvoidanceOrigin();

    float GetRVOAvoidanceRadius();

    float GetRVOAvoidanceHeight();

    float GetRVOAvoidanceConsiderationRadius();

    FVector GetVelocityForRVOConsideration();

    int32 GetAvoidanceGroupMask();

    int32 GetGroupsToAvoidMask();

    int32 GetGroupsToIgnoreMask();
    
    // Fix for true pure virtual functions not being implemented
};


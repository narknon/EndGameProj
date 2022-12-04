#pragma once
#include "CoreMinimal.h"
#include "EndBattleDamageSourceComponent.h"
#include "EndBattleDamageSourceComponentDisk.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndBattleDamageSourceComponentDisk : public UEndBattleDamageSourceComponent {
    GENERATED_BODY()
public:
    UEndBattleDamageSourceComponentDisk();

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
    
};


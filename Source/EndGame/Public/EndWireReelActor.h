#pragma once
#include "CoreMinimal.h"
#include "EndSkeletalMeshActor.h"
#include "EEndWireReelState.h"
#include "EndPhysicalConstraintWireEvaluator.h"
#include "EndWireReelActor.generated.h"

class UEndBoneAttachComponent;

UCLASS(Blueprintable)
class AEndWireReelActor : public AEndSkeletalMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndBoneAttachComponent* BoneAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndPhysicalConstraintWireEvaluator PhysicalConstraint;
    
    AEndWireReelActor();
    UFUNCTION(BlueprintCallable)
    void SetWireState(EEndWireReelState InState);
    
};


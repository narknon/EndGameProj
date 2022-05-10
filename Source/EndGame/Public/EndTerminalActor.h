#pragma once
#include "CoreMinimal.h"
#include "EndSkeletalMeshActor.h"
#include "EndTerminalActor.generated.h"

class UEndBoneAttachComponent;

UCLASS(Blueprintable)
class AEndTerminalActor : public AEndSkeletalMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndBoneAttachComponent* BoneAttach;
    
    AEndTerminalActor();
};


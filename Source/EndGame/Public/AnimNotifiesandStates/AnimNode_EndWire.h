#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "BoneContainer.h"
#include "AnimNode_EndWire.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FAnimNode_EndWire : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> WireBones;
    
    FAnimNode_EndWire();
};


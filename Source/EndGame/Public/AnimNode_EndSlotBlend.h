#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_LayeredBoneBlend.h"
#include "AnimNode_EndSlotBlend.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FAnimNode_EndSlotBlend : public FAnimNode_LayeredBoneBlend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    FAnimNode_EndSlotBlend();
};


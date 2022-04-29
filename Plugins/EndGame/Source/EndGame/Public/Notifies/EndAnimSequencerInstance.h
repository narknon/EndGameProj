#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=AnimSequencerInstance -FallbackName=AnimSequencerInstance
#include "AnimSequencerInstance.h"
#include "EndAnimInstanceInterface.h"
#include "EndAnimSequencerInstance.generated.h"

UCLASS(NonTransient)
class ENDGAME_API UEndAnimSequencerInstance : public UAnimSequencerInstance, public IEndAnimInstanceInterface {
    GENERATED_BODY()
public:
    UEndAnimSequencerInstance();
    
    // Fix for true pure virtual functions not being implemented
};


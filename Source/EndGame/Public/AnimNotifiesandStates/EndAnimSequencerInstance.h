#pragma once
#include "CoreMinimal.h"
#include "AnimSequencerInstance.h"
#include "EndAnimInstanceInterface.h"
#include "EndAnimSequencerInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ENDGAME_API UEndAnimSequencerInstance : public UAnimSequencerInstance, public IEndAnimInstanceInterface {
    GENERATED_BODY()
public:
    UEndAnimSequencerInstance();
    
    // Fix for true pure virtual functions not being implemented
};


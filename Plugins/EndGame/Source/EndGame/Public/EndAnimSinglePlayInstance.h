#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EndAnimInstanceInterface.h"
#include "EndAnimSinglePlayInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ENDGAME_API UEndAnimSinglePlayInstance : public UAnimInstance, public IEndAnimInstanceInterface {
    GENERATED_BODY()
public:
    UEndAnimSinglePlayInstance();
    
    // Fix for true pure virtual functions not being implemented
};


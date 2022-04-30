#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimSingleNodeInstance.h"
#include "EndAnimInstanceInterface.h"
#include "EndAnimSingleNodeInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ENDGAME_API UEndAnimSingleNodeInstance : public UAnimSingleNodeInstance, public IEndAnimInstanceInterface {
    GENERATED_BODY()
public:
    UEndAnimSingleNodeInstance();
    
    // Fix for true pure virtual functions not being implemented
};


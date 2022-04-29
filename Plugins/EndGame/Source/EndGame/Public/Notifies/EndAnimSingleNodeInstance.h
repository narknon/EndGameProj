#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimSingleNodeInstance -FallbackName=AnimSingleNodeInstance
#include "EndAnimInstanceInterface.h"
#include "Animation/AnimSingleNodeInstance.h"
#include "EndAnimSingleNodeInstance.generated.h"

UCLASS(NonTransient)
class ENDGAME_API UEndAnimSingleNodeInstance : public UAnimSingleNodeInstance, public IEndAnimInstanceInterface {
    GENERATED_BODY()
public:
    UEndAnimSingleNodeInstance();
    
    // Fix for true pure virtual functions not being implemented
};


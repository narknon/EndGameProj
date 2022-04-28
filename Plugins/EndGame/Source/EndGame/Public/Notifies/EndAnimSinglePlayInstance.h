#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "EndAnimInstanceInterface.h"
#include "EndAnimSinglePlayInstance.generated.h"

UCLASS(NonTransient)
class ENDGAME_API UEndAnimSinglePlayInstance : public UAnimInstance, public IEndAnimInstanceInterface {
    GENERATED_BODY()
public:
    UEndAnimSinglePlayInstance();
    
    // Fix for true pure virtual functions not being implemented
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EndAnimNotifyCondorPopSubCharacter.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyCondorPopSubCharacter : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FName LocationSocket;
    
    UPROPERTY(EditInstanceOnly)
    FVector LocationOffset;
    
    UPROPERTY(EditInstanceOnly)
    FName LocationSocket_Secondary;
    
    UPROPERTY(EditInstanceOnly)
    FVector LocationOffset_Secondary;
    
    UEndAnimNotifyCondorPopSubCharacter();
};


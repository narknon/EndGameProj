#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EndAnimNotifyStateBikeDanger.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBikeDanger : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    FName BaseSocketName;
    
    UPROPERTY(EditInstanceOnly)
    FVector Offset;
    
public:
    UEndAnimNotifyStateBikeDanger();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EEndBikeHitFilterPartsType.h"
#include "EEndBikeAbilityDistanceType.h"
#include "EndAnimNotifyStateBikeHitFilter.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateBikeHitFilter : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    EEndBikeHitFilterPartsType PartsType;
    
    UPROPERTY(EditInstanceOnly)
    TSet<EEndBikeAbilityDistanceType> PassAbilityDistanceTypes;
    
    UEndAnimNotifyStateBikeHitFilter();
};


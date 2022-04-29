#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EndAnimNotifyAudioVolumeEventTrigger.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyAudioVolumeEventTrigger : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AudioVolumeEventID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUsePrefixOwnerID: 1;
    
    UEndAnimNotifyAudioVolumeEventTrigger();
};


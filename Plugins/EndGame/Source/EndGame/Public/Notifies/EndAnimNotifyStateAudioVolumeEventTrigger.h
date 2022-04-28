#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EndAnimNotifyStateAudioVolumeEventTrigger.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateAudioVolumeEventTrigger : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName OnBeginAudioVolumeEventID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName OnEndAudioVolumeEventID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bUsePrefixOwnerID: 1;
    
    UEndAnimNotifyStateAudioVolumeEventTrigger();
};


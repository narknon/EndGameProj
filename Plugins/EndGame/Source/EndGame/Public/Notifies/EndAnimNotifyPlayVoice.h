#pragma once
#include "CoreMinimal.h"
#include "EndAnimNotifyPlaySound.h"
#include "EndAnimNotifyPlayVoice.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyPlayVoice : public UEndAnimNotifyPlaySound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bForcePlay;
    
    UEndAnimNotifyPlayVoice();
};


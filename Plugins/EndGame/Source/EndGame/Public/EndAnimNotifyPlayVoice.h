#pragma once
#include "CoreMinimal.h"
#include "EndAnimNotifyPlaySound.h"
#include "EndAnimNotifyPlayVoice.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ENDGAME_API UEndAnimNotifyPlayVoice : public UEndAnimNotifyPlaySound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForcePlay;
    
    UEndAnimNotifyPlayVoice();
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EndAIIntentionTalkControl.h"
#include "EndAIIntentionManualControl.h"
#include "EndAISensorVision.h"
#include "EndAISensorHearing.h"
#include "EndAIIntentionContact.h"
#include "EndAIIntentionInterestActionControl.h"
#include "EndAISensorTactileSense.h"
#include "EndAIIntentionCognition.h"
#include "EndAIIntentionWallContact.h"
#include "EndAIIntentionCuriosity.h"
#include "EndAIIntentionIdle.h"
#include "EndAIModelTemplateData.generated.h"

UCLASS(Blueprintable)
class ENDGAME_API UEndAIModelTemplateData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAISensorVision Vision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAISensorHearing Hearing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAISensorTactileSense TactileSense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAIIntentionManualControl ManualControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAIIntentionInterestActionControl InterestActionControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAIIntentionTalkControl TalkControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAIIntentionContact Contact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAIIntentionWallContact WallContact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAIIntentionCognition Cognition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAIIntentionCuriosity Curiosity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAIIntentionIdle Idle;
    
    UEndAIModelTemplateData();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EndAIIntentionIdleBase.h"
#include "EndAIIntentionTalkControl.generated.h"

class UEndAIIntentionTalkControlSetting;

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIIntentionTalkControl : public FEndAIIntentionIdleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndAIIntentionTalkControlSetting* Setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SentenceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentPosingStateIndex;
    
    UPROPERTY(EditAnywhere, Transient)
    float CurrentPosingWaitTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName LastEmotionalActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TalkInRequestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TalkOutRequestId;
    
    UPROPERTY(EditAnywhere, Transient)
    float TotalInterest;
    
    UPROPERTY(EditAnywhere, Transient)
    float SnapTotalInterest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector InterestLookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector InterestSaccadeLocation;
    
    UPROPERTY(EditAnywhere, Transient)
    float InterestLocationOffsetHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ManualLookAtId;
    
    UPROPERTY(EditAnywhere, Transient)
    float LookAtTurnWaitTimer;
    
    UPROPERTY(EditAnywhere, Transient)
    float LookAtTurnWaitTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LookAtTurnSentenceId;
    
    FEndAIIntentionTalkControl();
};


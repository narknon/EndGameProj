#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableTalkOnEndBattleVoiceSet.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableTalkOnEndBattleVoiceSet : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> VoiceChara_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> VoiceId_Array;
    
    FEndDataTableTalkOnEndBattleVoiceSet();
};


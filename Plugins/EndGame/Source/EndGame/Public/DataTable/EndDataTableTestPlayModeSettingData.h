#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableTestPlayModeSettingData.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableTestPlayModeSettingData : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TitleLocationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DebugPartyListID;
    
    UPROPERTY(EditAnywhere)
    TArray<float> PartyMemberPos_X_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> PartyMemberPos_Y_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> PartyMemberPos_Z_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> PartyMemberRot_X_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> PartyMemberRot_Y_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> PartyMemberRot_Z_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StoryFlag_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LocationID_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActionID_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ExchangeSrouceBattleCharaSpec_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ExchangeDestinationBattleCharaSpec_Array;
    
    FEndDataTableTestPlayModeSettingData();
};


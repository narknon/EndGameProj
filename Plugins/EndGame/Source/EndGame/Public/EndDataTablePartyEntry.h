#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTablePartyEntry.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTablePartyEntry : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RswBackupBattleLeaderID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RswSaveBackupBattleLeaderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RswRefBackupBattleLeaderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RswResetBackupBattleLeaderID;
    
    UPROPERTY(EditAnywhere)
    uint8 ChangeBattleLeader_Cloud;
    
    UPROPERTY(EditAnywhere)
    uint8 ResetControlCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PlayerTable_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> PartyStatus_Array;
    
    UPROPERTY(EditAnywhere)
    uint8 NoCameraInterpolationChangeLeader;
    
    FEndDataTablePartyEntry();
};


#pragma once
#include "CoreMinimal.h"
#include "EndMenuColosseumBattleScenePrototypeData.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndMenuColosseumBattleScenePrototypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BattleSceneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PowerUpList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HandicapList;
    
    FEndMenuColosseumBattleScenePrototypeData();
};


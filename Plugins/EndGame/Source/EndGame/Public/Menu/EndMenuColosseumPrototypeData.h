#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EndMenuColosseumSpecialBattlePrototypeData.h"
#include "EndMenuColosseumCourseBattlePrototypeData.h"
#include "EndMenuColosseumPowerUpPrototypeData.h"
#include "EndMenuColosseumSupplyPrototypeData.h"
#include "EndMenuColosseumHandicapPrototypeData.h"
#include "EndMenuColosseumPrototypeData.generated.h"

UCLASS(Blueprintable)
class ENDGAME_API UEndMenuColosseumPrototypeData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEndMenuColosseumCourseBattlePrototypeData> CourseBattles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEndMenuColosseumSpecialBattlePrototypeData> SpecialBattles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEndMenuColosseumPowerUpPrototypeData> PowerUpList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndMenuColosseumSupplyPrototypeData> SupplyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEndMenuColosseumHandicapPrototypeData> HandicapList;
    
    UEndMenuColosseumPrototypeData();
};


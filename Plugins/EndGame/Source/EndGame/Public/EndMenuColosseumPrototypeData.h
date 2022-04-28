#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EndMenuStructs.h"
#include "EndMenuColosseumPrototypeData.generated.h"

UCLASS()
class ENDGAME_API UEndMenuColosseumPrototypeData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, FEndMenuColosseumCourseBattlePrototypeData> CourseBattles;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FEndMenuColosseumSpecialBattlePrototypeData> SpecialBattles;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FEndMenuColosseumPowerUpPrototypeData> PowerUpList;
    
    UPROPERTY(EditAnywhere)
    TArray<FEndMenuColosseumSupplyPrototypeData> SupplyList;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FEndMenuColosseumHandicapPrototypeData> HandicapList;
    
    UEndMenuColosseumPrototypeData();
};


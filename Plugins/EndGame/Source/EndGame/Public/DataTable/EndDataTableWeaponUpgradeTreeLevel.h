#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableWeaponUpgradeTreeLevel.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableWeaponUpgradeTreeLevel : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EquipmentID;
    
    UPROPERTY(EditAnywhere)
    uint8 TreeLevel;
    
    UPROPERTY(EditAnywhere)
    float Percent;
    
    FEndDataTableWeaponUpgradeTreeLevel();
};


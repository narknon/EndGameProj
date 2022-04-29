#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "EndDataTableEquipment.h"
#include "EndMenuMateriaEquipCell.generated.h"

UCLASS(EditInlineNew)
class UEndMenuMateriaEquipCell : public UEndUserWidget {
    GENERATED_BODY()
public:
    UEndMenuMateriaEquipCell();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateMaterialStatus(const FString& ApStr, float Percent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateEquipUpgradedStatus(int32 Attack, int32 Defense, int32 MagicAttack, int32 MagicDefense, int32 AttackAdd, int32 DefenseAdd, int32 MagicAttackAdd, int32 MagicDefenseAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateEquipStatus(const FEndDataTableEquipment& equipment);
    
};


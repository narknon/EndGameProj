#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableWeaponUpgrade.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableWeaponUpgrade : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArrayIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponID;
    
    UPROPERTY(EditAnywhere)
    uint8 OpenTreeLevel;
    
    UPROPERTY(EditAnywhere)
    uint8 NodeType;
    
    UPROPERTY(EditAnywhere)
    uint8 RootIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParentNodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CheckNodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UseSP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EquipmentSkillID;
    
    UPROPERTY(EditAnywhere)
    float OverrideParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EquipmentEffectHelpTextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IconName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NodeDetail;
    
    UPROPERTY(EditAnywhere)
    uint8 PlanetEffectType;
    
    UPROPERTY(EditAnywhere)
    uint8 OpenPlanetEffectType;
    
    UPROPERTY(EditAnywhere)
    uint8 PriorityAuto1;
    
    UPROPERTY(EditAnywhere)
    uint8 PriorityAuto2;
    
    UPROPERTY(EditAnywhere)
    uint8 PriorityAuto3;
    
    FEndDataTableWeaponUpgrade();
};


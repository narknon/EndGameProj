#pragma once
#include "CoreMinimal.h"
#include "EEndAiBattleRole.h"
#include "EndBattleAIRoleParam.h"
#include "EndBattleAIRoleSetting.generated.h"

USTRUCT(BlueprintType)
struct FEndBattleAIRoleSetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEndAiBattleRole::Type> OverrideRole;
    
    UPROPERTY(EditAnywhere)
    float OverrideInMin;
    
    UPROPERTY(EditAnywhere)
    float OverrideInMax;
    
    UPROPERTY(EditAnywhere)
    float OverrideOutMin;
    
    UPROPERTY(EditAnywhere)
    float OverrideOutMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleAIRoleParam Front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleAIRoleParam Middle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleAIRoleParam Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleAIRoleParam Shield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleAIRoleParam Theif;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleAIRoleParam PhysicsFrontDD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleAIRoleParam PhysicsBackDD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleAIRoleParam Unique1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleAIRoleParam Unique2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleAIRoleParam Unique3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBattleAIRoleParam Unique4;
    
    ENDGAME_API FEndBattleAIRoleSetting();
};


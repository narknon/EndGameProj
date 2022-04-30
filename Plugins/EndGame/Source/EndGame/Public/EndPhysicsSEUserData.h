#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PhysicsSEUserData -FallbackName=PhysicsSEUserData
#include "EndRagdollSEData.h"
#include "Engine/AssetUserData.h"
#include "EndPhysicsSEUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ENDGAME_API UEndPhysicsSEUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndRagdollSEData SEData;
    
    UEndPhysicsSEUserData();
};


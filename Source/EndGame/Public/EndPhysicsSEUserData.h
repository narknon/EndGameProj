#pragma once
#include "CoreMinimal.h"
#include "End/PhysicsSEUserData.h"
#include "EndRagdollSEData.h"
#include "EndPhysicsSEUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ENDGAME_API UEndPhysicsSEUserData : public UPhysicsSEUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndRagdollSEData SEData;
    
    UEndPhysicsSEUserData();
};


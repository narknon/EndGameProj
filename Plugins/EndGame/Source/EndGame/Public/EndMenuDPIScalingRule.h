#pragma once
#include "CoreMinimal.h"
#include "Engine/DPICustomScalingRule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DPICustomScalingRule -FallbackName=DPICustomScalingRule
#include "EndMenuDPIScalingRule.generated.h"

UCLASS()
class ENDGAME_API UEndMenuDPIScalingRule : public UDPICustomScalingRule {
    GENERATED_BODY()
public:
    UEndMenuDPIScalingRule();
};


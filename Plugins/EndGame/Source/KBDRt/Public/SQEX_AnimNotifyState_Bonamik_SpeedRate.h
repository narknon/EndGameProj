#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SQEX_AnimNotifyState_Bonamik_SpeedRate.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class USQEX_AnimNotifyState_Bonamik_SpeedRate : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_BeginSpeedRate;
    
    UPROPERTY(EditAnywhere)
    float m_BeginBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_RestoreOriginalSpeedRate;
    
    UPROPERTY(EditAnywhere)
    float m_EndSpeedRate;
    
    UPROPERTY(EditAnywhere)
    float m_EndBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_ApplyToChildren;
    
    USQEX_AnimNotifyState_Bonamik_SpeedRate();
};


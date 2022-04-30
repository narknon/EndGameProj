#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SQEX_AnimNotifyState_Bonamik_Weight.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class USQEX_AnimNotifyState_Bonamik_Weight : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_Groups;
    
    UPROPERTY(EditAnywhere)
    float m_BeginBonamikWeight;
    
    UPROPERTY(EditAnywhere)
    float m_BeginTime;
    
    UPROPERTY(EditAnywhere)
    float m_EndBonamikWeight;
    
    UPROPERTY(EditAnywhere)
    float m_EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_ResetWhenNonZeroWeight;
    
    USQEX_AnimNotifyState_Bonamik_Weight();
};


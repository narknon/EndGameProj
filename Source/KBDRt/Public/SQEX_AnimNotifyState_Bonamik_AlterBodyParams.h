#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SQEX_Bonamik_AlterBodyParameter.h"
#include "SQEX_AnimNotifyState_Bonamik_AlterBodyParams.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class USQEX_AnimNotifyState_Bonamik_AlterBodyParams : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_Groups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_Bonamik_AlterBodyParameter> m_Parameters;
    
    USQEX_AnimNotifyState_Bonamik_AlterBodyParams();
};


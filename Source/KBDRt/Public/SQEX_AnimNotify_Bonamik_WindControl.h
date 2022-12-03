#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SQEX_AnimNotify_Bonamik_WindControl.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class USQEX_AnimNotify_Bonamik_WindControl : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GlobalWindScale;
    
    USQEX_AnimNotify_Bonamik_WindControl();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "SQEXSEADAnimNotifyPlayAutoSeParams.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SQEXSEADAnimNotify_PlayAutoSe.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SQEXSEAD_API USQEXSEADAnimNotify_PlayAutoSe : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADAnimNotifyPlayAutoSeParams PlaySettings;
    
    USQEXSEADAnimNotify_PlayAutoSe();
};


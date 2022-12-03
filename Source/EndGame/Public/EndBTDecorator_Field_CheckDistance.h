#pragma once
#include "CoreMinimal.h"
#include "EBTDecorator_Field_CheckDistanceMode.h"
#include "EndBTDecorator_CheckDistance.h"
#include "EndBTDecorator_Field_CheckDistance.generated.h"

UCLASS(Blueprintable)
class UEndBTDecorator_Field_CheckDistance : public UEndBTDecorator_CheckDistance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBTDecorator_Field_CheckDistanceMode m_DistanceMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseBodyRadius_From;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseBodyRadius_To;
    
    UEndBTDecorator_Field_CheckDistance();
};


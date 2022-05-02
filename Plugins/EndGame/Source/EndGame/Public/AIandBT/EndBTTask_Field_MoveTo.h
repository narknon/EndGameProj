#pragma once
#include "CoreMinimal.h"
#include "EndBTTask_MoveTo.h"
#include "FFieldAiType.h"
#include "EndBTTask_Field_MoveTo.generated.h"

UCLASS(Blueprintable)
class UEndBTTask_Field_MoveTo : public UEndBTTask_MoveTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRequestOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldAiType m_AiType;
    
    UPROPERTY(EditAnywhere)
    float m_BlendTime;
    
    UEndBTTask_Field_MoveTo();
};


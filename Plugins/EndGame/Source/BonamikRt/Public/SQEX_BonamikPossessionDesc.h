#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_PossessionMode.h"
#include "SQEX_BonamikPossessionDesc.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_BonamikPossessionDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_BodyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BodyId;
    
    UPROPERTY(EditAnywhere)
    float m_Time;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEX_Bonamik_PossessionMode> m_Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SubMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsFlow;
    
    UPROPERTY(EditAnywhere)
    float m_DrawingRadius;
    
    UPROPERTY(EditAnywhere)
    float m_TimeToActivateNext;
    
    UPROPERTY(EditAnywhere)
    float m_Magnitude;
    
    UPROPERTY(EditAnywhere)
    float m_IncrementalMagnitude;
    
    UPROPERTY(EditAnywhere)
    float m_MaxMagnitude;
    
    UPROPERTY(EditAnywhere)
    float m_DelayTime;
    
    BONAMIKRT_API FSQEX_BonamikPossessionDesc();
};


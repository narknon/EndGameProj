#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ESQEX_Bonamik_WindType_Notify.h"
#include "ESQEX_Bonamik_WindAreaType.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_AnimNotify_Bonamik_WorldWind.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class USQEX_AnimNotify_Bonamik_WorldWind : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEX_Bonamik_WindType_Notify> m_WindType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEX_Bonamik_WindAreaType> m_AreaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_BonamikWindGlobalAddition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_ModelOffset;
    
    UPROPERTY(EditAnywhere)
    float m_LifeTime;
    
    UPROPERTY(EditAnywhere)
    float m_SphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_BoxSize;
    
    UPROPERTY(EditAnywhere)
    float m_AreaMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_WindForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_RandomRange;
    
    UPROPERTY(EditAnywhere)
    float m_RandomTime;
    
    UPROPERTY(EditAnywhere)
    float m_BlastStrength;
    
    UPROPERTY(EditAnywhere)
    float m_PeakInRange;
    
    UPROPERTY(EditAnywhere)
    float m_BlastRange;
    
    UPROPERTY(EditAnywhere)
    float m_BlastSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_LoopNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_StartFrame;
    
    USQEX_AnimNotify_Bonamik_WorldWind();
};


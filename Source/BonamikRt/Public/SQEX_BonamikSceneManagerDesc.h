#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESQEX_Bonamik_FastMotionHandling.h"
#include "ESQEX_Bonamik_JointLinkSimulationMode.h"
#include "SQEX_BonamikSceneManagerDesc.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_BonamikSceneManagerDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsUseGPU;
    
    UPROPERTY(EditAnywhere)
    uint32 m_SubStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Dt;
    
    UPROPERTY(EditAnywhere)
    uint32 m_TotalGroup;
    
    UPROPERTY(EditAnywhere)
    FString m_GroupName[48];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsEnableLSS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LSScoeff_tran;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LSScoeff_rot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_RootName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsEnableLocalForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_Gravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_WindForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_DirRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_ForceRange;
    
    UPROPERTY(EditAnywhere)
    uint32 m_TotalLinkBatches;
    
    UPROPERTY(EditAnywhere)
    uint32 m_TotalLinksInBatch[15];
    
    UPROPERTY(EditAnywhere)
    uint32 m_TotalConeBatches;
    
    UPROPERTY(EditAnywhere)
    uint32 m_TotalConesInBatch[15];
    
    UPROPERTY(EditAnywhere)
    uint32 m_TotalCollisionBatches;
    
    UPROPERTY(EditAnywhere)
    uint32 m_TotalCollisionsInBatch[15];
    
    UPROPERTY(EditAnywhere)
    uint32 m_TotalSelfCollisionBatches;
    
    UPROPERTY(EditAnywhere)
    uint32 m_TotalSelfCollisionsInBatch[15];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESQEX_Bonamik_JointLinkSimulationMode> m_JointLinkSimulationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESQEX_Bonamik_FastMotionHandling> m_FastMotionHandlingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_EnableGroundCollision;
    
    UPROPERTY(EditAnywhere)
    uint32 m_RefUpVec;
    
    BONAMIKRT_API FSQEX_BonamikSceneManagerDesc();
};


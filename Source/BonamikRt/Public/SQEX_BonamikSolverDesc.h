#pragma once
#include "CoreMinimal.h"
#include "SQEX_BonamikSolverDesc.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_BonamikSolverDesc {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 m_GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsUseConeSEQ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsEnableDraw;
    
    UPROPERTY(EditAnywhere)
    uint32 m_ColIter;
    
    UPROPERTY(EditAnywhere)
    uint32 m_ConsIter;
    
    UPROPERTY(EditAnywhere)
    uint32 m_ConeIter;
    
    UPROPERTY(EditAnywhere)
    uint32 m_LinkIter;
    
    UPROPERTY(EditAnywhere)
    uint32 m_SolverIter;
    
    UPROPERTY(EditAnywhere)
    uint32 m_TagId;
    
    UPROPERTY(EditAnywhere)
    uint32 m_CollisionTagId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_EnableGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LODdistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_RefUpVec;
    
    BONAMIKRT_API FSQEX_BonamikSolverDesc();
};


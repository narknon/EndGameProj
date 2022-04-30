#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_LinkType.h"
#include "SQEX_BonamikLinkDesc.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_BonamikLinkDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_ParentBodyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_ChildBodyName;
    
    UPROPERTY(EditAnywhere)
    uint32 m_ParentId;
    
    UPROPERTY(EditAnywhere)
    uint32 m_ChildId;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEX_Bonamik_LinkType> m_LinkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsSelfCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_EnableJointTwist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_EnableCone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_EnableConeAnimation;
    
    UPROPERTY(EditAnywhere)
    float m_LinkStr;
    
    UPROPERTY(EditAnywhere)
    float m_LinkParentStr;
    
    UPROPERTY(EditAnywhere)
    float m_ConeInnerStr;
    
    UPROPERTY(EditAnywhere)
    float m_ConeOuterStr;
    
    UPROPERTY(EditAnywhere)
    float m_ConeParentStr;
    
    UPROPERTY(EditAnywhere)
    float m_LimitY;
    
    UPROPERTY(EditAnywhere)
    float m_LimitZ;
    
    UPROPERTY(EditAnywhere)
    float m_ConeOffsetY;
    
    UPROPERTY(EditAnywhere)
    float m_ConeOffsetZ;
    
    UPROPERTY(EditAnywhere)
    float m_LimitOffsetY;
    
    UPROPERTY(EditAnywhere)
    float m_LimitOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsCollisionReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsCollisionRepulsor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsLRA;
    
    UPROPERTY(EditAnywhere)
    float m_LRAstr;
    
    UPROPERTY(EditAnywhere)
    float m_LRAdamping;
    
    UPROPERTY(EditAnywhere)
    uint32 m_LinkBatchNo;
    
    UPROPERTY(EditAnywhere)
    uint32 m_ConeBatchNo;
    
    UPROPERTY(EditAnywhere)
    uint32 m_CollisionBatchNo;
    
    UPROPERTY(EditAnywhere)
    float m_PinRadius;
    
    UPROPERTY(EditAnywhere)
    float m_PinStr;
    
    UPROPERTY(EditAnywhere)
    float m_KdiTrans;
    
    UPROPERTY(EditAnywhere)
    float m_KdiRot;
    
    UPROPERTY(EditAnywhere)
    float m_ConcaveRatio;
    
    BONAMIKRT_API FSQEX_BonamikLinkDesc();
};


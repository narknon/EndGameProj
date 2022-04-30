#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_ConstraintType.h"
#include "ESQEX_Bonamik_CollisionShape.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_BonamikBodyDesc.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_BonamikBodyDesc {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 m_Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_JointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_ParentBodyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_ChildBodyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ParentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ChildId;
    
    UPROPERTY(EditAnywhere)
    uint32 m_GroupId;
    
    UPROPERTY(EditAnywhere)
    int32 m_ColId[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsKinematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsMultipleCollisionObject;
    
    UPROPERTY(EditAnywhere)
    float m_Mass;
    
    UPROPERTY(EditAnywhere)
    float m_Inertia;
    
    UPROPERTY(EditAnywhere)
    float m_Radius;
    
    UPROPERTY(EditAnywhere)
    float m_Damping;
    
    UPROPERTY(EditAnywhere)
    float m_Bounciness;
    
    UPROPERTY(EditAnywhere)
    float m_Friction;
    
    UPROPERTY(EditAnywhere)
    float m_WindDrag;
    
    UPROPERTY(EditAnywhere)
    float m_WindLift;
    
    UPROPERTY(EditAnywhere)
    float m_LocalTransCoeff;
    
    UPROPERTY(EditAnywhere)
    float m_MaxLocalTrans;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEX_Bonamik_CollisionShape> m_ColShape;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEX_Bonamik_ConstraintType> m_AddiConstType;
    
    UPROPERTY(EditAnywhere)
    float m_AddiConstStr;
    
    UPROPERTY(EditAnywhere)
    float m_AddiConstRad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_LocalTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat m_LocalRotation;
    
    UPROPERTY(EditAnywhere)
    uint32 m_CollisionBatchNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_LocalScale;
    
    UPROPERTY(EditAnywhere)
    float m_ConcaveRatio;
    
    UPROPERTY(EditAnywhere)
    float m_LFcoeff;
    
    UPROPERTY(EditAnywhere)
    float m_ParkRate;
    
    UPROPERTY(EditAnywhere)
    float m_MaxLF;
    
    UPROPERTY(EditAnywhere)
    float m_LFdrag;
    
    UPROPERTY(EditAnywhere)
    float m_LFlift;
    
    BONAMIKRT_API FSQEX_BonamikBodyDesc();
};


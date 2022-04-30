#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESQEX_Bonamik_GlobalOutOfCamera.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_BonamikGlobalConfig.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=USQEX_BonamikGlobalConfig)
class BONAMIKRT_API USQEX_BonamikGlobalConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTickComponent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDrawBonamik;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDrawWind;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableUpdate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMultiThreadUpdate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSimulation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableUpdateOverlaps;
    
    UPROPERTY(Config, EditAnywhere)
    float TimeStep;
    
    UPROPERTY(Config, EditAnywhere)
    float ExpectedFrameRate;
    
    UPROPERTY(Config, EditAnywhere)
    float MayaAnimationFrameRate;
    
    UPROPERTY(Config, EditAnywhere)
    float MayaSimulationFrameRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Gravity;
    
    UPROPERTY(Config, EditAnywhere)
    float WindSourceSpeedFactor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickWindWhenPaused;
    
    UPROPERTY(Config, EditAnywhere)
    float ForceResetDeltaTimeDilationThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForceResetDeltaTimeDilationPreRoll;
    
    UPROPERTY(Config, EditAnywhere)
    float ShouldPreRollDeltaTimeDilationThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShouldPreRollDeltaTimeDilationPreRoll;
    
    UPROPERTY(Config, EditAnywhere)
    float IgnoreSimulationDeltaTimeDilationThreshold;
    
    UPROPERTY(Config, EditAnywhere)
    float DefaultTeleportDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultTeleportPreRoll;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESQEX_Bonamik_GlobalOutOfCamera OutOfCamera;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKBDEnable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKBDEnableInitializaiton;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKBDEnableCreationOfBonamikComponent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverrideCollisionIteration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverrideLinkIteration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverrideSolverIteration;
    
    USQEX_BonamikGlobalConfig();
};


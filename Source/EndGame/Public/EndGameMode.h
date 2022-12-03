#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Engine/LatentActionManager.h"
#include "EndGameMode.generated.h"

class UObject;
class UEndCrossSaveManager;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AEndGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugGameMode_Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugGameMode_E3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugGameMode_Playable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugGameModeFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GamePlayMode;
    
    UPROPERTY(EditAnywhere)
    uint64 TotalTickTime;
    
    UPROPERTY(EditAnywhere)
    uint64 FrameTickTime;
    
    UPROPERTY(EditAnywhere)
    uint64 FrameTickCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SystemDeltaTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UObject*> ReferenceAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> OnUnloadEnvLevelAssetReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndCrossSaveManager* CrossSaveManager;
    
    AEndGameMode();
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void InitEditorPreviewGameMode(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void InitEditorGameMode(const UObject* WorldContextObject, FName LocationName, bool QuickStart, FName OverRideEnvName, FName InCutName, FLatentActionInfo LatentInfo);
    
};


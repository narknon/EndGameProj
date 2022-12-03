#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "StreamLevelSetSlot.h"
#include "EndLevelLoader.generated.h"

class AActor;
class AEndCharacter;

UCLASS(Blueprintable)
class UEndLevelLoader : public UObject {
    GENERATED_BODY()
public:
    UEndLevelLoader();
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void WaitStreamLevelEmpty(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void WaitShowSlicingLevelSet(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void UnLoadStreamLevelSpecInternal(const UObject* WorldContextObject, int32 Priority, FName SpecName, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void UnLoadStreamLevelSpec(const UObject* WorldContextObject, int32 Priority, FName SpecName, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void UnloadStreamLevelSingle(const UObject* WorldContextObject, int32 Priority, FName LevelNames, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void UnloadStreamLevels(const UObject* WorldContextObject, TArray<FName> LevelNames, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void UnloadStreamLevelGroups(const UObject* WorldContextObject, int32 Priority, TArray<FName> LevelNames, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetShowFrameLimitFree(const UObject* WorldContextObject, bool isFree);
    
    UFUNCTION(BlueprintCallable)
    static FString MakeLongLevelName(const FString& ShortName);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void LoadStreamLevelSpecInternal(const UObject* WorldContextObject, int32 Priority, FName SpecName, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void LoadStreamLevelSpec(const UObject* WorldContextObject, int32 Priority, FName SpecName, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void LoadStreamLevelSingleWithHide(const UObject* WorldContextObject, int32 Priority, FName LevelNames, uint8 hide, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void LoadStreamLevelSingle(const UObject* WorldContextObject, int32 Priority, FName LevelNames, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void LoadStreamLevelSet(const UObject* WorldContextObject, StreamLevelSetSlot Slot, int32 Priority, TArray<FName> LevelNames, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void LoadStreamLevels(const UObject* WorldContextObject, TArray<FName> LevelNames, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void LoadStreamLevelGroupsWithHide(const UObject* WorldContextObject, int32 Priority, TArray<FName> LevelNames, TArray<uint8> hides, StreamLevelSetSlot Slot, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void LoadStreamLevelGroups(const UObject* WorldContextObject, int32 Priority, TArray<FName> LevelNames, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsLoadStreamLevelSpec(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsLoadStreamLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsBoostLoading(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetUnLoadStreamLevelSet(StreamLevelSetSlot Slot);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetLoadStreamLevelSpecPriority(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FName GetLoadStreamLevelSpec(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetLoadStreamLevelSet(StreamLevelSetSlot Slot);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FName> GetLoadStreamLevels(const UObject* WorldContextObject, bool load);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FName GetLoadStreamLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static TArray<uint8> GetCacheLoadStreamHideLevelSet(StreamLevelSetSlot Slot);
    
    UFUNCTION(BlueprintCallable)
    static void FinishLoadStreamLevelSpec();
    
    UFUNCTION(BlueprintCallable)
    static void FinishLoadStreamLevelSet(StreamLevelSetSlot Slot);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FinishLoadStreamLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static AEndCharacter* FindCharacterFromWorld(FName ActorName);
    
    UFUNCTION(BlueprintCallable)
    static AEndCharacter* FindCharacterFromLevel(FName LevelName, FName ActorName);
    
    UFUNCTION(BlueprintCallable)
    static AActor* FindActorFromWorld(FName ActorName);
    
    UFUNCTION(BlueprintCallable)
    static AActor* FindActorFromLevel(FName LevelName, FName ActorName);
    
    UFUNCTION(BlueprintCallable)
    static int32 DoLoadStreamLevelSet(StreamLevelSetSlot Slot);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void CheckLoadStreamLevelSepc(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void CheckLoadStreamLevel(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
};


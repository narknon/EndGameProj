#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EEndEnvironmentSetOverritePriority.h"
#include "EWeaponSlot.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EndSceneAPI.generated.h"

class AActor;
class AEndNavModifierVolume;

UCLASS(Blueprintable)
class ENDGAME_API UEndSceneAPI : public UObject {
    GENERATED_BODY()
public:
    UEndSceneAPI();
    UFUNCTION(BlueprintCallable)
    static bool ValidateSimpleCameraWall(FName TargetActorName);
    
    UFUNCTION(BlueprintCallable)
    static void UnBindActor(FName Parent, EWeaponSlot Slot);
    
    UFUNCTION(BlueprintCallable)
    static bool TeleportActor(FName LevelName, FName ActorName, AActor* TargetActor, bool bApplyDestRotation);
    
    UFUNCTION(BlueprintCallable)
    static void SetOverwriteEnvinronment(const FName& EnvironmentSetKeyName, EEndEnvironmentSetOverritePriority Priority);
    
    UFUNCTION(BlueprintCallable)
    static bool MoveToTargetPoint(FName TargetActorName, FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    static bool IsStableEnvironmentSet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDrawPause(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool InvalidateSimpleCameraWall(FName TargetActorName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetNavTransformFromLevel(FName Level, FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetNavTransform(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetNavRotationFromLevel(FName Level, FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetNavRotation(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetNavLocationFromLevel(FName Level, FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetNavLocation(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AEndNavModifierVolume* GetNavFromNameAndLevel(FName Level, FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AEndNavModifierVolume* GetNavFromName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    static bool FollowToTargetActor(FName TargetActorName, FName FollowTargetActorName);
    
    UFUNCTION(BlueprintCallable)
    static int32 DestroyActorBP(FName Name);
    
    UFUNCTION(BlueprintCallable)
    static int32 CreateActorBP(FName Name, FName CharaSpec, FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    static void CancelOverwirttenEnvironmentSet(EEndEnvironmentSetOverritePriority Priority);
    
    UFUNCTION(BlueprintCallable)
    static void BindActor(FName Parent, FName child, FName socket, EWeaponSlot Slot);
    
};


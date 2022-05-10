#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "EEquipmentType.h"
#include "EPlayerType.h"
#include "EPlayerStatus.h"
#include "EPlayerActorRefreshState.h"
#include "UObject/NoExportTypes.h"
#include "EndPartyAPI.generated.h"

class AEndCharacter;
class AActor;

UCLASS(Blueprintable)
class ENDGAME_API UEndPartyAPI : public UObject {
    GENERATED_BODY()
public:
    UEndPartyAPI();
    UFUNCTION(BlueprintCallable)
    static void WaitPlayerStream(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void WaitLoadCache(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void UpdatePreloadCurrentCharaSpecList();
    
    UFUNCTION(BlueprintCallable)
    static void StartPlayerStream();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldUsePreloadCharaSpecsForPartyDebug();
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerStatus(EPlayerType Type, EPlayerStatus Status);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerName(EEquipmentType equipment, EPlayerType Type, FName Name);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerActor(EEquipmentType equipment, EPlayerType Type, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void SetPartyLeaderType(EPlayerType InLeader, bool bIsInputTrigered, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    static void SetPartyLeader(AActor* InLeader, bool bIsInputTrigered);
    
    UFUNCTION(BlueprintCallable)
    static void ReturnActorToad(EPlayerType Type);
    
    UFUNCTION(BlueprintCallable)
    static void ResetPlayerPosition();
    
    UFUNCTION(BlueprintCallable)
    static void PreloadCurrentCharaSpecList(TArray<EPlayerType> players, TArray<EEquipmentType> equipments);
    
    UFUNCTION(BlueprintCallable)
    static void LoadCache();
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayerActorRefreshState();
    
    UFUNCTION(BlueprintCallable)
    static bool IsFinishPlayerStream();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCurrentCharaSpecListPreloadFinished();
    
    UFUNCTION(BlueprintCallable)
    static void InitPartyLevel(const UObject* WorldContextObject, AActor* InPlayerTrigger);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetPlayerToadActor(EPlayerType Type);
    
    UFUNCTION(BlueprintCallable)
    static EPlayerStatus GetPlayerStatus(EPlayerType Type);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetPlayerReturnActor(EPlayerType Type);
    
    UFUNCTION(BlueprintCallable)
    static FName GetPlayerName(EEquipmentType equipment, EPlayerType Type);
    
    UFUNCTION(BlueprintCallable)
    static EPlayerActorRefreshState GetPlayerActorRefreshState(EEquipmentType equipment, EPlayerType Type);
    
    UFUNCTION(BlueprintCallable)
    static FName GetPlayerActorName(EPlayerType Type);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetPlayerActor(EEquipmentType equipment, EPlayerType Type);
    
    UFUNCTION(BlueprintCallable)
    static EPlayerType GetPartyMemberType(int32 Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AEndCharacter*> GetPartyMembers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPartyMemberCountForPartyStatus(EPlayerStatus findPlayerStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPartyMemberCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AEndCharacter* GetPartyMember(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPlayerType GetPartyLeaderType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetPartyLeaderName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetPartyLeader();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetArrivalPartyMemberCount();
    
    UFUNCTION(BlueprintCallable)
    static void FinishPlayerStream();
    
    UFUNCTION(BlueprintCallable)
    static void CheckPlayerStream(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeActorToad(EPlayerType Type);
    
    UFUNCTION(BlueprintCallable)
    static void CallTeleported(const FVector& NewLocation, AActor* InLeader);
    
};


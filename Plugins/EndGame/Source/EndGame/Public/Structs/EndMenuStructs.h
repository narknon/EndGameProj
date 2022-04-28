#pragma once
#include "CoreMinimal.h"
#include "EEndMenuColosseumHandicapCategoryPrototype.h"
#include "SlateBrush.h"
#include "WidgetTransform.h"
#include "EndMenuStructs.generated.h"

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndMenuDamageInfo
// 0x0020
struct FEndMenuDamageInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndMenuColorCorrectionSelection
// 0x0018
struct FEndMenuColorCorrectionSelection
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	int                                                LUTIndex;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FString                                      NameTextID;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};


USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndMenuImage
// 0x00A0
struct FEndMenuImage
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FSlateBrush                                 Brush;                                                    // 0x0000(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FWidgetTransform                            RenderTransform;                                          // 0x0078(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FVector2D                                   RenderTransformPivot;                                     // 0x0094(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndMenuColosseumBattlePrototypeData
// 0x0018
struct FEndMenuColosseumBattlePrototypeData
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FString                                      Title;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	int                                                EntryFee;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	int                                                HighScore;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndMenuColosseumBattleScenePrototypeData
// 0x0048
struct FEndMenuColosseumBattleScenePrototypeData
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FName                                       BattleSceneID;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FString                                      Title;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FString                                      Description;                                              // 0x0018(0x0010) (Edit, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	TArray<FName>                               PowerUpList;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	TArray<FName>                               HandicapList;                                             // 0x0038(0x0010) (Edit, ZeroConstructor)
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndMenuColosseumRewardPrototypeData
// 0x0010
struct FEndMenuColosseumRewardPrototypeData
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	int                                                TargetScore;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FName                                       ItemID;                                                   // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	int                                                ItemCount;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndMenuColosseumCourseBattlePrototypeData
// 0x0020 (0x0038 - 0x0018)
struct FEndMenuColosseumCourseBattlePrototypeData : public FEndMenuColosseumBattlePrototypeData
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	TArray<FEndMenuColosseumBattleScenePrototypeData> BattleSceneList;                                          // 0x0018(0x0010) (Edit, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	TArray<FEndMenuColosseumRewardPrototypeData> RewardList;                                               // 0x0028(0x0010) (Edit, ZeroConstructor)
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndMenuColosseumSpecialBattlePrototypeData
// 0x0058 (0x0070 - 0x0018)
struct FEndMenuColosseumSpecialBattlePrototypeData : public FEndMenuColosseumBattlePrototypeData
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FEndMenuColosseumBattleScenePrototypeData   BattleScene;                                              // 0x0018(0x0048) (Edit)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FEndMenuColosseumRewardPrototypeData        Reward;                                                   // 0x0060(0x0010) (Edit)
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndMenuColosseumPowerUpPrototypeData
// 0x0020
struct FEndMenuColosseumPowerUpPrototypeData
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FString                                      Title;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FString                                      Description;                                              // 0x0010(0x0010) (Edit, ZeroConstructor)
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndMenuColosseumSupplyPrototypeData
// 0x000C
struct FEndMenuColosseumSupplyPrototypeData
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FName                                       ItemID;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	int                                                CosumedCoins;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndMenuColosseumHandicapPrototypeData
// 0x0028
struct FEndMenuColosseumHandicapPrototypeData
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FString                                      Title;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FString                                      Description;                                              // 0x0010(0x0010) (Edit, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	EEndMenuColosseumHandicapCategoryPrototype         Category;                                                 // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndMenuColorMapping
// 0x0018
struct FEndMenuColorMapping
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FName                                       MappingName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FLinearColor                                Color;                                                    // 0x0008(0x0010) (Edit, IsPlainOldData)
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndMenuImageMapping
// 0x00A0
struct FEndMenuImageMapping
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FName                                       MappingName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FName                                       ChangeFlag;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FSlateBrush                                 Brush;                                                    // 0x0010(0x0078) (Edit)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FSoftObjectPath                             SubFrameImagePath;                                        // 0x0088(0x0018) (Edit)
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndStatusMenuHPColors
// 0x0020
struct FEndStatusMenuHPColors
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FLinearColor                                ChildColor;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FLinearColor                                ParentColor;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};
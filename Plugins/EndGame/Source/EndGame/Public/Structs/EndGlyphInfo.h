#pragma once
#include "CoreMinimal.h"
#include "EndGlyphInfo.generated.h"

USTRUCT(BlueprintType)
struct FEndGlyphInfo
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	uint16                                          TextureIndex;                                             // 0x0000(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere)
	uint16                                         TextureX;                                                 // 0x0002(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere)
	uint16                                           TextureY;                                                 // 0x0004(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere)
	uint16                                           SizeX;                                                    // 0x0006(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere)
	uint16                                          SizeY;                                                    // 0x0008(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere)
	int16                                            HorizontalOffset;                                         // 0x000A(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere)
	int16                                            VerticalOffset;                                           // 0x000C(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere)
	int16                                            XAdvance;                                                 // 0x000E(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
};


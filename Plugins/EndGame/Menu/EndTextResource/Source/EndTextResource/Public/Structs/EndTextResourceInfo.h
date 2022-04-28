#pragma once
#include "CoreMinimal.h"
#include "EndTextResourceInfo.generated.h"

USTRUCT(BlueprintType)
struct FEndTextResourceInfo
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString                                      Text;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	TMap<FName, FString>                  MetaData;                                                 // 0x0010(0x0050) (BlueprintVisible, ZeroConstructor)
};
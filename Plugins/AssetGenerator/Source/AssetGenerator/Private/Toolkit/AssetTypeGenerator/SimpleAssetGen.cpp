#include "Toolkit/AssetTypeGenerator/SimpleAssetGen.h"
#include "Dom/JsonObject.h"

UClass* USimpleAssetGen::GetAssetObjectClass() const {
	const FString AssetClassPath = GetAssetData()->GetStringField(TEXT("AssetClass"));
	return FindObjectChecked<UClass>(NULL, *AssetClassPath);
}

FName USimpleAssetGen::GetAssetClass() {
	return TEXT("SimpleAsset"); //UPhysicalMaterial::StaticClass()->GetFName();
}
#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimSequence.h"
#include "Toolkit/AssetGeneration/AssetTypeGenerator.h"
#include "AnimSequenceGenerator.generated.h"

UCLASS(MinimalAPI)
class UAnimSequenceGenerator : public UAssetTypeGenerator {
	GENERATED_BODY()
protected:
	UPackage* CreatePackage(const TCHAR* in_outer);
	virtual void CreateAssetPackage() override;
	virtual void OnExistingPackageLoaded() override;
	
	void PopulateAnimationProperties(UAnimSequence* Asset);
	bool IsAnimationPropertiesUpToDate(UAnimSequence* Asset) const;
	
	UAnimSequence* ImportAnimation(UPackage* Package, const FName& AssetName, const EObjectFlags ObjectFlags);
	void ReimportAnimationFromSource(UAnimSequence* Asset);
	FString LexToString(const FMD5Hash& fmd5_hash) const;
	bool IsAnimationSourceUpToDate(UAnimSequence* Asset) const;

	void SetupFbxImportSettings(class UFbxImportUI* ImportUI) const;
public:
	virtual void PopulateStageDependencies(TArray<FPackageDependency>& OutDependencies) const override;
	virtual FName GetAssetClass() override;
};
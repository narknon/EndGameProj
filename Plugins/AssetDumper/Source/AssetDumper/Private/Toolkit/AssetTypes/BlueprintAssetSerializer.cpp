#include "Toolkit/AssetTypes/BlueprintAssetSerializer.h"
#include "Toolkit/AssetTypes/AssetHelper.h"
#include "Toolkit/PropertySerializer.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "Engine/SCS_Node.h"
#include "Engine/TimelineTemplate.h"
#include "Toolkit/ObjectHierarchySerializer.h"
#include "Toolkit/AssetDumping/AssetTypeSerializerMacros.h"
#include "Toolkit/AssetDumping/SerializationContext.h"

void UBlueprintAssetSerializer::SerializeAsset(TSharedRef<FSerializationContext> Context) const {
    BEGIN_ASSET_SERIALIZATION_BP(UBlueprintGeneratedClass)
    SerializeBlueprintClass(Asset, Data, Context);

    TArray<FName> GeneratedVariableNames;
    CollectGeneratedVariables(Asset, GeneratedVariableNames);

    TArray<TSharedPtr<FJsonValue>> GeneratedVariablesArray;
    for (const FName& VariableName : GeneratedVariableNames) {
        GeneratedVariablesArray.Add(MakeShareable(new FJsonValueString(VariableName.ToString())));
    }
    Data->SetArrayField(TEXT("GeneratedVariableNames"), GeneratedVariablesArray);
    
    END_ASSET_SERIALIZATION
}

void UBlueprintAssetSerializer::CollectGeneratedVariables(UBlueprintGeneratedClass* Asset, TArray<FName>& GeneratedVariableNames) {
    //Collect variable names generated by SCS components
    if (Asset->SimpleConstructionScript) {
        for (const USCS_Node* SCSNode : Asset->SimpleConstructionScript->GetAllNodes()) {
            GeneratedVariableNames.Add(SCSNode->GetVariableName());
        }
    }

    //Collect variables generated by timelines
    for (UTimelineTemplate* Timeline : Asset->Timelines) {
        GeneratedVariableNames.Add(Timeline->GetVariableName());
        GeneratedVariableNames.Add(Timeline->GetDirectionPropertyName());
    	
        for (const FTTFloatTrack& FloatTrack : Timeline->FloatTracks) {
            GeneratedVariableNames.Add(FloatTrack.GetPropertyName());
        }
        for (const FTTVectorTrack& VectorTrack : Timeline->VectorTracks) {
            GeneratedVariableNames.Add(VectorTrack.GetPropertyName());
        }
        for (const FTTLinearColorTrack& LinearColorTrack : Timeline->LinearColorTracks) {
            GeneratedVariableNames.Add(LinearColorTrack.GetPropertyName());
        }
    }
}

void UBlueprintAssetSerializer::SerializeBlueprintClass(UBlueprintGeneratedClass* Asset, TSharedPtr<FJsonObject> Data, TSharedRef<FSerializationContext> Context) {
    UPropertySerializer* Serializer = Context->GetPropertySerializer();
    UObjectHierarchySerializer* ObjectSerializer = Context->GetObjectSerializer();
    
    //Serialize normal UClass object with all the properties
    FAssetHelper::SerializeClass(Data, Asset, ObjectSerializer);
    
    //Disable cooked data serialization and also direct uber graph function ref
    DISABLE_SERIALIZATION(USCS_Node, CookedComponentInstancingData);
    DISABLE_SERIALIZATION(UBlueprintGeneratedClass, CookedComponentInstancingData);
    DISABLE_SERIALIZATION(UBlueprintGeneratedClass, UberGraphFunction);

    //Disable unnecessary properties serialization
    DISABLE_SERIALIZATION(UBlueprintGeneratedClass, NumReplicatedProperties);
    DISABLE_SERIALIZATION(UBlueprintGeneratedClass, bHasNativizedParent);
    DISABLE_SERIALIZATION(UBlueprintGeneratedClass, bHasCookedComponentInstancingData);

    //Serialize extra data present in the UBlueprintGeneratedClass (like SCS)
    SERIALIZE_ASSET_OBJECT
}

FName UBlueprintAssetSerializer::GetAssetClass() const {
    return TEXT("Blueprint"); //UBlueprint::StaticClass()->GetFName()
}
#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SpineFXData.h"
#include "SpineBPFLibrary.generated.h"

class AActor;
class UNiagaraComponent;
class USpineAtlasAsset;
class USpineBoneComponent;
class USpineSkeletonDataAsset;

UCLASS(Blueprintable)
class USpineBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USpineBPFLibrary();

    UFUNCTION(BlueprintCallable)
    static UNiagaraComponent* SpawnFXData(const FSpineFXData& FXData, const AActor* Actor, USpineBoneComponent* BoneComponent);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GenerateSkinList(USpineSkeletonDataAsset* SkeletonDataAsset, USpineAtlasAsset* AtlasAsset);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GenerateAnimationList(USpineSkeletonDataAsset* SkeletonDataAsset, USpineAtlasAsset* AtlasAsset);
    
};


#pragma once
#include "CoreMinimal.h"
#include "Components/MeshComponent.h"
#include "SpineMeshComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SPINEMESHPLUGIN_API USpineMeshComponent : public UMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshUVDensity;
    
public:
    USpineMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMeshSectionVisible(int32 SectionIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumSections() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearMeshSection(int32 SectionIndex, bool bUpdateBounds);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllMeshSections();
    
};


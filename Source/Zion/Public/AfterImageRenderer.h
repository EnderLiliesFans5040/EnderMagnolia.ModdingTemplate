#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "AfterImageRenderer.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class AAfterImageRenderer : public AActor {
    GENERATED_BODY()
public:
    AAfterImageRenderer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Release();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup(const FTransform& Transform, UTextureRenderTarget2D* Texture);
    
};


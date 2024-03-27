#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpriteShapeActor.generated.h"

class USceneComponent;
class USpriteShapeRendererComponent;
class USpriteShapeSplineComponent;

UCLASS(Blueprintable)
class SPRITESHAPE_API ASpriteShapeActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpriteShapeRendererComponent* RenderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpriteShapeSplineComponent* SplineComponent;
    
public:
    ASpriteShapeActor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void RegenerateSpriteShape() const;
    
};


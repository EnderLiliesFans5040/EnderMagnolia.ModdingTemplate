#include "SpriteShapeActor.h"
#include "Components/SceneComponent.h"
#include "SpriteShapeRendererComponent.h"
#include "SpriteShapeSplineComponent.h"

ASpriteShapeActor::ASpriteShapeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->RenderComponent = CreateDefaultSubobject<USpriteShapeRendererComponent>(TEXT("RenderComponent"));
    this->SplineComponent = CreateDefaultSubobject<USpriteShapeSplineComponent>(TEXT("SplineComponent"));
    this->RenderComponent->SetupAttachment(RootComponent);
    this->SplineComponent->SetupAttachment(RootComponent);
}

void ASpriteShapeActor::RegenerateSpriteShape() const {
}



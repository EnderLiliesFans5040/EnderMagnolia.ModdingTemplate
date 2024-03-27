#include "SpriteShapeRendererComponent.h"

USpriteShapeRendererComponent::USpriteShapeRendererComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = true;
    this->bFilledSpline = true;
    this->FillPolygonFlatEdgeDistance = 10;
    this->SegmentOverlapAmount = 0.00f;
    this->SpriteSubdivisionX = 1;
    this->SpriteSubdivisionY = 1;
    this->RandomSeed = 0;
    this->bAllowBodyStretch = true;
    this->bCreateCollisions = false;
    this->CollisionDepth = 100.00f;
    this->CollisionHeight = 50.00f;
    this->CollisionHeightLocationOffset = 0.00f;
    this->CollisionTrace = ESpriteShapeCollisionTraceFlag::SimpleAsComplex;
    this->CollisionGenerationType = ESpriteShapeCollisionGenerationType::Polygon;
    this->CollisionMergeDistanceThreshold = 10.00f;
    this->FillCollisionSimplificationThreshold = 10.00f;
    this->AssociatedSpline = NULL;
    this->CachedBodySetup = NULL;
}



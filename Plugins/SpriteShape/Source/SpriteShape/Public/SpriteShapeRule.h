#pragma once
#include "CoreMinimal.h"
#include "SpriteShapeCondition.h"
#include "SpriteShapeRule.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FSpriteShapeRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* StartCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPaperSprite*> Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* EndCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpriteShapeCondition> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DrawOrder;
    
    SPRITESHAPE_API FSpriteShapeRule();
};


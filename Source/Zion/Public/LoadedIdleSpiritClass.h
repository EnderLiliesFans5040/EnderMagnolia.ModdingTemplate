#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LoadedIdleSpiritClass.generated.h"

class ACharacterZionSpirit;

USTRUCT(BlueprintType)
struct FLoadedIdleSpiritClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACharacterZionSpirit> IdleSpiritClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACharacterZionSpirit> AssociatedSpiritClass;
    
    ZION_API FLoadedIdleSpiritClass();
};


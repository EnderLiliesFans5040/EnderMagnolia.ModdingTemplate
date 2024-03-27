#pragma once
#include "CoreMinimal.h"
#include "SpineMeshSectionUpdateSettings.generated.h"

USTRUCT(BlueprintType)
struct FSpineMeshSectionUpdateSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateColorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateUVData;
    
    SPINEPLUGIN_API FSpineMeshSectionUpdateSettings();
};


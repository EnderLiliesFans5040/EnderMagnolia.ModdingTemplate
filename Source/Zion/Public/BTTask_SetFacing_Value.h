#pragma once
#include "CoreMinimal.h"
#include "BTTask_SetFacing.h"
#include "EFacingType.h"
#include "BTTask_SetFacing_Value.generated.h"

UCLASS(Blueprintable)
class UBTTask_SetFacing_Value : public UBTTask_SetFacing {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFacingType FacingType;
    
public:
    UBTTask_SetFacing_Value();

};


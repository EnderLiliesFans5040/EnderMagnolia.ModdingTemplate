#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UserWidgetZion.h"
#include "UserWidgetItemGet.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UUserWidgetItemGet : public UUserWidgetZion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ItemDataHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
public:
    UUserWidgetItemGet();

};


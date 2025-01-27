#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TextIntStruct.h"
#include "ArrayBPFLibrary.generated.h"

UCLASS(Blueprintable)
class UArrayBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UArrayBPFLibrary();

    UFUNCTION(BlueprintCallable)
    static TArray<FTextIntStruct> SortTextIntStructs(UPARAM(Ref) TArray<FTextIntStruct>& Array);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> SortNames(UPARAM(Ref) TArray<FName>& Array);
    
};


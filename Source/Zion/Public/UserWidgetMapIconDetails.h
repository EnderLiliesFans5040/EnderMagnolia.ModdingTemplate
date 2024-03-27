#pragma once
#include "CoreMinimal.h"
#include "UserWidgetZion.h"
#include "UserWidgetMapIconDetails.generated.h"

class UUserWidgetMapIcon;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ZION_API UUserWidgetMapIconDetails : public UUserWidgetZion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidgetMapIcon* WidgetMapIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRestPointListOpened;
    
public:
    UUserWidgetMapIconDetails();

    UFUNCTION(BlueprintCallable)
    void ShowIconDetails();
    
    UFUNCTION(BlueprintCallable)
    bool SetIsRestPointListOpened(bool bIsOpened);
    
    UFUNCTION(BlueprintCallable)
    void RemoveIconDetails();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShowIconDetails();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRemoveIconDetails();
    
};


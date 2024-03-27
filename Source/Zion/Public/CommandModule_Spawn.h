#pragma once
#include "CoreMinimal.h"
#include "CommandModule.h"
#include "SpawnData.h"
#include "CommandModule_Spawn.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_Spawn : public UCommandModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnData SpawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
public:
    UCommandModule_Spawn();

};


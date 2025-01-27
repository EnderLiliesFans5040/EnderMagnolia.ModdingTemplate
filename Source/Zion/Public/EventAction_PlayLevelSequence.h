#pragma once
#include "CoreMinimal.h"
#include "EventAction.h"
#include "MovieSceneSequencePlaybackSettings.h"
#include "EventAction_PlayLevelSequence.generated.h"

class ULevelSequence;

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_PlayLevelSequence : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneSequencePlaybackSettings SequenceSettings;
    
public:
    UEventAction_PlayLevelSequence();

private:
    UFUNCTION(BlueprintCallable)
    void OnLevelSequenceFinished();
    
};


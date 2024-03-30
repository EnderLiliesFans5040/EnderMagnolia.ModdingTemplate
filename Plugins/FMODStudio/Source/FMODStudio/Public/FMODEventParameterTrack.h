#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "FMODEventParameterTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable, MinimalAPI)
class UFMODEventParameterTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    // UMovieSceneTrack interface
    virtual UMovieSceneSection* CreateNewSection() override;
    virtual void RemoveAllAnimationData() override;
    virtual bool HasSection(const UMovieSceneSection& Section) const override;
    virtual void AddSection(UMovieSceneSection& Section) override;
    virtual void RemoveSection(UMovieSceneSection& Section) override;
    virtual bool IsEmpty() const override;
    virtual const TArray<UMovieSceneSection*>& GetAllSections() const override;

    // ~IMovieSceneTrackTemplateProducer interface
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override;

    // End UMovieSceneTrack interface

#if WITH_EDITORONLY_DATA
    virtual FText GetDefaultDisplayName() const override;
#endif

public:
    UFMODEventParameterTrack();

private:
    /** The sections owned by this track. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta = (AllowPrivateAccess = true))
    TArray<UMovieSceneSection*> Sections;

    // Fix for true pure virtual functions not being implemented
};


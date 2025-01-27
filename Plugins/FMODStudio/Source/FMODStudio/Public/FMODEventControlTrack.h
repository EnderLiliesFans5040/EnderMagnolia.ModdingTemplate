#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "FMODEventControlTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable, MinimalAPI)
class UFMODEventControlTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UFMODEventControlTrack();

public:
    // Begin UMovieSceneTrack interface
    virtual bool HasSection(const UMovieSceneSection& Section) const override;
    virtual void AddSection(UMovieSceneSection& Section) override;
    virtual void RemoveSection(UMovieSceneSection& Section) override;
    virtual bool IsEmpty() const override;
    virtual const TArray<UMovieSceneSection*>& GetAllSections() const override;
    virtual bool SupportsType(TSubclassOf<UMovieSceneSection> SectionClass) const override;
    virtual UMovieSceneSection* CreateNewSection() override;
    // End UMovieSceneTrack interface

    // IMovieSceneTrackTemplateProducer interface
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override;

#if WITH_EDITORONLY_DATA
    virtual FText GetDefaultDisplayName() const override;
#endif

private:
    /** List of all event control sections. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta = (AllowPrivateAccess = true))
    TArray<UMovieSceneSection*> ControlSections;
    // Fix for true pure virtual functions not being implemented
};


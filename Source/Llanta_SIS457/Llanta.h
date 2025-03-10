#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Llanta.generated.h"

UCLASS()
class BOMBERMAN_012025_API ALlanta : public AActor
{
	GENERATED_BODY()

public:
	ALlanta();

protected:
	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* LlantaMesh;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* LlantaMaterial;
};
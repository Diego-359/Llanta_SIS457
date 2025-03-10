#include "Llanta.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "UObject/ConstructorHelpers.h"

ALlanta::ALlanta()
{
	PrimaryActorTick.bCanEverTick = true;

	LlantaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LlantaMesh"));
	RootComponent = LlantaMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> LlantaMeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/Fab/Wheel_Tire/tire_game_asset_agustin_honnun.tire_game_asset_agustin_honnun'"));
	if (LlantaMeshAsset.Succeeded())
	{
		LlantaMesh->SetStaticMesh(LlantaMeshAsset.Object);
	}

	static ConstructorHelpers::FObjectFinder<UMaterialInterface> LlantaMaterialAsset(TEXT("/Script/Engine.Texture2D'/Game/Fab/Wheel_Tire/tire_game_asset_agustin_honnun_texture_0.tire_game_asset_agustin_honnun_texture_0'"));
	if (LlantaMaterialAsset.Succeeded())
	{
		LlantaMaterial = LlantaMaterialAsset.Object;
		LlantaMesh->SetMaterial(0, LlantaMaterial); 
	}
}

void ALlanta::BeginPlay()
{
	Super::BeginPlay();
}

void ALlanta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
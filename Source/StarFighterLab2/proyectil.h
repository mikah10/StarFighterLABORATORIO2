#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "proyectil.generated.h"

class UProjectileMovementComponent;
class UStaticMeshComponent;

UCLASS(config = Game)
class Aproyectil : public AActor
{
	GENERATED_BODY()

		/** Sphere collision component */
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Proyectil, meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* ProyectilMesh;

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
		UProjectileMovementComponent* ProyectilMovement;

public:
	Aproyectil();

	/** Function to handle the projectile hitting something */
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	/** Returns ProyectilMesh subobject **/
	FORCEINLINE UStaticMeshComponent* GetProyectilMesh() const { return ProyectilMesh; }
	/** Returns ProyectilMovement subobject **/
	FORCEINLINE UProjectileMovementComponent* GetProyectilMovement() const { return ProyectilMovement; }
};


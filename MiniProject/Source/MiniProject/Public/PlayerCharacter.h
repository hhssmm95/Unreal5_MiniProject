// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PlayerInfoComponent.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDynamicMultiDele, float, MaxHP, float, CurrentHP);

UCLASS()
class MINIPROJECT_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		UCameraComponent* Camera;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		USpringArmComponent* SpringArm;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UPlayerInfoComponent* PlayerInfo;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		UTextRenderComponent* NicknameText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		USkeletalMeshComponent* SwordMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		UStaticMeshComponent* BowMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		EWeaponType WeaponType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		class UPlayerAnimInst* PlayerAnim;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		class UInventoryWidget* Inventory;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		bool bIsDead;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		bool bisInAttackCooltime;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		bool bIsSprinting;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		float CloseAttackDistance;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPriavteAccess = "true"))
		float CloseAttackRange;

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class UInventoryWidget> InventoryWidgetClass;

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class ABullet> PlayerBulletClass;


	UPROPERTY(EditDefaultsOnly, Category = "UI")
		TSubclassOf<class UPlayerHUDWidget> PlayerHUDClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "UI")
		class UPlayerHUDWidget* PlayerHUD;

private:
	FDynamicMultiDele OnPlayerDamaged;

public:
	void MoveFront(float fScale);
	void MoveSide(float fScale);
	void Turn(float fScale);
	void LookUp(float fScale);
	void EquipWeapon(EWeaponType type);

public:
	void AimPress();
	void AimRelease();
	void OnPressAttack();
	void ToggleInventory();
	void SprintPress();
	void SprintRelease();

	void SwordAttack();
	void BowAttack();
	bool GetAttackCooltime()
	{
		return bisInAttackCooltime;
	}
	void SetAttackCooltime(bool flag)
	{
		bisInAttackCooltime = flag;
	}

	void SetNicknameText(FText text)
	{
		
		PlayerInfo->SetNickname(text.ToString());
		NicknameText->SetText(text);
	}

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser);

};

// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "PlayerAnimInst.h"
#include "InventoryWidget.h"
#include "PlayerHUDWidget.h"
#include "Bullet.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	SpringArm->SetupAttachment(GetCapsuleComponent());
	Camera->SetupAttachment(SpringArm);

	SwordMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Sword"));
	BowMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bow"));
	PlayerInfo = CreateDefaultSubobject<UPlayerInfoComponent>("PlayerInfo");
	NicknameText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("NicknameText"));

	NicknameText->SetupAttachment(GetCapsuleComponent());

	//SwordMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("WeaponSocketR"));
	//BowMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("WeaponSocketL"));
	SwordMesh->SetupAttachment(GetMesh(), TEXT("WeaponSocketR"));
	BowMesh->SetupAttachment(GetMesh(), TEXT("WeaponSocketL"));
	CloseAttackDistance = 75.f;
	CloseAttackRange = 50.f;

	/*static ConstructorHelpers::FObjectFinder<USkeletalMesh> BodyAsset(TEXT("SkeletalMesh'/Game/Man/Mesh/Full/SK_Man_Full_04.SK_Man_Full_04'"));

	if (BodyAsset.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(BodyAsset.Object);
	}*/

	/*static ConstructorHelpers::FObjectFinder<USkeletalMesh> InventoryBP(TEXT("SkeletalMesh'/Game/Man/Mesh/Full/SK_Man_Full_04.SK_Man_Full_04'"));

	if (BodyAsset.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(BodyAsset.Object);
	}*/



	/*GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 540.f, 0.f);
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2;

	GetMesh()->SetRelativeLocationAndRotation(FVector(0, 0, -88.f), FRotator(0.f,-90.f,0.f));
	m_SpringArm->TargetArmLength = 400.0f;
	m_SpringArm->SetRelativeRotation(FRotator(-15.0f, 0.f, 0.f));
	m_SpringArm->bUsePawnControlRotation = true;
	m_Camera->bUsePawnControlRotation = false;*/

	//GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);

	/*static ConstructorHelpers::FClassFinder<UPlayerAnimInst> PlayerAnim(TEXT("/Game/Player/BP_PlayerAnimation.BP_PlayerAnimation_C"));

	if (PlayerAnim.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(PlayerAnim.Class);
	}*/

	/*bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;*/

	//UE_LOG(LogTemp, Log, TEXT("PlayerChracter Constuctor Called"));
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	PlayerAnim = Cast<UPlayerAnimInst>(GetMesh()->GetAnimInstance());


	if (IsValid(PlayerHUDClass))
	{
		PlayerHUD = Cast<UPlayerHUDWidget>(CreateWidget(GetWorld(), PlayerHUDClass));
		PlayerHUD->AddToViewport();
		OnPlayerDamaged.AddDynamic(PlayerHUD, &UPlayerHUDWidget::SetHPAmount);
		//OnPlayerDamaged.AddDynamic(this, &APlayerCharacter::SetHPAmount);FInputModeGameOnly InputMode;
		FInputModeUIOnly InputMode;
		GetWorld()->GetFirstPlayerController()->SetInputMode(InputMode);
	}

}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Axis Bind
	PlayerInputComponent->BindAxis(TEXT("MoveFront"), this, &APlayerCharacter::MoveFront);
	PlayerInputComponent->BindAxis(TEXT("MoveSide"), this, &APlayerCharacter::MoveSide);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &APlayerCharacter::Turn);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &APlayerCharacter::LookUp);
	//PlayerInputComponent->BindAxis(TEXT("MoveFront"), this, &APlayerCharacter::Zoom);

	//Action Bind
	PlayerInputComponent->BindAction(TEXT("Attack"), EInputEvent::IE_Pressed, this, &APlayerCharacter::OnPressAttack);
	PlayerInputComponent->BindAction(TEXT("Sprint"), EInputEvent::IE_Pressed, this, &APlayerCharacter::SprintPress);
	PlayerInputComponent->BindAction(TEXT("Sprint"), EInputEvent::IE_Released, this, &APlayerCharacter::SprintRelease);
	PlayerInputComponent->BindAction(TEXT("Aim"), EInputEvent::IE_Pressed, this, &APlayerCharacter::AimPress);
	PlayerInputComponent->BindAction(TEXT("Aim"), EInputEvent::IE_Released, this, &APlayerCharacter::AimRelease);
	PlayerInputComponent->BindAction(TEXT("Inventory"), EInputEvent::IE_Pressed, this, &APlayerCharacter::ToggleInventory);

}

float APlayerCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float damage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	UE_LOG(LogTemp, Log, TEXT("PlayerDamaged"));
	float curr_hp = PlayerInfo->GetHP();
	curr_hp -= damage;
	if (curr_hp <= 0)
	{
		bIsDead = true;
		PlayerAnim->SetPlayerAnimType(EPlayerAnimType::Death);
		curr_hp = 0;
	}
	PlayerInfo->SetHP(curr_hp);
	OnPlayerDamaged.Broadcast(PlayerInfo->GetMaxHP(), curr_hp);
	//delegate 


	return 0.0f;
}

void APlayerCharacter::MoveFront(float fScale)
{
	if (!bIsDead && GetCharacterMovement()->IsMovingOnGround())
	{
		FRotator rot = Controller->GetControlRotation();
		FRotator yawRot(0.f, rot.Yaw, 0.f);

		FVector dir = FRotationMatrix(yawRot).GetUnitAxis(EAxis::X);
		AddMovementInput(dir, fScale);
	}
}

void APlayerCharacter::MoveSide(float fScale)
{
	if (!bIsDead && GetCharacterMovement()->IsMovingOnGround())
	{
		FRotator rot = Controller->GetControlRotation();
		FRotator yawRot(0.f, rot.Yaw, 0.f);

		FVector dir = FRotationMatrix(yawRot).GetUnitAxis(EAxis::Y);
		AddMovementInput(dir, fScale);
	}
}

void APlayerCharacter::Turn(float fScale)
{
	APawn::AddControllerYawInput(fScale);
}

void APlayerCharacter::LookUp(float fScale)
{
	APawn::AddControllerPitchInput(fScale);
}

void APlayerCharacter::EquipWeapon(EWeaponType type)
{
	switch (type)
	{
	case EWeaponType::None:
		break;
	case EWeaponType::Sword:
		if (WeaponType == EWeaponType::Sword)
			return;

		BowMesh->SetVisibility(false);
		WeaponType = EWeaponType::Sword;
		SwordMesh->SetVisibility(true);
		break;
	case EWeaponType::Bow:
		if (WeaponType == EWeaponType::Bow)
			return;

		SwordMesh->SetVisibility(false);
		WeaponType = EWeaponType::Bow;
		BowMesh->SetVisibility(true);
		break;
	}
}

void APlayerCharacter::AimPress()
{
}

void APlayerCharacter::AimRelease()
{
}

void APlayerCharacter::OnPressAttack()
{
	//UE_LOG(LogTemp, Log, TEXT("AttackInput, CoolTime :: %s"), bisInAttackCooltime ? TEXT("true") : TEXT("false"));
	if (!bIsDead && !bisInAttackCooltime && WeaponType != EWeaponType::None)
	{
		bisInAttackCooltime = true;
		switch (WeaponType)
		{
		case EWeaponType::Sword:
			PlayerAnim->SetPlayerAnimType(EPlayerAnimType::Attack);
			break;
		case EWeaponType::Bow:
			PlayerAnim->SetPlayerAnimType(EPlayerAnimType::RangedAttack);
			break;
		}
	}
}

void APlayerCharacter::ToggleInventory()
{
	if (!IsValid(Inventory))
	{
		Inventory = Cast<UInventoryWidget>(CreateWidget(GetWorld(), InventoryWidgetClass));
	}

	if(!Inventory->IsInViewport())
	{
		Inventory->AddToViewport();
		FInputModeUIOnly InputMode;
		GetWorld()->GetFirstPlayerController()->SetInputMode(InputMode);
	}
	else
	{
		Inventory->RemoveFromParent();
		FInputModeGameOnly InputMode;
		GetWorld()->GetFirstPlayerController()->SetInputMode(InputMode);
	}
}

void APlayerCharacter::SprintPress()
{
	if (!IsValid(PlayerAnim))
	{
		UE_LOG(LogTemp, Warning, TEXT("Player AnimInstance UnLoaded"));
		return;
	}
	PlayerAnim->SetPlayerMoveType(EPlayerMoveType::Run);
}

void APlayerCharacter::SprintRelease()
{
	if (!IsValid(PlayerAnim))
	{
		UE_LOG(LogTemp, Warning, TEXT("Player AnimInstance UnLoaded"));
		return;
	}
	PlayerAnim->SetPlayerMoveType(EPlayerMoveType::Walk);
}

void APlayerCharacter::SwordAttack()
{
	TArray<FOverlapResult>  result;

	FCollisionQueryParams	params(NAME_None, false, this);

	FVector AttackLocation = GetActorLocation() + GetActorForwardVector() * CloseAttackDistance;

	FHitResult	SweepResult;
	bool bSweep = GetWorld()->SweepSingleByChannel(SweepResult, AttackLocation - GetActorForwardVector() * CloseAttackRange,
		AttackLocation + GetActorForwardVector() * CloseAttackRange, GetActorForwardVector().ToOrientationQuat(),
		ECollisionChannel::ECC_GameTraceChannel3,
		FCollisionShape::MakeBox(FVector(CloseAttackRange, CloseAttackRange, CloseAttackRange)),
		params);

#if ENABLE_DRAW_DEBUG
	FColor	DrawColor = bSweep ? FColor::Red : FColor::Green;

	DrawDebugBox(GetWorld(), AttackLocation, FVector(CloseAttackRange, CloseAttackRange, CloseAttackRange), GetActorForwardVector().ToOrientationQuat(),
		DrawColor, false, 1.f);
#endif // ENABLE_DRAW_DEBUGEDITOR

	if (bSweep)
	{
		UE_LOG(LogTemp, Log, TEXT("HIT"));
		UGameplayStatics::ApplyPointDamage(SweepResult.GetActor(), PlayerInfo->GetDamage(), SweepResult.ImpactNormal, 
			SweepResult, GetController(),this, NULL);
	}
}

void APlayerCharacter::BowAttack()
{
	FVector FirePos(GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z + 60.f);

	FRotator BulletRot = UKismetMathLibrary::FindLookAtRotation(FirePos, FirePos + GetActorForwardVector() * 80.f);

	ABullet* Bullet = GetWorld()->SpawnActor<ABullet>(PlayerBulletClass, FirePos + GetActorForwardVector() * 80.f,
		BulletRot);
	Bullet->SetShooter(GetController()->GetPawn());
	Bullet->SetBulletDamage(PlayerInfo->GetDamage());
}

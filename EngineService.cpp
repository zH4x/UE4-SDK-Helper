#include "EngineService.h"

namespace SDK
{
	EngineService::EngineService(UGameEngine* uGameEngine) : gameEngine(uGameEngine)
	{
	}

	EngineService::EngineService(UGameEngine* uGameEngine, UFont* defaultFont)
		: gameEngine(uGameEngine),
		defaultFont(defaultFont)
	{
	}

	UFont* EngineService::GetDefaultFont()
	{
		if(!defaultFont)
		{
			defaultFont = gameEngine->SmallFont;
		}
		return defaultFont;
	}

	UGameViewportClient* EngineService::GetGameViewportClient() const
	{
		if(gameEngine)
		{
			return gameEngine->GameViewport;
		}
		return nullptr;
	}


	UGameEngine* EngineService::GetGameEngine() const
	{
		return gameEngine;
	}

	AGameState* EngineService::GetGameState() const
	{
		if(GetWorld())
		{
			return GetWorld()->GameState;
		}
		return nullptr;
	}

	UWorld* EngineService::GetWorld() const
	{
		if(GetGameViewportClient())
		{
			return GetGameViewportClient()->World;
		}
		return nullptr;
	}

	ULocalPlayer* EngineService::GetLocalPlayer() const
	{
		if(GetGameViewportClient() && GetGameViewportClient()->GameInstance && GetGameViewportClient()->GameInstance->LocalPlayers.Num() > 0)
		{
			return GetGameViewportClient()->GameInstance->LocalPlayers[0];
		}
		return nullptr;
	}

	ACharacter* EngineService::GetMyPlayer() const
	{
		if (GetPlayerController() && GetPlayerController()->Pawn)
		{
			return static_cast<ACharacter*>(GetPlayerController()->Pawn);
		}
		return nullptr;
	}

	FVector EngineService::GetMyPlayerVelocity()
	{
		return GetPlayerVelocity(GetMyPlayer());
	}


	AHUD* EngineService::GetHud()
	{
		if(GetPlayerController())
		{
			return GetPlayerController()->MyHUD;
		}
		return nullptr;
	}

	APlayerController* EngineService::GetPlayerController() const
	{
		if(GetLocalPlayer())
		{
			return GetLocalPlayer()->PlayerController;
		}
		return nullptr;
	}

	APlayerCameraManager* EngineService::GetPlayerCameraManager() const
	{
		if(GetPlayerController())
		{
			return GetPlayerController()->PlayerCameraManager;
		}
		return nullptr;
	}


	APlayerState* EngineService::GetPlayerState() const
	{
		if(GetPlayerController())
		{
			return GetPlayerController()->PlayerState;
		}
		return nullptr;
	}

	FVector EngineService::GetPlayerVelocity(ACharacter* player)
	{
		if(player && player->CharacterMovement)
		{
			return player->CharacterMovement->Velocity;
		}
		return FVector();
	}
}

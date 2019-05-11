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

	UWorld* EngineService::GetWorld() const
	{
		if(GetGameViewportClient())
		{
			return GetGameViewportClient()->World;
		}
		return nullptr;
	}

	const ULocalPlayer* EngineService::GetLocalPlayer() const
	{
		if(GetGameViewportClient() && GetGameViewportClient()->GameInstance && GetGameViewportClient()->GameInstance->LocalPlayers.Num() > 0)
		{
			return GetGameViewportClient()->GameInstance->LocalPlayers[0];
		}
		return nullptr;
	}

	const ACharacter* EngineService::GetMyPlayer() const
	{
		if (GetPlayerController() && GetPlayerController()->Pawn)
		{
			return static_cast<ACharacter*>(GetPlayerController()->Pawn);
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
}

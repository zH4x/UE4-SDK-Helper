#include "EngineService.h"

namespace SDK
{
	EngineService::EngineService(UGameEngine* uGameEngine)
		: EngineService(uGameEngine)
	{
	}


	EngineService::EngineService(UGameEngine* uGameEngine, UFont* defaultFont)
		: EngineService(uGameEngine, defaultFont)
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
		return GetGameViewportClient()->World;
	}

	const ULocalPlayer* EngineService::GetLocalPlayer() const
	{
		if(GetGameViewportClient() && GetGameViewportClient()->GameInstance && GetGameViewportClient()->GameInstance->LocalPlayers.Num() > 0)
		{
			return GetGameViewportClient()->GameInstance->LocalPlayers[0];
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

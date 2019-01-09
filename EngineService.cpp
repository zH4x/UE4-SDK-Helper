#include "EngineService.h"

namespace SDK
{
	EngineService::EngineService(UGameViewportClient* uGameViewportClient) : EngineService()
	{
		this->gameViewportClient = uGameViewportClient;
	}


	EngineService::EngineService(UGameViewportClient* uGameViewportClient, UFont* defaultFont) : EngineService(uGameViewportClient)
	{
		this->defaultFont = defaultFont;
	}

	UFont* EngineService::GetDefaultFont() const
	{
		return defaultFont;
	}

	UGameViewportClient* EngineService::GetGameViewportClient() const
	{
		return gameViewportClient;
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

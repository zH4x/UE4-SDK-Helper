#pragma once

#include "SDK.hpp"

namespace SDK
{
	class EngineService
	{
	private:
		UGameViewportClient* gameViewportClient = nullptr;
		UFont * defaultFont = nullptr;
	public:
		EngineService() = default;
		EngineService(UGameViewportClient* uGameViewportClient);
		EngineService(UGameViewportClient* uGameViewportClient, UFont * defaultFont);

		UGameViewportClient* GetGameViewportClient() const;
		UFont* GetDefaultFont() const;
		UWorld* GetWorld() const;
		const ULocalPlayer* GetLocalPlayer() const;
		APlayerController* GetPlayerController() const;
	};
}


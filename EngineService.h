#pragma once

#include "SDK.hpp"

namespace SDK
{
	class EngineService
	{
	private:
		UGameEngine* gameEngine = nullptr;
		UFont* defaultFont = nullptr;
	public:
		EngineService() = default;
		EngineService(UGameEngine * uGameEngine);
		EngineService(UGameEngine* uGameEngine, UFont * defaultFont);

		UGameEngine* GetGameEngine() const;
		UGameViewportClient* GetGameViewportClient() const;
		UFont* GetDefaultFont();
		UWorld* GetWorld() const;
		const ULocalPlayer* GetLocalPlayer() const;
		APlayerController* GetPlayerController() const;
	};
}


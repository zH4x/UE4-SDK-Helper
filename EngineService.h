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
		EngineService(UGameEngine* uGameEngine);
		EngineService(UGameEngine* uGameEngine, UFont* defaultFont);

		UGameEngine* GetGameEngine() const;
		AGameState* GetGameState() const;
		UGameViewportClient* GetGameViewportClient() const;
		UFont* GetDefaultFont();
		UWorld* GetWorld() const;
		const ULocalPlayer* GetLocalPlayer() const;
		const ACharacter* GetMyPlayer() const;
		APlayerController* GetPlayerController() const;
	};
}


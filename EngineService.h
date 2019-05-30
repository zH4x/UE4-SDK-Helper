#pragma once

#include "SDK.hpp"

namespace SDK
{
	class EngineService
	{
	protected:
		UGameEngine* gameEngine = nullptr;
		UFont* defaultFont = nullptr;
	public:
		EngineService() = default;
		EngineService(UGameEngine* uGameEngine);
		EngineService(UGameEngine* uGameEngine, UFont* defaultFont);

		virtual UGameEngine* GetGameEngine() const;
		virtual AGameState* GetGameState() const;
		virtual UGameViewportClient* GetGameViewportClient() const;
		virtual UFont* GetDefaultFont();
		virtual UWorld* GetWorld() const;
		virtual ULocalPlayer* GetLocalPlayer() const;
		virtual ACharacter* GetMyPlayer() const;
		virtual AHUD* GetHud();
		virtual APlayerController* GetPlayerController() const;
		virtual APlayerCameraManager* GetPlayerCameraManager() const;
		virtual APlayerState* GetPlayerState() const;
		virtual FVector GetPlayerVelocity(ACharacter* player);
	};
}


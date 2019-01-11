#pragma once

#include "SDK.hpp"

namespace SDK
{
	class TextDrawEntity
	{
	public:
		FString Text;
		FLinearColor Color;

		TextDrawEntity() = default;
		TextDrawEntity(FString text, FLinearColor color);
	};
}

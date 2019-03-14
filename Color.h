#pragma once

#include "SDK.hpp"

using namespace SDK;

namespace SDK
{
	// https://www.rapidtables.com/web/color/
	// https://andylangton.co.uk/tools/colour-converter
	// http://corecoding.com/utilities/rgb-or-hex-to-float.php

	static const FLinearColor Transparent(0,0,0,0);

	static const FLinearColor White(1.f,1.f,1.f,1.f);
	static const FLinearColor WhiteHalfTransparent(1.f,1.f,1.f,.5f);
	static const FLinearColor WhiteSmoke(.96f, .96f, .96f);
	static const FLinearColor AliceBlue(.94f, .97f, .96f);

	static const FLinearColor DarkDarkGray(.13f, .13f, .13f);
	static const FLinearColor DarkGray(.25f, .25f, .25f);
	//static const FLinearColor DarkGray(.66f, .66f, .66f);
	static const FLinearColor LightGray(.83f, .83f, .83f);
	static const FLinearColor Gray(0.5f, 0.5f, 0.5f, 1.f);

	static const FLinearColor Black(0, 0, 0, 1.f);
	static const FLinearColor BlackHalfTransparent(0, 0, 0, 5.f);		

	static const FLinearColor DarkRed(.5f, 0, 0, 1.f);
	static const FLinearColor Red(1.f, 0, 0, 1.f);
	static const FLinearColor RedHalfTransparent(1.f, 0, 0, .5f);
	
	static const FLinearColor SpringGreen(0, 1.f, .5f);
	static const FLinearColor Lime(0, 1.f, 0, 1.f);	
	static const FLinearColor DarkGreen(.0f, 0.39f, .0f);
	static const FLinearColor Green(0, .5f, 0);
	static const FLinearColor GreenHalfTransparent(0, 1.f, 0, .5f);

	static const FLinearColor DarkCyan(.0f, .55f, .55f);
	static const FLinearColor Cyan(.0f, 1.f, 1.f);
	static const FLinearColor DeepSkyBlue(.0f, .75f, 1.f);
	static const FLinearColor LightSkyBlue(.53f, .81f, .98f);
	static const FLinearColor DarkBlue(0, 0, .5f);
	static const FLinearColor Blue(0, 0, 1.f);
	static const FLinearColor CadetBlue(.37f, .62f, .63f);

	static const FLinearColor GreenYellow(.68f, 1.f, .13f);
	static const FLinearColor LightYellow(1.f, 1.f, 0.6f);
	static const FLinearColor DarkYellow(.6f, .6f, 0);
	static const FLinearColor Yellow(1.f, 1.f, 0);
	static const FLinearColor YellowHalfTransparent(1.f,1.f,0,.5f);

	static const FLinearColor Fuchsia(1.f, .0f, 1.f);
	static const FLinearColor MediumPurple(.58f, .44f, .86f);
	static const FLinearColor Purple(.5f, .0f, 0.5f);
	static const FLinearColor VeryDarkViolet(.10f, .0f, .20f);
	static const FLinearColor DarkViolet(.58f, .0f, .83f);
	static const FLinearColor Violet(.93f, .51f, .93f);

	static const FLinearColor Coral(1.f, 0.5f, .31f);
	static const FLinearColor Gold(1.f, .84f, .0f);
	static const FLinearColor DarkOrange(1.f, .55f, .0f);
	static const FLinearColor Orange(1.f, .65f, .0f);

	static const FLinearColor Pink(1.f, .75f, .8f);
	static const FLinearColor HotPink(1.f, .41f, .71f);
	static const FLinearColor DeepPink(1.f, .8f, .58f);

	static const FLinearColor Brown(.65f, .16f, .16f);
	static const FLinearColor SaddleBrown(.55f, .27f, .7f);
	static const FLinearColor Chocolate(.82f, .41f, .12f);
	static const FLinearColor SandyBrown(.96f, .64f, .38f);
	static const FLinearColor Bisque(1.f, .89f, .77f);
	
}
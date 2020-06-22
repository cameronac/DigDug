#pragma once
#include <SDL.h>

struct ShapeContainer
{
	ShapeContainer(bool fillRect, SDL_Rect rect);
	~ShapeContainer();

	bool fillRect;
	SDL_Rect* rect;
};


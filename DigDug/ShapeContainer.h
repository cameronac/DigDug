#pragma once
#include <SDL.h>
#include "Color.h"

struct ShapeContainer
{
	ShapeContainer(bool fillRect, SDL_Rect rect, int layer);
	~ShapeContainer();

	bool fillRect;
	SDL_Rect* rect;
	Color* color;
	int layer;
};


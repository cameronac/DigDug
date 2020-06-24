#include "ShapeContainer.h"

//Constructor
ShapeContainer::ShapeContainer(bool fillRect, SDL_Rect rect, int layer)
{
	this->rect = new SDL_Rect {rect.x, rect.y, rect.w, rect.h};
	this->fillRect = fillRect;
	this->color = new Color(0xFF, 0xFF, 0xFF, 0xFF);
	this->layer = layer;
}

//Destructor
ShapeContainer::~ShapeContainer() {
	delete rect;
	delete color;
}
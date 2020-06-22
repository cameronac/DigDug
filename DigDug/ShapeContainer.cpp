#include "ShapeContainer.h"

//Constructor
ShapeContainer::ShapeContainer(bool fillRect, SDL_Rect rect)
{
	this->rect = new SDL_Rect {rect.x, rect.y, rect.w, rect.h};
	this->fillRect = fillRect;
}

//Destructor
ShapeContainer::~ShapeContainer() {
	delete rect;
}
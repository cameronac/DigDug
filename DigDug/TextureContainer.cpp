#include "TextureContainer.h"
#include "RenderController.h"

//Constructor
TextureContainer::TextureContainer(std::string filePath, SDL_Rect& rect) {

	RenderController* renderController = &RenderController::Get();

	//this->texture = SDL_CreateTextureFromSurface(renderController->renderer, &surface);
	
	this->rect = new SDL_Rect{ rect.x, rect.y, rect.w, rect.h };
}

//Destructor
TextureContainer::~TextureContainer() {
	SDL_DestroyTexture(texture);
	delete rect;

	texture = NULL;
	rect = NULL;
}

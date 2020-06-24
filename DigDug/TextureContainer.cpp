#include "TextureContainer.h"
#include "RenderController.h"

//Constructor
TextureContainer::TextureContainer(const char* filePath, SDL_Rect& rect, SDL_Renderer &renderer, int layer) {

	this->texture = IMG_LoadTexture(&renderer, filePath); //Get Texture
	this->rect = new SDL_Rect{ rect.x, rect.y, rect.w, rect.h };
	this->layer = layer;
}

//Destructor
TextureContainer::~TextureContainer() {
	SDL_DestroyTexture(texture);
	delete rect;

	texture = NULL;
	rect = NULL;
}

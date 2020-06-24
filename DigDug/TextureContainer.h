#pragma once
#include <SDL.h>
#include <SDL_image.h>

struct TextureContainer
{
public:
	TextureContainer(const char* filePath, SDL_Rect& rect, SDL_Renderer &renderer);
	~TextureContainer();
	SDL_Texture* texture;
	SDL_Rect* rect;
};


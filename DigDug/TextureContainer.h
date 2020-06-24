#pragma once
#include <SDL.h>
#include <string>

struct TextureContainer
{
public:
	TextureContainer(std::string filePath, SDL_Rect& rect);
	~TextureContainer();
	SDL_Texture* texture;
	SDL_Rect* rect;
};


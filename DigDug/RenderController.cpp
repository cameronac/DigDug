#include "RenderController.h"
#include <stdio.h>

//Constructor
RenderController::RenderController() {
	windowController = &WindowController::Get();
	renderer = SDL_CreateRenderer(windowController->window, -1, SDL_RENDERER_ACCELERATED);

	//Error checking
	if (renderer == NULL) {
		printf("Error Renderer: Not Created!");
	}

}

//Destructor
RenderController::~RenderController() {
	SDL_DestroyRenderer(renderer);
}


//Public

//Add Texture to Rendering Process
void RenderController::addTexture(TextureContainer &texture)
{
	textures.push_back(&texture);
}

//Add Shape to Rendering Process
void RenderController::addShape(ShapeContainer &shape)
{
	shapes.push_back(&shape);
}

//Add Font to Rendering Process
void RenderController::addFont(FontContainer &font)
{
	fonts.push_back(&font);
}

//Updates Renderer Every Frame
void RenderController::updateRenderer() {

	//Update Texture
	SDL_RenderPresent(renderer);	//Present Renderer
}
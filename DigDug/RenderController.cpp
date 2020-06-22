#include "RenderController.h"
#include <stdio.h>
#include <iostream>

//Constructor
RenderController::RenderController() {
	windowController = &WindowController::Get();
	renderer = SDL_CreateRenderer(windowController->window, -1, SDL_RENDERER_ACCELERATED);

	//Error checking
	if (renderer == NULL) {
		printf("Error Renderer: Not Created!");
	}

	//Loop Through Objects
	ShapeContainer* rect = new ShapeContainer(true, SDL_Rect{ 10, 10, 10, 10 });
	shapes.push_back(rect);
}

//Destructor
RenderController::~RenderController() {
	SDL_DestroyRenderer(renderer);

	//Delete Allocated Vectors
	for (int i = 0; i < shapes.size(); i++) {
		delete shapes[i];
	}

	shapes.clear();
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


	//Background Color
	SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
	SDL_RenderClear(renderer);

	
	for (int i = 0; i < shapes.size(); i++) {

		if (SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0x00, 0xFF) == -1) {
			printf("Error Setting Render Draw Color!");
		}

		if (SDL_RenderFillRect(renderer, shapes[i]->rect) == -1) {
			printf("Error Rendering Fill Rect!");
		}
	}

	//Update Texture
	SDL_RenderPresent(renderer);	//Present Renderer
}
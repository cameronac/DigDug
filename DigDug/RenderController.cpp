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

//TODO: Add Texture Method| Arguments are &Texture, &Rect: Then added to a Model then updates in renderer
//TODO: Add Shape Method| Arguments are &Rect, Fill? bool: Then added to a Model then updates in renderer

//Updates Renderer Every Frame
void RenderController::updateRenderer() {

	//Update Texture
	SDL_RenderPresent(renderer);	//Present Renderer
}
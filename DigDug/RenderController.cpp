#include "RenderController.h"
#include <stdio.h>
#include <iostream>
#include <sstream>

//Constructor
RenderController::RenderController() {
	windowController = &WindowController::Get();
	renderer = SDL_CreateRenderer(windowController->window, -1, SDL_RENDERER_ACCELERATED);

	//Error checking
	if (renderer == NULL) {
		printf("Error Renderer: Not Created!");
	}

	//Create Shape
	ShapeContainer* rect = new ShapeContainer(true, SDL_Rect{ 10, 10, 10, 10 });
	rect->color->g = 0x00;
	shapes.push_back(rect);

	//Create Texture
	const char* filePath = "../Assets/grass_block.png";
	SDL_Rect anotherRect { 100, 100, 50, 50 };
	TextureContainer* texture = new TextureContainer(&*filePath, anotherRect, *renderer);
	textures.push_back(texture);
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


	//Display Objects
	displayTextures();
	displayShapes();
	displayText();


	//Update Texture
	SDL_RenderPresent(renderer);	//Present Renderer
}



//Private

void RenderController::displayShapes()
{
	//Display Shapes
	for (int i = 0; i < shapes.size(); i++) {

		if (SDL_SetRenderDrawColor(renderer, shapes[i]->color->r, shapes[i]->color->g, shapes[i]->color->b, shapes[i]->color->a) == -1) {
			printf("Error Setting Render Draw Color!");
		}

		if (SDL_RenderFillRect(renderer, shapes[i]->rect) == -1) {
			printf("Error Rendering Fill Rect!");
		}
	}
}

void RenderController::displayTextures()
{
	//Display Textures
	for (int i = 0; i < textures.size(); i++) {
		if (SDL_RenderCopy(renderer, textures[i]->texture, NULL, textures[i]->rect) == 1) {
			printf("Texture Couldn't Copy to Renderer!");
		}
	}

}

void RenderController::displayText()
{
}

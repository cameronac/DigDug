#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include "WindowController.h"
#include "RenderController.h"
#include "EventController.h"
#include "GameController.h"

//Entry Point
int main(int argc, char* argv[]) {

	//Initialize SDL
	SDL_Init(SDL_INIT_VIDEO);

	//Create Controller Singletons
	WindowController* windowController = &WindowController::Get();
	RenderController* renderController = &RenderController::Get();
	EventController* eventController = &EventController::Get();
	GameController* gameController = &GameController::Get();

	//Game Loop 
	while (!eventController->quit) {
		eventController->updateEvents();
		gameController->update();
		renderController->updateRenderer();
	}

	//Quit SDL
	SDL_Quit();

	return 0;
}
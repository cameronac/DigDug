#include <SDL.h>
#include "WindowController.h"
#include "RenderController.h"
#include "EventController.h"

//Entry Point
int main(int argc, char* argv[]) {

	//Initialize SDL
	SDL_Init(SDL_INIT_VIDEO);

	//Create Controller Singletons
	WindowController* windowController = &WindowController::Get();
	RenderController* renderController = &RenderController::Get();
	EventController* eventController = &EventController::Get();

	//Game Loop 
	while (true) {
		eventController->updateEvents();
	}

	//Quit SDL
	SDL_Quit();

	return 0;
}
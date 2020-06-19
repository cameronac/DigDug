#include <SDL.h>
#include "WindowController.h"
#include "RenderController.h"

//Entry Point
int main(int argc, char* argv[]) {

	//Initialize SDL
	SDL_Init(SDL_INIT_VIDEO);

	//Create Controller Singletons
	WindowController* windowController = &WindowController::Get();
	RenderController* renderController = &RenderController::Get();


	//Game Loop 
	while (true) {

	}

	//Quit SDL
	SDL_Quit();

	return 0;
}
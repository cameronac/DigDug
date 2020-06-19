#include "WindowController.h"


//Constructor
WindowController::WindowController() {
	window = SDL_CreateWindow("DigDug", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 960, 540, SDL_WINDOW_OPENGL);	//Create Window
	surface = SDL_GetWindowSurface(window); //Get Window Surface
	SDL_UpdateWindowSurface(window);	//Update Window Surface
}

//Destructor
WindowController::~WindowController() {
	SDL_DestroyWindow(window);
}





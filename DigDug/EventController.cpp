#include "EventController.h"
#include <stdio.h>


//Constructor
EventController::EventController() {
}

//Destructor
EventController::~EventController() {
}

//Static Declarations
SDL_Event EventController::event = SDL_Event();
bool EventController::rightKey = false;
bool EventController::leftKey = false;
bool EventController::upKey = false;
bool EventController::downKey = false;
bool EventController::quit = false;

//Public 

//Update Events
void EventController::updateEvents() {

	//Loop Through Events
	while (SDL_PollEvent(&event) != 0) {

		//Quit Pressed
		if (event.type == SDL_QUIT) {
			quit = true;
		}

		//Keyboard

		//Pressed
		if (event.type == SDL_KEYDOWN) {
			switch (event.key.keysym.sym) {
			
			case SDLK_RIGHT:
				rightKey = true;
				break;

			case SDLK_LEFT:
				leftKey = true;
				break;
			
			case SDLK_UP:
				upKey = true;
				break;

			case SDLK_DOWN:
				downKey = true;
				break;

			default: 
				break;
			}
		}


		//Released
		if (event.type == SDL_KEYUP) {
			switch (event.key.keysym.sym) {

			case SDLK_RIGHT:
				rightKey = false;
				break;

			case SDLK_LEFT:
				leftKey = false;
				break;

			case SDLK_UP:
				upKey = false;
				break;

			case SDLK_DOWN:
				downKey = false;
				break;

			default:
				break;
			}
		}



	}
}
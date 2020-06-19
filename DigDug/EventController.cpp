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


//Public 

//Update Events
void EventController::updateEvents() {

	//Loop Through Events
	while (SDL_PollEvent(&event) != 0) {

		//Quit Pressed
		if (event.type == SDL_QUIT) {
			printf("Quit Pressed");
		}
	}
}
#pragma once
#include <SDL.h>

class EventController
{
public:
	EventController(const EventController&) = delete; //Copy Constructor

	static EventController& Get() {
		static EventController instance;
		return instance;
	}

	static void updateEvents();

	static SDL_Event event;

private:
	EventController();
	~EventController();
};


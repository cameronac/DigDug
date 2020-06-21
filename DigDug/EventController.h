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

	//Keyboard Input
	static bool rightKey;
	static bool leftKey;
	static bool upKey;
	static bool downKey;


private:
	EventController();
	~EventController();
};


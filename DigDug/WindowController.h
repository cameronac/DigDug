#pragma once
#include <SDL.h>

//Singleton
class WindowController
{

public:
	WindowController(const WindowController&) = delete;

	static WindowController& Get() {
		static WindowController instance;
		return instance;
	}

	SDL_Window* window;
	SDL_Surface* surface;

private:
	WindowController();
	~WindowController();

};


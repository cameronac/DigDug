#pragma once
#include <vector>
#include <SDL.h>
#include "WindowController.h"


class RenderController
{
public:
	RenderController(const RenderController&) = delete; //Copy Constructor

	static RenderController& Get() {
		static RenderController instance;
		return instance;
	}

	SDL_Renderer* renderer;
	WindowController* windowController;

	//Objects to Render
	//Texture to Render Vector std::vector<>
	//Shapes to Render Vector std::vector<>

	void updateRenderer();

private:
	RenderController();
	~RenderController();

};


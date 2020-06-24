#pragma once
#include <vector>
#include <SDL.h>
#include "WindowController.h"

//Models
#include "TextureContainer.h"
#include "ShapeContainer.h"
#include "FontContainer.h"


//Singleton
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
	std::vector<TextureContainer*> textures;
	std::vector<ShapeContainer*> shapes;
	std::vector<FontContainer*> fonts;

	//Methods
	void addTexture(TextureContainer &texture);
	void addShape(ShapeContainer &shape);
	void addFont(FontContainer &font);
	void updateRenderer();


private:
	RenderController();
	~RenderController();

	void displayShapes();
	void displayTextures();
	void displayText();

};


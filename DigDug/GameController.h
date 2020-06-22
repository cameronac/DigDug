#pragma once

#include "PlayerController.h"

//Singleton
class GameController
{
public:
	GameController(const GameController&) = delete; //Copy Constructor

	static GameController& Get() {
		static GameController instance;
		return instance;
	}

	static PlayerController* playerController;

	static void update();



private:
	GameController();
	~GameController();

};


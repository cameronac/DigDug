#pragma once

#include "EventController.h"

class PlayerController
{
public:

	const int spd = 3;

	PlayerController();
	~PlayerController();
	void update();
	

private:
	EventController* eventController;
	bool checkCollision();
	void move();
};


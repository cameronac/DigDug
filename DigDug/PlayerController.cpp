#include "PlayerController.h"

//Public 

//Constructor
PlayerController::PlayerController()
{
	eventController = &eventController->Get();
}

//Destructor
PlayerController::~PlayerController()
{
}

//Checks Input and Handles Input, Collision, etc
void PlayerController::update()
{
	move();
}


//Private

//Move the player if there are no collisions
void PlayerController::move() {
	
	//Direction: 0-NULL, 1-right, 2-left, 3-up, 4-down
	int direction = 0;

	//Take Input
	if (eventController->rightKey == true) {
		if (checkCollision() == false) {
			direction = 1;
		}
	}

	if (eventController->leftKey == true) {
		if (checkCollision() == false) {
			direction = 2;
		}
	}

	if (eventController->upKey == true) {
		if (checkCollision() == false) {
			direction = 3;
		}
	}

	if (eventController->downKey == true) {
		if (checkCollision() == false) {
			direction = 4;
		}
	}

	//Move Player
	switch (direction) {
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4: 
		break;
	default: 
		break;
	}
}

bool PlayerController::checkCollision() {

}	
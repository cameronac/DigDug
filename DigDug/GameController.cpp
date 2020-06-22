#include "GameController.h"

//Constructor
GameController::GameController() {

}

//Destructor
GameController::~GameController() {
	delete playerController;
}

//Static Variables
PlayerController* GameController::playerController = new PlayerController();


//Public

//Updates Every Frame
void GameController::update() {
	playerController->update();
}
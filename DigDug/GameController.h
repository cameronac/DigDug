#pragma once

//Singleton
class GameController
{
public:
	GameController(const GameController&) = delete; //Copy Constructor

	static GameController& Get() {
		static GameController instance;
		return instance;
	}

private:
	GameController();
	~GameController();

};


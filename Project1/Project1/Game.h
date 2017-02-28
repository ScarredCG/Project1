#pragma once

#include <string>

using namespace std;

class Game
{
private:
	string _game;

public:
	Game(string game);

	~Game();

	string GetGame();

};


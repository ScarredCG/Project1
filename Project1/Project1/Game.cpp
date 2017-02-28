#include "Game.h"

#include <string>

using namespace std;

Game::Game(string game) : _game(game)
{

}


Game::~Game()
{

}

string Game::GetGame()
{
	return _game;
}

#include "Player.h"

using namespace std;

Player::Player()
{
	_player;
}

Player::Player(string player)
{
	_player = player;
}
Player::~Player()
{
}

string Player::GetPlayer()
{
	return _player;
}

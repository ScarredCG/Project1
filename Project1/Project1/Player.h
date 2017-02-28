#pragma once
#include <iostream>
#include <string>

using namespace std;


class Player
{
private:
	string _player;

public:

	Player();

	Player(string player);

	~Player();

	string GetPlayer();
};


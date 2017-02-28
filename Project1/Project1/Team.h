#pragma once
#include <string>

#include "Player.h"

#include "Game.h"

using namespace std;

class Team
{
private:
	
	string _team;

	string _teamName;

	Player _players[5];

	Game _game;

public:
	Team(string team, string teamName, Game game);

	~Team();

	bool DraftPlayer(Player addPlayer, int role);

	string GetTeamInfo();
};


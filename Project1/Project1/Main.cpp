#include "Player.h"
#include "Game.h"
#include "Team.h"
#include <iostream>
#include <string>

using namespace std;

int main()

{
	Game LoL = Game("Leage of Legends");

	Team tsm = Team("TSM:", "Team Solo Mid ", LoL);

	Player Dyrus = Player("Dyrus");

	Player Bjergson = Player("Bjergson");

	tsm.DraftPlayer(Dyrus, 0);

	tsm.DraftPlayer(Bjergson, 1);

	cout << tsm.GetTeamInfo() << endl;

	getchar();

	return 0;

}
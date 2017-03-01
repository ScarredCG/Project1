#include "Player.h"
#include "Game.h"
#include "Role.h"
#include "Team.h"
#include <iostream>
#include <string>

using namespace std;

int main()

{

	Game LoL = Game("Leage of Legends");

	Team tsm = Team("TSM:", "Team Solo Mid ", LoL);

	Player PropagandaWar = Player("PropagandaWar");

	Player Fuaximo = Player("Fuaximo");

	Player Scarred = Player("Scarred");

	Player BreathofDestiny = Player("BreathofDestiny");

	Player DustinTM = Player("DustinTM");

	Role Top = Role("Top");
	Role Jungle = Role("Jungle");
	Role Mid = Role("Mid");
	Role ADC = Role("ADC");
	Role Support = Role("Support");

	tsm.DraftPlayer(PropagandaWar, 0);
	tsm.DraftPlayer(Fuaximo, 1);
	tsm.DraftPlayer(Scarred, 2);
	tsm.DraftPlayer(BreathofDestiny, 3);
	tsm.DraftPlayer(DustinTM, 4);

	tsm.PlayerRole(Top, 0);
	tsm.PlayerRole(Jungle, 1);
	tsm.PlayerRole(Mid, 2);
	tsm.PlayerRole(ADC, 3);
	tsm.PlayerRole(Support, 4);

	cout << tsm.GetInfo() << endl;

	cout << PropagandaWar.GetPlayer() << ": " << endl;
	cout << endl;
	cout << Fuaximo.GetPlayer() << ": " << endl;
	cout << endl;
	cout << Scarred.GetPlayer() << ": " << endl;
	cout << endl;
	cout << BreathofDestiny.GetPlayer() << ": " << endl;
	cout << endl;
	cout << DustinTM.GetPlayer() << ": " << endl;
	cout << endl;

	getchar();
	return 0;

}
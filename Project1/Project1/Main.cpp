#include "Player.h"
#include "Game.h"
#include "Role.h"
#include "Team.h"
#include <iostream>
#include <string>

using namespace std;

int main()

{

	Game LoL = Game("L E A G U E  o f  L E G E N D S");
	Team PHS = Team("PHS:", "Patriot High School ", LoL);

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

	PHS.DraftPlayer(PropagandaWar, 0);
	PHS.DraftPlayer(Fuaximo, 1);
	PHS.DraftPlayer(Scarred, 2);
	PHS.DraftPlayer(BreathofDestiny, 3);
	PHS.DraftPlayer(DustinTM, 4);

	PHS.PlayerRole(Top, 0);
	PHS.PlayerRole(Jungle, 1);
	PHS.PlayerRole(Mid, 2);
	PHS.PlayerRole(ADC, 3);
	PHS.PlayerRole(Support, 4);
	cout << LoL.GetGame() << endl;
	cout << endl;

	cout << PHS.GetInfo() << endl;

	cout << PropagandaWar.GetPlayer() << ": " << endl;
	//cout << endl;
	cout << Fuaximo.GetPlayer() << ": " << endl;
	//cout << endl;
	cout << Scarred.GetPlayer() << ": " << endl;
	//cout << endl;
	cout << BreathofDestiny.GetPlayer() << ": " << endl;
	//cout << endl;
	cout << DustinTM.GetPlayer() << ": " << endl;
	//cout << endl;

	getchar();
	return 0;

}

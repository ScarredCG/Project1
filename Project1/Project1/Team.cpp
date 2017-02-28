#include "Team.h"
#include <string>

using namespace std;

Team::Team(string team, string teamName, Game game) : _team(team), _teamName(teamName), _game(game)
{

}

Team::~Team()
{

}

bool Team::DraftPlayer(Player addPlayer, int role)
{
	if (role <= 5 && _players[role].GetPlayer() == "Error")
	{
		_players[role] = addPlayer;

		return true;
	}

	return false;
}

string Team::GetTeamInfo()
{
	string info = "Team player for " + _team + "\n";

	info += _teamName + "\n";
	info += "________________";
	info += "\n";

		for (auto player : _players)
		{
			if (player.GetPlayer() != "Error")
			{
				info += player.GetPlayer() + "\n";
			}
		}

	return info;
}

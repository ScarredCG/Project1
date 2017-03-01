#include "Team.h"
#include <string>

using namespace std;

Team::Team(string team, string teamName, Game game) : _team(team), _teamName(teamName), _game(game)
{

}

Team::~Team()
{

}

bool Team::DraftPlayer(Player addPlayer, int roster)
{
	if (roster <= 5 && _players[roster].GetPlayer() == "Error")
	{
		_players[roster] = addPlayer;

		return true;
	}

	return false;
}

bool Team::PlayerRole(Role addRole, int lane)
{
	if (lane <= 5 && _players[lane].GetPlayer() == "Error")
	{
		_role[lane] = addRole;

		return true;
	}
	return false;
}

string Team::GetInfo()
{
	string info = "Team players for " + _team + "\n";

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

/*string Team::GetRoles()
{
	string roleLane = "Roles: ";

	for (auto role : _role)
	{
		if (role.GetRole() != "Error")
		{
			roleLane += role.GetRole() + "\n";
		}
	}
	return roleLane;
} */
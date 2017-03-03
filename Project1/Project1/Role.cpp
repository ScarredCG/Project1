#include "Role.h"



Role::Role()
{
	_role;
}

Role::Role(string role)
{
	_role = role;
}


Role::~Role()
{

}

string Role::GetRole()
{
	return _role;
}
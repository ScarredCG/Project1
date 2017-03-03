#pragma once
#include <iostream>
#include <string>

using namespace std;

class Role
{
private:

	string _role;

public:

	Role();

	Role(string role);

	~Role();

	string GetRole();
};
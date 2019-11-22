#pragma once
#include <string>

class Player
{
	int health{ 10 };
public:
	void takeDamage(int damage) { health -= damage; };
	std::string toString() { return "Player (health = " + std::to_string(health) + ")"; }
};


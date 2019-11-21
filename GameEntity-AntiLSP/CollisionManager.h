#pragma once
#include "Player.h"
#include "Entity.h"

class CollisionManager
{
public:
	bool collides(Player& player, Entity& entity) {
		//... collision detection stuff
		return true;
	}
};


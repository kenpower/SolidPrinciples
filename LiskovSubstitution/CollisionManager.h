#pragma once
#include <memory>
#include "Player.h"
#include "Entity.h"

class CollisionManager
{
public:
	bool collides(Player& player, std::unique_ptr<AbstractEntity>& entity) {
		//... collision detection stuff
		return true;
	}
};


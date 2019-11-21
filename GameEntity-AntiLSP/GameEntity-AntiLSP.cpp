// GameEntity-AntiLSP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
#include "Player.h"
#include "Entity.h"
#include "CollisionManager.h"

using namespace std;
int main()
{
	
	list<Entity> entities{ DangerousEntity(),  DelicateEntity(), DangerousEntity(), DelicateEntity() };
	Player player;
	CollisionManager collisionManager;

	//update loop
	for (auto entity : entities) {
		if (collisionManager.collides(player, entity)) {
			if (typeid(entity) == typeid(DelicateEntity)) {
				DelicateEntity*  delicateEntityPtr = static_cast<DelicateEntity*>(&entity);
				delicateEntityPtr->die();
			}
			if (typeid(entity) == typeid(DangerousEntity)) {
				player.takeDamage(1);
			}
		}
	}

	//draw loop
	for (auto entity : entities) {
		if (collisionManager.collides(player, entity)) {
			string entityStatus = entity.getStatus();
			if (entityStatus != "dead" && entityStatus != "Health: 0") {
				entity.Draw();
			}
		}
	}

}


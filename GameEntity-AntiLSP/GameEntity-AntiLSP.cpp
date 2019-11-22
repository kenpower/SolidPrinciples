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
	list<unique_ptr<AbstractEntity>> entities;
	entities.push_front(unique_ptr<DangerousEntity>(new DangerousEntity()));
	entities.push_front(unique_ptr<DelicateEntity>(new DelicateEntity()));

	Player player;
	CollisionManager collisionManager;

	//update loop
	for (auto&& entity : entities) {
		if (collisionManager.collides(player, entity)) {
			if (typeid(*entity) == typeid(DelicateEntity)) {
				//cast entity to DelicateEntity* in order to call non-polymorphic method die()
				static_cast<DelicateEntity*>(entity.get())->die();
			}
			if (typeid(*entity) == typeid(DangerousEntity)) {
				player.takeDamage(5);
			}
		}
	}

	//draw loop
	for (auto&& entity : entities) {
		if (collisionManager.collides(player, entity)) {
			string entityStatus = entity->getStatus();
			if (entityStatus != "dead" && entityStatus != "Health: 0") {
				entity->Draw();
			}
		}
	}

	for (auto&& entity : entities) {
		cout << entity->toString() << endl;
	}
	cout << player.toString() << endl;

}


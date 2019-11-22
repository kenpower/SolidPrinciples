// LiskovSubstitution.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
				entity->touchedByPlayer();
				player.takeDamage(entity->getDamageToPlayer());
		}
	}

	//draw loop
	for (auto&& entity : entities) {
		if (collisionManager.collides(player, entity)) {
			string entityStatus = entity->getStatus();
			if (entity->isAlive()) {
				entity->Draw();
			}
		}
	}


	for (auto&& entity : entities) {
		cout << entity->toString() << endl;
	}
	cout << player.toString() << endl;



}

#pragma once
#include <string>

class AbstractEntity
{
public:
	virtual void Draw() = 0;
	virtual std::string getStatus() = 0;
	virtual std::string toString() = 0;
	virtual bool isAlive() = 0;

	virtual int getDamageToPlayer() { return 0; };
	virtual void touchedByPlayer() {};
};

//will damage player if touched
class DangerousEntity : public AbstractEntity {
private:
	int health{10};
public:
	void Draw() { /*...drawing stuff ...*/};
	bool isAlive() { return health > 0; }
	
	std::string getStatus() { return "Health:" + std::to_string(health); };
	std::string toString() { return "DangerousEntity (health = " + std::to_string(health) + ")"; }
	int getDamageToPlayer() { return 5; };
};

//will be destroyed if touched by player
class DelicateEntity : public AbstractEntity {
private:
	bool alive{true};
	void die() { alive = false;  };

public:
	void Draw() { /*...drawing stuff ...*/ };
	void touchedByPlayer() { die(); };
	bool isAlive() { return alive; }

	std::string getStatus(){ return alive ? "alive" : "dead"; };
	std::string toString() { return "DelicateEntity (alive = " + std::string(alive ? "true" : "false") + ")"; }
};



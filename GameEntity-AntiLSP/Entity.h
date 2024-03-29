#pragma once
#include <string>

class AbstractEntity
{
public:
	virtual void Draw() = 0;
	virtual std::string getStatus() =0;
	virtual std::string toString() = 0;

};

//will damage player if touched
class DangerousEntity : public AbstractEntity {
private:
	int health{10};
public:
	void Draw() { /*...drawing stuff ...*/ };
	std::string getStatus() { return "Health:" + std::to_string(health); };
	std::string toString() { return "DangerousEntity (health = " + std::to_string(health) + ")"; }
};

//will be destroyed if touched by player
class DelicateEntity : public AbstractEntity {
private:
	bool alive{true};
public:
	void Draw() { /*...drawing stuff ...*/ };
	void die() { alive = false;  };

	std::string getStatus(){ return alive ? "alive" : "dead"; };
	std::string toString() { return "DelicateEntity (alive = " + std::string(alive ? "true" : "false") + ")"; }
};



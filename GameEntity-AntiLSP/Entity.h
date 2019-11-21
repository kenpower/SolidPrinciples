#pragma once
#include <string>

class Entity
{
public:
	void Draw() {/*...*/};
	virtual string getStatus() = 0;
};

//will damage player if touched
class DangerousEntity : public Entity {
private:
	int health{10};
public:
	string getStatus() { return "Health:" + std::to_string(health); };
};

//will be destroyed if touched by player
class DelicateEntity : public Entity {
private:
	bool alive{true};
public:
	void die() { alive = false;  };

	string getStatus(){ return alive ? "alive" : "dead"; };
};
};


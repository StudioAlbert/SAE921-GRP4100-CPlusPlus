
#pragma once

#include <iostream>

class Monster
{
public:
	Monster(int attack_, int health_);	// Constructor
	void Print();						// Print informations

private:
	int health;							// How many life points

protected:
	int atttack;						// How hard the monster can strike

};

Monster::Monster(int attack_, int health_) : atttack(attack_), health(health_)
{
}

void Monster::Print()
{
	std::cout << "Monster properties [health:" << health << ", attack:" << atttack << "]" << std::endl;
}


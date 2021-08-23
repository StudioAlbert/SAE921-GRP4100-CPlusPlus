
#include "monster.h"

Monster::Monster(int attack_, int health_) : atttack(attack_), health(health_)
{
}

Monster::~Monster()
{
}

void Monster::print()
{
	std::cout << "Monster properties [health:" << health << ", attack:" << atttack << "]" << std::endl;
}

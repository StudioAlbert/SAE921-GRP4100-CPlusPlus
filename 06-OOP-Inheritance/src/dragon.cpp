#include "dragon.h"

Dragon::Dragon(int attack_, int health_) : Monster(attack_, health_)
{
}

Dragon::~Dragon()
{
}

void Dragon::Fire()
{
	std::cout << "FIRE Attack : " << this->atttack << std::endl;
}

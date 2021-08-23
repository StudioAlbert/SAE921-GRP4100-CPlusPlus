#include "monster.h"

class Dragon : public Monster
{
	using Monster::Monster;

public:
	void Fire();
	void PrintHealth();

};

void Dragon::Fire()
{
	std::cout << "FIRE Attack : " << this->atttack << std::endl;
}

void Dragon::PrintHealth()
{
	std::cout << "Life points : " << this->health << std::endl;
}

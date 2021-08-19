
#include <iostream>

#include "Monster.h"

#pragma region Step 1 : Simple constructors, destructors
//Monster::Monster()
//{
//	std::cout << "Monster born." << std::endl;
//}
//
//Monster::~Monster()
//{
//	std::cout << "Monster dead." << std::endl;
//}
#pragma endregion


//#pragma region Step 2 : Parameters
//Monster::Monster()
//{
//	std::cout << "Monster born." << std::endl;
//}
//
//Monster::Monster(int health_, int attack_):
//attack(attack_),
//health(health_)
//{
//	std::cout << "Monster born with parameters" << std::endl;
//}
//
//Monster::~Monster()
//{
//	std::cout << "Monster dead." << std::endl;
//}
//#pragma endregion

int Monster::monsterCount = 0;

#pragma region Step 3 : Parameters and default values
Monster::Monster(int health_, int attack_) :
	attack(attack_),
	health(health_)
{
	std::cout << "Monster born with parameters" << std::endl;
	this->monsterCount++;
}

Monster::~Monster()
{
	std::cout << "Monster dead." << std::endl;
	this->monsterCount++;
}
#pragma endregion

void Monster::printInfo()
{
	std::cout << "Heatlth : " << this->health << " Attack : " << this->attack << std::endl;
}

void Monster::monsterCountPrint()
{
	std::cout << "[From static method] There is " << monsterCount << " monsters living." <<std::endl;
}

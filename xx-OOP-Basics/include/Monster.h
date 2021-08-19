#pragma once
#include <string>

class Monster
{
public:
	
#pragma region Step 1 : Simple constructors, destructors
	//// Step 1 : Simple constructors, destructors
	//Monster();
	//~Monster();
#pragma endregion

#pragma region Step 2 : Parameters
	//// Step 2 : Parameters
	//Monster();
	//Monster(int health_, int attack_);
	//~Monster();
#pragma endregion

#pragma region Step 3 : Parameters and default values
	Monster(int health_ = 50, int attack_ = 50);
	~Monster();
#pragma endregion

	void printInfo();

	// Static method
	static void monsterCountPrint();

	// Static member
	static int monsterCount;

private:
	int health;		
	int attack;

};

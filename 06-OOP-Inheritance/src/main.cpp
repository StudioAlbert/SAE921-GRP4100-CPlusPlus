#include <iostream>

#include "dragon.h"

int main() {

	std::cout << "06 - OOP tutorial" << std::endl;

	Dragon elliot(150, 200);
	Monster boo(50, 150);

	boo.Print();

	elliot.Print();
	elliot.Fire();

	return EXIT_SUCCESS;

}
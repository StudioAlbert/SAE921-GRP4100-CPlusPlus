#pragma once

#include <iostream>

class myOwnTime
{
public:
	myOwnTime(int hours_ = 0, int minutes_ = 0, int seconds_ = 0);
	~myOwnTime();

	myOwnTime operator+(myOwnTime& t1);

	int seconds;
	int hours;
	int minutes;

	void print();

};


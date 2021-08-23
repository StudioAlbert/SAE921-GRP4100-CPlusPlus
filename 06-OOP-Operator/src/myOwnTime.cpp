#include "myOwnTime.h"

myOwnTime::myOwnTime(int hours_, int minutes_, int seconds_):
	hours(hours_), minutes(minutes_), seconds(seconds_)
{
}

myOwnTime::~myOwnTime()
{
}

myOwnTime myOwnTime::operator+(myOwnTime& t1)
{
	int hours = this->hours + t1.hours;
	int minutes = this->minutes + t1.minutes;
	int seconds = this->seconds + t1.seconds;

	return myOwnTime(hours, minutes, seconds);

}

void myOwnTime::print()
{
	std::cout << hours << ":" << minutes << ":" << seconds << std::endl;
}

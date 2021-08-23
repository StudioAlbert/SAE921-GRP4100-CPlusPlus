#include <iostream>

#include "myOwnTime.h"

int main()
{
    myOwnTime timeA(04, 03, 15);
    myOwnTime timeB(15, 35, 20);

    timeA.print();
    timeB.print();

    myOwnTime timeC = timeA + timeB;
    timeC.print();
 
}



// ConsoleApplication3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

#include "Monster.h"

int main()
{
    Monster monsterA;
    std::cout << "[Direct access] a There is " << Monster::monsterCount << " monsters living." << std::endl;

    Monster monsterB(100, 100);

    // Identical behaviors ------------------------------------------
    Monster::monsterCountPrint();
    monsterB.monsterCountPrint();

    monsterA.printInfo();
    monsterB.printInfo();

}

#include <iostream>
#include "RPG.h"
#include <ctime>
using namespace std;

int main() {
    srand((unsigned) time(0));

    RPG p1 = RPG("Wiz", 0, 0.2, 60, 1);
    RPG p2 = RPG();

    printf("%s Current Stats:\n", p1.getName().c_str());
    printf("Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\n", p1.getHitsTaken(), p1.getLuck(), p1.getExp(), p1.getLevel());

    printf("%s Current Stats:\n", p2.getName().c_str());
    printf("Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\n", p2.getHitsTaken(), p2.getLuck(), p2.getExp(), p2.getLevel());
    
    while(p2.isAlive() && p1.isAlive()) {
        if (!p1.hitMissed()) {
            p1.setHitsTaken(p1.getHitsTaken() + 1);
        }
        if (!p2.hitMissed()) {
            p2.setHitsTaken(p2.getHitsTaken() + 1);
        }
        cout << p1.getName() << " hits taken: " << p1.getHitsTaken() << endl;
        cout << p2.getName() << " hits taken: " << p2.getHitsTaken() << endl;
    }
    
    if (p1.isAlive()) {
        cout << p1.getName() << " wins!" << endl;
    } else if (p2.isAlive()) {
        cout << p2.getName() << " wins!" << endl;
    } else {
        cout << "It's a draw!" << endl;
    }

}
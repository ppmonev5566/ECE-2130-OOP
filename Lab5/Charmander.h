#include <string>
#include <vector>
#include "Pokemon.h"

using namespace std;

#ifndef CHARMANDER_H
#define CHARMANDER_H
class Charmander : public Pokemon {
    public:
        Charmander();
        Charmander(string name, int hp, int attack, int defense, vector<string> type, vector<string> skills);
        void speak() /*override*/;
        void printStats() /*override*/;
    private:
        vector<string> skills;
};
#endif
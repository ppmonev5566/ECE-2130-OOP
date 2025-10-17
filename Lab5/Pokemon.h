#include <iostream>
#include <vector>
using namespace std;

#ifndef POKEMON_H
#define POKEMON_H

class Pokemon {
    protected:
        string name;
        int hp;
        int attack;
        int defense;
        vector<string> type;
    public:
        Pokemon();
        Pokemon(string name, int hp, int attack, int defense, vector<string> type);
        void speak();
        virtual void printStats();
};

#endif
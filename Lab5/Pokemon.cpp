#include <iostream>
#include "Pokemon.h"

Pokemon::Pokemon(){
    name = "Unidentified";
    hp = 0;
    attack = 0;
    defense = 0;
    cout << "Default constructor (Pokemon)\n";
}

Pokemon::Pokemon(string name, int hp, int attack, int defense, vector<string> type) {
    this->name = name;
    this->hp = hp;
    this->attack = attack;
    this->defense = defense;
    this->type = type;
    cout << "Overloaded constructor (Pokemon)\n";
}

void Pokemon::speak() {
    cout << "...\n";
}

void Pokemon::printStats() {
    printf("Name: %s\tHP: %i\tDEF: %i\tATT: %i\n", name.c_str(), hp, defense, attack);
    for(int i = 0; i < type.size(); i++){
        cout << type[i] << "\t";    
    }
    cout << endl;
}
#include <iostream>
#include <stdio.h>
#include "Charmander.h"
using namespace std;

/**
 * @brief Construct a new Charmander::Charmander object (default)
 */
Charmander::Charmander() : Pokemon() {
    type.push_back("Fire");
    skills.push_back("Growl");
    skills.push_back("Scratch");

    cout << "Default Constructor (Charmander)\n";
}

/**
 * @brief Construct a new Charmander::Charmander object (overloaded)
 * 
 * @param name Charmander's name
 * @param hp Health points
 * @param att Attack
 * @param def Defense
 * @param t Types
 * @param s Skills
 */
Charmander::Charmander(string name, int hp, int att, int def, vector<string> t, vector<string> s) : Pokemon(name, hp, att, def, t) {
    type = t;
    skills = s;
    cout << "Overloaded Constructor (Charmander)\n";
}

/**
 * @brief Says what a Charmander says
 */
void Charmander::speak() {
    cout << "Charmander-char\n";
}

/**
 * @brief Calls printStats from the parent class (Pokemon)
 *        and appends the skills used for Charmander
 */
void Charmander::printStats() {
    Pokemon::printStats();
    cout << "Skills: ";
    for (int i = 0; i < skills.size(); i++) {
        cout << skills[i] << "\t";
    }
    cout << endl;
}
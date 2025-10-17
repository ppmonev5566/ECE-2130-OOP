#include <iostream>
#include "Charmander.h"
using namespace std;

int main() {
    // vector for Charmander type
    vector<string> pokemonType;
    pokemonType.push_back("Fire");

    // vector for Charmander skills
    vector<string> skills;
    skills.push_back("Growl");
    skills.push_back("Scratch");

    cout << "-------- Constructor Created --------\n";
    Charmander charlie("Charlie", 100, 4, 4, pokemonType, skills);

    // --- Direct Charmander call ---
    cout << "\n-------- Direct Speak --------\n";
    charlie.speak();

    // --- Pokemon pointer to Charmander ---
    Pokemon* p1 = &charlie;
    cout << "\n-------- Speak called from Pokemon Pointer --------\n";
    (*p1).speak();

    // --- Charmander pointer to Charmander ---
    Charmander* c1 = &charlie;
    cout << "\n-------- Speak called from Charmander Pointer --------\n";
    (*c1).speak();

    // --- Print stats ---
    cout << "\n-------- Print Stats --------\n";
    charlie.printStats();

    return 0;
}

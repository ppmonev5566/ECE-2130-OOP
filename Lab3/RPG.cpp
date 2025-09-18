
#include "RPG.h"
#include <cstdlib> // for rand()
#include <ctime>   // for time()
// Constructors
RPG::RPG(){
    name = "NPC";
    hits_taken = 0;
    luck = 0.1;
    exp = 50.0;
    level = 1;
    inventory.push_back("potion");
}
RPG::RPG(string name, int hits_taken, float luck, float exp, int level){
    this->name = name;
    this->hits_taken = hits_taken;
    this->luck = luck;
    this->exp = exp;
    this->level = level;
}

// Mutators
bool RPG::isAlive() const {
    return (this->hits_taken < MAX_HITS_TAKEN);
}
void RPG::setHitsTaken(int new_hits) {
    this->hits_taken = new_hits;
}
bool RPG::hitMissed() const {
    float random = ((float) rand()) / ((float) RAND_MAX);
    if (this->luck > random) {
        return true;
    }
    return false;
}
// Accessors
string RPG::getName() const {
    return this->name;
}
int RPG::getHitsTaken() const {
    return this->hits_taken;
}
float RPG::getLuck() const {
    return this->luck;
}
float RPG::getExp() const {
    return this->exp;
}
int RPG::getLevel() const {
    return this->level;
}
vector<string> RPG::getInventory() const {
    return this->inventory;
}



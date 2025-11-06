
#include "RPG.h"
#include <cstdlib> // for rand()
#include <ctime>   // for time()
#include <random>
// Constructors and destructor
RPG::RPG(){
    name = "NPC";
    hits_taken = 0;
    luck = 0.1;
    exp = 50.0;
    level = 1;
}
RPG::RPG(string name, int hits_taken, float luck, float exp, int level){
    this->name = name;
    this->hits_taken = hits_taken;
    this->luck = luck;
    this->exp = exp;
    this->level = level;
}
RPG::~RPG(){
    // Destructor logic if needed
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
void RPG::setName(string name) {
    this->name = name;
}
void RPG::updateExpLevel() {
    this->exp += 50;
    if (this->exp >= 100){
        this->level += 1;
        this->exp = 0;
        this->luck += 0.01;
    }
}
void RPG::printStats() const {
    cout << "Name: " << this->name << "\t";
    cout << "Hits Taken: " << this->hits_taken << "\t";
    cout << "Luck: " << this->luck << "\t";
    cout << "Experience: " << this->exp << "\t";
    cout << "Level: " << this->level << "\t";
    cout << "Status: " << (this->isAlive() ? "Alive" : "Dead") << endl;
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
//aaa
void RPG::attack(RPG* opponent) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0.0, 1.0);

    float random_num = dis(gen);

    bool hit = (random_num) > (HIT_FACTOR * opponent->getLuck());
    if (hit) {
        opponent->setHitsTaken(opponent->getHitsTaken() + 1);
    }
}

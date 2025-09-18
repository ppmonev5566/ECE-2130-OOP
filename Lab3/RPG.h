
#ifndef RPG_H
#define RPG_H

#include <iostream>
#include <vector>
using namespace std;

const int INVENTORY_SIZE = 10;
const float HIT_FACTOR = 0.05;
const int MAX_HITS_TAKEN = 3;

class RPG {
    public:
        // Constructors
        RPG();
        RPG(string name, int hits_taken, float luck, float exp, int level);
        
        // Mutators
        bool isAlive() const;
        void setHitsTaken(int new_hits);
        bool hitMissed() const;

        // Accessors
        string getName() const;
        int getHitsTaken() const;
        float getLuck() const;
        float getExp() const;
        int getLevel() const;
        vector<string> getInventory() const;

        //Complete the rest
    
    private:
        string name;
        int hits_taken;
        float luck;
        float exp;
        int level;
        vector<string> inventory;
        //complete the rest
};
#endif
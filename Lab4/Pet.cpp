#include "Pet.h"

Pet::Pet(){
    this->name = "unnamed";
    this->age = 0;
    this->owner = "none";
}
Pet::Pet(string name, int age, string owner, bool isHouseTrained){
    this->name = name;
    this->age = age;
    this->owner = owner;
    this->isHouseTrained = isHouseTrained;
}

// getters
string Pet::getName(){
    return this->name;
}
int Pet::getAge(){
    return this->age;
}
string Pet::getOwner(){
    return this->owner;
}
bool Pet::getIsHouseTrained(){
    return this->isHouseTrained;
}

//setters
void Pet::updateName(string name){
    this->name = name;
}
void Pet::updateAge(){
    this->age++;
}
void Pet::updateOwner(string adopter){
    this->owner = adopter;
}
void Pet::setHouseTrained(){
    this->isHouseTrained = true;
}



#include <iostream>
#ifndef Pet
using namespace std;
class Pet{
    private:
        string name;
        int age;
        string owner;
        bool isHouseTrained = false;
    public:
        Pet();
        Pet(string name, int age, string owner, bool isHouseTrained);
        string getName();
        int getAge();
        string getOwner();
        bool getIsHouseTrained();

        void updateName(string name);
        void updateAge();
        void updateOwner(string adopter);
        void setHouseTrained();
};
#endif
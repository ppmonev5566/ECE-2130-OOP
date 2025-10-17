#include "Pet.h"
#include <iostream>
using namespace std;

void printInfo(Pet pet){
    cout << "Name: " << pet.getName() << " | Age: " << pet.getAge() << " | Owner: " << pet.getOwner() << " | Is house trained? " << pet.getIsHouseTrained() << endl;
}
int main(){
    Pet dog = Pet();
    Pet cat = Pet("kitkat", 7, "elon musk", false);

    cout << "Before updates: " << endl;
    printInfo(dog);
    printInfo(cat);

    cat.updateAge();
    cat.updateName("cat");
    cat.updateOwner("trump");
    cat.setHouseTrained();

    cout << "After updates: " << endl;
    printInfo(cat);

    return 0;
}


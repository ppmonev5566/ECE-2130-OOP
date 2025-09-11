#include <iostream>
#include <vector>

using namespace std;
/**
 * @brief prints the elements in the vector and their memory locations
 * 
 * @param vec - vector of integers
 */
void printMemVec(vector<int> vec) {
    printf("Array - Each int is worth %lu bytes\n", sizeof(vec[0]));
    for(int i = 0; i < vec.size(); i++){
        printf("Value: %i at Memory Location: %p\n", vec[i], &vec + i);
    }
}

/**
 * @brief increments all of the elements in v by 10
 * 
 * @param vec - address to a vector of integers
 */
void incVecBy10(vector<int> &vec) {
    for(int i = 0; i < vec.size(); i++){
        vec[i] += 10;
    }
}

int main() {
    const int SIZE = 5;
    
    vector<int> vec(5);

    for(int i = 0; i < SIZE; i++){
        vec[i] = 100 + i;
    }

    printf("Before Increment--------\n");
    printMemVec(vec);

    incVecBy10(vec);
    printf("After Increment--------\n");
    printMemVec(vec);

    vec.pop_back();
    printf("After Pop--------\n");
    printMemVec(vec);


    vec.push_back(101);
    vec.push_back(102);
    printf("After Push--------\n");
    printMemVec(vec);
}
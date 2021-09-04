#include <iostream>

using namespace std;

int main()
{
    // POINTERS TO CONSTANTS
    // the data pointed to by the pointers is constant and cannot be changed
    // the pointer itself can change and point somewhere else
    int high_score {100};
    int low_score  { 65};
    const int *score_ptr1 {&high_score};

    *score_ptr1 = 86;        //ERROR
    score_ptr1 = &low_score; //OK

    // CONSTANT POINTERS
    // The data pointed to by the pointers can be changed
    // The pointer itself cannot change and point somewhere else

    int *const score_ptr2 {&high_score};

    *score_ptr2 = 86;       //OK
    score_ptr2 = &low_score;//ERROR

    // CONSTANT POINTERS TO CONSTANTS
    // The data pointed to by the pointer is constant and cannot change
    // The pointer itself cannot be changed and point somewhere else

    const int const *score_ptr3 {&high_score};

    *score_ptr3 = 86;       //ERROR
    score_ptr3 = &low_score;//ERROR

}
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int *p;
    cout << "Value of p is: " << p << endl;
    cout << "Address of p is: " << &p << endl;
    cout << "size of p is: " << sizeof p << endl;
    p = nullptr;
    cout << "The new value of p is: " << p << endl; 


    // init of pointers
    double high_temp {100.0};

    double *temp_ptr {nullptr};

    temp_ptr = &high_temp; // points to high_temp



    // dereferencing a pointer: changing the value at the location at which the pointer is pointing
    cout << "\n---------------------------------" << endl;

    cout << "high_temp value is: " << high_temp << endl;
    cout << "the value of temp_ptr is: " << temp_ptr << endl;
    cout << "the value at temp_ptr is: " << *temp_ptr << endl;
    *temp_ptr = 10;
    cout << "the value of temp_ptr after assigning 10 is: " << *temp_ptr << endl;
    cout << "the value of high_temp is now: " << high_temp << endl;

    // derefencing a pointer to a vector
    vector<string> stooges {"Frank", "James", "Mary"};
    vector<string> *vector_pointer {&stooges};

    cout << "\n---------------------------------" << endl;
    cout << "Position 0 of stooges: " << stooges.at(0) << endl;
    cout << "Position 0 of defered vector pointer:" << (*vector_pointer).at(0) << endl;


    return 0;
}
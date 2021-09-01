#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int *int_ptr {nullptr};
    int_ptr = new int;
    cout << int_ptr << endl;
    delete int_ptr;

    cout << "\n-------------------" << endl;
    size_t size {};
    double *temp_ptr {nullptr};

    cout << "how many temperatures do you need: ";
    cin >> size;

    // create an array of size "size" on heap memory
    // and store the address to the pointer temp_ptr
    temp_ptr = new double[size];

    cout << temp_ptr << endl;

    delete [] temp_ptr; // delete heap variable
    
    cout << "\n-------------------" << endl;
    

    
    return 0;
}
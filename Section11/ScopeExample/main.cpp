#include <iostream>

using namespace std;

void local_example(int x)
{
    int num  {1000};
    cout << "\nLocal num is: " << num << " in function local_example - start" << endl;
    num = x;
    cout <<  "Local num is: " << num << " in function local_example - end" << endl;
}

void static_example()
{
    static int num {5000}; // this value won't be reinitialized every time the function is callede. Init will only happen once
    cout << "\nLocal static num is: " << num << " in static_example -start" << endl;
    num += 1000;
    cout << "Local static num is: " << num << " in static_example -end" << endl;
}

int main()
{
    int num {100};
    int num1 {500};
    
    cout << "Local num is: " << num << endl;

    {   //creates a new level of scope
        int num {200};
        cout << "Local num is " << num << " in the inner block of main" << endl;
        cout << "Inner block of main can see out -num1 is " << num1 << endl;

    }
    cout << "Local num is: " << num << " in main" << endl;

    local_example(10);

    static_example();
    static_example();
    static_example();
}

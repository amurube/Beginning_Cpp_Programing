#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double num {};

    cout << "Enter a number (double): ";
    cin >> num;

    cout << "\nThe sqrt of " << num << " is " << sqrt(num) << endl;
    cout << "The cubed root of " << num << " is " << cbrt(num) << endl;

    cout << "\nThe sine of " << num << " is " << sin(num) << endl;
    cout << "The cosine of " << num << " is " << cos(num) << endl;



    return 0;
}
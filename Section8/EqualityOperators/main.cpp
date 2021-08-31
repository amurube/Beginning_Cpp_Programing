#include <iostream>

using namespace std;

int main()
{
    bool equal_result {false};
    bool not_equal_result {false};

    int num1, num2;

    cout<< std::boolalpha;
    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;
    equal_result = num1 == num2;
    not_equal_result = num1 != num2;

    cout << "\nComparison result (equal): "<< equal_result << endl;
    cout << "Comparison result (not equal): " << not_equal_result << endl;

    return 0;
}
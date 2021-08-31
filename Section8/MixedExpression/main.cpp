#include <iostream>

using namespace std;

int main()
{
    // Ask the user to input three integers
    cout << "Enter three integers: " << endl;
    int num1, num2, num3;
    cin >> num1;
    cin >> num2;
    cin >> num3;

    // Calculate the sum of the integers
    int sum;
    sum = num1 + num2 + num3;

    // Calculate the average of the integers
    double average {0.0};
 //   average = sum / 3; // this is a division of integers and will return an integer
 //    average = (double)sum / 3; // casting as it was done for c. It should not be used!!
    average = static_cast<double>(sum) / 3; // casting in modern c++ which has the benefits of checks that have been incorporated


    // Display the integers, the sum and the average
    cout << "The introduced integers are: " << num1 << " " << num2 << " " << num3 << endl;
    cout << "The sum of the integers is:  " << sum << endl;
    cout << "The average is:              " << average << endl; 

    return 0;
}
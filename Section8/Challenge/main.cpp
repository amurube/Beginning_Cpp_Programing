/*
For this program I will be using US dollars and cents.

Write a program that asks the user to enter the following:
An integer representing the number of cents

You may assume that the number of cents entered is greater than or equal to zero

The program should then display how to provide that change to the user.

In the US:
    2 dollar is 100 cents
    1 quarter is 25 cents
    1 dime is 10 cents
    1 nickel is 5 cents, and
    1 peeny is 1 cent.

Here is a sample run:

Enter an amount in cents: 92

You can provide this change as follows:
dollars : 0
quarters: 3
dimes   : 1
nickels : 1
pennies : 2

feel free to use your own currency system.
Also, think of how you might solve the problem using the modulo operator.

Have fun and test your program!!
*/

#include <iostream>

using namespace std;

int main()
{
    int amount {0};
    cout << "Enter an amount in cents: ";
    cin >> amount;

    int dollars{}, quarters{}, dimes{}, nickels{}, pennies{};
    dollars = amount/100;
    amount %= 100;

    quarters = amount/25;
    amount %= 25;

    dimes = amount/10;
    amount %= 10;

    nickels = amount/5;
    pennies %= 5;

    cout << "\ndollars : " << dollars << endl; 
    cout << "quarters: " << quarters << endl;
    cout << "dimes   : " << dimes << endl;
    cout << "nickels : " << nickels << endl;
    cout << "pennies : " << pennies << endl;


    return 0;
}
#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account frank_account;
    frank_account.set_name("Frank's Account");
    frank_account.set_balance(1000.0);

    if (frank_account.deposit(200.0))
        cout << "Deposit OK" << endl;
    else
        cout << "Dclceposit Not allowed" << endl;

    if (frank_account.withdraw(500.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Not sufficient fonds" << endl;
    
    if (frank_account.withdraw(1500.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Not sufficient fonds" << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    char selection;
    do
    {
        cout << "-----------------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;
        
        switch(selection)
        {
            case '1': 
                cout<< "You chose " << selection << " - doing this"<< endl;
                break;
            case '2': 
                cout<< "You chose " << selection << " - doing that"<< endl;
                break;
            case '3': 
                cout<< "You chose " << selection << " - doing something else"<< endl;
                break;
            case 'q':
            case 'Q': 
                cout<< "You chose " << selection << " - Exiting the program"<< endl;
                break;
            default:
                cout << "That is not a valid option"<< endl;
                break;
        }
        cout << endl;

    }while(selection != 'q' && selection != 'Q');
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    char letter_grade {};

    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;
    cout << endl;

    switch(letter_grade)
    {
        case 'a' :
        case 'A' : 
            cout << "You need a 90 or above, study hard!" << endl;
            break;
        case 'b' :
        case 'B' :
            cout << "You need a 80 to 89 for a B, go study!" << endl;
            break;
        case 'c' :
        case 'C' :
            cout << "You need a 70 to 79 for an averge grade!" << endl;
            break;
        case 'd' :
        case 'D' :
            cout << "Hmmm, you should strive for a better grade. All you need is 60 to 69" << endl;
            break;
        case 'f' :
        case 'F' :
        {
            char confirm {};
            cout << "Are you sure (Y/N)?";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y')
            {
                cout << "OK, I guess you do not want to study" << endl;
            }
            else if (confirm == 'n' || confirm == 'N')
            {
                cout << "good! go study!" << endl;
            }
            else
                cout << "illigal choice" << endl;
            break;
        }
            cout << "XXXXXX" << endl;
            break;
        default:
            cout << "Sorry, that's not a valid grade"<< endl;
            break;
    }

    return 0;
}
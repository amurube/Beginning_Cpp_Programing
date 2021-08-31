/*
This challenge is about using a collection (list) of integers and allowing the user
to select options from a menu to perform operation on the list.

Your program should display a menu options to the user as follows:

    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:

The program should onlz accept valid choices from the user, both upper and lowercase selections should be allowed
If an illegal choice is made you should display: "Unknown selection, please try again" and the menu options should be
displayed again.

If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display / "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space.
For example [ 1 2 3 4 5 ]

If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list
which you will add to the list and then display it was added. For example, if the user enters 5
you should display "5 added"
Duplicate list entries are OK

If the user enters 'M' or 'm' you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list
For example, if the list contains [2 4 5 1], you should display "The smallest number is 1"
If the list is empty you should display "Unable to determine the smallest number - list is empty" 

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1] you should display "The largest number is 5"
If the list is empty you should display "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display "Goodbye" and the program should terminate.

Before you begin: Write out the steps you need to take and decide in what order they should be done.
Thank about what loops you should use as well as what you will use for your selection logic

Additional functionality if you wish to extend this program.
-search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again)(Hint:the vector class has a clear() method)
- don't allow duplicate entries
- come up with your own ideas!

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char selection;
    vector<int> vec {};
    //vector<int> vec {1,2,3,4,5};

    do{
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "C - Clear the list" << endl;
        cout << "Q - Quit" << endl;
        cout <<"\nEnter your choice: ";

        cin >> selection;

        switch (selection)
        {
            case 'p':
            case 'P':
            {
                if(vec.size()>=1)
                {
                    cout << "[ ";
                    for(auto value:vec)
                        cout << value << " ";
                    cout << "]" << endl;
                }
                else   
                    cout << "[] - the list is empty" << endl;
                break;
            }
            case 'A':
            case 'a':
            {
                int new_number;
                cout << "Enter an integer to add: ";
                cin >> new_number;
                vec.push_back(new_number);
                cout << new_number << " has been added" << endl;
                
                // Uncomment for debugging 
                // cout << "[ ";
                // for(auto value:vec)
                //     cout << value << " ";
                // cout << "]" << endl;
                break;
            }
            case 'M':
            case 'm':
            {
                if(vec.size()>=1)
                {
                    double average {0.0};
                    double sum {0.0};
                    for(auto value:vec)
                        {
                            sum += value;
                        }
                    average = sum/vec.size();
                    cout << "The mean of the values in the vector is: " << average << endl;
                }
                else   
                    cout << "Unable to calculate the mean - no data" << endl;
                break;
            }
            case 'S':
            case 's':
            {
                if(vec.size()>=1)
                {
                    int min_val = vec.at(0);
                    for(auto value:vec)
                        if (value < min_val)
                            min_val = value;
                    cout << "The smallest number is: " << min_val << endl;
                }
                else   
                    cout << "Unable to determine the largest number - list is empty" << endl;
                break;
            }
            case 'L':
            case 'l':
            {
                if(vec.size()>=1)
                {
                    int max_val = vec.at(0);
                    for(auto value:vec)
                        if (value > max_val)
                            max_val = value;
                    cout << "The largest number is: " << max_val << endl;
                }
                else   
                    cout << "Unable to determine the smallest number - list is empty" << endl;
                break;
            }
            case 'C':
            case 'c':
            {
                vec.clear();
                cout << "List has been cleared" << endl;
                break;
            }
            case 'Q':
            case 'q':
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "That option is not available, try one of the following keys:" << endl;
        }
        cout << "---------------------------------" << endl;

    }while(selection!='Q' && selection!='q');
    return 0;
}
/*
Recall the challenge from Section 9 below.
Your challenge for section 11 is to modularize your solution to the Section 9
challenge by refactoring your solution so that it uses functions.

You decide how to modularize the program.
You can use my solution which is included in this file, or modularize your solution.

Here are a few hints:
    - Create functions for each major function
    - Keep the functions small
    - Remember the Boss/Worker analogy
    - Keep the vector declaration in the main function and pass the vector object 
      to any function that requires it

DO NOT move the vector object outside main and make it a global variable.

    - You can start by defining a function that displays the menu
    - You can then define a function that reads the selection from the user and returns it in uppercase
    - Create a function for each menu option
    - Create functions that display the list of numbers, calculates the mean and so forth

Take it one function at the time and take your time
If you get frustrated take a break // this isn't as easy as it looks the first time you do it!!

Finally, don't forget to use function prototypes!


*/



#include <iostream>
#include <vector>

using namespace std;

void print_menu_and_get_selection(char &selection);
void print_vector(const vector<int> &vec, size_t vec_size);
void add_new_number(vector<int> &vec);
void calculate_mean(const vector<int> &vec);
void print_smallest(const vector<int> &vec);
void print_largest(const vector<int> &vec);
void clear_list(vector<int> &vec);

int main()
{
    char selection;
    vector<int> vec {};
    //vector<int> vec {1,2,3,4,5};

    do{
        print_menu_and_get_selection(selection);

        switch (selection)
        {
            case 'p':
            case 'P':
            {
                print_vector(vec, vec.size());
                break;
            }
            case 'A':
            case 'a':
            {
                add_new_number(vec);
                break;
            }
            case 'M':
            case 'm':
            {
                calculate_mean(vec);
                break;
            }
            case 'S':
            case 's':
            {
                print_smallest(vec);
                break;
            }
            case 'L':
            case 'l':
            {
                print_largest(vec);
                break;
            }
            case 'C':
            case 'c':
            {
                clear_list(vec);
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


void print_menu_and_get_selection(char &selection)
{
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "C - Clear the list" << endl;
    cout << "Q - Quit" << endl;
    cout <<"\nEnter your choice: ";

    cin >> selection;    
}

void print_vector(const vector<int> &vec, size_t vec_size) // since I passed the vector by reference I had to provide the vector size
{
    if(vec.size()>=1)
    {
        cout << "[ ";
        for( size_t i{0}; i<vec_size; i++)
            cout << vec.at(i) << " ";
        cout << "]" << endl;

    }
    else   
        cout << "[] - the list is empty" << endl;
}

void add_new_number(vector<int> &vec)
{
    int new_number;
    cout << "Enter an integer to add: ";
    cin >> new_number;
    vec.push_back(new_number);
    cout << new_number << " has been added" << endl;
}

void calculate_mean(const vector<int> &vec)
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
}

void print_smallest(const vector<int> &vec)
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
}

void print_largest(const vector<int> &vec)
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
}

void clear_list(vector<int> &vec)
{
    vec.clear();
    cout << "List has been cleared" << endl;
}
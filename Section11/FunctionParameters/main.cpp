#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value1(int num)
{
    num = 1000;
}

void pass_by_value2(string s)
{
    s = 'Changed';
}

void pass_by_value3(vector<string> v)
{
    v.clear();
}

void print_vector(vector<string> v)
{
    for (string c:v)
        cout << c << " ";
    cout << endl; 
}

int main()
{
    int num {10};
    int another_num {20};

    cout << "num before calling pass_by_value1: " << num << endl;
    pass_by_value1(num);
    cout << "num after calling pass_by_value1: " << num << endl;

    string name {"Frank"};
    cout << "name before calling pass_by_value2: " << name << endl;
    pass_by_value2(name);
    cout << "name after calling pass_by_value2: " << name << endl;

    cout << "---------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curlz"};
    print_vector(stooges);
    pass_by_value3(stooges);
    cout << "stooges after calling pass_by_value3: ";
    print_vector(stooges);
}
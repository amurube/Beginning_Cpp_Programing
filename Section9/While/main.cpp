#include <iostream>
#include <vector>
using namespace std;

//vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, -99};
vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9};

int main()
{
    const int value_check {-99};
    unsigned int pos {0}, count {0};
    
    while (pos<vec.size() && vec.at(pos) != value_check )
    {
        count++;
        pos++;
    }
    count = pos;
    cout << count << endl;
}
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec {1,2,3};
    int result {0};
    
    if (vec.size()>1)
    {
        for(size_t i{0}; i<vec.size(); i++)
        {
            for (size_t j{i+1}; j<vec.size(); j++)
                result += vec.at(i)*vec.at(j);
        }
    }
    else 
        result = 0;

    cout << "The result of multiplying by pairs is: " << result << endl;
    return 0;
}
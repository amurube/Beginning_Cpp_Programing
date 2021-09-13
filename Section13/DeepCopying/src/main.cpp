// The program will crash!!!

#include <iostream>
#include <string>

using namespace std;

class Deep
{
private:
    int *data;

public:
    void set_data_value(int d) {*data = d;}
    int get_data_value() {return *data;}

    // Constructor
    Deep(int d);
    // Copy Constructor
    Deep(const Deep &source);
    // Destructor
    ~Deep();
};

Deep::Deep(int d)
{
    data = new int;
    *data = d;
}

/////////////// Two options:

// option 1:

// Deep::Deep(const Deep &source)
// {
//     data = new int; // we create a new area to allocate the copy
//     *data = *source.data; // we copy the data to the newly allocated area
//     cout << "Copy constructor - Deep copy" << endl;
// }

// Option 2:
// alternatively we can delegate to the constructor the creation of the copy
Deep::Deep(const Deep &source)
    : Deep{*source.data}
{
    cout << "Copy constructor - Deep copy" << endl;
}

Deep::~Deep()
{
    delete data;
    cout << "Destructor called - freeing data" << endl;
}

void display_Deep(Deep s)
{
    cout << s.get_data_value() << endl;
}

int main()
{
    Deep obj1 {100};
    display_Deep(obj1);

    Deep obj2 {obj1};
    obj2.set_data_value(1000);

    return 0;
}
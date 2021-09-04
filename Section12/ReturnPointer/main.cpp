#include <iostream>

using namespace std;

int *create_array(size_t size, int init_value = 0)
{
    int *new_storage {nullptr};
    new_storage = new int[size];
    for(size_t i{0};i < size; i++ )
        *(new_storage + i) = 0;
    return new_storage;
}

void display(const int *const array, size_t size)
{
    for (size_t i{0}; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

int main()
{
    int *my_array{nullptr};
    size_t size;
    int init_value{};

    cout << "\nHow many integers would zou like to allocate?: ";
    cin >> size;
    cout << "What value would you like to initializate them to?: ";
    cin >> init_value;

    my_array = create_array(size, init_value);

    display(my_array, size);
    delete [] my_array;
    return 0;

}
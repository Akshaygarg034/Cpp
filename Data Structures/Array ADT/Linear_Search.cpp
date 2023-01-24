#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

int linearSearch(struct Array arr, int key)
{
    for (int i = 0; i < arr.length; i++)
    {
        if (key == arr.A[i])
            return i;
    }
    return -1;
}

int main()
{
    Array arr = {{1, 2, 3, 4, 5}, 10, 5};
    cout << "Element Found At Index " << linearSearch(arr, 10) << endl;

    return 0;
}
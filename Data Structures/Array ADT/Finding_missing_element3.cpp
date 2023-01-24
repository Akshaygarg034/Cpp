#include <iostream>
using namespace std;

struct Array
{
    int A[15];
    int length;
    int size;
};

void missing(Array arr)
{
    int max = arr.A[arr.length-1];
    int l = arr.A[0];
    int h = arr.A[arr.length - 1];

    int B[max + 1] = {};

    for (int i = 0; i < arr.length; i++)
    {
        B[arr.A[i]]++;
    }

    for (int i = l; i <= h; i++)
    {
        if (B[i] == 0)
            cout << "\nMissing element is " << i;
    }
}

int main()
{
    Array arr = {{6, 7, 9, 10, 14, 15}, 6, 15};
    missing(arr);
    return 0;
}
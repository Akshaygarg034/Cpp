#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void duplicate(Array arr)
{
    int min = arr.A[0];
    int max = arr.A[arr.length - 1];
    int B[max+1] = {};
    for (int i = 0; i < arr.length; i++)
    {
        B[arr.A[i]]++;
    }

    for (int i = min; i <= max; i++)
    {
        if(B[i] > 1)
        cout<<i<<" is repeated "<<B[i]<<" times\n";
    }
};

int main()
{
    Array arr = {{5, 6, 6, 8, 9, 10, 11, 11, 11, 14}, 10, 10};
    duplicate(arr);

    return 0;
}
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
    int s = 0, sum = 0;
    for (int i = 0; i < arr.length; i++)
    {
        s += arr.A[i];
    }
    sum = (arr.A[arr.length - 1] * (arr.A[arr.length - 1] + 1)) / 2;
    cout << "Missing Element is " << (sum - s);
}

int main()
{
    Array arr = {{1, 2, 3, 4, 5, 7, 8, 9, 10}, 9, 15};
    missing(arr);
    return 0;
}
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
    int last_duplicate = -1;
    for (int i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] == arr.A[i + 1] && arr.A[i] != last_duplicate)
        {
            cout << arr.A[i] << " ";
            last_duplicate = arr.A[i];
        }
    }
}

void duplicate_and_count(Array arr)
{
    int j = 0;
    for (int i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] == arr.A[i + 1])
        {
            j = i + 1;
            while (arr.A[i] == arr.A[j])
                j++;
            cout << arr.A[i] << " is repeating " << j - i << " times\n";
            i = j - 1;
        }
    }
}

int main()
{
    Array arr = {{5, 6, 6, 8, 9, 10, 11, 11, 11, 14}, 10, 10};
    // duplicate(arr);
    duplicate_and_count(arr);
    return 0;
}
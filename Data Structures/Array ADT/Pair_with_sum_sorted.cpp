#include <iostream>
using namespace std;

struct Array
{
    int A[15];
    int length;
    int size;
};

void pair_sum(Array arr, int k)
{
    int i = 0, j = arr.length - 1;
    while (i < j)
    {
        if (arr.A[i] + arr.A[j] == k)
        {
            cout << arr.A[i] << " and " << arr.A[j] << "\n";
            i++; j--;
        }
        else if(arr.A[i] + arr.A[j] < k)
        i++;
        else{
            j--;
        }

    }
}

int main()
{
    Array arr = {{2, 3, 4, 6, 7, 8, 9, 10}, 8, 15};
    pair_sum(arr, 10);

    return 0;
}
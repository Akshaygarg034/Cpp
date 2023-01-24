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
    for (int i = 0; i < arr.length - 1; i++)
    {
        for (int j = i + 1; j < arr.length; j++)
        {
            if (arr.A[i] + arr.A[j] == k)
                cout << arr.A[i] << " and " << arr.A[j] << "\n";
        }
    }
}

void pair_sum_hash(Array arr, int k)
{
    int min = arr.A[0];
    int max = arr.A[0];
    for (int i = 1; i < arr.length - 1; i++)
    {
        if (arr.A[i] > max)
            max = arr.A[i];
        if (arr.A[i] < min)
            min = arr.A[i];
    }

    int H[max+1]={};
    for (int i = 0; i < arr.length; i++)
    {
        if(H[k- arr.A[i]] != 0)
        cout<<arr.A[i]<<" and "<<k-arr.A[i]<<"\n";

        H[arr.A[i]]++;
    }
    
}

int main()
{
    Array arr = {{6, 7, 9, 10, 4, 3, 2, 5}, 8, 15};
    // pair_sum(arr, 10);
    pair_sum_hash(arr, 10);
    return 0;
}
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
    for (int i = 0; i < arr.length; i++)
    {
        int count = 1;
        if (arr.A[i] != -1)
        {
            for (int j = i + 1; j < arr.length; j++)
            {
                if (arr.A[i] == arr.A[j])
                {
                    count++;
                    arr.A[j] = -1;
                }
            }
            if (count > 1)
                cout << arr.A[i] << " is repeated " << count << " times \n";
        }
    }
}

void duplicate_hashtable(Array arr)
{
    int min = arr.A[0];
    int max = arr.A[0];
    for (int i = 1; i < arr.length-1; i++)
    {
        if(arr.A[i] > max)
        max = arr.A[i];
        if(arr.A[i] < min)
        min = arr.A[i];
    }
    
    int H[max +1]={};
    for (int i = 0; i < arr.length; i++)
    {
        H[arr.A[i]]++;
    }
    for (int i = min; i <= max; i++)
    {
        if(H[i] > 1)
        cout<<i<<" is repeated "<<H[i]<<" times\n";
    }
    
    
}

int main()
{
    Array arr = {{7, 6, 1, 4, 9, 10, 1, 7, 2, 1}, 10, 10};
    duplicate(arr);
    // duplicate_hashtable(arr);

    return 0;
}
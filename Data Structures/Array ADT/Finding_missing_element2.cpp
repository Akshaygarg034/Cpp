#include <iostream>
using namespace std;

struct Array
{
    int A[15];
    int length;
    int size;
};

void missing_single(Array arr)
{
    int l = arr.A[0];
    int diff = l - 0;
    for (int i = 0; i < arr.length; i++)
    {
        if ((arr.A[i] - i) != diff)
        {
            cout << "Missing element is " << (i + diff);
            break;
        }
    }
}

void missing_multiple(Array arr)
{
    int l = arr.A[0];
    int diff = l - 0;
    for (int i = 0; i < arr.length; i++)
    {
        if ((arr.A[i] - i) != diff)
        {
        while(diff < arr.A[i]-i){
            cout<<"\nMissing element is "<<i+diff;
            diff++;
        }
        }
    }
}

int main()
{
    Array arr = {{6, 7, 9, 10, 14, 15}, 6, 15};
    // missing_single(arr);
    missing_multiple(arr);
    return 0;
}
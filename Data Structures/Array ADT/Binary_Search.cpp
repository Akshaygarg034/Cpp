#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

int binarySearch(struct Array arr, int key)
{
    int l = 0;
    int h = arr.length - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (key == arr.A[mid])
            return mid;
        else if (arr.A[mid] < key)
            l = mid + 1;
        else
        {
            h = mid - 1;
        }
    }
    return -1;
}

int main()
{
    struct Array arr = {{10, 20, 30, 40, 50}, 10, 5};
    cout << binarySearch(arr, 30) << endl;
    return 0;
}
#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};

struct Array *merge(struct Array arr1, struct Array arr2)
{
    struct Array *arr3 = new Array;
    int i = 0, j = 0, k = 0;
    while (i < arr1.length && j < arr2.length)
    {
        if (arr1.A[i] < arr2.A[j])
        {
            arr3->A[k++] = arr1.A[i++];
        }
        else
        {
            arr3->A[k++] = arr2.A[j++];
        }
    }
    for (; i < arr1.length; i++)
    {
        arr3->A[k++] = arr1.A[i];
    }
    for (; j < arr2.length; j++)
    {
        arr3->A[k++] = arr2.A[j];
    }
    arr3->length = arr1.length + arr2.length;
    arr3->size = 10;
    return arr3;
}
void display(Array *arr)
{
    for (int i = 0; i < arr->length; i++)
    {
        cout << arr->A[i] << " ";
    }
    cout << "\n";
}

int main()
{
    struct Array arr1 = {{1, 2, 3, 4, 5}, 5, 10};
    struct Array arr2 = {{6, 7, 8, 9, 10}, 5, 10};
    struct Array *arr3;
    arr3 = merge(arr1, arr2);
    display(arr3);

    return 0;
}
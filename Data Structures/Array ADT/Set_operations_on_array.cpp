#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};

struct Array *Union(struct Array arr1, struct Array arr2)
{
    struct Array *arr3 = new Array;
    int i = 0, j = 0, k = 0;
    while (i < arr1.length && j < arr2.length)
    {
        if (arr1.A[i] < arr2.A[j])
        {
            arr3->A[k++] = arr1.A[i++];
        }
        else if(arr2.A[j] < arr1.A[i])
        {
            arr3->A[k++] = arr2.A[j++];
        }
        else if(arr1.A[i] == arr2.A[j])
        {
            arr3->A[k++] = arr1.A[i++];
            j++;
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
    arr3->length = k;
    arr3->size = 10;
    return arr3;
}

struct Array *Intersection(struct Array arr1, struct Array arr2)
{
    struct Array *arr3 = new Array;
    int i = 0, j = 0, k = 0;
    while (i < arr1.length && j < arr2.length)
    {
        if (arr1.A[i] < arr2.A[j])
        {
            i++;
        }
        else if(arr2.A[j] < arr1.A[i])
        {
            j++;
        }
        else if(arr1.A[i] == arr2.A[j])
        {
            arr3->A[k++] = arr1.A[i++];
            j++;
        }
    }

    arr3->length = k;
    arr3->size = 10;
    return arr3;
}

struct Array *Difference(struct Array arr1, struct Array arr2)
{
    struct Array *arr3 = new Array;
    int i = 0, j = 0, k = 0;
    while (i < arr1.length && j < arr2.length)
    {
        if (arr1.A[i] < arr2.A[j])
        {
            arr3->A[k++] = arr1.A[i++];
        }
        else if(arr2.A[j] < arr1.A[i])
        {
            j++;
        }
        else if(arr1.A[i] == arr2.A[j])
        {
            i++;
            j++;
        }
    }
    for (; i < arr1.length; i++)
    {
        arr3->A[k++] = arr1.A[i];
    }

    arr3->length = k;
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
    struct Array arr2 = {{3, 5, 8, 9, 10}, 5, 10};
    struct Array *arr3;
    // arr3 = Union(arr1,arr2);
    // arr3 = Intersection(arr1,arr2);
    arr3 = Difference(arr1,arr2);
    
    display(arr3);

    return 0;
}
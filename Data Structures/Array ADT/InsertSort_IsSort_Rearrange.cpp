#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void InsertSort(struct Array &arr, int key)
{
    if (arr.length == arr.size)
        return;
    int i = arr.length - 1;
    while (i >= 0 && arr.A[i] > key)
    {
        arr.A[i + 1] = arr.A[i];
        i--;
    }
    arr.A[i + 1] = key;
    arr.length++;
}

int IsSort(struct Array arr)
{
    for (int i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
        {
            return 0;
        }
    }
    return 1;
}

void Rearrange(struct Array &arr)
{
    int i, j;
    i = 0;
    j = arr.length - 1;
    while (i < j)
    {
        while (arr.A[i] < 0)
        {
            i++;
        }
        while (arr.A[j] > 0)
        {
            j--;
        }
        if (i < j)
            swap(arr.A[i], arr.A[j]);
    }
}

void display(struct Array *p)
{
    for (int i = 0; i < p->length; i++)
    {
        cout << p->A[i] << " ";
    }
}
int main()
{
    Array arr = {{-20, 10, 30, -40, 50}, 10, 5};
    // InsertSort(arr, 25);
    // cout<<IsSort(arr)<<endl;
    // Rearrange(arr);
    display(&arr);
    return 0;
}
#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void insert(struct Array *arr, int index, int x)
{
    int i;
    if (index >= 0 && index <= arr->length)
    {
        for (i = arr->length; i > index; i--)
            arr->A[i] = arr->A[i - 1];
        arr->A[index] = x;
        arr->length++;
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
    Array arr = {{10, 20, 30, 40, 50}, 10, 5};
    insert(&arr, 3, 10);
    display(&arr);
    return 0;
}
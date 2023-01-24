#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void append(struct Array *p, int x)
{
    if (p->length < p->size)
    {
        p->A[p->length++] = x;
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
    Array arr = {{1, 2, 3, 4, 5}, 10, 5};
    append(&arr, 6);
    display(&arr);
    return 0;
}
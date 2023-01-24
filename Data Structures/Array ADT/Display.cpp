#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

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
    display(&arr);
    return 0;
}
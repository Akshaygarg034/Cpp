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

int linearSearch(struct Array &arr, int key)
{
    for (int i = 0; i < arr.length; i++)
    {
        if (key == arr.A[i])
        {
            if (i > 0)
            {
                // swap(arr.A[i], arr.A[i - 1]);  /*Transposition Method*/

                swap(arr.A[i], arr.A[0]);  /*Move To Front/Head Method*/
            }
            return i;
        }
    }
    return -1;
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
    cout << "Element Found At Index " << linearSearch(arr, 4) << endl;
    display(&arr);
    return 0;
}
#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void Reverse_1(struct Array &a)
{
    int b[a.length];
    for (int i = a.length - 1, j = 0; i >= 0 ; i--, j++)
    {
        b[j] = a.A[i];
    }
    for (int i = 0; i < a.length; i++)
    {
        a.A[i] = b[i];
    }
}

void Reverse_2(struct Array &arr){
   for (int i = 0, j= arr.length-1 ; i < j ; i++, j--)
   {
       swap(arr.A[i] , arr.A[j]);
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
    
    // Reverse_1(arr);
    // Reverse_2(arr);
    display(&arr);

    return 0;
}
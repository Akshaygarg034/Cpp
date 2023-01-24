#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

int get(struct Array arr, int i)
{
    if (i >= 0 && i < arr.length)
        return arr.A[i];
    else
        return -1;
}

void set(struct Array &arr, int i, int key)
{
    if (i >= 0 && i < arr.length)
        arr.A[i] = key;
}

int max(struct Array arr)
{
    int max = arr.A[0];
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i] > max)
            max = arr.A[i];
    }
    return max;
}

int min(struct Array arr)
{
    int min = arr.A[0];
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i] < min)
            min = arr.A[i];
    }
    return min;
}

int sum(struct Array arr){
    int sum = 0;
    for (int  i = 0; i < arr.length; i++)
    {
        sum += arr.A[i];
    }
    return sum;
}

float avg(struct Array arr){
    int sum = 0;
    for (int  i = 0; i < arr.length; i++)
    {
        sum += arr.A[i];
    }
    return ((float)sum/arr.length);
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
    // cout<<get(arr, 4)<<endl;

    // set(arr, 3, 0);
    // display(&arr);

    // cout<<min(arr)<<endl;

    // cout<<max(arr)<<endl;

    // cout<<sum(arr)<<endl;

    // cout<<avg(arr)<<endl;
    return 0;
}
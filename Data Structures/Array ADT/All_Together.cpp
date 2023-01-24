#include <iostream>
using namespace std;

class Array
{
private:
    int *A;
    int length;
    int size;
    void swap(int &x, int &y);

public:
    Array()
    {
        length = 0;
        size = 10;
    }
    Array(int sz)
    {
        length = 0;
        size = sz;
    }
    ~Array()
    {
        delete[] A;
    }
    void Display();
    void Append(int x);
    void Insert(int index, int x);
    int Delete(int index);
    int LinearSearch(int key);
    int BinarySearch(int key);
    int Get(int index);
    void Set(int index, int x);
    int Max();
    int Min();
    int Sum();
    float Avg();
    void Reverse();
    void Reverse2();
    void InsertSort(int x);
    int isSorted();
    void Rearrange();
    Array *Merge(Array arr2);
    Array *Union(Array arr2);
    Array *Diff(Array arr2);
    Array *Inter(Array arr2);
};

void Array::Display()
{
    int i;
    cout << "\nElements are\n";
    for (i = 0; i < length; i++)
        cout << A[i] << " ";
}
void Array::Append(int x)
{
    if (length < size)
    {
        A[length++] = x;
    }
}
void Array::Insert(int index, int x)
{
    int i;
    if (index >= 0 && index <= length)
    {
        for (i = length; i > index; i--)
            A[i] = A[i - 1];
        A[index] = x;
        length++;
    }
}
int Array::Delete(int index)
{
    int x = 0;
    int i;

    if (index >= 0 && index < length)
    {
        x = A[index];
        for (i = index; i < length - 1; i++)
            A[i] = A[i + 1];
        length--;
        return x;
    }

    return 0;
}
void Array::swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int Array::LinearSearch(int key)
{
    for (int i = 0; i < length; i++)
    {
        if (key == A[i])
        {
            if (i > 0)
            {
                // swap(arr.A[i], arr.A[i - 1]);  /*Transposition Method*/

                swap(A[i], A[0]); /*Move To Front/Head Method*/
            }
            return i;
        }
    }
    return -1;
}
int Array::BinarySearch(int key)
{
    int l, mid, h;
    l = 0;
    h = length - 1;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == A[mid])
            return mid;
        else if (key < A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int Array::Get(int index)
{
    if (index >= 0 && index < length)
        return A[index];
    return -1;
}
void Array::Set(int index, int x)
{
    if (index >= 0 && index < length)
        A[index] = x;
}
int Array::Max()
{
    int max = A[0];
    int i;
    for (i = 1; i < length; i++)
    {
        if (A[i] > max)
            max = A[i];
    }
    return max;
}
int Array::Min()
{
    int min = A[0];
    int i;
    for (i = 1; i < length; i++)
    {
        if (A[i] < min)
            min = A[i];
    }
    return min;
}
int Array::Sum()
{
    int s = 0;
    int i;
    for (i = 0; i < length; i++)
        s += A[i];

    return s;
}
float Array::Avg()
{
    return (float)Sum() / length;
}
void Array::Reverse()
{
    int b[length];
    for (int i = length - 1, j = 0; i >= 0; i--, j++)
    {
        b[j] = A[i];
    }
    for (int i = 0; i < length; i++)
    {
        A[i] = b[i];
    }
}
void Array::Reverse2()
{
    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        swap(A[i], A[j]);
    }
}
void Array::InsertSort(int x)
{
    int i = length - 1;
    if (length == size)
        return;
    while (i >= 0 && A[i] > x)
    {
        A[i + 1] = A[i];
        i--;
    }
    A[i + 1] = x;
    length++;
}
int Array::isSorted()
{
    int i;
    for (i = 0; i < length - 1; i++)
    {
        if (A[i] > A[i + 1])
            return 0;
    }
    return 1;
}
void Array::Rearrange()
{
    int i, j;
    i = 0;
    j = length - 1;

    while (i < j)
    {
        while (A[i] < 0)
            i++;
        while (A[j] >= 0)
            j--;
        if (i < j)
            swap(A[i], A[j]);
    }
}
Array *Array::Merge(Array arr2)
{
    int i, j, k;
    i = j = k = 0;

    Array *arr3 = new Array(length + arr2.length);

    while (i < length && j < arr2.length)
    {
        if (A[i] < arr2.A[j])
            arr3->A[k++] = A[i++];
        else
            arr3->A[k++] = arr2.A[j++];
    }
    for (; i < length; i++)
        arr3->A[k++] = A[i];
    for (; j < arr2.length; j++)
        arr3->A[k++] = arr2.A[j];
    arr3->length = length + arr2.length;

    return arr3;
}
Array *Array::Union(Array arr2)
{
    int i, j, k;
    i = j = k = 0;

    Array *arr3 = new Array(length + arr2.length);

    while (i < length && j < arr2.length)
    {
        if (A[i] < arr2.A[j])
            arr3->A[k++] = A[i++];
        else if (arr2.A[j] < A[i])
            arr3->A[k++] = arr2.A[j++];
        else
        {
            arr3->A[k++] = A[i++];
            j++;
        }
    }
    for (; i < length; i++)
        arr3->A[k++] = A[i];
    for (; j < arr2.length; j++)
        arr3->A[k++] = arr2.A[j];

    arr3->length = k;

    return arr3;
}
Array *Array::Inter(Array arr2)
{
    int i, j, k;
    i = j = k = 0;

    Array *arr3 = new Array(length + arr2.length);

    while (i < length && j < arr2.length)
    {
        if (A[i] < arr2.A[j])
            i++;
        else if (arr2.A[j] < A[i])
            j++;
        else if (A[i] == arr2.A[j])
        {
            arr3->A[k++] = A[i++];
            j++;
        }
    }

    arr3->length = k;

    return arr3;
}
Array *Array::Diff(Array arr2)
{
    int i, j, k;
    i = j = k = 0;

    Array *arr3 = new Array(length + arr2.length);

    while (i < length && j < arr2.length)
    {
        if (A[i] < arr2.A[j])
            arr3->A[k++] = A[i++];
        else if (arr2.A[j] < A[i])
            j++;
        else
        {
            i++;
            j++;
        }
    }
    for (; i < length; i++)
        arr3->A[k++] = A[i];

    arr3->length = k;

    return arr3;
}
int main()
{
    Array *arr;
    int ch, sz;
    int x, index, key;

    cout << "Enter Size of Array: ";
    scanf("%d", &sz);
    arr = new Array(sz);
    Array arr2(10);

    arr->Display();
    arr->Append(x);
    arr->Insert(index, x);
    arr->Delete(index);
    arr->LinearSearch(key);
    arr->BinarySearch(key);
    arr->Get(index);
    arr->Set(index, x);
    arr->Max();
    arr->Min();
    arr->Sum();
    arr->Avg();
    arr->Reverse();
    arr->Reverse2();
    arr->InsertSort(x);
    arr->isSorted();
    arr->Rearrange();
    arr->Merge(arr2);
    arr->Union(arr2);
    arr->Diff(arr2);
    arr->Inter(arr2);

    return 0;
}
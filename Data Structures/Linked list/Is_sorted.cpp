#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void isSorted(Node *p)
{
    int x = INT32_MIN;
    while (p)
    {
        if (p->data < x)
        {
            cout << "Not sorted";
            exit(0);
        }
        x = p->data;
        p = p->next;
    }
    cout << "Sorted";
}

int main()
{
    struct Node *temp;
    int A[] = {3, 2, 7, 9};
    
    create(A, 3);
    isSorted(first);
    return 0;
}
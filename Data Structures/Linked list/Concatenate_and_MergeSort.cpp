#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *first = NULL, *second = NULL, *third = NULL;

void create1(int A[], int n)
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
void create2(int A[], int n)
{
    int i;
    struct Node *t, *last;
    second = new Node;
    second->data = A[0];
    second->next = NULL;
    last = second;
    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void concat(Node *p, Node *q)
{
    third = p;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = q;
}

void mergeSort(Node *p, Node *q)
{
    Node *last;
    if (p->data < q->data)
    {
        third = last = p;
        p = p->next;
        third->next = NULL;
    }
    else
    {
        third = last = q;
        q = q->next;
        third->next = NULL;
    }
    while (p && q)
    {
        if (p->data < q->data)
        {
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else
        {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }
    if (p)
        last->next = p;
    else
        last->next = q;
}

void display(Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    struct Node *temp;
    int A[] = {1, 4, 7, 8, 10};
    int B[] = {2, 3, 5, 6, 9};
    create1(A, 5);
    create2(B, 5);
    // concat(first, second);
    mergeSort(first, second);
    display(third);
    return 0;
}
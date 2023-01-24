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

void insert_sort(Node *p, int key)
{
    Node *t = new Node;
    t->data = key;
    t->next = NULL;

    Node *q;
    while (p && p->data < key)
    {
        q = p;
        p = p->next;
    }
    if (p == first)
    {
        t->next = first;
        first = t;
    }
    else
    {
        t->next = q->next;
        q->next = t;
    }
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
    int A[] = {3, 5, 7};
    create(A, 3);
    insert_sort(first, 4);
    display(first);
    return 0;
}
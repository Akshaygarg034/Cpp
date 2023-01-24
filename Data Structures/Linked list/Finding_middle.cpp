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
int count(Node *p)
{
    int count = 0;
    while (p != 0)
    {
        count++;
        p = p->next;
    }
    return count;
}

void Middle(Node *p)
{
    Node *q = p;
    while (q)
    {
        q = q->next;
        if (q)
            q = q->next;
        p = p->next;
    }
    cout<<p->data;
}

int main()
{
    struct Node *temp;
    int A[] = {3, 5, 7, 9, 11};
    create(A, 3);
    Middle(first);
    return 0;
}
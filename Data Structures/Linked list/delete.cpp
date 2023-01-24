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

void Delete(Node *p, int index)
{
    if (index < 1 || index > count(first))
    {
        return;
    }
    Node *q;
    if (index == 1)
    {
        q = first;
        first = first->next;
        delete q;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        delete p;
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
    int A[] = {3, 5, 7, 9};
    create(A, 3);
    Delete(first, 4);
    display(first);
    return 0;
}
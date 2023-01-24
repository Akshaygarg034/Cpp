#include <iostream>
using namespace std;

struct Node
{
    Node *prev;
    int data;
    Node *next;
} * first;

void create(int A[], int n)
{
    Node *last, *t;
    first = new Node;
    first->data = A[0];
    first->prev = first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

int length(Node *p)
{
    int length = 0;
    while (p)
    {
        length++;
        p = p->next;
    }
    return length;
}

void Reverse(Node *p)
{
    Node *temp;
    while (p != NULL)
    {
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;
        p = p->prev;
        if (p != NULL && p->next == NULL)
        {
            first = p;
        }
    }
}

void display(Node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    Reverse(first);
    display(first);
    return 0;
}
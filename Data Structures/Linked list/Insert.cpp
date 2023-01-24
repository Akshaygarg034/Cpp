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
void insert(Node *p, int index, int key)
{
    if (index < 0 || index > count(first))
        return;

    if (index == 0)
    {
        p = new Node;
        p->data = key;
        p->next = first;
        first = p;
    }
    else
    {
        Node *t = new Node;
        t->data = key;
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}
void insert_last(Node *p, int key)
{
    Node *t = new Node;
    t->data = key;
    t->next = NULL;

    Node *last = NULL;
    if (first == NULL)
    {
        first = last = t;
    }
    else
    {
        while (p)
        {
            last = p;
            p = p->next;
        }
        last->next = t;
        last = t;
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
    insert(first, 0, 1);
    insert_last(first, 10);
    display(first);
    return 0;
}
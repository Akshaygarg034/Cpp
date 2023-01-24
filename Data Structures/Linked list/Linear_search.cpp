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

Node *linear_search(Node *p, int key)
{
    while (p)
    {
        if (p->data == key)
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

Node *R_linear_search(Node *p, int key)
{
    if (p == 0)
        return 0;
    if (key == p->data)
        return p;
    return R_linear_search(p->next, key);
}

Node *Improved_linear_search(Node *p, int key)
{
    Node *q = NULL;
    while (p)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;
}
int main()
{
    struct Node *temp;
    int A[] = {3, 5, 7, 9, 10, 2, 1, 15};
    create(A, 8);
    if (linear_search(first, 7))
    // if(R_linear_search(first, 20))
    // if(Improved_linear_search(first, 7))
    {
        cout << "Element is present";
    }
    else
    {
        cout << "Element is not present";
    }
    return 0;
}
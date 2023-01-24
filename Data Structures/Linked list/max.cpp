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

int max(Node *p)
{
    int max = INT32_MIN;
    while (p)
    {
        if (p->data > max)
        {
            max = p->data;
        }
        p = p->next;
    }
    return max;
}

int R_max(Node *p)
{
    int x = 0;
    if (p == 0)
    {
        return INT32_MIN;
    }
    else
    {
        int x = R_max(p->next);
        // return x > p->data ? x : p->data;
        if (p->data > x)
            return p->data;
        else
        {
            return x;
        }
    }
}

int main()
{
    struct Node *temp;
    int A[] = {3, 5, 7, 9, 10, 2, 1, 15};
    create(A, 8);
    cout << max(first);
    // cout << R_max(first);
    return 0;
}
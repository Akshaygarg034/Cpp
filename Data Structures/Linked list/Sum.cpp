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

int sum(Node *p)
{
    int sum = 0;
    while (p)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int R_sum(Node *p)
{
    if (p == 0)
        return 0;
    else
    {
        return R_sum(p->next) + p->data;
    }
}

int main()
{
    struct Node *temp;
    int A[] = {3, 5, 7, 9, 10, 2, 1, 15};
    create(A, 8);
    cout<<sum(first);
    // cout<<R_sum(first);
    return 0;
}
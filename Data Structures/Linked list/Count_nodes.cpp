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

int R_count(Node *p)
{
    if (p == 0)
        return 0;
    else
    {
        return R_count(p->next) + 1;
    }
}

int main()
{
    struct Node *temp;
    int A[] = {3, 5, 7, 9, 10, 2, 1, 15};
    create(A, 8);
    cout<<count(first);
    // cout << R_count(first);
    return 0;
}
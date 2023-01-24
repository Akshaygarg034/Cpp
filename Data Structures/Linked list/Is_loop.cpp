#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

bool isloop(Node *p)
{
    Node *q = p;
    do
    {
        p = p->next;
        q = q->next;
        if (q)
        {
            q = q->next;
        }
        else
        {
            q;
        }
    } while (p && q && p != q);

    if (p == q)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    struct Node *temp;
    int A[] = {3, 5, 7, 10, 25};
    create(A, 5);
    Node *p = first, *q = first;
    p = first->next->next;
    q = first->next->next->next->next;
    q->next = p;
    if (isloop(first))
    {
        cout << "yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}
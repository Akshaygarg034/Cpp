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
int count(Node *p)
{
    int l = 0;
    while (p != NULL)
    {
        l++;
        p = p->next;
    }
    return l;
}
void display(Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

// Uses Extra Array
void reverse1(Node *p)
{
    int *A = new int[count(first)];
    int i = 0;
    while (p)
    {
        A[i] = p->data;
        i++;
        p = p->next;
    }
    i--;
    p = first;
    while (p)
    {
        p->data = A[i];
        i--;
        p = p->next;
    }
}

// Reversing Links
void reverse2(Node *p)
{
    Node *q, *r;
    while (p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

// Recursive Method
void R_reverse(Node *q, Node *p)
{

    if (p != NULL)
    {
        R_reverse(p, p->next);
        p->next = q;
    }
    else
    {
        first = q;
    }
}

int main()
{
    struct Node *temp;
    int A[] = {3, 5, 7, 10, 25, 81, 32, 2};
    create(A, 8);
    R_reverse(NULL, first);

    display(first);
    return 0;
}
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
        last->next=t;
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

void R_display(Node *p){
    if(p!=NULL){
        // On interchanging the position of cout and function call, this function prints the elements in reverse order
        cout<<p->data<<" ";
        R_display(p->next);
    }
}

int main()
{
    struct Node *temp;
    int A[] = {3, 5, 7, 9, 10, 2, 1, 15};
    create(A, 8);
    display(first);
    // R_display(first);
    return 0;
}
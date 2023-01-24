#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} * head;

void create(int A[], int n)
{
    Node *last, *t;
    head = new Node;
    head->data = A[0];
    head->next = head;
    last = head;
    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

int length(Node *p)
{
    int length = 0;
    do
    {
        length++;
        p = p->next;
    } while (p != head);
    return length;
}

void display(Node *p)
{
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
}

void R_display(Node *p)
{
    static int flag = 0;
    if (p != head || flag == 0)
    {
        flag = 1;
        cout << p->data<<" ";
        R_display(p->next);
    }
    flag = 0;
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    display(head);
    // R_display(head);
    return 0;
}
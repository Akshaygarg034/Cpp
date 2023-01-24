#include <iostream>
using namespace std;

struct Node
{
    Node *prev;
    int data;
    Node *next;
} * head;

void create(int A[], int n)
{
    Node *last, *t;
    head = new Node;
    head->data = A[0];
    head->next = head->prev = head;
    last = head;
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
    do
    {
        length++;
        p = p->next;
    } while (p != head);
    return length;
}

void insert(Node *p, int index, int key)
{
    if (index < 0 || index > length(head))
        return;

    if (index == 0)
    {
        if (head == NULL)
        {
            Node *t = new Node;
            t->data = key;
            head = t;
            head->prev = head->next = head;
        }
        Node *t = new Node;
        t->data = key;

        t->prev = head->prev;
        head->prev->next = t;
        t->next = head;
        head->prev = t;
        head = t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        Node *t = new Node;
        t->data = key;

        p->next = t;
        t->next = p->next;
        t->prev = p;
        if (p->next)
            p->next->prev = t;
    }
}
void Delete(Node *p, int index)
{
    if (index < 1 || index > length(head))
    {
        return;
    }
    
    if (index == 1)
    {
        head->prev->next = head->next;
        head->next->prev = head->prev;
        head = head->next;
        delete p;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        p->prev->next = p->next;
        if (p->next)
            p->next->prev = p->prev;
        delete p;    
    }
}

void display(Node *p)
{
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    insert(head, 3, 15);
    // Delete(head, 1);
    display(head);
    return 0;
}
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

void insert(Node *p, int index, int key)
{
    if (index < 0 || index > length(head))
        return;

    if (index == 0)
    {
        Node *t = new Node;
        t->data = key;

        if (head == NULL)
        {
            head = t;
            head->next = head;
        }
        else
        {
            while (p->next != head)
            {
                p = p->next;
            }
            p->next = t;
            t->next = head;
            head = t;
        }
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
    insert(head, 0, 0);
    display(head);
    return 0;
}
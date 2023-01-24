#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
} * head;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = A[0];
    head->next = head;
    last = head;
    for (int i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}
int length(Node *p)
{
    int len = 0;
    do
    {
        len++;
        p = p->next;
    } while (p != head);
    return len;
}
void Delete(Node *p, int index)
{
    if (index < 1 || index > length(head))
    {
        return;
    }
    Node *q;
    if (index == 1)
    {
        while (p->next != head)
        {
            p = p->next;
        }
        if (p == head)
        {
            delete head;
            head->next = NULL;
        }
        else
        {
            p->next = head->next;
            delete head;
            head = p->next;
        }
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
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
    cout << endl;
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    Delete(head, 4);
    display(head);
    return 0;
}
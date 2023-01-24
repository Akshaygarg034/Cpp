#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} * top;

void push(int key)
{
    Node *t = new Node;
    if (t == NULL)
    {
        cout << "Stack is full (Stack Overflow)\n";
    }
    else
    {
        t->data = key;
        t->next = top;
        top = t;
    }
}

void pop()
{
    if (top == NULL)
    {
        cout << "Stack is Empty (Stack Underflow)\n";
    }
    else
    {
        Node *p = top;
        top = top->next;
        delete p;
    }
}

void peek(int index)
{
    Node *p = top;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
    }
    if (p)
        cout << p->data<<"\n";
    else
        cout << "Invalid Index\n";
}

void stackTop()
{
    if (top)
        cout << top->data;
    else
        cout << "Null\n";
}

void isEmpty()
{
    if (top == NULL)
        cout << "Yes\n";
    else
        cout << "No\n";
}

void isFull()
{
    Node *t = new Node;
    if (t == NULL)
        cout << "Yes\n";
    else
        cout << "No\n";
}

void display()
{
    Node *p = top;
    while (p)
    {
        cout << p->data << "\n";
        p = p->next;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    // pop();
    // peek(1);
    // isEmpty();
    // isFull();
    // stackTop();
    display();
    return 0;
}
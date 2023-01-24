#include <iostream>
using namespace std;

struct Node
{
    char data;
    Node *next;
} * top;

void push(char key)
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
int isBalanced(char *exp)
{
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push('(');
        }
        else if (exp[i] == ')')
        {
            if (top == NULL)
                return 0;
            pop();
        }
    }
    if (top == NULL)
        return 1;
    else
        return 0;
}

int main()
{
    char exp[] = "(a+b)*(c+d)";
    cout << isBalanced(exp);
    return 0;
}
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *top = NULL;

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
int pop()
{
    int x = -1;
    if (top == NULL)
    {
        cout << "Stack is Empty (Stack Underflow)\n";
    }
    else
    {
        Node *p = top;
        top = top->next;
        x = p->data;
        delete p;
    }
    return x;
}


int isOperand(int s)
{
    if (s == '+' || s == '-' || s == '*' || s == '/')
        return 0;
    else
        return 1;
}

int evaluate(char *postfix)
{
    int x1 , x2 , r = 0;
    for (int i = 0; postfix[i] != '\0'; i++)
    {
        if (isOperand(postfix[i]))
        {
            push(postfix[i] - '0');
        }
        else
        {
            x2 = pop();
            x1 = pop();
            switch (postfix[i])
            {
            case ('+'):
                r = x1 + x2;
                break;
            case ('-'):
                r = x1 - x2;
                break;
            case ('*'):
                r = x1 * x2;
                break;
            case ('/'):
                r = x1 / x2;
                break;
            }
            push(r);
        }
    }
    return top->data;
}

int main()
{
    char postfix[] = "35*62/+4-";
    cout << evaluate(postfix);
    return 0;
}
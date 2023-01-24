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
char pop()
{
    char x = -1;
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

int length(char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
    }
    return i;
}

int isOperand(char s)
{
    if (s == '+' || s == '-' || s == '*' || s == '/')
        return 0;
    else
        return 1;
}

int precedence(char c)
{
    if (c == '+' || c == '-')
        return 1;
    else if (c == '*' || c == '/')
        return 2;
    else
        return 0;
}

char *InToPost(char *infix)
{
    char *postfix = new char[length(infix)+1];
    int i = 0, j = 0;
    while (infix[i] != '\0')
    {
        if (isOperand(infix[i]))
        {
            postfix[j++] = infix[i++];
        }
        else
        {
            if (precedence(infix[i]) > precedence(top->data))
                push(infix[i++]);
            else
            {
                postfix[j++] = pop();
            }
        }
    }
    while (top)
    {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    char infix[] = "a+b*c-d/e";
    push('#');
    char *postfix = InToPost(infix);
    cout<<postfix;
    return 0;
}
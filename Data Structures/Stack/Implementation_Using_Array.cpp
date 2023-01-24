#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *S;
};

void create(Stack &st)
{
    cout << "Enter the size of Array: ";
    cin >> st.size;
    st.S = new int[st.size];
    st.top = -1;
}

void display(Stack st)
{
    for (int i = st.top; i >= 0; i--)
    {
        cout << "\n"<< st.S[i];
    }
}

void push(Stack &st, int key)
{
    if (st.top == st.size - 1)
        cout << "\nOverflow";
    else
    {
        st.top++;
        st.S[st.top] = key;
    }
}

void pop(Stack &st)
{
    if (st.top == -1)
    {
        cout << "\nUnderflow";
    }
    st.top--;
}

void peek(Stack st, int index)
{
    if (st.top - index + 1 < 0)
        cout<<"Invalid Index \n";
    else
        cout<< st.S[st.top - index + 1];
}

void isEmpty(Stack st)
{
    if (st.top == -1)
        cout << "\nYes";
    else
        cout << "\nNo";
}

void isFull(Stack st)
{
    if (st.top == st.size - 1)
    {
        cout << "\nYes";
    }
    else
        cout << "\nNo";
}

void stackTop(Stack st)
{
    if (st.top == -1)
        cout << "\n-1";
    else
        cout << "\n"
             << st.S[st.top];
}

int main()
{
    Stack st;
    create(st);
    push(st, 10);
    push(st, 20);
    push(st, 30);
    push(st, 40);
    push(st, 50);
    // push(st, 60);
    // pop(st);
    // isEmpty(st);
    // isFull(st);
    // stackTop(st);
    // peek(st, 2);
    display(st);
    return 0;
}
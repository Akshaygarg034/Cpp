#include <iostream>
using namespace std;

int arr[10];

// Iterative Approach
int I_fib(int n)
{
    if (n <= 1)
        return n;
    int s = 0, t0 = 0, t1 = 1;
    for (int i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

// Recursive Basic Approach (Excessive Recursion Approach)
int B_fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return B_fib(n - 2) + B_fib(n - 1);
}

// Recursive Efficient Approach (Memoization Approach)
int E_fib(int n)
{
    if (n <= 1)
    {
        arr[n] = n;
        return n;
    }
    else
    {
        if (arr[n - 2] == -1)
        {
            arr[n - 2] = E_fib(n - 2);
        }
        if (arr[n - 1] == -1)
        {
            arr[n - 1] = E_fib(n - 1);
        }
        arr[n] = arr[n - 2] + arr[n - 1];

        return arr[n - 2] + arr[n - 1];
    }
}
int main()
{
    for (int i = 0; i < 10; i++)
    {
        arr[i] = -1;
    }

    cout << I_fib(1) << endl;
    cout << B_fib(5) << endl;
    cout << E_fib(5) << endl;
    return 0;
}
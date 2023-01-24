#include <iostream>
using namespace std;

// Factorial Function
int fact(int n)
{
    if (n >= 0)
    {
        if (n == 0)
            return 1;
        return fact(n - 1) * n;
    }
    else
    {
        return 0;
    }
}

// Normal Formula Approach
int ncr(int n, int r)
{

    int num = fact(n);
    int den = fact(n - r) * fact(r);

    return (num / den);
}

// Recursive Approach
int NCR(int n, int r)
{
    if (r == 0 || r == n)
        return 1;
    else
    {
        return NCR(n - 1, r - 1) + NCR(n - 1, r);
    }
}

int main()
{
    cout << ncr(4, 1) << endl;
    cout << NCR(5, 3) << endl;
    return 0;
}
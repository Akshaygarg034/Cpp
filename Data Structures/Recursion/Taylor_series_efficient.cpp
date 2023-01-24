#include <iostream>
using namespace std;

// Iterative Approach
double e(int x, int n)
{
    double r = 1;
    for (int i = n; i > 0; i--)
    {
        r = 1 + double(x) / i * r;
    }
    return r;
}

// Recursive Approach
double e1(int x, int n)
{
    static double r = 1;
    if (n == 0)
        return r;

    r = 1 + double(x) / n * r;
    e1(x, n - 1);
}

int main()
{
    cout << e(2, 15) << endl;
    cout << e1(3, 10);
    return 0;
}
#include <iostream>
using namespace std;

int pow(int m, int n)
{
    if (n == 0)
        return 1;
    else
    {
        return pow(m, n - 1) * m;
    }
}

// More efficient method

int pow1(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        if (n % 2 == 0)
            return pow1(m * m, n / 2);
        else
        {
            return m * pow1(m * m, (n - 1) / 2);
        }
    }
}

int main()
{
    cout << pow(2, 10) << endl;
    cout << pow1(2, 11);
    return 0;
}
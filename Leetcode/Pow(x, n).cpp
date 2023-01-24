#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double myPow(double x, int n)
    {
        double ans = 1;
        long n1 = n;
        if (n1 < 0)
            n1 = -1 * n1;
        while (n1 > 0)
        {
            if (n1 % 2 == 0)
            {
                x = x * x;
                n1 = n1 / 2;
            }
            else
            {
                ans = ans * x;
                n1 = n1 - 1;
            }
        }
        if (n < 0)
            ans = 1 / ans;
        return ans;
    }
};

int main()
{

    return 0;
}
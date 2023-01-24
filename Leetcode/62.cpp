#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        int N = m + n - 2;
        int R = m - 1;
        long double res = 1;
        int j = 1;
        for (int i = 1; i <= R; i++)
        {
            res = res * N / i;
            N--;
        }
        return (int)res;
    }
};

int main()
{

    return 0;
}
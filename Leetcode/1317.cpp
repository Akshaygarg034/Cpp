#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(int n)
    {
        while (n > 0)
        {
            if (n % 10 == 0)
                return 1;
            n = n / 10;
        }
        return 0;
    }
    vector<int> getNoZeroIntegers(int n)
    {
        vector<int> res(2);
        for (int i = 1; i < n; i++)
        {
            res[0] = i, res[1] = n - i;
            if (!search(res[0]) && !search(res[1]))
            {
                return res;
            }
        }
        return res;
    };
};

int main()
{
    return 0;
}

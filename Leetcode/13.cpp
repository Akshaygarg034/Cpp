#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sum = 0;
    int valueOf(char x)
    {
        if (x == 'I')
        {
            return 1;
        }
        if (x == 'V')
        {
            return 5;
        }
        if (x == 'X')
        {
            return 10;
        }
        if (x == 'L')
        {
            return 50;
        }
        if (x == 'C')
        {
            return 100;
        }
        if (x == 'D')
        {
            return 500;
        }
        if (x == 'M')
        {
            return 1000;
        }
        return 0;
    }

    int romanToInt(string s)
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (i > 0)
            {
                if (valueOf(s[i]) > valueOf(s[i - 1]))
                {
                    sum -= 2 * valueOf(s[i - 1]);
                }
            }
            sum += valueOf(s[i]);
        }
        return sum;
    }
};

int main()
{

    return 0;
}
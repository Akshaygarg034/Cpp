#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int n = s.length() - 1;
        int res = 0;
        if (s[n] == ' ')
        {
            for (int i = n; s[i] == ' '; i--)
                n--;
        }
        int i = n;
        for (i; s[i] != ' '; i--)
        {
            res++;
            if (i - 1 < 0)
                break;
        }
        return res;
    }
};

int main()
{

    return 0;
}
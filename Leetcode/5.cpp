#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindromic(int i, int j, string &s)
    {
        while (i < j)
        {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s)
    {
        string ans;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = s.size() - 1; j >= 0; j--)
            {
                if (isPalindromic(i, j, s))
                {
                    if (j - i + 1 > ans.size())
                    {
                        ans = s.substr(i, j - i + 1);
                    }
                    break;
                }
            }
        }
        return ans;
    }
};

int main()
{

    return 0;
}
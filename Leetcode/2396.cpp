#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string convert(int n, int b)
    {
        string ans = "";
        while (n > 0)
        {
            ans += to_string(n % b);
            n = n / b;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }

    bool checkPalindrome(string ans)
    {
        int i = 0;
        int j = ans.size() - 1;
        while (i < j)
        {
            if (i != j)
                return false;
            i++;
            j--;
        }
        return true;
    }

    bool isStrictlyPalindromic(int n)
    {
        for (int i = 2; i <= n - 2; i++)
        {
            string ans = convert(n, i);
            return checkPalindrome(ans);
        }
        return true;
    }
};

// class Solution1 {
// public:
//     bool isStrictlyPalindromic(int n) {
//         return false;
//     }
// };

int main()
{

    return 0;
}
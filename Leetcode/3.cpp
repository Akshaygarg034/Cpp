#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_set<char> st;
        int maxi = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            for (int j = i; s[j] != '\0'; j++)
            {
                st.insert(s[j]);
                if (st.size() < (j - i + 1))
                {
                    maxi = max(j - i, maxi);
                    st.clear();
                    break;
                }
            }
        }
        int sz = st.size();
        maxi = max(sz, maxi);
        return maxi;
    }
};

int main()
{

    return 0;
}
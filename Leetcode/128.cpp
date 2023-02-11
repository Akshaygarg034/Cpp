#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        set<int> st;
        int streak = 0;
        int n = nums.size();
        for (int it : nums)
        {
            st.insert(it);
        }
        for (int it : nums)
        {
            if (!st.count(it - 1))
            {
                int current_streak = 1;
                int current_elem = it;
                while (st.count(current_elem + 1))
                {
                    current_elem++;
                    current_streak++;
                }
                streak = max(current_streak, streak);
            }
        }
        return streak;
    }
};

int main()
{
    return 0;
}

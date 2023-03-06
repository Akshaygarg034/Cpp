#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> mp;
        vector<int> ans(2);
        for (int i = 0; i < nums.size(); i++)
        {
            int req = target - nums[i];
            if (mp.find(req) != mp.end())
            {
                ans[0] = i;
                ans[1] = mp[req];
                return ans;
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
};
 
int main()
{
   return 0;
}

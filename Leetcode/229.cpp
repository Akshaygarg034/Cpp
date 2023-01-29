#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int num1 = 0, num2 = 0, count1 = 0, count2 = 0;
        vector<int> res;
        for (auto it : nums)
        {
            if (it == num1)
                count1++;
            else if (it == num2)
                count2++;
            else if (count1 == 0)
            {
                num1 = it;
                count1 = 1;
            }
            else if (count2 == 0)
            {
                num2 = it;
                count2 = 1;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        count1 = count2 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == num1)
                count1++;
            else if (nums[i] == num2)
                count2++;
        }
        if (count1 > nums.size() / 3)
            res.push_back(num1);
        if (count2 > nums.size() / 3)
            res.push_back(num2);
        return res;
    }
};

int main()
{

    return 0;
}
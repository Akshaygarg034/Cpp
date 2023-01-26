#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size() - 1;
        int i = n - 1, j = n;
        while (i >= 0)
        {
            if (nums[i] < nums[i + 1])
                break;
            i--;
        }
        if (i < 0)
        {
            reverse(nums.begin(), nums.end());
        }
        else
        {
            while (j > i)
            {
                if (nums[j] > nums[i])
                    break;
                j--;
            }
            swap(nums[i], nums[j]);
            reverse(nums.begin() + i + 1, nums.end());
        }
    }
};

int main()
{
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int binary_search(vector<int> &nums, int target)
    {
        int l = 0, h = nums.size() - 1;

        while (l <= h)
        {
            int mid = (l + h) / 2;
            if (target == nums[mid])
            {
                return mid;
            }
            else if (nums[mid] < target)
                l = mid + 1;
            else
                h = mid - 1;
        }

        return l;
    }
    int searchInsert(vector<int> &nums, int target)
    {
        int search = binary_search(nums, target);
        return search;
    }
};

int main()
{

    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int> nums, int key)
    {
        int l = 0;
        int h = nums.size() - 1;
        while (l <= h)
        {
            int mid = l + (h - l) / 2;
            if (nums[mid] == key)
            {
                return mid;
            }
            else if (key < nums[mid])
                h = mid - 1;
            else
                l = mid + 1;
        }
        return -1;
    }
    vector<int> searchRange(vector<int> &nums, int key)
    {
        int idx = search(nums, key);
        if (idx == -1)
            return {-1, -1};
        int l = idx;
        int h = idx;
        while (l >= 0 && nums[l] == nums[idx])
            l--;
        while (h < nums.size() && nums[h] == nums[idx])
            h++;
        return {l + 1, h - 1};
    }
};

int main()
{

    return 0;
}
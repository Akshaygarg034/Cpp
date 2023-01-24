#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int maximum = INT_MIN;
        int sum = 0;
        for (auto it : nums)
        {
            sum += it;
            maximum = max(sum, maximum);
            if (sum < 0)
                sum = 0;
        }
        return maximum;
    }
};

int main()
{

    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        int l = 0, h = m * n - 1;
        while (l <= h)
        {
            int mid = (l + h) / 2;
            if (matrix[mid / n][mid % n] == target)
                return true;
            else if (target < matrix[mid / n][mid % n])
                h = mid - 1;
            else
                l = mid + 1;
        }
        return false;
    }
};

int main()
{

    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int A[cols];
        int B[rows];
        for (int i = 0; i < cols; i++)
        {
            A[i] = -1;
        }
        for (int i = 0; i < rows; i++)
        {
            B[i] = -1;
        }

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (matrix[i][j] == 0)
                {
                    B[i] = 0;
                    A[j] = 0;
                }
            }
        }

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (A[j] == 0 || B[i] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

int main()
{

    return 0;
}
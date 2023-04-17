#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(int i, int j, int n, int m, vector<vector<char>> &grid)
    {
        if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == '0')
            return false;
        return true;
    }
    void dfs(vector<vector<char>> &grid, int i, int j, int n, int m)
    {
        grid[i][j] = '0';
        if (isValid(i, j - 1, n, m, grid))
            dfs(grid, i, j - 1, n, m);
        if (isValid(i, j + 1, n, m, grid))
            dfs(grid, i, j + 1, n, m);
        if (isValid(i + 1, j, n, m, grid))
            dfs(grid, i + 1, j, n, m);
        if (isValid(i - 1, j, n, m, grid))
            dfs(grid, i - 1, j, n, m);
    }

    int numIslands(vector<vector<char>> &grid)
    {
        int n = grid.size();
        if (n == 0)
            return 0;
        int m = grid[0].size();
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == '1')
                {
                    cnt++;
                    dfs(grid, i, j, n, m);
                }
            }
        }
        return cnt;
    }
};

int main()
{

    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find the number of islands.
    void dfs(vector<vector<char>> &grid, int i, int j, int n, int m, vector<vector<int>> &vis)
    {
        if (i < 0 || j < 0 || i >= n || j >= m || vis[i][j] == 1)
            return;
        if (grid[i][j] == '0')
            return;
        vis[i][j] = 1;
        dfs(grid, i - 1, j + 1, n, m, vis);
        dfs(grid, i, j + 1, n, m, vis);
        dfs(grid, i + 1, j + 1, n, m, vis);
        dfs(grid, i - 1, j, n, m, vis);
        dfs(grid, i + 1, j, n, m, vis);
        dfs(grid, i - 1, j - 1, n, m, vis);
        dfs(grid, i, j - 1, n, m, vis);
        dfs(grid, i + 1, j - 1, n, m, vis);
    }
    int numIslands(vector<vector<char>> &grid)
    {
        int n = grid.size();
        if (n == 0)
            return 0;
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && grid[i][j] == '1')
                {
                    cnt++;
                    dfs(grid, i, j, n, m, vis);
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
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> minimumTime(int n, vector<vector<int>> &edges, int m)
    {
        vector<int> g[n + 1];
        vector<int> in(n + 1, 0);
        queue<int> q;
        vector<int> ans(n, 0);

        for (int i = 0; i < m; i++)
        {
            in[edges[i][1]]++;
            g[edges[i][0]].push_back(edges[i][1]);
        }
        for (int i = 1; i < n + 1; i++)
        {
            if (in[i] == 0)
            {
                q.push(i);
                ans[i - 1] = 1;
            }
        }
        while (!q.empty())
        {
            int t = q.front();
            q.pop();
            for (auto it : g[t])
            {
                in[it]--;
                if (in[it] == 0)
                {
                    ans[it - 1] = ans[t - 1] + 1;
                    q.push(it);
                }
            }
        }
        return ans;
    }
};

int main()
{

    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPossible(int N, vector<pair<int, int>> &p)
    {
        vector<int> adj[N];
        queue<int> q;
        vector<int> in(N, 0);
        for (int i = 0; i < p.size(); i++)
        {
            adj[p[i].first].push_back(p[i].second);
        }
        // Checking Cycle
        int cnt = 0;
        for (int i = 0; i < N; i++)
        {
            for (auto it : adj[i])
            {
                in[it]++;
            }
        }
        for (int i = 0; i < N; i++)
        {
            if (!in[i])
            {
                cnt++;
                q.push(i);
            }
        }

        while (!q.empty())
        {
            int t = q.front();
            q.pop();
            for (auto it : adj[t])
            {
                in[it]--;
                if (!in[it])
                {
                    cnt++;
                    q.push(it);
                }
            }
        }
        if (cnt == N)
            return true;
        return false;
    }
};

int main()
{

    return 0;
}
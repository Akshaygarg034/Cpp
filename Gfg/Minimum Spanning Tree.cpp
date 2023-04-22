#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // 	Take priority queue and push {element, weight} in it.
    //  Pop from queue (minimum weighted node), add in ans and push all its adj alements
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
        q.push({0, 0});
        int ans = 0;
        vector<bool> vis(V, 0);

        while (!q.empty())
        {
            int elem = q.top().second;
            int wt = q.top().first;
            q.pop();

            if (vis[elem])
                continue;

            vis[elem] = 1;
            ans += wt;

            for (auto it : adj[elem])
            {
                if (!vis[it[0]])
                    q.push({it[1], it[0]});
            }
        }
        return ans;
    }
};

int main()
{

    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // 	*******************Prim's Algorithm******************

    // 	Take priority queue and push {element, weight} in it.
    //  If we push {i, j} in Priority queue, it will take minimum elements on top based upon i and not j
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

// 	*******************Kruskal's Algorithm*******************

int checkPar(int elem, vector<int> par)
{
    if (par[elem] == elem)
        return elem;
    return par[elem] = checkPar(par[elem], par);
}

int spanningTree(int V, vector<vector<int>> adj[])
{
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q;
    vector<int> rank(V, 1);
    vector<int> par(V);
    // Initially Every element is parent of itself
    for (int i = 0; i < V; i++)
        par[i] = i;

    for (int i = 0; i < V; i++)
    {
        for (auto it : adj[i])
        {
            q.push({it[1], {i, it[0]}});
        }
    }
    int count = 0;
    int ans = 0;
    while (count < V - 1)
    {
        // Popping out edge with minimum weight
        int wt = q.top().first;
        int x = q.top().second.first;
        int y = q.top().second.second;
        q.pop();
        // Converting elements to their parents
        int p1 = checkPar(x, par);
        int p2 = checkPar(y, par);
        if (p1 != p2)
        {
            // union
            if (rank[p1] < rank[p2])
                par[p1] = p2;
            else if (rank[p2] < rank[p1])
                par[p2] = p1;
            else
            {
                par[p1] = p2;
                rank[p2]++;
            }
            ans += wt;
            count++;
        }
    }
    return ans;
};

int main()
{

    return 0;
}
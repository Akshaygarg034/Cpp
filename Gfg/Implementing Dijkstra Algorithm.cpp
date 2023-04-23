#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find the shortest distance of all the vertices
    // from the source vertex S.
    vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        vector<int> dis(V, INT_MAX);
        dis[S] = 0;
        vector<bool> vis(V, 0);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        // pq Stores elements in the form of {weight, node}
        pq.push({0, S});
        while (!pq.empty())
        {
            int wt = pq.top().first;
            int node = pq.top().second;
            vis[node] = 1;
            pq.pop();

            for (auto it : adj[node])
            {
                // adj[i] stores elements in the form of [[node, weight], [node, weight]]
                int nNode = it[0];
                int nWt = it[1];

                if (!vis[nNode])
                {
                    if (nWt + wt < dis[nNode])
                    {
                        dis[nNode] = nWt + wt;
                        pq.push({nWt + wt, nNode});
                    }
                }
            }
        }
        return dis;
    }
};

int main()
{

    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find number of strongly connected components in the graph.
    void dfs(vector<vector<int>> &adj, vector<int> &order, vector<int> &vis, int i)
    {
        vis[i] = 1;
        for (auto it : adj[i])
        {
            if (!vis[it])
                dfs(adj, order, vis, it);
        }
        order.push_back(i);
    }

    void dfs1(vector<vector<int>> &rev, vector<int> &order, vector<int> &vis1, int i)
    {
        vis1[i] = 1;
        for (auto it : rev[i])
        {
            if (!vis1[it])
                dfs(rev, order, vis1, it);
        }
    }

    int kosaraju(int V, vector<vector<int>> &adj)
    {
        // Making Reverse graph
        vector<vector<int>> rev(V);
        for (int i = 0; i < V; i++)
        {
            for (auto it : adj[i])
            {
                rev[it].push_back(i);
            }
        }

        vector<int> vis(V, 0);
        vector<int> order;
        vector<int> vis1(V, 0);
        // Making order vector using dfs of original graph
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                dfs(adj, order, vis, i);
            }
        }
        int cnt = 0;
        // Counting the components using dfs of reverse graph
        for (int i = V - 1; i >= 0; i--)
        {
            // Making for loop from end of order vector
            if (!vis1[order[i]])
            {
                cnt++;
                dfs1(rev, order, vis1, order[i]);
            }
        }
        return cnt;
    }
};

int main()
{

    return 0;
}
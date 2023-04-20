#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool dfs(vector<int> adj[], vector<int> &colorVector, int i, int &flag)
    {
        for (auto it : adj[i])
        {
            if (colorVector[it] != -1)
            {
                if (colorVector[i] == colorVector[it])
                {
                    flag = false;
                    return false;
                }
            }
            else
            {
                colorVector[it] = (colorVector[i] == 0) ? 1 : 0;
                dfs(adj, colorVector, it, flag);
            }
        }
        return flag;
    }
    bool isBipartite(int V, vector<int> adj[])
    {
        vector<int> colorVector(V, -1);
        int flag = true;
        for (int i = 0; i < V; i++)
        {
            if (colorVector[i] == -1)
            {
                colorVector[i] = 0;
                if (!dfs(adj, colorVector, i, flag))
                    return false;
            }
        }
        return true;
    }
};

int main()
{

    return 0;
}
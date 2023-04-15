#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to return list containing vertices in Topological order.
    vector<int> topoSort(int V, vector<int> adj[])
    {
        queue<int> q;
        vector<int> ans;
        vector<int> in(V, 0);
        for (int i = 0; i < V; i++)
        {
            for (auto it : adj[i])
            {
                in[it]++;
            }
        }
        for (int i = 0; i < V; i++)
        {
            if (in[i] == 0)
            {
                q.push(i);
            }
        }
        while (!q.empty())
        {
            int t = q.front();
            q.pop();
            ans.push_back(t);
            for (auto it : adj[t])
            {
                in[it]--;
                if (in[it] == 0)
                    q.push(it);
            }
        }
        return ans;
    }
};

int main()
{

    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// User function Template for C++
// As string dict[] is in sorted order, we can find relation between the characters i.e b < a, a < c etc.
// From that relations we can make a graph with adj list i.e b -> a, a -> c.
// From that graph we can find topological sort and that will be the ans.

class Solution
{
public:
    void dfs(int i, vector<int> adj[], vector<int> &vis, string &ans)
    {
        vis[i] = 1;
        for (auto it : adj[i])
        {
            if (!vis[it])
            {
                dfs(it, adj, vis, ans);
            }
        }
        char c = i + 'a';
        ans = c + ans;
    }
    string findOrder(string dict[], int N, int K)
    {
        // For adj list
        vector<int> adj[K];
        for (int i = 0; i < N - 1; i++)
        {
            string x1 = dict[i];
            string x2 = dict[i + 1];
            for (int j = 0; j < min(x1.length(), x2.length()); j++)
            {
                if (x1[j] != x2[j])
                {
                    adj[x1[j] - 'a'].push_back(x2[j] - 'a');
                    break;
                }
            }
        }
        // For Topological Sort using DFS
        string ans = "";
        vector<int> vis(K, 0);
        for (int i = 0; i < K; i++)
        {
            if (!vis[i])
                dfs(i, adj, vis, ans);
        }
        return ans;
    }
};

int main()
{
    return 0;
}

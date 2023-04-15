#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    // DFS method to detect cycle in a directed graph.

    // void solve(vector<int> adj[], vector<int> &vis, vector<int> &order, int elem, int &f ){
    //     vis[elem] = 1;
    //     order[elem] = 1;
    //     for(auto it: adj[elem]){
    //         if(!vis[it]){
    //             solve(adj, vis, order, it, f);
    //             if(f) return;
    //         }
    //         else if(order[it]){
    //              f=1;
    //              return;
    //         }
    //     }
    //     order[elem] = 0;
    // }

    // bool isCyclic(int V, vector<int> adj[]) {
    //     int f = 0;
    //     vector<int> vis(V, 0);
    //     vector<int> order(V, 0);
    //     for(int i=0; i<V; i++){
    //         if(!vis[i]){
    //             solve(adj, vis, order, i, f);
    //         }
    //     }
    //     return f;
    // }

    // BFS method to detect cycle in a directed graph.

    bool isCyclic(int V, vector<int> adj[])
    {
        vector<int> in(V, 0);
        queue<int> q;
        for (int i = 0; i < V; i++)
        {
            for (auto it : adj[i])
            {
                in[it]++;
            }
        }
        int c = 0;
        for (int i = 0; i < V; i++)
        {
            if (in[i] == 0)
            {
                q.push(i);
                c++;
            };
        }
        while (!q.empty())
        {
            int t = q.front();
            q.pop();
            for (auto it : adj[t])
            {
                in[it]--;
                if (in[it] == 0)
                {
                    q.push(it);
                    c++;
                };
            }
        }
        if (c == V)
            return false;
        else
            return true;
    }
};

int main()
{

    return 0;
}

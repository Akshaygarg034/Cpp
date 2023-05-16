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

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> v;
        queue<int> q;
        vector<int> vis(V, 0);
        q.push(0);
        vis[0] = 1;
        
        while(!q.empty()){
            int t = q.front();
            v.push_back(t);
            q.pop();
            for(auto it: adj[t]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return v;
    }
};

int main()
{

    return 0;
}

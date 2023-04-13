#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    vector<Node *> neighbors;
    Node()
    {
        val = 0;
        neighbors = vector<Node *>();
    }
    Node(int _val)
    {
        val = _val;
        neighbors = vector<Node *>();
    }
    Node(int _val, vector<Node *> _neighbors)
    {
        val = _val;
        neighbors = _neighbors;
    }
};

class Solution
{
public:
    void solve(Node *node, Node *copy, vector<Node *> &vis)
    {
        vis[copy->val] = copy;
        for (auto it : node->neighbors)
        {
            if (!vis[it->val])
            {
                Node *temp = new Node(it->val);
                copy->neighbors.push_back(temp);
                solve(it, temp, vis);
            }
            else
            {
                copy->neighbors.push_back(vis[it->val]);
            }
        }
    }
    Node *cloneGraph(Node *node)
    {
        if (!node)
            return NULL;
        Node *copy = new Node(node->val);
        vector<Node *> vis(101, NULL);
        solve(node, copy, vis);
        return copy;
    }
};

int main()
{

    return 0;
}
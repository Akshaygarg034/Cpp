#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
class Solution
{
public:
    int idx = 0;
    int find_pos(unordered_map<int, queue<int>> &mp, int key)
    {
        int res = mp[key].front();
        mp[key].pop();
        return res;
    };
    Node *solve(int in[], int pre[], int lb, int ub, int &idx, unordered_map<int, queue<int>> &mp)
    {
        if (lb > ub)
            return NULL;
            Node* res;
        // Node *res = new Node(pre[idx++]);
        if (lb == ub)
            return res;
        int mid = find_pos(mp, res->data);
        res->left = solve(in, pre, lb, mid - 1, idx, mp);
        res->right = solve(in, pre, mid + 1, ub, idx, mp);
        return res;
    }
    Node *buildTree(int in[], int pre[], int n)
    {
        idx = 0;
        unordered_map<int, queue<int>> mp;
        for (int i = 0; i < n; i++)
        {
            mp[in[i]].push(i);
        }
        Node *root = solve(in, pre, 0, n - 1, idx, mp);
        return root;
    }
};

int main()
{

    return 0;
}
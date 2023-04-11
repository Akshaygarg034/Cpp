#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    unordered_map<int, int> mp;
    int idx = 0;
    TreeNode *solve(vector<int> in, vector<int> pre, int lb, int ub, int &idx)
    {
        if (lb > ub)
            return NULL;
        TreeNode *res = new TreeNode(pre[idx++]);
        if (lb == ub)
            return res;
        int mid = mp[res->val];
        res->left = solve(in, pre, lb, mid - 1, idx);
        res->right = solve(in, pre, mid + 1, ub, idx);
        return res;
    }
    TreeNode *buildTree(vector<int> &pre, vector<int> &in)
    {
        int n = pre.size();
        for (int i = 0; i < n; i++)
        {
            mp[in[i]] = i;
        }
        TreeNode *root = solve(in, pre, 0, n - 1, idx);
        return root;
    }
};

int main()
{
    
    return 0;
}

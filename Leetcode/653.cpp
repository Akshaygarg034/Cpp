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
    bool ans = false;
    void solve(TreeNode *root, int k, unordered_map<int, int> &mp)
    {
        if (!root)
            return;
        solve(root->left, k, mp);
        if (mp.count(k - root->val))
        {
            ans = true;
            return;
        }
        mp[root->val]++;
        solve(root->right, k, mp);
    }
    bool findTarget(TreeNode *root, int k)
    {
        unordered_map<int, int> mp;
        solve(root, k, mp);
        return ans;
    }
};

int main()
{

    return 0;
}
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
    int ans = -1;
    void solve(TreeNode *root, int k, int &cnt)
    {
        if (!root)
            return;
        solve(root->left, k, cnt);
        if (k == cnt)
        {
            ans = root->val;
            cnt++;
            return;
        }
        cnt++;
        solve(root->right, k, cnt);
    }

    int kthSmallest(TreeNode *root, int k)
    {
        int cnt = 1;
        solve(root, k, cnt);
        return ans;
    }
};

int main()
{

    return 0;
}
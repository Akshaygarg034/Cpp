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
    int solve(TreeNode *root, int depth)
    {
        if (root == NULL)
            return depth;
        int left = solve(root->left, depth + 1);
        int right = solve(root->right, depth + 1);
        return max(left, right);
    }

    int maxDepth(TreeNode *root)
    {
        return solve(root, 0);
    }
};

int main()
{
    return 0;
}

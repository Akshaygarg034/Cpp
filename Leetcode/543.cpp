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
    int maxi = INT_MIN;
    int func(TreeNode *root)
    {
        if (!root)
            return 0;
        int x = func(root->left);
        int y = func(root->right);
        maxi = max(maxi, (x + y));
        return (max(x, y) + 1);
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        func(root);
        return maxi;
    }
};

int main()
{

    return 0;
}
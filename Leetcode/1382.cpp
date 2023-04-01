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
    void inorder(TreeNode *root, vector<int> &v)
    {
        if (!root)
            return;
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }
    TreeNode *balance(vector<int> v, int l, int h)
    {
        if (l > h)
            return NULL;
        if (l == h)
            return new TreeNode(v[l]);
        int mid = (l + h) / 2;
        TreeNode *root = new TreeNode(v[mid]);
        root->left = balance(v, l, mid - 1);
        root->right = balance(v, mid + 1, h);
        return root;
    }
    TreeNode *balanceBST(TreeNode *root)
    {
        vector<int> v;
        inorder(root, v);
        return balance(v, 0, v.size() - 1);
    }
};

int main()
{

    return 0;
}
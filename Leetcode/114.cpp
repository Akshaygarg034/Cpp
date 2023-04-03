#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        val = val;
        left = right = NULL;
    }
};

class Solution {
public:
    void solve(TreeNode* root, TreeNode* &p){
        if(!root) return;
        solve(root->right, p);
        solve(root->left, p);
        root->left = NULL;
        root->right = p;
        p = root;
    }
    void flatten(TreeNode* root) {
        TreeNode* p = NULL;
        solve(root, p);
    }
};

int main()
{

    return 0;
}
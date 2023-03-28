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

class Solution {
public:
void solve(TreeNode* root, TreeNode* &pre, int &f){
    if(!root) return;
    solve(root->left, pre, f);
    if(pre && root->val <= pre->val){
        f = 0;
        return;
    }
    pre = root;
    solve(root->right, pre, f);
}
    bool isValidBST(TreeNode* root) {
        TreeNode* pre = NULL;
        int f = 1;
        solve(root, pre, f);
        return f;
    }
};

int main()
{

    return 0;
}
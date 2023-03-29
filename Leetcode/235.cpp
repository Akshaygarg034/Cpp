#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode * next;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* n1, TreeNode* n2) {
        if(!root ) return NULL;
        if(n1->val < root->val && n2->val < root->val) return lowestCommonAncestor(root->left, n1, n2);
        else if(n1->val > root->val && n2->val > root->val) return lowestCommonAncestor(root->right, n1, n2);
        return root;
    }
};

int main()
{
    return 0;
}

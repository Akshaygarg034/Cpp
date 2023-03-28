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
    TreeNode *inSuc(TreeNode *root)
    {
        root = root->right;
        while (root->left)
            root = root->left;
        return root;
    }

    TreeNode *deleteNode(TreeNode *root, int x)
    {
        if (!root)
            return NULL;
        if (x < root->val)
        {
            root->left = deleteNode(root->left, x);
        }
        else if (x > root->val)
        {
            root->right = deleteNode(root->right, x);
        }
        else
        {
            // Leaf Node case also got covered in the "if(!root->right)" case. So a particular case for leaf nodes is not required
            // if(!root->left || !root->right){
            //     delete(root);
            //     return NULL;
            // }
            if (!root->right)
            {
                TreeNode *temp = root->left;
                delete (root);
                return temp;
            }
            else if (!root->left)
            {
                TreeNode *temp = root->right;
                delete (root);
                return temp;
            }
            else
            {
                TreeNode *temp = inSuc(root);
                swap(root->val, temp->val);
                root->right = deleteNode(root->right, x);
            }
        }
        return root;
    }
};

int main()
{

    return 0;
}
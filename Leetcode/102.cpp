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
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        queue<TreeNode *> q;
        vector<vector<int>> res;
        if (!root)
            return res;
        vector<int> temp_v{root->val};
        res.push_back(temp_v);
        q.push(root);
        while (!q.empty())
        {
            int sz = q.size();
            vector<int> v;
            while (sz--)
            {
                TreeNode *temp = q.front();
                if (temp->left)
                {
                    q.push(temp->left);
                    v.push_back(temp->left->val);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                    v.push_back(temp->right->val);
                }
                q.pop();
            }
            if (!v.empty())
                res.push_back(v);
        }
        return res;
    }
};

int main()
{
    
    return 0;
}

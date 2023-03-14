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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (!root)
            return ans;
        queue<TreeNode *> q;
        q.push(root);
        int x = -1;
        while (!q.empty())
        {
            x++;
            vector<int> sub_ans;
            int sz = q.size();
            while (sz--)
            {
                TreeNode *temp = q.front();
                q.pop();
                sub_ans.push_back(temp->val);
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
            if (x % 2 != 0)
            {
                reverse(sub_ans.begin(), sub_ans.end());
            }
            ans.push_back(sub_ans);
        }
        return ans;
    }
};

int main()
{

    return 0;
}
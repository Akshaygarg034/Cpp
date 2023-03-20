#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

class Solution
{
public:
    void solve(Node *root, int &ans, int h, int &pre_h)
    {
        if (!root)
            return;
        if (ans == 0)
            return;
        if (!root->left and !root->right)
        {
            if (pre_h == -1)
                pre_h = h;
            else
            {
                if (h != pre_h)
                    ans = 0;
            }
            return;
        }
        solve(root->left, ans, h + 1, pre_h);
        solve(root->right, ans, h + 1, pre_h);
    }
    bool check(Node *root)
    {
        int ans = 1;
        int pre_h = -1;
        solve(root, ans, 0, pre_h);
        return ans;
    }
};

int main()
{

    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

class Solution
{
public:
    int ans = -1;
    void solve(Node *root, int k, int &cnt)
    {
        if (!root)
            return;
        solve(root->right, k, cnt);
        if (k == cnt)
        {
            ans = root->data;
            cnt++;
            return;
        }
        cnt++;
        solve(root->left, k, cnt);
    }

    int kthLargest(Node *root, int k)
    {
        int cnt = 1;
        solve(root, k, cnt);
        return ans;
    }
};

int main()
{

    return 0;
}
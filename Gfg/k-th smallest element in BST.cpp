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
    int ans = -1;

public:
    void solve(Node *root, int k, int &cnt)
    {
        if (!root)
            return;
        solve(root->left, k, cnt);
        if (k == cnt)
        {
            ans = root->data;
            cnt++;
            return;
        }
        cnt++;
        solve(root->right, k, cnt);
    }
    
    int KthSmallestElement(Node *root, int k)
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
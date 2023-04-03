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
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    bool solve(Node *root, int l, int h)
    {
        if (!root)
            return false;
        if (l == h)
            return true;
        return solve(root->left, l, root->data - 1) || solve(root->right, root->data + 1, h);
    }
    bool isDeadEnd(Node *root)
    {
        return solve(root, 1, INT_MAX);
    }
};

int main()
{

    return 0;
}
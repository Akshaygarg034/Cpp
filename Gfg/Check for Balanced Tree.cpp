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
    // Function to check whether a binary tree is balanced or not.
    int f = 1;
    int solve(Node *root)
    {
        if (!root)
            return 0;
        int x = solve(root->left);
        int y = solve(root->right);
        if (abs(x - y) > 1)
            f = 0;
        return (max(x, y) + 1);
    }
    bool isBalanced(Node *root)
    {
        solve(root);
        return f;
    }
};

int main()
{

    return 0;
}
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
    // Function to find the height of a binary tree.
    int solve(Node *root)
    {
        if (!root)
            return 0;
        int x = solve(root->left);
        int y = solve(root->right);
        return max(x, y) + 1;
    }
    int height(struct Node *root)
    {
        return solve(root);
    }
};

int main()
{

    return 0;
}
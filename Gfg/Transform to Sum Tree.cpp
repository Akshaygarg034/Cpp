#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

class Solution
{
public:
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int solve(Node *root)
    {
        if (!root)
            return 0;
        int x = solve(root->left);
        int y = solve(root->right);
        int z = root->data;
        root->data = x + y;
        return x + y + z;
    }
    void toSumTree(Node *root)
    {
        solve(root);
    }
};

int main()
{

    return 0;
}
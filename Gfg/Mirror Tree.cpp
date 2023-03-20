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
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node *root)
    {
        if (!root)
            return;
        mirror(root->left);
        mirror(root->right);
        swap(root->right, root->left);
    }
};

int main()
{

    return 0;
}
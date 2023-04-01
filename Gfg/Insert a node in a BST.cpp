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
    // Function to find the height of a binary tree.
    Node *solve(Node *root, int key)
    {
        if (!root)
        {
            Node *temp = new Node(key);
            return temp;
        }
        if (key < root->data)
            root->left = solve(root->left, key);
        else if (key > root->data)
            root->right = solve(root->right, key);
        return root;
    }
    Node *insert(Node *root, int key)
    {
        solve(root, key);
        return root;
    }
};

int main()
{

    return 0;
}
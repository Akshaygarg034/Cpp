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
    bool search(Node *root, int key)
    {
        if (!root)
            return 0;
        if (key == root->data)
            return 1;
        else
        {
            if (key < root->data)
                return search(root->left, key);
            else
                return search(root->right, key);
        }
    }
};

int main()
{

    return 0;
}
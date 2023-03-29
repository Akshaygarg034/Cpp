#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node *next;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

class Solution
{
public:
    Node *LCA(Node *root, int n1, int n2)
    {
        if (!root)
            return NULL;
        if (n1 < root->data && n2 < root->data)
            LCA(root->left, n1, n2);
        else if (n1 > root->data && n2 > root->data)
            LCA(root->right, n1, n2);
        else
            return root;
    }
};

int main()
{

    return 0;
}
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
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* solve(Node* root, int n1, int n2){
        if(!root) return NULL;
        if(root->data == n1 or root->data == n2) return root;
        Node* l = solve(root->left, n1, n2);
        Node* r = solve(root->right, n1, n2);
        if(l and r) return root;
        if(l) return l;
        else return r;
    }
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       return solve(root, n1, n2);
    }
};

int main()
{

    return 0;
}
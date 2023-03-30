#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    void inorder(Node* root, vector<int> &v){
        if(!root) return;
        inorder(root->left, v);
        v.push_back(root->data);
        inorder(root->right, v);
    }
    void bst(Node* root, vector<int> &v, int &i){
        if(!root) return;
        bst(root->left, v, i);
        root->data = v[i];
        i++;
        bst(root->right, v, i);
    }
    Node *binaryTreeToBST (Node *root)
    {
        vector<int> v;
        inorder(root, v);
        sort(v.begin(), v.end());
        int i = 0;
        bst(root, v, i);
        return root;
    }
};

int main()
{

    return 0;
}
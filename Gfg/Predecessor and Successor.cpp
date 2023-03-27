#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;

    Node(int val)
    {
        key = val;
        left = right = NULL;
    }
};

Node* findPre(Node* root){
    Node* temp = root->left;
    while(temp->right) temp = temp->right;
    return temp;
}
Node* findSuc(Node* root){
    Node* temp = root->right;
    while(temp->left) temp = temp->left;
    return temp;
}
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    if(!root) return;
    if(root->key == key){
        if(root->left)  pre = findPre(root);
        if(root->right) suc = findSuc(root);
    }
    if(key < root->key){
        suc = root;
        findPreSuc(root->left, pre, suc, key);
    }
    else if(key > root->key){
        pre = root;
        findPreSuc(root->right, pre, suc, key);
    }
}
int main()
{

    return 0;
}
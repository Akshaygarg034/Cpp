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
    //Function to convert binary tree to doubly linked list and return it.
    void solve(Node* root, Node* &head, Node* &p, int &f){
        if(!root) return;
        solve(root->left, head, p, f);
        if(f==0){
            head = root;
            p = root;
            f = 1;
        }
        else{
            p->right = root;
            p->right->left = p;
            p = p->right;
        }
        solve(root->right, head, p, f);
    }
    Node * bToDLL(Node *root)
    {
        Node* head = NULL;
        Node* p = NULL;
        int f=0;
        solve(root,head, p, f);
        return head;
    }
};

int main()
{

    return 0;
}

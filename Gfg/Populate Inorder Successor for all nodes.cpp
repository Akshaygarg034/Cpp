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
    void solve(Node* root, Node* &p){
        if(!root) return;
        solve(root->left, p);
        if(p){
            p->next = root;
        }
        p = root;
        solve(root->right, p);
    }
    void populateNext(Node *root)
    {
        Node* p = NULL;
        solve(root, p);
    }
};

int main()
{

    return 0;
}